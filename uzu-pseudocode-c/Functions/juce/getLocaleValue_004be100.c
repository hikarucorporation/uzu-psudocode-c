// Function : getLocaleValue
// Namespace: juce
// Entry    : 004be100
// Prototype: undefined getLocaleValue(juce * this, nl_item param_1)
// Body     : 004be100 - 004be2aa


/* juce::getLocaleValue(int) */

void __thiscall juce::getLocaleValue(juce *this,nl_item param_1)

{
  int iVar1;
  byte *pbVar2;
  byte *pbVar3;
  undefined4 *puVar4;
  byte *pbVar5;
  byte bVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  
  pbVar2 = (byte *)setlocale(6,(char *)0x0);
  pbVar3 = &DAT_0061ac58;
  if ((pbVar2 != (byte *)0x0) && (bVar6 = *pbVar2, bVar6 != 0)) {
    lVar8 = 0;
    pbVar3 = pbVar2;
    do {
      pbVar3 = pbVar3 + 1;
      lVar7 = lVar8 + (ulong)(bVar6 >> 7);
      lVar8 = lVar7 + 1;
      bVar6 = *pbVar3;
    } while (bVar6 != 0);
    uVar9 = lVar7 + 5U & 0xfffffffffffffffc;
    puVar4 = operator_new__(uVar9 + 0x17);
    LOCK();
    *puVar4 = 0;
    UNLOCK();
    *(ulong *)(puVar4 + 2) = uVar9;
    pbVar3 = (byte *)(puVar4 + 4);
    bVar6 = *pbVar2;
    pbVar5 = pbVar3;
    if (bVar6 != 0) {
      do {
        pbVar2 = pbVar2 + 1;
        if ((char)bVar6 < '\0') {
          *pbVar5 = bVar6 >> 6 | 0xc0;
          pbVar5[1] = bVar6 & 0x3f | 0x80;
          pbVar5 = pbVar5 + 1;
        }
        else {
          *pbVar5 = bVar6;
        }
        pbVar5 = pbVar5 + 1;
        bVar6 = *pbVar2;
      } while (bVar6 != 0);
    }
    *pbVar5 = 0;
  }
  pbVar2 = pbVar3 + -0x10;
  if (pbVar2 != (byte *)&emptyString) {
    LOCK();
    *(int *)(pbVar3 + -0x10) = *(int *)(pbVar3 + -0x10) + 1;
    UNLOCK();
    LOCK();
    *(int *)(pbVar3 + -0x10) = *(int *)(pbVar3 + -0x10) + 1;
    UNLOCK();
    LOCK();
    pbVar5 = pbVar3 + -0x10;
    iVar1 = *(int *)pbVar5;
    *(int *)pbVar5 = *(int *)pbVar5 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      operator_delete__(pbVar2);
    }
  }
  setlocale(6,"");
  pbVar5 = (byte *)nl_langinfo(param_1);
  if (pbVar5 == (byte *)0x0) {
    puVar4 = (undefined4 *)&DAT_0061ac58;
  }
  else {
                    /* try { // try from 004be22c to 004be233 has its CatchHandler @ 004be2ab */
    puVar4 = StringHolderUtils::createFromCharPointer<juce::CharPointer_UTF8>(pbVar5);
  }
  *(undefined4 **)this = puVar4;
  setlocale(6,(char *)pbVar3);
  pbVar3 = pbVar3 + -0x10;
  if (pbVar3 != (byte *)&emptyString) {
    LOCK();
    iVar1 = *(int *)pbVar3;
    *(int *)pbVar3 = *(int *)pbVar3 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      operator_delete__(pbVar3);
    }
  }
  if (pbVar2 != (byte *)&emptyString) {
    LOCK();
    iVar1 = *(int *)pbVar2;
    *(int *)pbVar2 = *(int *)pbVar2 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      operator_delete__(pbVar2);
      return;
    }
  }
  return;
}


