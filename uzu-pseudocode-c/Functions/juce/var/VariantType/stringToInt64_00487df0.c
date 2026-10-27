// Function : stringToInt64
// Namespace: juce:var:VariantType
// Entry    : 00487df0
// Prototype: undefined stringToInt64(undefined8 * param_1)
// Body     : 00487df0 - 00487dfe


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::var::VariantType::stringToInt64(juce::var::ValueUnion const&) */

void __cdecl juce::var::VariantType::stringToInt64(undefined8 *param_1)

{
  strtoll((char *)*param_1,(char **)0x0,10);
  return;
}


