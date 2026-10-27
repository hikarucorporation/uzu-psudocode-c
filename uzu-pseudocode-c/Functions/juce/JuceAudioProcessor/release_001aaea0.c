// Function : release
// Namespace: juce:JuceAudioProcessor
// Entry    : 001aaea0
// Prototype: int release(JuceAudioProcessor * this)
// Body     : 001aaea0 - 001aaecf


/* juce::JuceAudioProcessor::release() */

int __thiscall juce::JuceAudioProcessor::release(JuceAudioProcessor *this)

{
  JuceAudioProcessor *pJVar1;
  int iVar2;
  
  LOCK();
  pJVar1 = this + 0xd0;
  iVar2 = *(int *)pJVar1;
  *(int *)pJVar1 = *(int *)pJVar1 + -1;
  UNLOCK();
  if (iVar2 + -1 == 0) {
    ~JuceAudioProcessor(this);
    operator_delete(this);
  }
  return iVar2 + -1;
}


