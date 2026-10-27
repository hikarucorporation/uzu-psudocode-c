// Function : StringListParameter
// Namespace: Steinberg:Vst:StringListParameter
// Entry    : 001957f0
// Prototype: undefined StringListParameter(StringListParameter * this, void * param_1)
// Body     : 001957f0 - 0019585a


/* Steinberg::Vst::StringListParameter::StringListParameter(Steinberg::Vst::ParameterInfo const&) */

void __thiscall
Steinberg::Vst::StringListParameter::StringListParameter(StringListParameter *this,void *param_1)

{
  *(undefined4 *)(this + 8) = 1;
  *(undefined ***)this = &PTR_queryInterface_00703f90;
  memcpy(this + 0x10,param_1,0x318);
  *(undefined8 *)(this + 0x328) = *(undefined8 *)((long)param_1 + 0x308);
  *(undefined4 *)(this + 0x330) = 4;
  *(undefined ***)this = &PTR_queryInterface_00704170;
  *(undefined8 *)(this + 0x338) = 0;
  *(undefined8 *)(this + 0x340) = 0;
  *(undefined8 *)(this + 0x348) = 0;
  return;
}


