// Function : arrayToString
// Namespace: juce:var:VariantType
// Entry    : 004acfb0
// Prototype: undefined8 * arrayToString(undefined8 * param_1)
// Body     : 004acfb0 - 004acfe3


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::var::VariantType::arrayToString(juce::var::ValueUnion const&) */

undefined8 * __cdecl juce::var::VariantType::arrayToString(undefined8 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = operator_new__(0x1f);
  LOCK();
  *puVar1 = 0;
  UNLOCK();
  *(undefined8 *)(puVar1 + 2) = 8;
  *(undefined8 *)(puVar1 + 4) = 0x5d79617272415b;
  *param_1 = puVar1 + 4;
  return param_1;
}


