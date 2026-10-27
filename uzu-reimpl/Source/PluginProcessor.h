#pragma once

#include <array>

#include <juce_audio_processors/juce_audio_processors.h>
#include <juce_audio_utils/juce_audio_utils.h>

#include "PdEngine.h"

class UZUReimplAudioProcessor final : public juce::AudioProcessor
{
public:
    UZUReimplAudioProcessor();
    ~UZUReimplAudioProcessor() override;

    void prepareToPlay (double sampleRate, int samplesPerBlock) override;
    void releaseResources() override;

    bool isBusesLayoutSupported (const BusesLayout& layouts) const override;

    void processBlock (juce::AudioBuffer<float>&, juce::MidiBuffer&) override;

    juce::AudioProcessorEditor* createEditor() override { return nullptr; }
    bool hasEditor() const override { return false; }

    const juce::String getName() const override { return "UZU Reimpl"; }

    bool acceptsMidi() const override { return false; }
    bool producesMidi() const override { return false; }
    bool isMidiEffect() const override { return false; }
    double getTailLengthSeconds() const override { return 1.0; }

    int getNumPrograms() override { return 1; }
    int getCurrentProgram() override { return 0; }
    void setCurrentProgram (int) override {}
    const juce::String getProgramName (int) override { return {}; }
    void changeProgramName (int, const juce::String&) override {}

    void getStateInformation (juce::MemoryBlock& destData) override;
    void setStateInformation (const void* data, int sizeInBytes) override;

    static juce::AudioProcessorValueTreeState::ParameterLayout createParameterLayout();

private:
    void copyInputToBypassBuffer (const juce::AudioBuffer<float>& buffer);
    void restoreBypassBuffer (juce::AudioBuffer<float>& buffer);

    juce::AudioProcessorValueTreeState apvts;

    std::atomic<float>* width = nullptr;
    std::atomic<float>* offset = nullptr;
    std::atomic<float>* depth = nullptr;
    std::atomic<float>* speed = nullptr;
    std::atomic<float>* mix = nullptr;
    std::atomic<float>* blur = nullptr;
    std::atomic<float>* hzOct = nullptr;
    std::atomic<float>* oneByFive = nullptr;
    std::atomic<float>* keepBass = nullptr;
    std::atomic<float>* blocksize = nullptr;
    std::atomic<float>* bypass = nullptr;

    PdEngine pdEngine;
    juce::AudioBuffer<float> bypassBuffer;
    int lastLatencySamples = -1;

    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (UZUReimplAudioProcessor)
};
