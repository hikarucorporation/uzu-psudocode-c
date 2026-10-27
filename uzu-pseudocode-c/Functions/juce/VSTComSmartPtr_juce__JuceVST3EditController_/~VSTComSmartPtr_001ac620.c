// Function : ~VSTComSmartPtr
// Namespace: juce:VSTComSmartPtr_juce__JuceVST3EditController_
// Entry    : 001ac620
// Prototype: undefined ~VSTComSmartPtr(VSTComSmartPtr<juce::JuceVST3EditController> * this)
// Body     : 001ac620 - 001ac640


/* juce::VSTComSmartPtr<juce::JuceVST3EditController>::~VSTComSmartPtr() */

void __thiscall
juce::VSTComSmartPtr<juce::JuceVST3EditController>::~VSTComSmartPtr
          (VSTComSmartPtr<juce::JuceVST3EditController> *this)

{
  long *plVar1;
  
  plVar1 = *(long **)this;
  if (plVar1 != (long *)0x0) {
    LOCK();
    *(int *)(plVar1 + 1) = (int)plVar1[1] + -1;
    UNLOCK();
    if ((int)plVar1[1] == 0) {
      *(undefined4 *)(plVar1 + 1) = 0xfffffc18;
                    /* WARNING: Could not recover jumptable at 0x001ac63e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x28))();
      return;
    }
  }
  return;
}


