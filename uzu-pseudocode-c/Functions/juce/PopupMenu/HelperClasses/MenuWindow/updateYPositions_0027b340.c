// Function : updateYPositions
// Namespace: juce:PopupMenu:HelperClasses:MenuWindow
// Entry    : 0027b340
// Prototype: int updateYPositions(MenuWindow * this)
// Body     : 0027b340 - 0027b663


/* juce::PopupMenu::HelperClasses::MenuWindow::updateYPositions() */

int __thiscall juce::PopupMenu::HelperClasses::MenuWindow::updateYPositions(MenuWindow *this)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  byte bVar7;
  Component *this_00;
  int *piVar8;
  int iVar9;
  int iVar10;
  MenuWindow *pMVar11;
  Desktop *pDVar12;
  LookAndFeel_V4 *pLVar13;
  long lVar14;
  ulong uVar15;
  int iVar16;
  ulong uVar17;
  int iVar18;
  long lVar19;
  int *piVar20;
  ulong uVar21;
  ulong uVar22;
  int iVar23;
  uint uVar24;
  long lVar25;
  int iVar26;
  int iVar27;
  int iVar28;
  int iVar29;
  
  pMVar11 = this;
  do {
    if ((*(long *)(pMVar11 + 0x68) != 0) &&
       (pLVar13 = *(LookAndFeel_V4 **)(*(long *)(pMVar11 + 0x68) + 0x10),
       pLVar13 != (LookAndFeel_V4 *)0x0)) goto LAB_0027b3b0;
    pMVar11 = *(MenuWindow **)(pMVar11 + 0x30);
  } while (pMVar11 != (MenuWindow *)0x0);
  if (Desktop::instance == (Desktop *)0x0) {
                    /* try { // try from 0027b389 to 0027b392 has its CatchHandler @ 0027b67b */
    pDVar12 = operator_new(0x1d0);
                    /* try { // try from 0027b396 to 0027b39d has its CatchHandler @ 0027b668 */
    Desktop::Desktop(pDVar12);
    Desktop::instance = pDVar12;
  }
  pLVar13 = Desktop::getDefaultLookAndFeel(Desktop::instance);
LAB_0027b3b0:
  iVar9 = (**(code **)(*(long *)(pLVar13 + 0x40) + 0xd0))(pLVar13 + 0x40,this + 0xf8);
  pMVar11 = this;
  do {
    if ((*(long *)(pMVar11 + 0x68) != 0) &&
       (pLVar13 = *(LookAndFeel_V4 **)(*(long *)(pMVar11 + 0x68) + 0x10),
       pLVar13 != (LookAndFeel_V4 *)0x0)) goto LAB_0027b430;
    pMVar11 = *(MenuWindow **)(pMVar11 + 0x30);
  } while (pMVar11 != (MenuWindow *)0x0);
  if (Desktop::instance == (Desktop *)0x0) {
                    /* try { // try from 0027b409 to 0027b412 has its CatchHandler @ 0027b666 */
    pDVar12 = operator_new(0x1d0);
                    /* try { // try from 0027b416 to 0027b41d has its CatchHandler @ 0027b664 */
    Desktop::Desktop(pDVar12);
    Desktop::instance = pDVar12;
  }
  pLVar13 = Desktop::getDefaultLookAndFeel(Desktop::instance);
