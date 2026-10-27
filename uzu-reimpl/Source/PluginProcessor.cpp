#include "PluginProcessor.h"

#include <cmath>
#include <memory>

namespace
{
constexpr const char* kWidth = "width";
constexpr const char* kOffset = "offset";
constexpr const char* kDepth = "depth";
constexpr const char* kSpeed = "speed";
constexpr const char* kMix = "mix";
constexpr const char* kBlur = "blur";
constexpr const char* kHzOct = "hzoct";
constexpr const char* kOneByFive = "1x5x";
constexpr const char* kKeepBass = "keepbass";
constexpr const char* kBlocksize = "blocksize";
constexpr const char* kBypass = "bypass";
} // namespace

UZUReimplAudioProcessor::UZUReimplAudioProcessor()
    : AudioProcessor (BusesProperties()
                          .withInput ("Input", juce::AudioChannelSet::stereo(), true)
                          .withOutput ("Output", juce::AudioChannelSet::stereo(), true)),
      apvts (*this, nullptr, "PARAMETERS", createParameterLayout())
{
    width = apvts.getRawParameterValue (kWidth);
    offset = apvts.getRawParameterValue (kOffset);
    depth = apvts.getRawParameterValue (kDepth);
    speed = apvts.getRawParameterValue (kSpeed);
    mix = apvts.getRawParameterValue (kMix);
    blur = apvts.getRawParameterValue (kBlur);
    hzOct = apvts.getRawParameterValue (kHzOct);
    oneByFive = apvts.getRawParameterValue (kOneByFive);
    keepBass = apvts.getRawParameterValue (kKeepBass);
    blocksize = apvts.getRawParameterValue (kBlocksize);
    bypass = apvts.getRawParameterValue (kBypass);
}

UZUReimplAudioProcessor::~UZUReimplAudioProcessor()
{
    pdEngine.release();
}

juce::AudioProcessorValueTreeState::ParameterLayout UZUReimplAudioProcessor::createParameterLayout()
{
    juce::AudioProcessorValueTreeState::ParameterLayout layout;

    auto addFloat = [&layout] (const char* id, const char* name, float defaultValue)
    {
        layout.add (std::make_unique<juce::AudioParameterFloat> (
            juce::ParameterID { id, 1 },
            name,
            juce::NormalisableRange<float> (0.0f, 1.0f),
            defaultValue,
            juce::AudioParameterFloatAttributes().withStringFromValueFunction (
                [] (float value, int)
                {
                    return juce::String (value, 3);
                })));
    };

    addFloat (kWidth, "Width", 0.5f);
    addFloat (kOffset, "Offset", 0.0f);
    addFloat (kDepth, "Depth", 0.0f);
    addFloat (kSpeed, "Speed", 0.5f);
    addFloat (kMix, "Mix", 1.0f);
    addFloat (kBlur, "Blur", 0.0f);
    addFloat (kHzOct, "Hz/Oct", 0.5f);
    addFloat (kOneByFive, "1x/5x", 0.0f);
    addFloat (kKeepBass, "Keep Bass", 0.0f);
    addFloat (kBlocksize, "Blocksize", 0.0f);

    layout.add (std::make_unique<juce::AudioParameterBool> (
        juce::ParameterID { kBypass, 1 }, "Bypass", false));

    return layout;
}

void UZUReimplAudioProcessor::prepareToPlay (double sampleRate, int samplesPerBlock)
{
    pdEngine.prepare (sampleRate, samplesPerBlock);

    bypassBuffer.setSize (2, juce::jmax (1, samplesPerBlock), false, false, true);
    bypassBuffer.clear();

    lastLatencySamples = PdEngine::blockSizeSamplesForParam (
        blocksize != nullptr ? blocksize->load() : 0.0f);
    setLatencySamples (lastLatencySamples);
}

void UZUReimplAudioProcessor::releaseResources()
{
    pdEngine.release();
}

