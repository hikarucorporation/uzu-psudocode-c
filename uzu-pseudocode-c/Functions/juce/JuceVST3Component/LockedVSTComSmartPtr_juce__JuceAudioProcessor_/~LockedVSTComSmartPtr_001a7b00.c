// Function : ~LockedVSTComSmartPtr
// Namespace: juce:JuceVST3Component:LockedVSTComSmartPtr_juce__JuceAudioProcessor_
// Entry    : 001a7b00
// Prototype: undefined ~LockedVSTComSmartPtr(LockedVSTComSmartPtr<juce::JuceAudioProcessor> * this)
// Body     : 001a7b00 - 001a7b78


/* juce::JuceVST3Component::LockedVSTComSmartPtr<juce::JuceAudioProcessor>::~LockedVSTComSmartPtr()
    */

void __thiscall
juce::JuceVST3Component::LockedVSTComSmartPtr<juce::JuceAudioProcessor>::~LockedVSTComSmartPtr
          (LockedVSTComSmartPtr<juce::JuceAudioProcessor> *this)

{
  JuceAudioProcessor *pJVar1;
  JuceAudioProcessor *pJVar2;
  MessageManagerLock local_b0 [160];
  
                    /* try { // try from 001a7b0d to 001a7b18 has its CatchHandler @ 001a7b79 */
  MessageManagerLock::MessageManagerLock(local_b0,0);
  pJVar2 = *(JuceAudioProcessor **)this;
  *(undefined8 *)this = 0;
  if (pJVar2 != (JuceAudioProcessor *)0x0) {
    LOCK();
    pJVar1 = pJVar2 + 0xd0;
    *(int *)pJVar1 = *(int *)pJVar1 + -1;
    UNLOCK();
    if (*(int *)pJVar1 == 0) {
      JuceAudioProcessor::~JuceAudioProcessor(pJVar2);
      operator_delete(pJVar2);
    }
  }
  MessageManagerLock::~MessageManagerLock(local_b0);
  pJVar2 = *(JuceAudioProcessor **)this;
  if (pJVar2 != (JuceAudioProcessor *)0x0) {
    LOCK();
    pJVar1 = pJVar2 + 0xd0;
    *(int *)pJVar1 = *(int *)pJVar1 + -1;
    UNLOCK();
    if (*(int *)pJVar1 == 0) {
      JuceAudioProcessor::~JuceAudioProcessor(pJVar2);
      operator_delete(pJVar2);
    }
  }
  return;
}


