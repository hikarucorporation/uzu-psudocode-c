// Function : Unit
// Namespace: Steinberg:Vst:Unit
// Entry    : 001939c0
// Prototype: undefined Unit(Unit * this, long param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4)
// Body     : 001939c0 - 00193a69


/* Steinberg::Vst::Unit::Unit(char16_t const*, int, int, int) */

void __thiscall
Steinberg::Vst::Unit::Unit
          (Unit *this,long param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  short sVar1;
  ulong uVar2;
  bool bVar3;
  short local_104 [127];
  undefined2 local_6;
  
  *(undefined4 *)(this + 8) = 1;
  *(undefined ***)this = &PTR_queryInterface_00704e88;
  local_104[0] = 0;
  if (param_1 != 0) {
    uVar2 = 0;
    do {
      sVar1 = *(short *)(param_1 + uVar2 * 2);
      local_104[uVar2] = sVar1;
      if (sVar1 == 0) break;
      bVar3 = uVar2 < 0x7f;
      uVar2 = uVar2 + 1;
    } while (bVar3);
    local_6 = 0;
  }
  uVar2 = 0;
  do {
    sVar1 = local_104[uVar2];
    *(short *)(this + uVar2 * 2 + 0x14) = sVar1;
    if (sVar1 == 0) break;
    bVar3 = uVar2 < 0x7f;
    uVar2 = uVar2 + 1;
  } while (bVar3);
  *(undefined2 *)(this + 0x112) = 0;
  *(undefined4 *)(this + 0xc) = param_2;
  *(undefined4 *)(this + 0x10) = param_3;
  *(undefined4 *)(this + 0x114) = param_4;
  return;
}


