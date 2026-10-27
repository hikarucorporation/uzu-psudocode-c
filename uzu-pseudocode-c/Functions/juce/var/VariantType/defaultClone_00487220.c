// Function : defaultClone
// Namespace: juce:var:VariantType
// Entry    : 00487220
// Prototype: VariantType * defaultClone(VariantType * this, long * param_1)
// Body     : 00487220 - 00487239


/* juce::var::VariantType::defaultClone(juce::var const&) */

VariantType * __thiscall juce::var::VariantType::defaultClone(VariantType *this,long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *(long *)this = lVar1;
  (**(code **)(lVar1 + 0x60))(this + 8,param_1 + 1);
  return this;
}


