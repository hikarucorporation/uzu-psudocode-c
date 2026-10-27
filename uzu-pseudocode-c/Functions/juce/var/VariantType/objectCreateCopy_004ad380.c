// Function : objectCreateCopy
// Namespace: juce:var:VariantType
// Entry    : 004ad380
// Prototype: undefined objectCreateCopy(long * param_1, long * param_2)
// Body     : 004ad380 - 004ad390


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::var::VariantType::objectCreateCopy(juce::var::ValueUnion&, juce::var::ValueUnion const&) */

void __cdecl juce::var::VariantType::objectCreateCopy(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  return;
}


