// Function : Parameter
// Namespace: Steinberg:Vst:Parameter
// Entry    : 00194b90
// Prototype: undefined Parameter(Parameter * this, void * param_1)
// Body     : 00194b90 - 00194bdb


/* Steinberg::Vst::Parameter::Parameter(Steinberg::Vst::ParameterInfo const&) */

void __thiscall Steinberg::Vst::Parameter::Parameter(Parameter *this,void *param_1)

{
  *(undefined4 *)(this + 8) = 1;
  *(undefined ***)this = &PTR_queryInterface_00703f90;
  memcpy(this + 0x10,param_1,0x318);
  *(undefined8 *)(this + 0x328) = *(undefined8 *)((long)param_1 + 0x308);
  *(undefined4 *)(this + 0x330) = 4;
  return;
}


