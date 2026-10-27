// Function : copyColourIfSpecified
// Namespace: juce
// Entry    : 00249480
// Prototype: undefined copyColourIfSpecified(Component * param_1, long param_2, uint param_3, uint param_4)
// Body     : 00249480 - 00249642


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::copyColourIfSpecified(juce::Label&, juce::TextEditor&, int, int) */

void __cdecl juce::copyColourIfSpecified(Component *param_1,long param_2,uint param_3,uint param_4)

{
  ulong uVar1;
  Desktop *this;
  LookAndFeel_V4 *pLVar2;
  uint uVar3;
  int iVar4;
  Component *pCVar5;
  int iVar6;
  long lVar7;
  int iVar8;
  byte *pbVar9;
  byte *pbVar10;
  int *piVar11;
  bool bVar12;
  bool bVar13;
  undefined1 *local_50 [4];
  byte abStack_2f [5];
  byte local_2a [2];
  
  local_2a[1] = 0;
  pbVar10 = abStack_2f;
  uVar3 = param_3;
  do {
    pbVar9 = pbVar10;
    pbVar9[5] = "0123456789abcdef"[uVar3 & 0xf];
    pbVar10 = pbVar9 + -1;
    bVar12 = 0xf < uVar3;
    uVar3 = uVar3 >> 4;
  } while (bVar12);
  pbVar9[3] = 0x72;
  pbVar9[4] = 0x5f;
  pbVar10[0] = 0x6a;
  pbVar10[1] = 99;
  pbVar10[2] = 99;
  pbVar10[3] = 0x6c;
  Identifier::Identifier((Identifier *)local_50,pbVar10);
  if ((long)*(int *)(param_1 + 0xd4) == 0) {
    bVar12 = false;
  }
  else {
    lVar7 = 0;
    do {
      bVar12 = *(undefined1 **)(*(long *)(param_1 + 200) + lVar7) == local_50[0];
      if (bVar12) break;
      bVar13 = (long)*(int *)(param_1 + 0xd4) * 0x18 + -0x18 != lVar7;
      lVar7 = lVar7 + 0x18;
    } while (bVar13);
  }
  if (local_50[0] != &DAT_0061ac58) {
    piVar11 = (int *)(local_50[0] + -0x10);
    LOCK();
    iVar4 = *piVar11;
    *piVar11 = *piVar11 + -1;
    UNLOCK();
    if (iVar4 == 0) {
      operator_delete__(piVar11);
    }
  }
  if (bVar12) {
LAB_0024955a:
    uVar1 = Component::findColour(param_1,param_3,'\0');
    Component::setColour((Component *)(param_2 + 8),param_4,(int)uVar1);
  }
  else {
    pCVar5 = param_1;
    do {
      if ((*(long *)(pCVar5 + 0x68) != 0) &&
         (pLVar2 = *(LookAndFeel_V4 **)(*(long *)(pCVar5 + 0x68) + 0x10),
         pLVar2 != (LookAndFeel_V4 *)0x0)) {
        iVar4 = *(int *)(pLVar2 + 0xf4);
        goto joined_r0x002495b3;
      }
      pCVar5 = *(Component **)(pCVar5 + 0x30);
    } while (pCVar5 != (Component *)0x0);
    if (Desktop::instance == (Desktop *)0x0) {
                    /* try { // try from 002495c3 to 002495cc has its CatchHandler @ 00249656 */
      this = operator_new(0x1d0);
                    /* try { // try from 002495d0 to 002495d7 has its CatchHandler @ 00249643 */
      Desktop::Desktop(this);
      Desktop::instance = this;
    }
    pLVar2 = Desktop::getDefaultLookAndFeel(Desktop::instance);
    iVar4 = *(int *)(pLVar2 + 0xf4);
joined_r0x002495b3:
    if (0 < iVar4) {
      iVar6 = 0;
      do {
        while( true ) {
          if (*(uint *)(*(long *)(pLVar2 + 0xe8) + (long)iVar6 * 8) == param_3) {
            if (iVar6 < 0) {
              return;
            }
            goto LAB_0024955a;
          }
          iVar8 = (iVar6 + iVar4) / 2;
          if (iVar8 == iVar6) {
            return;
          }
          if (*(int *)(*(long *)(pLVar2 + 0xe8) + (long)iVar8 * 8) <= (int)param_3) break;
          iVar4 = iVar8;
          if (iVar8 <= iVar6) {
            return;
          }
        }
        iVar6 = iVar8;
      } while (iVar8 < iVar4);
    }
  }
  return;
}


