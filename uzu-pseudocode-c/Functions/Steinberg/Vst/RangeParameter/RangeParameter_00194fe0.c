// Function : RangeParameter
// Namespace: Steinberg:Vst:RangeParameter
// Entry    : 00194fe0
// Prototype: undefined RangeParameter(RangeParameter * this)
// Body     : 00194fe0 - 00195021


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Steinberg::Vst::RangeParameter::RangeParameter() */

void __thiscall Steinberg::Vst::RangeParameter::RangeParameter(RangeParameter *this)

{
  undefined8 uVar1;
  
  *(undefined4 *)(this + 8) = 1;
  memset(this + 0x10,0,800);
  *(undefined4 *)(this + 0x330) = 4;
  *(undefined ***)this = &PTR_queryInterface_00704070;
  uVar1 = _DAT_005d9000;
  *(undefined8 *)(this + 0x338) = 0;
  *(undefined8 *)(this + 0x340) = uVar1;
  return;
}


