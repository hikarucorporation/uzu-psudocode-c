// Function : ~ReferenceCountedObjectPtr
// Namespace: juce:ReferenceCountedObjectPtr_juce__FTLibWrapper_
// Entry    : 002ff190
// Prototype: undefined ~ReferenceCountedObjectPtr(ReferenceCountedObjectPtr<juce::FTLibWrapper> * this)
// Body     : 002ff190 - 002ff1d5


/* juce::ReferenceCountedObjectPtr<juce::FTLibWrapper>::~ReferenceCountedObjectPtr() */

void __thiscall
juce::ReferenceCountedObjectPtr<juce::FTLibWrapper>::~ReferenceCountedObjectPtr
          (ReferenceCountedObjectPtr<juce::FTLibWrapper> *this)

{
  ReferenceCountedObjectPtr<juce::FTLibWrapper> *pRVar1;
  
  if (this != (ReferenceCountedObjectPtr<juce::FTLibWrapper> *)0x0) {
    LOCK();
    pRVar1 = this + 8;
    *(int *)pRVar1 = *(int *)pRVar1 + -1;
    UNLOCK();
    if (*(int *)pRVar1 == 0) {
      if (*(long *)(this + 0x18) != 0) {
                    /* try { // try from 002ff1ac to 002ff1b0 has its CatchHandler @ 002ff1de */
        FT_Done_FreeType();
      }
      if (*(long *)(this + 0x10) != 0) {
                    /* try { // try from 002ff1ba to 002ff1be has its CatchHandler @ 002ff1d6 */
        FcConfigDestroy();
      }
      operator_delete(this);
      return;
    }
  }
  return;
}


