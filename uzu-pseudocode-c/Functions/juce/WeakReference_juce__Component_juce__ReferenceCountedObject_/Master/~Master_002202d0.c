// Function : ~Master
// Namespace: juce:WeakReference_juce__Component_juce__ReferenceCountedObject_:Master
// Entry    : 002202d0
// Prototype: undefined ~Master(Master * this)
// Body     : 002202d0 - 002202e2


/* juce::WeakReference<juce::Component, juce::ReferenceCountedObject>::Master::~Master() */

void __thiscall
juce::WeakReference<juce::Component,juce::ReferenceCountedObject>::Master::~Master(Master *this)

{
  Master *pMVar1;
  
  if (this != (Master *)0x0) {
    LOCK();
    pMVar1 = this + 8;
    *(int *)pMVar1 = *(int *)pMVar1 + -1;
    UNLOCK();
    if (*(int *)pMVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x002202df. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)this + 8))();
      return;
    }
  }
  return;
}


