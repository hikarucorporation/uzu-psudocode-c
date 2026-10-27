// Function : stringCreateCopy
// Namespace: juce:var:VariantType
// Entry    : 00487fa0
// Prototype: undefined stringCreateCopy(long * param_1, long * param_2)
// Body     : 00487fa0 - 00487fba


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::var::VariantType::stringCreateCopy(juce::var::ValueUnion&, juce::var::ValueUnion const&) */

void __cdecl juce::var::VariantType::stringCreateCopy(long *param_1,long *param_2)

{
  long lVar1;
  int *piVar2;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  piVar2 = (int *)(lVar1 + -0x10);
  if (piVar2 != &emptyString) {
    LOCK();
    *piVar2 = *piVar2 + 1;
    UNLOCK();
  }
  return;
}


