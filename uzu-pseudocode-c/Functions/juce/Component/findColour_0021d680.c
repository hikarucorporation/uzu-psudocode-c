// Function : findColour
// Namespace: juce:Component
// Entry    : 0021d680
// Prototype: ulong findColour(Component * this, uint param_1, char param_2)
// Body     : 0021d680 - 0021d8b2


/* juce::Component::findColour(int, bool) const */

ulong __thiscall juce::Component::findColour(Component *this,uint param_1,char param_2)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  Desktop *this_00;
  LookAndFeel_V4 *pLVar6;
  uint uVar7;
  int iVar8;
  long *plVar9;
  int iVar10;
  uint uVar11;
  byte *pbVar12;
  byte *pbVar13;
  uint uVar14;
  int *piVar15;
  long local_50 [4];
  byte abStack_2f [5];
  byte local_2a [10];
  
  local_2a[1] = 0;
  pbVar13 = abStack_2f;
  uVar7 = param_1;
  do {
    pbVar12 = pbVar13;
    pbVar12[5] = "0123456789abcdef"[uVar7 & 0xf];
    pbVar13 = pbVar12 + -1;
    bVar1 = 0xf < uVar7;
    uVar7 = uVar7 >> 4;
  } while (bVar1);
  pbVar12[3] = 0x72;
  pbVar12[4] = 0x5f;
  pbVar13[0] = 0x6a;
  pbVar13[1] = 99;
  pbVar13[2] = 99;
  pbVar13[3] = 0x6c;
  Identifier::Identifier((Identifier *)local_50,pbVar13);
  if ((long)*(int *)(this + 0xd4) != 0) {
    plVar9 = (long *)(*(long *)(this + 200) + 8);
    lVar4 = (long)*(int *)(this + 0xd4) * 0x18;
    do {
      if (plVar9[-1] == local_50[0]) goto LAB_0021d722;
      plVar9 = plVar9 + 3;
      lVar4 = lVar4 + -0x18;
    } while (lVar4 != 0);
  }
  plVar9 = (long *)0x0;
LAB_0021d722:
  piVar15 = (int *)(local_50[0] + -0x10);
  if (piVar15 != &emptyString) {
    LOCK();
    iVar2 = *piVar15;
    *piVar15 = *piVar15 + -1;
    UNLOCK();
    if (iVar2 == 0) {
      operator_delete__(piVar15);
    }
  }
  if (plVar9 == (long *)0x0) {
    if ((param_2 == '\0') || (*(Component **)(this + 0x30) == (Component *)0x0)) {
LAB_0021d7e9:
      do {
        if ((*(long *)(this + 0x68) != 0) &&
           (pLVar6 = *(LookAndFeel_V4 **)(*(long *)(this + 0x68) + 0x10),
           pLVar6 != (LookAndFeel_V4 *)0x0)) {
          uVar7 = *(uint *)(pLVar6 + 0xf4);
          goto joined_r0x0021d803;
        }
        this = *(Component **)(this + 0x30);
      } while (this != (Component *)0x0);
      if (Desktop::instance == (Desktop *)0x0) {
                    /* try { // try from 0021d816 to 0021d81f has its CatchHandler @ 0021d8c6 */
        this_00 = operator_new(0x1d0);
                    /* try { // try from 0021d823 to 0021d82a has its CatchHandler @ 0021d8b3 */
        Desktop::Desktop(this_00);
        Desktop::instance = this_00;
      }
      pLVar6 = Desktop::getDefaultLookAndFeel(Desktop::instance);
      uVar7 = *(uint *)(pLVar6 + 0xf4);
joined_r0x0021d803:
      if (0 < (int)uVar7) {
        lVar4 = *(long *)(pLVar6 + 0xe8);
        uVar3 = uVar7;
        uVar11 = 0;
        do {
          while( true ) {
            if (*(uint *)(lVar4 + (long)(int)uVar11 * 8) == param_1) {
              if (-1 < (int)uVar11) {
                if (uVar11 < uVar7) {
                  return (ulong)*(uint *)(lVar4 + 4 + (ulong)uVar11 * 8);
                }
                return 0;
              }
              goto LAB_0021d8a2;
            }
            uVar14 = (int)(uVar11 + uVar3) / 2;
            if (uVar14 == uVar11) goto LAB_0021d8a2;
            if (*(int *)(lVar4 + (long)(int)uVar14 * 8) <= (int)param_1) break;
            uVar3 = uVar14;
            if ((int)uVar14 <= (int)uVar11) goto LAB_0021d8a2;
          }
          uVar11 = uVar14;
        } while ((int)uVar14 < (int)uVar3);
      }
LAB_0021d8a2:
      uVar5 = (ulong)_ZN4juce7ColoursL5blackE_14;
    }
    else {
      if ((*(long *)(this + 0x68) != 0) &&
         ((lVar4 = *(long *)(*(long *)(this + 0x68) + 0x10), lVar4 != 0 &&
          (0 < *(int *)(lVar4 + 0xf4))))) {
        iVar2 = *(int *)(lVar4 + 0xf4);
        iVar8 = 0;
        do {
          while( true ) {
            if (*(uint *)(*(long *)(lVar4 + 0xe8) + (long)iVar8 * 8) == param_1) {
              if (-1 < iVar8) goto LAB_0021d7e9;
              goto LAB_0021d7ce;
            }
            iVar10 = (iVar8 + iVar2) / 2;
            if (iVar10 == iVar8) goto LAB_0021d7ce;
            if (*(int *)(*(long *)(lVar4 + 0xe8) + (long)iVar10 * 8) <= (int)param_1) break;
            iVar2 = iVar10;
            if (iVar10 <= iVar8) goto LAB_0021d7ce;
          }
          iVar8 = iVar10;
        } while (iVar10 < iVar2);
      }
LAB_0021d7ce:
      uVar5 = findColour(*(Component **)(this + 0x30),param_1,'\x01');
    }
  }
  else {
                    /* try { // try from 0021d74c to 0021d751 has its CatchHandler @ 0021d8ce */
    uVar5 = (**(code **)(*plVar9 + 0x10))(plVar9 + 1);
  }
  return uVar5;
}


