// Function : stringToDouble
// Namespace: juce:var:VariantType
// Entry    : 00487e00
// Prototype: long stringToDouble(long * param_1)
// Body     : 00487e00 - 00487e11


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::var::VariantType::stringToDouble(juce::var::ValueUnion const&) */

long __cdecl juce::var::VariantType::stringToDouble(long *param_1)

{
  long local_8;
  
  local_8 = *param_1;
  CharacterFunctions::readDoubleValue<juce::CharPointer_UTF8>(&local_8);
  return local_8;
}


