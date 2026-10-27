// Function : workOutManualSize
// Namespace: juce:PopupMenu:HelperClasses:MenuWindow
// Entry    : 0027f400
// Prototype: undefined workOutManualSize(MenuWindow * this, int param_1)
// Body     : 0027f400 - 0027f976


/* juce::PopupMenu::HelperClasses::MenuWindow::workOutManualSize(int) */

void __thiscall
juce::PopupMenu::HelperClasses::MenuWindow::workOutManualSize(MenuWindow *this,int param_1)

{
  long *plVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  long *plVar9;
  int iVar10;
  int iVar11;
  long *plVar12;
  MenuWindow *pMVar13;
  void *pvVar14;
  Desktop *pDVar15;
  LookAndFeel_V4 *pLVar16;
  ulong uVar17;
  long lVar18;
  int *piVar19;
  uint uVar20;
  ulong uVar21;
  int iVar22;
  long lVar23;
  ulong uVar24;
  long lVar25;
  ulong uVar26;
  long *plVar27;
  long *plVar28;
  int iVar29;
  int iVar30;
  int iVar31;
  int iVar32;
  int iVar33;
  
  *(undefined4 *)(this + 0x180) = 0;
  *(undefined4 *)(this + 0x1a4) = 0;
  if (*(int *)(this + 0x1a0) != 0) {
    free(*(void **)(this + 0x198));
    *(undefined8 *)(this + 0x198) = 0;
  }
  *(undefined4 *)(this + 0x1a0) = 0;
  if ((long)*(int *)(this + 0x154) != 0) {
    plVar1 = *(long **)(this + 0x148) + *(int *)(this + 0x154);
    plVar28 = *(long **)(this + 0x148);
    do {
      uVar17 = (long)plVar1 - (long)plVar28;
      plVar27 = plVar1;
      if ((long)uVar17 < 0x20) {
        lVar18 = (long)uVar17 >> 3;
        plVar12 = plVar28;
        if (lVar18 != 1) goto LAB_0027f58d;
LAB_0027f5bc:
        if (*(char *)(*plVar12 + 0x158) != '\0') {
LAB_0027f5e0:
          plVar27 = plVar12 + 1;
          if (plVar12 == plVar1) {
            plVar27 = plVar1;
          }
        }
      }
      else {
        lVar18 = (uVar17 >> 5) + 1;
        plVar9 = plVar28 + 2;
        do {
          plVar12 = plVar9;
          if (*(char *)(plVar12[-2] + 0x158) != '\0') {
            plVar12 = plVar12 + -2;
            goto LAB_0027f5e0;
          }
          if (*(char *)(plVar12[-1] + 0x158) != '\0') {
            plVar12 = plVar12 + -1;
            goto LAB_0027f5e0;
          }
          if (*(char *)(*plVar12 + 0x158) != '\0') goto LAB_0027f5e0;
          if (*(char *)(plVar12[1] + 0x158) != '\0') {
            plVar12 = plVar12 + 1;
            goto LAB_0027f5e0;
          }
          lVar18 = lVar18 + -1;
          uVar17 = uVar17 - 0x20;
          plVar9 = plVar12 + 4;
        } while (1 < lVar18);
        plVar12 = plVar12 + 2;
        lVar18 = (long)uVar17 >> 3;
        if (lVar18 == 1) goto LAB_0027f5bc;
LAB_0027f58d:
        if (lVar18 == 2) {
LAB_0027f5ac:
          if (*(char *)(*plVar12 + 0x158) == '\0') {
            plVar12 = plVar12 + 1;
            goto LAB_0027f5bc;
          }
          goto LAB_0027f5e0;
        }
        if (lVar18 == 3) {
          if (*(char *)(*plVar12 + 0x158) == '\0') {
            plVar12 = plVar12 + 1;
            goto LAB_0027f5ac;
          }
          goto LAB_0027f5e0;
        }
      }
      iVar11 = *(int *)(this + 0x138);
      if (plVar28 != plVar27) {
        plVar12 = plVar28;
        do {
          if (iVar11 < *(int *)(*plVar12 + 0x40)) {
            iVar11 = *(int *)(*plVar12 + 0x40);
          }
          plVar12 = plVar12 + 1;
        } while (plVar12 != plVar27);
      }
      iVar22 = *(int *)(this + 0x17c);
      if (iVar22 < 4) {
        iVar22 = 3;
      }
      iVar22 = param_1 / (iVar22 + -2);
      pMVar13 = this;
      do {
        if ((*(long *)(pMVar13 + 0x68) != 0) &&
           (pLVar16 = *(LookAndFeel_V4 **)(*(long *)(pMVar13 + 0x68) + 0x10),
           pLVar16 != (LookAndFeel_V4 *)0x0)) goto LAB_0027f693;
        pMVar13 = *(MenuWindow **)(pMVar13 + 0x30);
      } while (pMVar13 != (MenuWindow *)0x0);
      if (Desktop::instance == (Desktop *)0x0) {
                    /* try { // try from 0027f66c to 0027f675 has its CatchHandler @ 0027f9a5 */
        pDVar15 = operator_new(0x1d0);
                    /* try { // try from 0027f679 to 0027f680 has its CatchHandler @ 0027f992 */
        Desktop::Desktop(pDVar15);
        Desktop::instance = pDVar15;
      }
      pLVar16 = Desktop::getDefaultLookAndFeel(Desktop::instance);
LAB_0027f693:
      iVar10 = (**(code **)(*(long *)(pLVar16 + 0x40) + 0xc0))(pLVar16 + 0x40,this + 0xf8);
      iVar11 = iVar11 + iVar10 * 2;
      if (iVar11 < iVar22) {
        iVar22 = iVar11;
      }
      iVar11 = 0;
      for (; plVar28 != plVar27; plVar28 = plVar28 + 1) {
        iVar11 = iVar11 + *(int *)(*plVar28 + 0x44);
      }
      iVar10 = *(int *)(this + 0x180);
      if (*(int *)(this + 0x180) < iVar11) {
        iVar10 = iVar11;
      }
      *(int *)(this + 0x180) = iVar10;
      iVar11 = *(int *)(this + 0x1a4);
      if ((int)*(uint *)(this + 0x1a0) <= iVar11) {
        uVar20 = iVar11 + ((iVar11 - (iVar11 + 1 >> 0x1f)) + 1 >> 1) + 9U & 0xfffffff8;
        if (*(uint *)(this + 0x1a0) != uVar20) {
          if ((int)uVar20 < 1) {
            free(*(void **)(this + 0x198));
            *(undefined8 *)(this + 0x198) = 0;
          }
          else {
            pvVar14 = realloc(*(void **)(this + 0x198),(ulong)uVar20 << 2);
            *(void **)(this + 0x198) = pvVar14;
          }
        }
        *(uint *)(this + 0x1a0) = uVar20;
        iVar11 = *(int *)(this + 0x1a4);
      }
      *(int *)(this + 0x1a4) = iVar11 + 1;
      *(int *)(*(long *)(this + 0x198) + (long)iVar11 * 4) = iVar22;
      plVar28 = plVar27;
    } while (plVar27 != plVar1);
  }
  pMVar13 = this;
  do {
    if ((*(long *)(pMVar13 + 0x68) != 0) &&
       (pLVar16 = *(LookAndFeel_V4 **)(*(long *)(pMVar13 + 0x68) + 0x10),
       pLVar16 != (LookAndFeel_V4 *)0x0)) goto LAB_0027f7c0;
    pMVar13 = *(MenuWindow **)(pMVar13 + 0x30);
  } while (pMVar13 != (MenuWindow *)0x0);
  if (Desktop::instance == (Desktop *)0x0) {
                    /* try { // try from 0027f799 to 0027f7a2 has its CatchHandler @ 0027f98a */
    pDVar15 = operator_new(0x1d0);
                    /* try { // try from 0027f7a6 to 0027f7ad has its CatchHandler @ 0027f977 */
    Desktop::Desktop(pDVar15);
    Desktop::instance = pDVar15;
  }
  pLVar16 = Desktop::getDefaultLookAndFeel(Desktop::instance);
LAB_0027f7c0:
  iVar11 = (**(code **)(*(long *)(pLVar16 + 0x40) + 0xc0))(pLVar16 + 0x40,this + 0xf8);
  *(int *)(this + 0x180) = *(int *)(this + 0x180) + iVar11 * 2;
  lVar18 = (long)*(int *)(this + 0x1a4);
  if (lVar18 == 0) {
    return;
  }
  piVar8 = *(int **)(this + 0x198);
  uVar17 = lVar18 - 1U & 0x3fffffffffffffff;
  iVar11 = 0;
  piVar19 = piVar8;
  if (6 < uVar17) {
    uVar17 = uVar17 + 1;
    uVar26 = uVar17 & 0xfffffffffffffff8;
    uVar24 = (uVar26 - 8 >> 3) + 1;
    uVar21 = (ulong)((uint)uVar24 & 3);
    if (uVar26 - 8 < 0x18) {
      iVar11 = 0;
      iVar22 = 0;
      iVar10 = 0;
      iVar29 = 0;
      lVar25 = 0;
      iVar30 = 0;
      iVar31 = 0;
      iVar32 = 0;
      iVar33 = 0;
    }
    else {
      uVar24 = uVar24 & 0x3ffffffffffffffc;
      iVar11 = 0;
      iVar22 = 0;
      iVar10 = 0;
      iVar29 = 0;
      lVar25 = 0;
      iVar30 = 0;
      iVar31 = 0;
      iVar32 = 0;
      iVar33 = 0;
      do {
        piVar19 = piVar8 + lVar25;
        piVar2 = piVar8 + lVar25 + 4;
        piVar3 = piVar8 + lVar25 + 8;
        piVar4 = piVar8 + lVar25 + 0xc;
        piVar5 = piVar8 + lVar25 + 0x10;
        piVar6 = piVar8 + lVar25 + 0x14;
        piVar7 = piVar8 + lVar25 + 0x18;
        iVar11 = *piVar7 + *piVar5 + *piVar3 + *piVar19 + iVar11;
        iVar22 = piVar7[1] + piVar5[1] + piVar3[1] + piVar19[1] + iVar22;
        iVar10 = piVar7[2] + piVar5[2] + piVar3[2] + piVar19[2] + iVar10;
        iVar29 = piVar7[3] + piVar5[3] + piVar3[3] + piVar19[3] + iVar29;
        piVar19 = piVar8 + lVar25 + 0x1c;
        iVar30 = *piVar19 + *piVar6 + *piVar4 + *piVar2 + iVar30;
        iVar31 = piVar19[1] + piVar6[1] + piVar4[1] + piVar2[1] + iVar31;
        iVar32 = piVar19[2] + piVar6[2] + piVar4[2] + piVar2[2] + iVar32;
        iVar33 = piVar19[3] + piVar6[3] + piVar4[3] + piVar2[3] + iVar33;
        lVar25 = lVar25 + 0x20;
        uVar24 = uVar24 - 4;
      } while (uVar24 != 0);
    }
    if (uVar21 != 0) {
      lVar23 = 0;
      do {
        piVar19 = (int *)((long)piVar8 + lVar23 + lVar25 * 4);
        iVar11 = iVar11 + *piVar19;
        iVar22 = iVar22 + piVar19[1];
        iVar10 = iVar10 + piVar19[2];
        iVar29 = iVar29 + piVar19[3];
        piVar19 = (int *)((long)piVar8 + lVar23 + lVar25 * 4 + 0x10);
        iVar30 = iVar30 + *piVar19;
        iVar31 = iVar31 + piVar19[1];
        iVar32 = iVar32 + piVar19[2];
        iVar33 = iVar33 + piVar19[3];
        lVar23 = lVar23 + 0x20;
      } while (uVar21 * 0x20 != lVar23);
    }
    iVar11 = iVar29 + iVar33 + iVar22 + iVar31 + iVar10 + iVar32 + iVar11 + iVar30;
    if (uVar17 == uVar26) goto LAB_0027f92b;
    piVar19 = piVar8 + uVar26;
  }
  do {
    iVar11 = iVar11 + *piVar19;
    piVar19 = piVar19 + 1;
  } while (piVar19 != piVar8 + lVar18);
LAB_0027f92b:
  if (*(int *)(this + 300) < param_1) {
    param_1 = *(int *)(this + 300);
  }
  if (iVar11 < param_1) {
    lVar25 = 0;
    do {
      *(int *)((long)piVar8 + lVar25) = param_1 / *(int *)(this + 0x17c);
      lVar25 = lVar25 + 4;
    } while (lVar18 * 4 != lVar25);
  }
  return;
}


