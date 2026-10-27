// Function : BigInteger
// Namespace: juce:BigInteger
// Entry    : 004a5010
// Prototype: undefined BigInteger(BigInteger * this, long * param_1)
// Body     : 004a5010 - 004a50df


/* juce::BigInteger::BigInteger(juce::BigInteger const&) */

void __thiscall juce::BigInteger::BigInteger(BigInteger *this,long *param_1)

{
  size_t __size;
  uint uVar1;
  ulong uVar2;
  bool bVar3;
  uint uVar4;
  BigInteger *pBVar5;
  uint uVar6;
  BigInteger *__dest;
  long *plVar7;
  uint uVar8;
  long *plVar9;
  
  *(undefined8 *)this = 0;
  uVar2 = param_1[3];
  *(ulong *)(this + 0x18) = uVar2;
  plVar9 = (long *)*param_1;
  plVar7 = plVar9;
  if (plVar9 == (long *)0x0) {
    plVar7 = param_1 + 1;
  }
  uVar6 = 0xffffffff;
  if (-1 < (int)*(uint *)(param_1 + 4)) {
    uVar4 = *(uint *)(param_1 + 4) >> 5;
    uVar8 = uVar4 << 5;
    do {
      uVar1 = *(uint *)((long)plVar7 + (ulong)uVar4 * 4);
      if (uVar1 != 0) {
        uVar6 = 0x1f;
        if (uVar1 != 0) {
          for (; uVar1 >> uVar6 == 0; uVar6 = uVar6 - 1) {
          }
        }
        uVar6 = (uVar6 ^ 0x1f | uVar8) ^ 0x1f;
        break;
      }
      uVar8 = uVar8 - 0x20;
      bVar3 = 0 < (int)uVar4;
      uVar4 = uVar4 - 1;
    } while (bVar3);
  }
  *(uint *)(this + 0x20) = uVar6;
  this[0x24] = *(BigInteger *)((long)param_1 + 0x24);
  __size = uVar2 * 4;
  if (uVar2 < 5) {
    pBVar5 = (BigInteger *)0x0;
  }
  else {
    if (__size == 0) {
      pBVar5 = (BigInteger *)0x0;
    }
    else {
      pBVar5 = malloc(__size);
    }
    *(BigInteger **)this = pBVar5;
    plVar9 = (long *)*param_1;
  }
  __dest = this + 8;
  if (pBVar5 != (BigInteger *)0x0) {
    __dest = pBVar5;
  }
  plVar7 = param_1 + 1;
  if (plVar9 != (long *)0x0) {
    plVar7 = plVar9;
  }
  memcpy(__dest,plVar7,__size);
  return;
}


