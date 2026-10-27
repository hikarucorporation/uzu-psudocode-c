// Function : ~FTFaceWrapper
// Namespace: juce:FTFaceWrapper
// Entry    : 00301020
// Prototype: undefined ~FTFaceWrapper(FTFaceWrapper * this)
// Body     : 00301020 - 00301058


/* juce::FTFaceWrapper::~FTFaceWrapper() */

void __thiscall juce::FTFaceWrapper::~FTFaceWrapper(FTFaceWrapper *this)

{
  if (*(long *)(this + 0x28) != 0) {
                    /* try { // try from 00301030 to 00301034 has its CatchHandler @ 00301059 */
    FT_Done_Face();
  }
  free(*(void **)(this + 0x18));
  ReferenceCountedObjectPtr<juce::FTLibWrapper>::~ReferenceCountedObjectPtr
            (*(ReferenceCountedObjectPtr<juce::FTLibWrapper> **)(this + 0x10));
  *(undefined ***)this = &PTR__ReferenceCountedObject_00706828;
  return;
}


