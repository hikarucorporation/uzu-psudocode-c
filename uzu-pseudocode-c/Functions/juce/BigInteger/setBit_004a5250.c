// Function : setBit
// Namespace: juce:BigInteger
// Entry    : 004a5250
// Prototype: BigInteger * setBit(BigInteger * this, uint param_1)
// Body     : 004a5250 - 004a5310


/* juce::BigInteger::setBit(int) */

BigInteger * __thiscall juce::BigInteger::setBit(BigInteger *this,uint param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  BigInteger *pBVar3;
  undefined8 *puVar4;
  BigInteger *pBVar5;
  long lVar6;
  ulong uVar7;
  
  if (-1 < (int)param_1) {
    if (*(int *)(this + 0x20) < (int)param_1) {
      uVar7 = (ulong)((param_1 >> 5) + 1);
      uVar1 = *(ulong *)(this + 0x18);
      if (uVar1 < uVar7) {
        uVar7 = uVar7 * 3 + 6 >> 1;
        *(ulong *)(this + 0x18) = uVar7;
        if (*(void **)this == (void *)0x0) {
          free((void *)0x0);
          puVar4 = calloc(uVar7,4);
          *(undefined8 **)this = puVar4;
          uVar2 = *(undefined8 *)(this + 0x10);
          *puVar4 = *(undefined8 *)(this + 8);
          puVar4[1] = uVar2;
        }
        else {
          pBVar3 = realloc(*(void **)this,uVar7 << 2);
          *(BigInteger **)this = pBVar3;
          lVar6 = *(ulong *)(this + 0x18) - uVar1;
          if (uVar1 <= *(ulong *)(this + 0x18) && lVar6 != 0) {
            pBVar5 = this + 8;
            if (pBVar3 != (BigInteger *)0x0) {
              pBVar5 = pBVar3;
            }
            memset(pBVar5 + uVar1 * 4,0,lVar6 * 4);
          }
        }
      }
      *(uint *)(this + 0x20) = param_1;
    }
    pBVar3 = this + 8;
    if (*(BigInteger **)this != (BigInteger *)0x0) {
      pBVar3 = *(BigInteger **)this;
    }
    *(uint *)(pBVar3 + (ulong)(param_1 >> 5) * 4) =
         *(uint *)(pBVar3 + (ulong)(param_1 >> 5) * 4) | 1 << ((byte)param_1 & 0x1f);
  }
  return this;
}


