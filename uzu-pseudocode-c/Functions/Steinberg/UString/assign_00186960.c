// Function : assign
// Namespace: Steinberg:UString
// Entry    : 00186960
// Prototype: UString * assign(UString * this, long param_1, uint param_2)
// Body     : 00186960 - 001869b7


/* Steinberg::UString::assign(char16_t const*, int) */

UString * __thiscall Steinberg::UString::assign(UString *this,long param_1,uint param_2)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  ulong uVar4;
  bool bVar5;
  
  lVar2 = *(long *)this;
  uVar1 = *(uint *)(this + 8);
  uVar3 = uVar1;
  if ((int)param_2 < (int)uVar1) {
    uVar3 = param_2;
  }
  if ((int)param_2 < 0) {
    uVar3 = uVar1;
  }
  if (0 < (int)uVar3) {
    uVar4 = 1;
    do {
      *(undefined2 *)(lVar2 + -2 + uVar4 * 2) = *(undefined2 *)(param_1 + -2 + uVar4 * 2);
      if (*(short *)(param_1 + -2 + uVar4 * 2) == 0) break;
      bVar5 = uVar4 < uVar3;
      uVar4 = uVar4 + 1;
    } while (bVar5);
  }
  *(undefined2 *)(lVar2 + -2 + (long)(int)uVar1 * 2) = 0;
  return this;
}


