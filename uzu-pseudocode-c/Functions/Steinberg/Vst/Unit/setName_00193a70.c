// Function : setName
// Namespace: Steinberg:Vst:Unit
// Entry    : 00193a70
// Prototype: undefined setName(Unit * this, long param_1)
// Body     : 00193a70 - 00193afc


/* Steinberg::Vst::Unit::setName(char16_t const*) */

void __thiscall Steinberg::Vst::Unit::setName(Unit *this,long param_1)

{
  short sVar1;
  ulong uVar2;
  bool bVar3;
  short local_104 [127];
  undefined2 local_6;
  
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
  return;
}


