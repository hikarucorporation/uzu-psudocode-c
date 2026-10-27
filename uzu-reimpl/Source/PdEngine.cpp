#include "PdEngine.h"

#include <algorithm>
#include <array>
#include <cmath>
#include <cstdlib>

#include <BinaryData.h>
#include <juce_audio_basics/juce_audio_basics.h>

extern "C" {
void biquads_tilde_setup (void);
void nyquist_tilde_setup (void);
void blocksize_tilde_setup (void);
void loop_setup (void);
void cartopol_tilde_setup (void);
void poltocar_tilde_setup (void);
void round_tilde_setup (void);
void scale_setup (void);
void scale_tilde_setup (void);
void delay_tilde_setup (void);
void message_setup (void);
void setup_nlist0x2einsert (void);
}

namespace
{
constexpr int kPdBlockSize = 64;
constexpr int kMaxPdChannels = 2;

const char* const kParamNames[10] = {
    "Param_1", "Param_2", "Param_3", "Param_4", "Param_5",
    "Param_6", "Param_7", "Param_8", "Param_9", "Param_10"
};

void pdPrint (const char* message)
{
    if (message != nullptr)
        juce::Logger::writeToLog (juce::String ("[pd] ") + message);
}

std::once_flag gInitFlag;
bool gLibPdInitialised = false;

void writeResource (const juce::File& file, const void* data, int size)
{
    if (file.existsAsFile() && file.getSize() == (juce::int64) size)
        return;

    file.getParentDirectory().createDirectory();
    if (! file.replaceWithData (data, (size_t) size))
        juce::Logger::writeToLog ("UZU: could not write " + file.getFullPathName());
}
} // namespace

bool PdEngine::ensureGlobalInit()
{
    std::call_once (gInitFlag, []
    {
        // libpd_init() returns 0 on success and -1 if libpd was already
        // initialised in this process.  Both are fine for us.
        const int result = libpd_init();
        gLibPdInitialised = (result == 0 || result == -1);
        libpd_set_verbose (1);
        libpd_set_printhook (&pdPrint);
    });

    return gLibPdInitialised;
}

void PdEngine::registerExternals()
{
    // These four classes are the only ELSE objects used by the extracted
    // UZU patches.  They are compiled into this plugin (see third_party/else).
    biquads_tilde_setup();
    nyquist_tilde_setup();
    blocksize_tilde_setup();
    loop_setup();
    cartopol_tilde_setup();
    poltocar_tilde_setup();
    round_tilde_setup();
    scale_setup();
    scale_tilde_setup();
    delay_tilde_setup();
    message_setup();
    setup_nlist0x2einsert();
}

juce::File PdEngine::ensureResources()
{
    if (const char* env = std::getenv ("UZU_PATCH_DIR"))
    {
        const juce::File external (juce::String::fromUTF8 (env));
        if (external.isDirectory())
            return external;
    }

    const auto root = juce::File::getSpecialLocation (juce::File::userApplicationDataDirectory)
                          .getChildFile ("Hikaru")
                          .getChildFile ("UZUReimpl")
                          .getChildFile ("patches");

    root.createDirectory();
    const auto abstractions = root.getChildFile ("abstractions");
    abstractions.createDirectory();

    writeResource (root.getChildFile ("EBPhaselock.pd"),
                   BinaryData::EBPhaselock_pd,
                   BinaryData::EBPhaselock_pdSize);
    writeResource (abstractions.getChildFile ("HipBW.pd"),
                   BinaryData::HipBW_pd,
                   BinaryData::HipBW_pdSize);
    writeResource (abstractions.getChildFile ("LopBW.pd"),
                   BinaryData::LopBW_pd,
                   BinaryData::LopBW_pdSize);
    writeResource (abstractions.getChildFile ("hann.pd"),
                   BinaryData::hann_pd,
                   BinaryData::hann_pdSize);

    return root;
}

PdEngine::~PdEngine()
{
    release();
}

