// Function : decIfNotNull
// Namespace: juce:ReferenceCountedObjectPtr_juce__FTFaceWrapper_
// Entry    : 002ff0f0
// Prototype: undefined decIfNotNull(void * param_1)
// Body     : 002ff0f0 - 002ff139


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::ReferenceCountedObjectPtr<juce::FTFaceWrapper>::decIfNotNull(juce::FTFaceWrapper*) */

void __cdecl juce::ReferenceCountedObjectPtr<juce::FTFaceWrapper>::decIfNotNull(void *param_1)

{
  int *piVar1;
  
  if (param_1 != (void *)0x0) {
    LOCK();
    piVar1 = (int *)((long)param_1 + 8);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      if (*(long *)((long)param_1 + 0x28) != 0) {
                    /* try { // try from 002ff10c to 002ff110 has its CatchHandler @ 002ff13a */
        FT_Done_Face();
      }
      free(*(void **)((long)param_1 + 0x18));
      ReferenceCountedObjectPtr<juce::FTLibWrapper>::~ReferenceCountedObjectPtr
                (*(ReferenceCountedObjectPtr<juce::FTLibWrapper> **)((long)param_1 + 0x10));
      operator_delete(param_1);
      return;
    }
  }
  return;
}


