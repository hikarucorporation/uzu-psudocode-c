// Function : setNormalized
// Namespace: Steinberg:Vst:Parameter
// Entry    : 00194d50
// Prototype: byte setNormalized(double param_1, Parameter * this)
// Body     : 00194d50 - 00194dc0


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Steinberg::Vst::Parameter::setNormalized(double) */

byte __thiscall Steinberg::Vst::Parameter::setNormalized(double param_1,Parameter *this)

{
  double dVar1;
  double dVar2;
  
  dVar2 = _DAT_005d9000;
  if ((param_1 <= _DAT_005d9000) && (dVar2 = param_1, param_1 < 0.0)) {
    dVar2 = 0.0;
  }
  dVar1 = *(double *)(this + 0x328);
  if ((dVar2 != dVar1) || (NAN(dVar2) || NAN(dVar1))) {
    *(double *)(this + 0x328) = dVar2;
    (**(code **)(*(long *)this + 0x58))(this,1);
  }
  return -(dVar2 != dVar1) & 1;
}


