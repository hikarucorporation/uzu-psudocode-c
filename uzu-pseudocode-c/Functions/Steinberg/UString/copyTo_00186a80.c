// Function : copyTo
// Namespace: Steinberg:UString
// Entry    : 00186a80
// Prototype: undefined copyTo(UString * this, long param_1, uint param_2)
// Body     : 00186a80 - 00186ada


/* Steinberg::UString::copyTo(char16_t*, int) const */

void __thiscall Steinberg::UString::copyTo(UString *this,long param_1,uint param_2)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  ulong uVar4;
  bool bVar5;
  
  uVar1 = *(uint *)(this + 8);
  uVar3 = param_2;
  if ((int)uVar1 < (int)param_2) {
    uVar3 = uVar1;
  }
  if ((int)uVar1 < 0) {
    uVar3 = param_2;
  }
  if (0 < (int)uVar3) {
    lVar2 = *(long *)this;
    uVar4 = 1;
    do {
      *(undefined2 *)(param_1 + -2 + uVar4 * 2) = *(undefined2 *)(lVar2 + -2 + uVar4 * 2);
      if (*(short *)(lVar2 + -2 + uVar4 * 2) == 0) break;
      bVar5 = uVar4 < uVar3;
      uVar4 = uVar4 + 1;
    } while (bVar5);
  }
  *(undefined2 *)(param_1 + -2 + (long)(int)param_2 * 2) = 0;
  return;
}


