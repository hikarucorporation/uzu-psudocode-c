// Function : doubleToString
// Namespace: juce:var:VariantType
// Entry    : 004abb70
// Prototype: VariantType * doubleToString(VariantType * this, double * param_1)
// Body     : 004abb70 - 004abb83


/* juce::var::VariantType::doubleToString(juce::var::ValueUnion const&) */

VariantType * __thiscall juce::var::VariantType::doubleToString(VariantType *this,double *param_1)

{
  serialiseDouble(*param_1,(juce *)this,0);
  return this;
}


