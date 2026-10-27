// Function : doubleToBool
// Namespace: juce:var:VariantType
// Entry    : 004abb90
// Prototype: byte doubleToBool(double * param_1)
// Body     : 004abb90 - 004abba1


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::var::VariantType::doubleToBool(juce::var::ValueUnion const&) */

byte __cdecl juce::var::VariantType::doubleToBool(double *param_1)

{
  return -(*param_1 != 0.0) & 1;
}


