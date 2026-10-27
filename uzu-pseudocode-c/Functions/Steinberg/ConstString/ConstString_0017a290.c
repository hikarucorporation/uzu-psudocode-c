// Function : ConstString
// Namespace: Steinberg:ConstString
// Entry    : 0017a290
// Prototype: undefined ConstString(ConstString * this, long param_1, uint param_2, uint param_3)
// Body     : 0017a290 - 0017a2f6


/* Steinberg::ConstString::ConstString(Steinberg::ConstString const&, int, int) */

void __thiscall
Steinberg::ConstString::ConstString(ConstString *this,long param_1,uint param_2,uint param_3)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  
  *(undefined ***)this = &PTR__ConstString_00704d88;
  lVar1 = *(long *)(param_1 + 8);
  *(long *)(this + 8) = lVar1;
  if ((int)param_3 < 0) {
    uVar2 = 0;
    if (-1 < (int)param_2) {
      uVar2 = param_2;
    }
    param_3 = (*(uint *)(param_1 + 0x10) & 0x3fffffff) - uVar2;
  }
  uVar2 = *(uint *)(this + 0x10);
  *(uint *)(this + 0x10) = uVar2 & 0xc0000000 | param_3 & 0x3fffffff;
  uVar3 = *(uint *)(param_1 + 0x10) & 0x40000000;
  *(uint *)(this + 0x10) = uVar2 & 0x80000000 | param_3 & 0x3fffffff | uVar3;
  if (0 < (int)param_2) {
    if (uVar3 != 0) {
      *(ulong *)(this + 8) = lVar1 + (ulong)param_2 * 2;
      return;
    }
    *(ulong *)(this + 8) = lVar1 + (ulong)param_2;
  }
  return;
}


