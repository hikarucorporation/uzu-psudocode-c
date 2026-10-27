// Function : Parameter
// Namespace: Steinberg:Vst:Parameter
// Entry    : 00194b50
// Prototype: undefined Parameter(Parameter * this)
// Body     : 00194b50 - 00194b80


/* Steinberg::Vst::Parameter::Parameter() */

void __thiscall Steinberg::Vst::Parameter::Parameter(Parameter *this)

{
  *(undefined4 *)(this + 8) = 1;
  *(undefined ***)this = &PTR_queryInterface_00703f90;
  memset(this + 0x10,0,800);
  *(undefined4 *)(this + 0x330) = 4;
  return;
}


