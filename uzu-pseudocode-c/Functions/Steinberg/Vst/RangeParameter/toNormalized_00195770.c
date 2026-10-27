// Function : toNormalized
// Namespace: Steinberg:Vst:RangeParameter
// Entry    : 00195770
// Prototype: double toNormalized(double param_1, RangeParameter * this)
// Body     : 00195770 - 001957e7


/* Steinberg::Vst::RangeParameter::toNormalized(double) const */

double __thiscall Steinberg::Vst::RangeParameter::toNormalized(double param_1,RangeParameter *this)

{
  int iVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  iVar1 = *(int *)(this + 0x314);
  dVar2 = (double)(**(code **)(*(long *)this + 0xd0))();
  if (iVar1 < 2) {
    dVar4 = (double)(**(code **)(*(long *)this + 0xe0))(this);
    dVar3 = (double)(**(code **)(*(long *)this + 0xd0))(this);
    dVar4 = dVar4 - dVar3;
  }
  else {
    dVar4 = (double)*(int *)(this + 0x314);
  }
  return (param_1 - dVar2) / dVar4;
}


