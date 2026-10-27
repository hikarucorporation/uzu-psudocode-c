// Function : toPlain
// Namespace: Steinberg:Vst:StringListParameter
// Entry    : 00195ed0
// Prototype: double toPlain(double param_1, StringListParameter * this)
// Body     : 00195ed0 - 00195ef9


/* Steinberg::Vst::StringListParameter::toPlain(double) const */

double __thiscall
Steinberg::Vst::StringListParameter::toPlain(double param_1,StringListParameter *this)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(this + 0x314);
  if (iVar1 < 1) {
    return 0.0;
  }
  iVar2 = (int)((double)(iVar1 + 1) * param_1);
  if (iVar2 < iVar1) {
    iVar1 = iVar2;
  }
  return (double)iVar1;
}


