// Function : ~VSTComSmartPtr
// Namespace: juce:VSTComSmartPtr_juce__JuceAudioProcessor_
// Entry    : 001a7b90
// Prototype: undefined ~VSTComSmartPtr(VSTComSmartPtr<juce::JuceAudioProcessor> * this)
// Body     : 001a7b90 - 001a7bb5


/* juce::VSTComSmartPtr<juce::JuceAudioProcessor>::~VSTComSmartPtr() */

void __thiscall
juce::VSTComSmartPtr<juce::JuceAudioProcessor>::~VSTComSmartPtr
          (VSTComSmartPtr<juce::JuceAudioProcessor> *this)

{
  JuceAudioProcessor *pJVar1;
  JuceAudioProcessor *this_00;
  
  this_00 = *(JuceAudioProcessor **)this;
  if (this_00 != (JuceAudioProcessor *)0x0) {
    LOCK();
    pJVar1 = this_00 + 0xd0;
    *(int *)pJVar1 = *(int *)pJVar1 + -1;
    UNLOCK();
    if (*(int *)pJVar1 == 0) {
      JuceAudioProcessor::~JuceAudioProcessor(this_00);
      operator_delete(this_00);
      return;
    }
  }
  return;
}


