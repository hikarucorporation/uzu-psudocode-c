// Function : RangeParameter
// Namespace: Steinberg:Vst:RangeParameter
// Entry    : 00195030
// Prototype: undefined RangeParameter(undefined8 param_1, undefined8 param_2, RangeParameter * this, void * param_4)
// Body     : 00195030 - 001950b0


/* Steinberg::Vst::RangeParameter::RangeParameter(Steinberg::Vst::ParameterInfo const&, double,
   double) */

void __thiscall
Steinberg::Vst::RangeParameter::RangeParameter
          (undefined8 param_1,undefined8 param_2,RangeParameter *this,void *param_4)

{
  *(undefined4 *)(this + 8) = 1;
  *(undefined ***)this = &PTR_queryInterface_00703f90;
  memcpy(this + 0x10,param_4,0x318);
  *(undefined8 *)(this + 0x328) = *(undefined8 *)((long)param_4 + 0x308);
  *(undefined4 *)(this + 0x330) = 4;
  *(undefined ***)this = &PTR_queryInterface_00704070;
  *(undefined8 *)(this + 0x338) = param_1;
  *(undefined8 *)(this + 0x340) = param_2;
  return;
}


