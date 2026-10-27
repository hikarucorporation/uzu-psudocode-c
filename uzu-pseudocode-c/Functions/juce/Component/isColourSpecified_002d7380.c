// Function : isColourSpecified
// Namespace: juce:Component
// Entry    : 002d7380
// Prototype: ulong isColourSpecified(Component * this, uint param_1)
// Body     : 002d7380 - 002d7458


/* juce::Component::isColourSpecified(int) const */

ulong __thiscall juce::Component::isColourSpecified(Component *this,uint param_1)

{
  Component *pCVar1;
  Component *pCVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  byte *pbVar7;
  byte *pbVar8;
  int *piVar9;
  bool bVar10;
  undefined1 *local_30 [4];
  byte abStack_f [5];
  byte local_a [2];
  
  uVar5 = (ulong)param_1;
  local_a[1] = 0;
  pbVar8 = abStack_f;
  do {
    pbVar7 = pbVar8;
    uVar4 = (uint)uVar5;
    pbVar7[5] = "0123456789abcdef"[uVar4 & 0xf];
    uVar5 = uVar5 >> 4;
    pbVar8 = pbVar7 + -1;
  } while (0xf < uVar4);
  pbVar7[3] = 0x72;
  pbVar7[4] = 0x5f;
  pbVar8[0] = 0x6a;
  pbVar8[1] = 99;
  pbVar8[2] = 99;
  pbVar8[3] = 0x6c;
  Identifier::Identifier((Identifier *)local_30,pbVar8);
  pCVar1 = this + 0xd4;
  if ((long)*(int *)pCVar1 == 0) {
    this = (Component *)0x0;
  }
  else {
    pCVar2 = this + 200;
    lVar6 = 0;
    do {
      bVar10 = *(undefined1 **)(*(long *)pCVar2 + lVar6) == local_30[0];
      this = (Component *)CONCAT71((int7)((ulong)this >> 8),bVar10);
      if (bVar10) break;
      bVar10 = (long)*(int *)pCVar1 * 0x18 + -0x18 != lVar6;
      lVar6 = lVar6 + 0x18;
    } while (bVar10);
  }
  if (local_30[0] != &DAT_0061ac58) {
    piVar9 = (int *)(local_30[0] + -0x10);
    LOCK();
    iVar3 = *piVar9;
    *piVar9 = *piVar9 + -1;
    UNLOCK();
    if (iVar3 == 0) {
      operator_delete__(piVar9);
      return (ulong)this & 0xffffffff;
    }
  }
  return (ulong)this & 0xffffffff;
}


