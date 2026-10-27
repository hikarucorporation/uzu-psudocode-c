// Function : ~FTFaceWrapper
// Namespace: juce:FTFaceWrapper
// Entry    : 00301080
// Prototype: undefined ~FTFaceWrapper(FTFaceWrapper * this)
// Body     : 00301080 - 003010b5


/* juce::FTFaceWrapper::~FTFaceWrapper() */

void __thiscall juce::FTFaceWrapper::~FTFaceWrapper(FTFaceWrapper *this)

{
  if (*(long *)(this + 0x28) != 0) {
                    /* try { // try from 00301090 to 00301094 has its CatchHandler @ 003010b6 */
    FT_Done_Face();
  }
  free(*(void **)(this + 0x18));
  ReferenceCountedObjectPtr<juce::FTLibWrapper>::~ReferenceCountedObjectPtr
            (*(ReferenceCountedObjectPtr<juce::FTLibWrapper> **)(this + 0x10));
  operator_delete(this);
  return;
}


