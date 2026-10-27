// Function : getUnitCount
// Namespace: juce:JuceAudioProcessor
// Entry    : 001aaed0
// Prototype: int getUnitCount(JuceAudioProcessor * this)
// Body     : 001aaed0 - 001aaed9


/* juce::JuceAudioProcessor::getUnitCount() */

int __thiscall juce::JuceAudioProcessor::getUnitCount(JuceAudioProcessor *this)

{
  return *(int *)(this + 0x18c) + 1;
}


