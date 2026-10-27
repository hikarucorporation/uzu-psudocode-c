// Function : stringCleanUp
// Namespace: juce:var:VariantType
// Entry    : 00487f70
// Prototype: undefined stringCleanUp(long * param_1)
// Body     : 00487f70 - 00487f95


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::var::VariantType::stringCleanUp(juce::var::ValueUnion&) */

void __cdecl juce::var::VariantType::stringCleanUp(long *param_1)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = (int *)(*param_1 + -0x10);
  if (piVar2 != &emptyString) {
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      operator_delete__(piVar2);
      return;
    }
  }
  return;
}


