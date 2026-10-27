// Function : ~WeakReference
// Namespace: juce:WeakReference_juce__LookAndFeel_juce__ReferenceCountedObject_
// Entry    : 002203d0
// Prototype: undefined ~WeakReference(WeakReference<juce::LookAndFeel,juce::ReferenceCountedObject> * this)
// Body     : 002203d0 - 002203e2


/* juce::WeakReference<juce::LookAndFeel, juce::ReferenceCountedObject>::~WeakReference() */

void __thiscall
juce::WeakReference<juce::LookAndFeel,juce::ReferenceCountedObject>::~WeakReference
          (WeakReference<juce::LookAndFeel,juce::ReferenceCountedObject> *this)

{
  WeakReference<juce::LookAndFeel,juce::ReferenceCountedObject> *pWVar1;
  
  if (this != (WeakReference<juce::LookAndFeel,juce::ReferenceCountedObject> *)0x0) {
    LOCK();
    pWVar1 = this + 8;
    *(int *)pWVar1 = *(int *)pWVar1 + -1;
    UNLOCK();
    if (*(int *)pWVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x002203df. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)this + 8))();
      return;
    }
  }
  return;
}


