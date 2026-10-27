// Function : operator=
// Namespace: juce:BigInteger
// Entry    : 004a5140
// Prototype: BigInteger * operator=(BigInteger * this, BigInteger * param_1)
// Body     : 004a5140 - 004a523f


/* juce::BigInteger::TEMPNAMEPLACEHOLDERVALUE(juce::BigInteger const&) */

BigInteger * __thiscall juce::BigInteger::operator=(BigInteger *this,BigInteger *param_1)

{
  uint uVar1;
  bool bVar2;
  uint uVar3;
  ulong uVar4;
  BigInteger *pBVar5;
  uint uVar6;
  ulong uVar7;
  uint uVar8;
  BigInteger *__dest;
  
  if (this != param_1) {
    pBVar5 = *(BigInteger **)param_1;
    if (*(BigInteger **)param_1 == (BigInteger *)0x0) {
      pBVar5 = param_1 + 8;
    }
    uVar3 = 0xffffffff;
    if (-1 < (int)*(uint *)(param_1 + 0x20)) {
      uVar8 = *(uint *)(param_1 + 0x20) >> 5;
      uVar6 = uVar8 << 5;
LAB_004a5180:
      uVar1 = *(uint *)(pBVar5 + (ulong)uVar8 * 4);
      if (uVar1 == 0) goto code_r0x004a5189;
      uVar3 = 0x1f;
      if (uVar1 != 0) {
        for (; uVar1 >> uVar3 == 0; uVar3 = uVar3 - 1) {
        }
      }
      uVar3 = (uVar3 ^ 0x1f | uVar6) ^ 0x1f;
    }
LAB_004a51a2:
    *(uint *)(this + 0x20) = uVar3;
    uVar4 = (ulong)(((int)uVar3 >> 5) + 1);
    uVar7 = 4;
    if (4 < uVar4) {
      uVar7 = uVar4;
    }
    if (uVar7 < 5) {
      free(*(void **)this);
      *(undefined8 *)this = 0;
      pBVar5 = (BigInteger *)0x0;
    }
    else if (uVar7 == *(ulong *)(this + 0x18)) {
      pBVar5 = *(BigInteger **)this;
    }
    else {
      free(*(void **)this);
      pBVar5 = malloc(uVar7 * 4);
      *(BigInteger **)this = pBVar5;
    }
    *(ulong *)(this + 0x18) = uVar7;
    __dest = this + 8;
    if (pBVar5 != (BigInteger *)0x0) {
      __dest = pBVar5;
    }
    pBVar5 = param_1 + 8;
    if (*(BigInteger **)param_1 != (BigInteger *)0x0) {
      pBVar5 = *(BigInteger **)param_1;
    }
    memcpy(__dest,pBVar5,uVar7 << 2);
    this[0x24] = param_1[0x24];
  }
  return this;
code_r0x004a5189:
  uVar6 = uVar6 - 0x20;
  bVar2 = (int)uVar8 < 1;
  uVar8 = uVar8 - 1;
  if (bVar2) goto LAB_004a51a2;
  goto LAB_004a5180;
}


