// Function : BusList
// Namespace: Steinberg:Vst:BusList
// Entry    : 00190ba0
// Prototype: undefined BusList(BusList * this, undefined4 param_1, undefined4 param_2)
// Body     : 00190ba0 - 00190bc6


/* Steinberg::Vst::BusList::BusList(int, int) */

void __thiscall
Steinberg::Vst::BusList::BusList(BusList *this,undefined4 param_1,undefined4 param_2)

{
  *(undefined4 *)(this + 8) = 1;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined ***)this = &PTR_queryInterface_00704e00;
  *(undefined4 *)(this + 0x28) = param_1;
  *(undefined4 *)(this + 0x2c) = param_2;
  return;
}


