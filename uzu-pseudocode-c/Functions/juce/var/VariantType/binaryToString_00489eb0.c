// Function : binaryToString
// Namespace: juce:var:VariantType
// Entry    : 00489eb0
// Prototype: undefined8 * binaryToString(undefined8 * param_1, undefined8 * param_2)
// Body     : 00489eb0 - 00489ec0


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::var::VariantType::binaryToString(juce::var::ValueUnion const&) */

undefined8 * __cdecl juce::var::VariantType::binaryToString(undefined8 *param_1,undefined8 *param_2)

{
  MemoryBlock::toBase64Encoding(param_1,(long *)*param_2);
  return param_1;
}