bool PdEngine::prepare (double newSampleRate, int /*maximumBlockSize*/)
{
    std::lock_guard<std::mutex> lock (mutex);

    ready = false;
    closePatchLocked();

    if (! ensureGlobalInit())
    {
        juce::Logger::writeToLog ("UZU: libpd_init() failed");
        return false;
    }

    if (instance == nullptr)
    {
        instance = libpd_new_instance();
        if (instance == nullptr)
        {
            juce::Logger::writeToLog ("UZU: libpd_new_instance() failed");
            return false;
        }

        libpd_set_instance (instance);

        if (! externalsRegistered)
        {
            registerExternals();
            externalsRegistered = true;
        }
    }

    libpd_set_instance (instance);

    const auto sr = (int) std::lround (newSampleRate);
    if (libpd_init_audio (kMaxPdChannels, kMaxPdChannels, sr) != 0)
    {
        juce::Logger::writeToLog ("UZU: libpd_init_audio() failed");
        return false;
    }

    const auto resources = ensureResources();
    if (! resources.isDirectory())
    {
        juce::Logger::writeToLog ("UZU: patch resources not available");
        return false;
    }

    const auto patchPath = resources.getFullPathName();
    const auto abstractionPath = resources.getChildFile ("abstractions").getFullPathName();

    libpd_add_to_search_path (patchPath.toRawUTF8());
    libpd_add_to_search_path (abstractionPath.toRawUTF8());

    patch = libpd_openfile ("EBPhaselock.pd", patchPath.toRawUTF8());
    if (patch == nullptr)
    {
        juce::Logger::writeToLog ("UZU: could not open EBPhaselock.pd from " + patchPath);
        return false;
    }

    if (libpd_start_message (1) == 0)
    {
        libpd_add_float (1.0f);
        if (libpd_finish_message ("pd", "dsp") != 0)
            juce::Logger::writeToLog ("UZU: could not enable Pd DSP");
    }

    sampleRate = newSampleRate;
    ready = true;
    return true;
}

void PdEngine::closePatchLocked()
{
    if (instance == nullptr || patch == nullptr)
    {
        patch = nullptr;
        return;
    }

    libpd_set_instance (instance);
    libpd_closefile (patch);
    patch = nullptr;
}

void PdEngine::freeInstanceLocked()
{
    if (instance == nullptr)
        return;

    libpd_set_instance (instance);
    closePatchLocked();
    libpd_free_instance (instance);
    instance = nullptr;
    externalsRegistered = false;
}

void PdEngine::release()
{
    std::lock_guard<std::mutex> lock (mutex);
    ready = false;

    if (instance != nullptr)
    {
        libpd_set_instance (instance);

        if (patch != nullptr)
        {
            if (libpd_start_message (1) == 0)
            {
                libpd_add_float (0.0f);
                libpd_finish_message ("pd", "dsp");
            }
        }
    }

    freeInstanceLocked();
    sampleRate = 0.0;
}

void PdEngine::setParameters (const std::array<float, 10>& values)
{
    std::lock_guard<std::mutex> lock (mutex);
    if (! ready || instance == nullptr)
        return;

    libpd_set_instance (instance);

    for (int i = 0; i < 10; ++i)
        libpd_float (kParamNames[i], values[(size_t) i]);
}

void PdEngine::process (const float* const* input,
                        float* const* output,
                        int numSamples,
                        int numChannels)
{
    std::lock_guard<std::mutex> lock (mutex);

    if (! ready || instance == nullptr || patch == nullptr)
    {
        const int channels = std::max (1, numChannels);
        for (int ch = 0; ch < channels; ++ch)
            juce::FloatVectorOperations::copy (output[ch], input[ch], numSamples);
        return;
    }

    libpd_set_instance (instance);

    const int inChannels = std::max (1, numChannels);
    int offset = 0;

    while (offset < numSamples)
    {
        const int n = std::min (kPdBlockSize, numSamples - offset);

        std::array<float, kPdBlockSize * kMaxPdChannels> inBuffer {};
        std::array<float, kPdBlockSize * kMaxPdChannels> outBuffer {};

        for (int i = 0; i < n; ++i)
        {
            const float left = input[0][offset + i];
            const float right = (inChannels > 1) ? input[1][offset + i] : left;
            inBuffer[(size_t) (2 * i)] = left;
            inBuffer[(size_t) (2 * i + 1)] = right;
        }

        libpd_process_float (1, inBuffer.data(), outBuffer.data());

        for (int i = 0; i < n; ++i)
        {
            output[0][offset + i] = outBuffer[(size_t) (2 * i)];
            if (inChannels > 1)
                output[1][offset + i] = outBuffer[(size_t) (2 * i + 1)];
        }

        offset += n;
    }

    // The plugin is stereo-only; clear any extra host channels defensively.
    for (int ch = kMaxPdChannels; ch < numChannels; ++ch)
        juce::FloatVectorOperations::clear (output[ch], numSamples);
}

int PdEngine::blockSizeSamplesForParam (float normalizedValue)
{
    static constexpr int choices[] = { 1024, 2048, 4096, 8192, 16384 };

    const float clamped = juce::jlimit (0.0f, 1.0f, normalizedValue);
    const int index = juce::jlimit (0, 4, (int) std::lround (clamped * 4.0f));
    return choices[index];
}
