// Function : ~ReferenceCountedObjectPtr
// Namespace: juce:ReferenceCountedObjectPtr_juce__FTFaceWrapper_
// Entry    : 003012f0
// Prototype: undefined ~ReferenceCountedObjectPtr(ReferenceCountedObjectPtr<juce::FTFaceWrapper> * this)
// Body     : 003012f0 - 003012f4


/* juce::ReferenceCountedObjectPtr<juce::FTFaceWrapper>::~ReferenceCountedObjectPtr() */

void __thiscall
juce::ReferenceCountedObjectPtr<juce::FTFaceWrapper>::~ReferenceCountedObjectPtr
          (ReferenceCountedObjectPtr<juce::FTFaceWrapper> *this)

{
  ReferenceCountedObjectPtr<juce::FTFaceWrapper> *pRVar1;
  
  if (this != (ReferenceCountedObjectPtr<juce::FTFaceWrapper> *)0x0) {
    LOCK();
    pRVar1 = this + 8;
    *(int *)pRVar1 = *(int *)pRVar1 + -1;
    UNLOCK();
    if (*(int *)pRVar1 == 0) {
      if (*(long *)(this + 0x28) != 0) {
        FT_Done_Face();
      }
      free(*(void **)(this + 0x18));
      ReferenceCountedObjectPtr<juce::FTLibWrapper>::~ReferenceCountedObjectPtr
                (*(ReferenceCountedObjectPtr<juce::FTLibWrapper> **)(this + 0x10));
      operator_delete(this);
      return;
    }
  }
  return;
}


