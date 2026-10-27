#pragma once

#include <array>
#include <mutex>

#include <juce_core/juce_core.h>

// libpd is a C library.
extern "C" {
#include <z_libpd.h>
}

/**
 * Thin, thread-safe wrapper around one libpd instance and the extracted UZU
 * patch.
 *
 * The patch is the real DSP: we do not reimplement the spectral algorithm in
 * C++.  This class only feeds 64-sample ticks to libpd, sends Param_1..Param_10
 * and exposes the patch's latency.
 */
class PdEngine
{
public:
    PdEngine() = default;
    ~PdEngine();

    PdEngine (const PdEngine&) = delete;
    PdEngine& operator= (const PdEngine&) = delete;

    bool prepare (double sampleRate, int maximumBlockSize);
    void release();

    /** Process interleaved-by-channel pointers (JUCE's normal layout). */
    void process (const float* const* input,
                  float* const* output,
                  int numSamples,
                  int numChannels);

    /** values are the normalized 0..1 VST values, in Param_1..Param_10 order. */
    void setParameters (const std::array<float, 10>& values);

    bool isReady() const noexcept { return ready; }

    /** Blocksize parameter -> samples (1024, 2048, 4096, 8192, 16384). */
    static int blockSizeSamplesForParam (float normalizedValue);

private:
    static bool ensureGlobalInit();
    static void registerExternals();
    static juce::File ensureResources();

    void closePatchLocked();
    void freeInstanceLocked();

    t_pdinstance* instance = nullptr;
    void* patch = nullptr;
    std::mutex mutex;
    bool ready = false;
    bool externalsRegistered = false;
    double sampleRate = 0.0;
};
