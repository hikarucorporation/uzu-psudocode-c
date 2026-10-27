// Function : append
// Namespace: Steinberg:UString
// Entry    : 001869c0
// Prototype: UString * append(UString * this, long param_1, uint param_2)
// Body     : 001869c0 - 00186a7a


/* Steinberg::UString::append(char16_t const*, int) */

UString * __thiscall Steinberg::UString::append(UString *this,long param_1,uint param_2)

{
  short sVar1;
  short *psVar2;
  int iVar3;
  ulong uVar4;
  uint uVar5;
  short *psVar6;
  ulong uVar7;
  uint uVar8;
  bool bVar9;
  
  psVar2 = *(short **)this;
  uVar8 = *(uint *)(this + 8);
  uVar7 = (ulong)uVar8;
  if (uVar7 == 0) {
    uVar4 = 0;
  }
  else if ((int)uVar8 < 1) {
    uVar4 = 0xffffffff;
    psVar6 = psVar2;
    do {
      uVar4 = (ulong)((int)uVar4 + 1);
      sVar1 = *psVar6;
      psVar6 = psVar6 + 1;
    } while (sVar1 != 0);
  }
  else {
    uVar4 = 0;
    do {
      if (psVar2[uVar4] == 0) goto LAB_00186a1d;
      uVar4 = uVar4 + 1;
    } while (uVar7 != uVar4);
    uVar4 = uVar7;
  }
LAB_00186a1d:
  iVar3 = (int)uVar4;
  uVar8 = uVar8 - iVar3;
  uVar5 = uVar8;
  if ((int)param_2 < (int)uVar8) {
    uVar5 = param_2;
  }
  if ((int)param_2 < 0) {
    uVar5 = uVar8;
  }
  if (0 < (int)uVar5) {
    uVar7 = 1;
    do {
      psVar2[(long)iVar3 + (uVar7 - 1)] = *(short *)(param_1 + -2 + uVar7 * 2);
      if (*(short *)(param_1 + -2 + uVar7 * 2) == 0) break;
      bVar9 = uVar7 < uVar5;
      uVar7 = uVar7 + 1;
    } while (bVar9);
  }
  psVar2[(long)iVar3 + (long)(int)uVar8 + -1] = 0;
  return this;
}


