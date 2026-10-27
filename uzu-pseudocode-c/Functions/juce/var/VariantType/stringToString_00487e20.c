// Function : stringToString
// Namespace: juce:var:VariantType
// Entry    : 00487e20
// Prototype: VariantType * stringToString(VariantType * this, long * param_1)
// Body     : 00487e20 - 00487e3d


/* juce::var::VariantType::stringToString(juce::var::ValueUnion const&) */

VariantType * __thiscall juce::var::VariantType::stringToString(VariantType *this,long *param_1)

{
  long lVar1;
  int *piVar2;
  
  lVar1 = *param_1;
  *(long *)this = lVar1;
  piVar2 = (int *)(lVar1 + -0x10);
  if (piVar2 != &emptyString) {
    LOCK();
    *piVar2 = *piVar2 + 1;
    UNLOCK();
  }
  return this;
}


