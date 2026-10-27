// Function : ProgramListWithPitchNames
// Namespace: Steinberg:Vst:ProgramListWithPitchNames
// Entry    : 00194510
// Prototype: undefined ProgramListWithPitchNames(ProgramListWithPitchNames * this, long param_1, undefined4 param_2, undefined4 param_3)
// Body     : 00194510 - 0019461f


/* Steinberg::Vst::ProgramListWithPitchNames::ProgramListWithPitchNames(char16_t const*, int, int)
    */

void __thiscall
Steinberg::Vst::ProgramListWithPitchNames::ProgramListWithPitchNames
          (ProgramListWithPitchNames *this,long param_1,undefined4 param_2,undefined4 param_3)

{
  short sVar1;
  ulong uVar2;
  bool bVar3;
  short local_124 [127];
  undefined2 local_26;
  
  *(undefined4 *)(this + 8) = 1;
  memset(this + 0xc,0,0x108);
  *(undefined4 *)(this + 0x114) = param_3;
  *(undefined8 *)(this + 0x118) = 0;
  *(undefined8 *)(this + 0x120) = 0;
  *(undefined8 *)(this + 0x128) = 0;
  *(undefined8 *)(this + 0x130) = 0;
  *(undefined8 *)(this + 0x138) = 0;
  *(undefined8 *)(this + 0x140) = 0;
  *(undefined8 *)(this + 0x148) = 0;
  local_124[0] = 0;
  if (param_1 != 0) {
    uVar2 = 0;
    do {
      sVar1 = *(short *)(param_1 + uVar2 * 2);
      local_124[uVar2] = sVar1;
      if (sVar1 == 0) break;
      bVar3 = uVar2 < 0x7f;
      uVar2 = uVar2 + 1;
    } while (bVar3);
    local_26 = 0;
  }
  uVar2 = 0;
  do {
    sVar1 = local_124[uVar2];
    *(short *)(this + uVar2 * 2 + 0x10) = sVar1;
    if (sVar1 == 0) break;
    bVar3 = uVar2 < 0x7f;
    uVar2 = uVar2 + 1;
  } while (bVar3);
  *(undefined2 *)(this + 0x10e) = 0;
  *(undefined4 *)(this + 0xc) = param_2;
  *(undefined4 *)(this + 0x110) = 0;
  *(undefined ***)this = &PTR_queryInterface_00703ec0;
  *(undefined8 *)(this + 0x150) = 0;
  *(undefined8 *)(this + 0x158) = 0;
  *(undefined8 *)(this + 0x160) = 0;
  return;
}


