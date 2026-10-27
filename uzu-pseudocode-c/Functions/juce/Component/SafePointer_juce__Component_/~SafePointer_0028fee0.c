// Function : ~SafePointer
// Namespace: juce:Component:SafePointer_juce__Component_
// Entry    : 0028fee0
// Prototype: undefined ~SafePointer(SafePointer<juce::Component> * this)
// Body     : 0028fee0 - 0028fef2


/* juce::Component::SafePointer<juce::Component>::~SafePointer() */

void __thiscall
juce::Component::SafePointer<juce::Component>::~SafePointer(SafePointer<juce::Component> *this)

{
  SafePointer<juce::Component> *pSVar1;
  
  if (this != (SafePointer<juce::Component> *)0x0) {
    LOCK();
    pSVar1 = this + 8;
    *(int *)pSVar1 = *(int *)pSVar1 + -1;
    UNLOCK();
    if (*(int *)pSVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0028feef. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)this + 8))();
      return;
    }
  }
  return;
}


