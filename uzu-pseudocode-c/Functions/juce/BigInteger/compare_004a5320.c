// Function : compare
// Namespace: juce:BigInteger
// Entry    : 004a5320
// Prototype: int compare(BigInteger * this, long * param_1)
// Body     : 004a5320 - 004a54bb


/* juce::BigInteger::compare(juce::BigInteger const&) const */

int __thiscall juce::BigInteger::compare(BigInteger *this,long *param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  long *plVar4;
  BigInteger *pBVar5;
  ulong uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  bool bVar11;
  bool bVar12;
  
  if (this[0x24] != (BigInteger)0x0) {
    pBVar5 = this + 8;
    if (*(BigInteger **)this != (BigInteger *)0x0) {
      pBVar5 = *(BigInteger **)this;
    }
    if (-1 < (int)*(uint *)(this + 0x20)) {
      uVar10 = *(uint *)(this + 0x20) >> 5;
      do {
        if (*(int *)(pBVar5 + (ulong)uVar10 * 4) != 0) {
          bVar12 = (uVar10 & 0x4000000) == 0;
          cVar1 = *(char *)((long)param_1 + 0x24);
          goto joined_r0x004a53a1;
        }
        bVar12 = 0 < (int)uVar10;
        uVar10 = uVar10 - 1;
      } while (bVar12);
    }
  }
  bVar12 = false;
  cVar1 = *(char *)((long)param_1 + 0x24);
joined_r0x004a53a1:
  if (cVar1 != '\0') {
    plVar4 = param_1 + 1;
    if ((long *)*param_1 != (long *)0x0) {
      plVar4 = (long *)*param_1;
    }
    if (-1 < (int)*(uint *)(param_1 + 4)) {
      uVar10 = *(uint *)(param_1 + 4) >> 5;
      do {
        if (*(int *)((long)plVar4 + (ulong)uVar10 * 4) != 0) {
          bVar11 = bVar12;
          if (((uVar10 & 0x4000000) == 0) == bVar12) goto LAB_004a53c4;
          goto LAB_004a53a8;
        }
        bVar11 = 0 < (int)uVar10;
        uVar10 = uVar10 - 1;
      } while (bVar11);
    }
  }
  bVar11 = false;
  if (bVar12 != false) {
LAB_004a53a8:
    return (uint)(bVar12 ^ 1) * 2 + -1;
  }
LAB_004a53c4:
  pBVar5 = this + 8;
  if (*(BigInteger **)this != (BigInteger *)0x0) {
    pBVar5 = *(BigInteger **)this;
  }
  uVar10 = 0xffffffff;
  if (-1 < (int)*(uint *)(this + 0x20)) {
    uVar10 = *(uint *)(this + 0x20) >> 5;
    uVar7 = uVar10 << 5;
LAB_004a53f0:
    uVar8 = *(uint *)(pBVar5 + (ulong)uVar10 * 4);
    if (uVar8 == 0) goto code_r0x004a53f9;
    uVar10 = 0x1f;
    if (uVar8 != 0) {
      for (; uVar8 >> uVar10 == 0; uVar10 = uVar10 - 1) {
      }
    }
    uVar10 = (uVar10 ^ 0x1f | uVar7) ^ 0x1f;
  }
LAB_004a541c:
  plVar4 = param_1 + 1;
  if ((long *)*param_1 != (long *)0x0) {
    plVar4 = (long *)*param_1;
  }
  if (-1 < (int)*(uint *)(param_1 + 4)) {
    uVar7 = *(uint *)(param_1 + 4) >> 5;
    uVar8 = uVar7 << 5;
LAB_004a5440:
    uVar2 = *(uint *)((long)plVar4 + (ulong)uVar7 * 4);
    if (uVar2 == 0) goto code_r0x004a5449;
    uVar7 = 0x1f;
    if (uVar2 != 0) {
      for (; uVar2 >> uVar7 == 0; uVar7 = uVar7 - 1) {
      }
    }
    uVar7 = (uVar7 ^ 0x1f | uVar8) ^ 0x1f;
    iVar9 = 1;
    bVar12 = SBORROW4(uVar10,uVar7);
    iVar3 = uVar10 - uVar7;
    if ((int)uVar7 < (int)uVar10) goto LAB_004a54b1;
    goto LAB_004a547a;
  }
LAB_004a5455:
  iVar9 = 1;
  bVar12 = SBORROW4(uVar10,-1);
  iVar3 = uVar10 + 1;
  if ((int)uVar10 < 0) {
LAB_004a547a:
    iVar9 = -1;
    if ((bVar12 == iVar3 < 0) && (iVar9 = 0, -1 < (int)uVar10)) {
      uVar6 = (ulong)(uVar10 >> 5);
      do {
        uVar10 = *(uint *)((long)plVar4 + uVar6 * 4);
        if (*(uint *)(pBVar5 + uVar6 * 4) != uVar10) {
          iVar9 = (uint)(uVar10 < *(uint *)(pBVar5 + uVar6 * 4)) * 2 + -1;
          break;
        }
        iVar3 = (int)uVar6;
        uVar6 = uVar6 - 1;
      } while (0 < iVar3);
    }
  }
LAB_004a54b1:
  iVar3 = -iVar9;
  if (bVar11 == false) {
    iVar3 = iVar9;
  }
  return iVar3;
code_r0x004a53f9:
  uVar7 = uVar7 - 0x20;
  bVar12 = (int)uVar10 < 1;
  uVar10 = uVar10 - 1;
  if (bVar12) goto code_r0x004a5405;
  goto LAB_004a53f0;
code_r0x004a5405:
  uVar10 = 0xffffffff;
  goto LAB_004a541c;
code_r0x004a5449:
  uVar8 = uVar8 - 0x20;
  bVar12 = (int)uVar7 < 1;
  uVar7 = uVar7 - 1;
  if (bVar12) goto LAB_004a5455;
  goto LAB_004a5440;
}