LAB_0027b430:
  iVar10 = (**(code **)(*(long *)(pLVar13 + 0x40) + 0xc0))(pLVar13 + 0x40,this + 0xf8);
  iVar26 = *(int *)(this + 0x154);
  if ((long)iVar26 != 0) {
    iVar18 = (iVar10 - (*(int *)(this + 0x184) + *(int *)(this + 0x3c))) + *(int *)(this + 0x16c);
    lVar14 = *(long *)(this + 0x148);
    lVar25 = 0;
    uVar24 = 0;
    iVar23 = 0;
    iVar10 = iVar18;
    do {
      iVar16 = 0;
      if (uVar24 < *(uint *)(this + 0x1a4)) {
        iVar16 = *(int *)(*(long *)(this + 0x198) + (ulong)uVar24 * 4);
      }
      this_00 = *(Component **)(lVar14 + lVar25);
      Component::setBounds(this_00,iVar23,iVar10,iVar16,*(int *)(this_00 + 0x44));
      lVar19 = *(long *)(lVar14 + lVar25);
      bVar7 = *(byte *)(lVar19 + 0x158);
      iVar16 = iVar16 + iVar9;
      iVar10 = iVar10 + *(int *)(lVar19 + 0x44);
      if (bVar7 != 0) {
        iVar10 = iVar18;
      }
      if (bVar7 == 0) {
        iVar16 = 0;
      }
      iVar23 = iVar23 + iVar16;
      uVar24 = uVar24 + bVar7;
      lVar25 = lVar25 + 8;
    } while ((long)iVar26 << 3 != lVar25);
  }
  lVar14 = (long)*(int *)(this + 0x1a4);
  if (lVar14 == 0) {
    iVar26 = 0;
  }
  else {
    piVar8 = *(int **)(this + 0x198);
    uVar15 = lVar14 - 1U & 0x3fffffffffffffff;
    iVar26 = 0;
    piVar20 = piVar8;
    if (6 < uVar15) {
      uVar15 = uVar15 + 1;
      uVar22 = uVar15 & 0xfffffffffffffff8;
      uVar21 = (uVar22 - 8 >> 3) + 1;
      uVar17 = (ulong)((uint)uVar21 & 3);
      if (uVar22 - 8 < 0x18) {
        iVar26 = 0;
        iVar10 = 0;
        iVar18 = 0;
        iVar23 = 0;
        lVar25 = 0;
        iVar16 = 0;
        iVar27 = 0;
        iVar28 = 0;
        iVar29 = 0;
      }
      else {
        uVar21 = uVar21 & 0x3ffffffffffffffc;
        iVar26 = 0;
        iVar10 = 0;
        iVar18 = 0;
        iVar23 = 0;
        lVar25 = 0;
        iVar16 = 0;
        iVar27 = 0;
        iVar28 = 0;
        iVar29 = 0;
        do {
          piVar20 = piVar8 + lVar25;
          piVar1 = piVar8 + lVar25 + 4;
          piVar2 = piVar8 + lVar25 + 8;
          piVar3 = piVar8 + lVar25 + 0xc;
          piVar4 = piVar8 + lVar25 + 0x10;
          piVar5 = piVar8 + lVar25 + 0x14;
          piVar6 = piVar8 + lVar25 + 0x18;
          iVar26 = *piVar6 + *piVar4 + *piVar2 + *piVar20 + iVar26;
          iVar10 = piVar6[1] + piVar4[1] + piVar2[1] + piVar20[1] + iVar10;
          iVar18 = piVar6[2] + piVar4[2] + piVar2[2] + piVar20[2] + iVar18;
          iVar23 = piVar6[3] + piVar4[3] + piVar2[3] + piVar20[3] + iVar23;
          piVar20 = piVar8 + lVar25 + 0x1c;
          iVar16 = *piVar20 + *piVar5 + *piVar3 + *piVar1 + iVar16;
          iVar27 = piVar20[1] + piVar5[1] + piVar3[1] + piVar1[1] + iVar27;
          iVar28 = piVar20[2] + piVar5[2] + piVar3[2] + piVar1[2] + iVar28;
          iVar29 = piVar20[3] + piVar5[3] + piVar3[3] + piVar1[3] + iVar29;
          lVar25 = lVar25 + 0x20;
          uVar21 = uVar21 - 4;
        } while (uVar21 != 0);
      }
      if (uVar17 != 0) {
        lVar19 = 0;
        do {
          piVar20 = (int *)((long)piVar8 + lVar19 + lVar25 * 4);
          iVar26 = iVar26 + *piVar20;
          iVar10 = iVar10 + piVar20[1];
          iVar18 = iVar18 + piVar20[2];
          iVar23 = iVar23 + piVar20[3];
          piVar20 = (int *)((long)piVar8 + lVar19 + lVar25 * 4 + 0x10);
          iVar16 = iVar16 + *piVar20;
          iVar27 = iVar27 + piVar20[1];
          iVar28 = iVar28 + piVar20[2];
          iVar29 = iVar29 + piVar20[3];
          lVar19 = lVar19 + 0x20;
        } while (uVar17 * 0x20 != lVar19);
      }
      iVar26 = iVar23 + iVar29 + iVar10 + iVar27 + iVar18 + iVar28 + iVar26 + iVar16;
      if (uVar15 == uVar22) goto LAB_0027b64b;
      piVar20 = piVar8 + uVar22;
    }
    do {
      iVar26 = iVar26 + *piVar20;
      piVar20 = piVar20 + 1;
    } while (piVar20 != piVar8 + lVar14);
  }
LAB_0027b64b:
  return (*(int *)(this + 0x1a4) + -1) * iVar9 + iVar26;
}


