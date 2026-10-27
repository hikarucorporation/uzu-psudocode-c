// Function : toPlain
// Namespace: Steinberg:Vst:RangeParameter
// Entry    : 001956d0
// Prototype: double toPlain(double param_1, RangeParameter * this)
// Body     : 001956d0 - 0019576b


/* Steinberg::Vst::RangeParameter::toPlain(double) const */

double __thiscall Steinberg::Vst::RangeParameter::toPlain(double param_1,RangeParameter *this)

{
  int iVar1;
  int iVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  iVar1 = *(int *)(this + 0x314);
  if (iVar1 < 2) {
    dVar3 = (double)(**(code **)(*(long *)this + 0xe0))(this);
    dVar4 = (double)(**(code **)(*(long *)this + 0xd0))(this);
    dVar5 = (double)(**(code **)(*(long *)this + 0xd0))(this);
    return dVar5 + param_1 * (dVar3 - dVar4);
  }
  iVar2 = (int)((double)(iVar1 + 1) * param_1);
  if (iVar2 < iVar1) {
    iVar1 = iVar2;
  }
  dVar3 = (double)(**(code **)(*(long *)this + 0xd0))(this);
  return dVar3 + (double)iVar1;
}


