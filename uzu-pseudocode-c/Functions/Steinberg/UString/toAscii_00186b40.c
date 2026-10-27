// Function : toAscii
// Namespace: Steinberg:UString
// Entry    : 00186b40
// Prototype: undefined toAscii(UString * this, long param_1, uint param_2)
// Body     : 00186b40 - 00186b97


/* Steinberg::UString::toAscii(char*, int) const */

void __thiscall Steinberg::UString::toAscii(UString *this,long param_1,uint param_2)

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
      *(undefined1 *)(param_1 + -1 + uVar4) = *(undefined1 *)(lVar2 + -2 + uVar4 * 2);
      if (*(short *)(lVar2 + -2 + uVar4 * 2) == 0) break;
      bVar5 = uVar4 < uVar3;
      uVar4 = uVar4 + 1;
    } while (bVar5);
  }
  *(undefined1 *)((long)(int)param_2 + -1 + param_1) = 0;
  return;
}


