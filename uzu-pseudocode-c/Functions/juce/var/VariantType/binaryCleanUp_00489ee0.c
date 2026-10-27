// Function : binaryCleanUp
// Namespace: juce:var:VariantType
// Entry    : 00489ee0
// Prototype: undefined binaryCleanUp(undefined8 * param_1)
// Body     : 00489ee0 - 00489efb


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::var::VariantType::binaryCleanUp(juce::var::ValueUnion&) */

void __cdecl juce::var::VariantType::binaryCleanUp(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 == (undefined8 *)0x0) {
    return;
  }
  free((void *)*puVar1);
  operator_delete(puVar1);
  return;
}


