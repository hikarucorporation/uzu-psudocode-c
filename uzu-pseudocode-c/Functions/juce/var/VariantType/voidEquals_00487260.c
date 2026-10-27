// Function : voidEquals
// Namespace: juce:var:VariantType
// Entry    : 00487260
// Prototype: bool voidEquals(undefined8 param_1, undefined8 param_2, char * param_3)
// Body     : 00487260 - 00487268


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::var::VariantType::voidEquals(juce::var::ValueUnion const&, juce::var::ValueUnion const&,
   juce::var::VariantType const&) */

bool __cdecl juce::var::VariantType::voidEquals(undefined8 param_1,undefined8 param_2,char *param_3)

{
  return *param_3 != '\0' || param_3[1] != '\0';
}


