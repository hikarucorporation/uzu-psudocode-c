// Function : findNext
// Namespace: Steinberg:ConstString
// Entry    : 0017c630
// Prototype: ulong findNext(ConstString * this, undefined8 param_2_00, ushort param_2, int param_3, uint param_4)
// Body     : 0017c630 - 0017c6f8


/* Steinberg::ConstString::findNext(int, char16_t, Steinberg::ConstString::CompareMode, int) const
    */

ulong __thiscall
Steinberg::ConstString::findNext
          (ConstString *this,undefined8 param_2_00,ushort param_2,int param_3,uint param_4)

{
  uint uVar1;
  ulong uVar2;
  ushort uVar3;
  uint uVar4;
  
  uVar1 = *(uint *)(this + 0x10) & 0x3fffffff;
  uVar4 = param_4 + 1;
  if (uVar1 <= param_4) {
    uVar4 = uVar1;
  }
  if ((int)param_4 < 0) {
    uVar4 = uVar1;
  }
  if ((*(uint *)(this + 0x10) & 0x40000000) == 0) {
    if (param_2 != 0) {
      uVar3 = 0x5f;
      if (param_2 < 0x80) {
        uVar3 = param_2;
      }
      uVar2 = findNext(this,(uint)param_2_00,(char)uVar3,param_3,param_4);
      return uVar2;
    }
  }
  else {
    uVar1 = 0;
    if (-1 < (int)(uint)param_2_00) {
      uVar1 = (uint)param_2_00;
    }
    if (param_3 == 0) {
      if (uVar1 < uVar4) {
        do {
          if (*(ushort *)(*(long *)(this + 8) + (ulong)uVar1 * 2) == param_2) goto LAB_0017c6f4;
          uVar1 = uVar1 + 1;
        } while (uVar4 != uVar1);
      }
    }
    else if (uVar1 < uVar4) {
      do {
        if (*(ushort *)(*(long *)(this + 8) + (ulong)uVar1 * 2) == param_2) {
LAB_0017c6f4:
          return (ulong)uVar1;
        }
        uVar1 = uVar1 + 1;
      } while (uVar4 != uVar1);
    }
  }
  return 0xffffffff;
}


