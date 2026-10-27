// Function : findPrev
// Namespace: Steinberg:ConstString
// Entry    : 0017c850
// Prototype: ulong findPrev(ConstString * this, ulong param_2_00, ushort param_2, int param_3)
// Body     : 0017c850 - 0017c909


/* Steinberg::ConstString::findPrev(int, char16_t, Steinberg::ConstString::CompareMode) const */

ulong __thiscall
Steinberg::ConstString::findPrev(ConstString *this,ulong param_2_00,ushort param_2,int param_3)

{
  ulong uVar1;
  uint uVar2;
  ushort uVar3;
  int iVar4;
  uint uVar5;
  
  uVar5 = *(uint *)(this + 0x10) & 0x3fffffff;
  if (uVar5 != 0) {
    uVar2 = (uint)param_2_00;
    if ((*(uint *)(this + 0x10) & 0x40000000) == 0) {
      if (param_2 != 0) {
        uVar3 = 0x5f;
        if (param_2 < 0x80) {
          uVar3 = param_2;
        }
        uVar1 = findPrev(this,uVar2,(char)uVar3,param_3);
        return uVar1;
      }
    }
    else {
      uVar1 = param_2_00 & 0xffffffff;
      if ((int)uVar5 < (int)uVar2) {
        uVar1 = (ulong)uVar5;
      }
      if ((int)uVar2 < 0) {
        uVar1 = (ulong)uVar5;
      }
      if (param_3 == 0) {
        do {
          iVar4 = (int)uVar1;
          if (*(ushort *)(*(long *)(this + 8) + uVar1 * 2) == param_2) {
            return uVar1;
          }
          uVar1 = (ulong)(iVar4 - 1);
        } while (0 < iVar4);
      }
      else {
        do {
          iVar4 = (int)uVar1;
          if (*(ushort *)(*(long *)(this + 8) + uVar1 * 2) == param_2) {
            return uVar1;
          }
          uVar1 = (ulong)(iVar4 - 1);
        } while (0 < iVar4);
      }
    }
  }
  return 0xffffffff;
}


