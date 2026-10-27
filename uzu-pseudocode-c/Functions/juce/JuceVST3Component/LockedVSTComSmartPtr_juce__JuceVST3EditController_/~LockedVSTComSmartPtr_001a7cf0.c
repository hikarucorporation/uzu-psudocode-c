// Function : ~LockedVSTComSmartPtr
// Namespace: juce:JuceVST3Component:LockedVSTComSmartPtr_juce__JuceVST3EditController_
// Entry    : 001a7cf0
// Prototype: undefined ~LockedVSTComSmartPtr(LockedVSTComSmartPtr<juce::JuceVST3EditController> * this)
// Body     : 001a7cf0 - 001a7d6f


/* juce::JuceVST3Component::LockedVSTComSmartPtr<juce::JuceVST3EditController>::~LockedVSTComSmartPtr()
    */

void __thiscall
juce::JuceVST3Component::LockedVSTComSmartPtr<juce::JuceVST3EditController>::~LockedVSTComSmartPtr
          (LockedVSTComSmartPtr<juce::JuceVST3EditController> *this)

{
  long *plVar1;
  MessageManagerLock local_b0 [160];
  
                    /* try { // try from 001a7cfd to 001a7d08 has its CatchHandler @ 001a7d70 */
  MessageManagerLock::MessageManagerLock(local_b0,0);
  plVar1 = *(long **)this;
  *(undefined8 *)this = 0;
  if (plVar1 != (long *)0x0) {
    LOCK();
    *(int *)(plVar1 + 1) = (int)plVar1[1] + -1;
    UNLOCK();
    if ((int)plVar1[1] == 0) {
      *(undefined4 *)(plVar1 + 1) = 0xfffffc18;
      (**(code **)(*plVar1 + 0x28))();
    }
  }
  MessageManagerLock::~MessageManagerLock(local_b0);
  plVar1 = *(long **)this;
  if (plVar1 != (long *)0x0) {
    LOCK();
    *(int *)(plVar1 + 1) = (int)plVar1[1] + -1;
    UNLOCK();
    if ((int)plVar1[1] == 0) {
      *(undefined4 *)(plVar1 + 1) = 0xfffffc18;
      (**(code **)(*plVar1 + 0x28))();
      return;
    }
  }
  return;
}


