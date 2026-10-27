// Function : addRef
// Namespace: juce:JuceAudioProcessor
// Entry    : 001aae80
// Prototype: int addRef(JuceAudioProcessor * this)
// Body     : 001aae80 - 001aae90


/* juce::JuceAudioProcessor::addRef() */

int __thiscall juce::JuceAudioProcessor::addRef(JuceAudioProcessor *this)

{
  JuceAudioProcessor *pJVar1;
  int iVar2;
  
  LOCK();
  pJVar1 = this + 0xd0;
  iVar2 = *(int *)pJVar1;
  *(int *)pJVar1 = *(int *)pJVar1 + 1;
  UNLOCK();
  return iVar2 + 1;
}


