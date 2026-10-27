// Function : ~WeakReference
// Namespace: juce:WeakReference_juce__Component_juce__ReferenceCountedObject_
// Entry    : 001da5a0
// Prototype: undefined ~WeakReference(WeakReference<juce::Component,juce::ReferenceCountedObject> * this)
// Body     : 001da5a0 - 001da5b2


/* juce::WeakReference<juce::Component, juce::ReferenceCountedObject>::~WeakReference() */

void __thiscall
juce::WeakReference<juce::Component,juce::ReferenceCountedObject>::~WeakReference
          (WeakReference<juce::Component,juce::ReferenceCountedObject> *this)

{
  WeakReference<juce::Component,juce::ReferenceCountedObject> *pWVar1;
  
  if (this != (WeakReference<juce::Component,juce::ReferenceCountedObject> *)0x0) {
    LOCK();
    pWVar1 = this + 8;
    *(int *)pWVar1 = *(int *)pWVar1 + -1;
    UNLOCK();
    if (*(int *)pWVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x001da5af. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)this + 8))();
      return;
    }
  }
  return;
}


