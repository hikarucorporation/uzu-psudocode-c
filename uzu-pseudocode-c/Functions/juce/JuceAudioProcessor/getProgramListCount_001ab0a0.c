// Function : getProgramListCount
// Namespace: juce:JuceAudioProcessor
// Entry    : 001ab0a0
// Prototype: bool getProgramListCount(JuceAudioProcessor * this)
// Body     : 001ab0a0 - 001ab0bb


/* juce::JuceAudioProcessor::getProgramListCount() */

bool __thiscall juce::JuceAudioProcessor::getProgramListCount(JuceAudioProcessor *this)

{
  int iVar1;
  
  iVar1 = (**(code **)(**(long **)(this + 0xd8) + 0xe0))();
  return 0 < iVar1;
}