bool UZUReimplAudioProcessor::isBusesLayoutSupported (const BusesLayout& layouts) const
{
    const auto in = layouts.getMainInputChannelSet();
    const auto out = layouts.getMainOutputChannelSet();

    const bool mono = in == juce::AudioChannelSet::mono()
                   && out == juce::AudioChannelSet::mono();
    const bool stereo = in == juce::AudioChannelSet::stereo()
                     && out == juce::AudioChannelSet::stereo();

    return mono || stereo;
}

void UZUReimplAudioProcessor::copyInputToBypassBuffer (const juce::AudioBuffer<float>& buffer)
{
    const int numSamples = buffer.getNumSamples();
    const int channels = juce::jmin (2, buffer.getNumChannels());

    jassert (bypassBuffer.getNumSamples() >= numSamples);

    for (int ch = 0; ch < channels; ++ch)
        bypassBuffer.copyFrom (ch, 0, buffer, ch, 0, numSamples);
}

void UZUReimplAudioProcessor::restoreBypassBuffer (juce::AudioBuffer<float>& buffer)
{
    const int numSamples = buffer.getNumSamples();
    const int channels = juce::jmin (2, buffer.getNumChannels());

    for (int ch = 0; ch < channels; ++ch)
        buffer.copyFrom (ch, 0, bypassBuffer, ch, 0, numSamples);
}

void UZUReimplAudioProcessor::processBlock (juce::AudioBuffer<float>& buffer,
                                            juce::MidiBuffer&)
{
    juce::ScopedNoDenormals noDenormals;

    const int numSamples = buffer.getNumSamples();
    const int numChannels = buffer.getNumChannels();
    if (numSamples <= 0 || numChannels <= 0)
        return;

    // Param_1..Param_10, in the same order as UZU's processBlockOffline.
    std::array<float, 10> values {
        width != nullptr ? width->load() : 0.5f,
        offset != nullptr ? offset->load() : 0.0f,
        depth != nullptr ? depth->load() : 0.0f,
        speed != nullptr ? speed->load() : 0.5f,
        mix != nullptr ? mix->load() : 1.0f,
        blur != nullptr ? blur->load() : 0.0f,
        blocksize != nullptr ? blocksize->load() : 0.0f,
        keepBass != nullptr ? keepBass->load() : 0.0f,
        oneByFive != nullptr ? oneByFive->load() : 0.0f,
        hzOct != nullptr ? hzOct->load() : 0.5f
    };

    // The patch's root [sel 0 0.25 0.5 0.75 1] only reacts to the five
    // discrete positions of the Blocksize control.
    values[6] = std::round (values[6] * 4.0f) / 4.0f;

    pdEngine.setParameters (values);

    const int latency = PdEngine::blockSizeSamplesForParam (values[6]);
    if (latency != lastLatencySamples)
    {
        lastLatencySamples = latency;
        setLatencySamples (latency);
    }

    const bool bypassed = bypass != nullptr && bypass->load() >= 0.5f;
    if (bypassed)
        copyInputToBypassBuffer (buffer);

    pdEngine.process (buffer.getArrayOfReadPointers(),
                      buffer.getArrayOfWritePointers(),
                      numSamples,
                      numChannels);

    if (bypassed)
        restoreBypassBuffer (buffer);
}

void UZUReimplAudioProcessor::getStateInformation (juce::MemoryBlock& destData)
{
    if (auto state = apvts.copyState().createXml())
        copyXmlToBinary (*state, destData);
}

void UZUReimplAudioProcessor::setStateInformation (const void* data, int sizeInBytes)
{
    if (auto xml = getXmlFromBinary (data, sizeInBytes))
        if (xml->hasTagName (apvts.state.getType()))
            apvts.replaceState (juce::ValueTree::fromXml (*xml));
}

juce::AudioProcessor* JUCE_CALLTYPE createPluginFilter()
{
    return new UZUReimplAudioProcessor();
}
