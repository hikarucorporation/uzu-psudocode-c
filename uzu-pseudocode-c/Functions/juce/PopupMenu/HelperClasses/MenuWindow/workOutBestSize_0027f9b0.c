// Function : workOutBestSize
// Namespace: juce:PopupMenu:HelperClasses:MenuWindow
// Entry    : 0027f9b0
// Prototype: int workOutBestSize(MenuWindow * this, int param_1)
// Body     : 0027f9b0 - 0027fe17


/* juce::PopupMenu::HelperClasses::MenuWindow::workOutBestSize(int) */

int __thiscall
juce::PopupMenu::HelperClasses::MenuWindow::workOutBestSize(MenuWindow *this,int param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  long lVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int *piVar11;
  MenuWindow *pMVar12;
  Desktop *this_00;
  LookAndFeel_V4 *pLVar13;
  void *pvVar14;
  ulong uVar15;
  ulong uVar16;
  long lVar17;
  int iVar18;
  ulong uVar19;
  int iVar20;
  long lVar21;
  int *piVar22;
  ulong uVar23;
  int iVar24;
  long lVar25;
  uint uVar26;
  int iVar27;
  int iVar28;
  int iVar29;
  int iVar30;
  
  *(undefined4 *)(this + 0x180) = 0;
  uVar26 = *(uint *)(this + 0x17c);
  uVar16 = (ulong)uVar26;
  if ((int)uVar26 < 1) {
    piVar22 = *(int **)(this + 0x198);
  }
  else {
    lVar25 = 0;
    iVar20 = 0;
    do {
      iVar10 = *(int *)(this + 0x138);
      iVar18 = (int)uVar16;
      uVar26 = *(int *)(this + 0x154) - iVar20;
      uVar8 = (iVar18 + *(int *)(this + 0x154) + -1) / iVar18;
      if ((int)uVar8 < (int)uVar26) {
        uVar26 = uVar8;
      }
      if ((int)uVar26 < 1) {
        iVar24 = 0;
      }
      else {
        uVar16 = (ulong)uVar26;
        iVar24 = 0;
        if (uVar26 == 1) {
          uVar16 = 1;
        }
        else {
          uVar15 = (ulong)(uVar26 & 0xfffffffe);
          lVar17 = *(long *)(this + 0x148) + (long)iVar20 * 8;
          iVar24 = 0;
          do {
            lVar21 = *(long *)(lVar17 + -8 + uVar16 * 8);
            iVar9 = *(int *)(lVar21 + 0x40);
            if (iVar10 < iVar9) {
              iVar10 = iVar9;
            }
            lVar7 = *(long *)(lVar17 + -0x10 + uVar16 * 8);
            uVar16 = uVar16 - 2;
            iVar9 = *(int *)(lVar7 + 0x40);
            if (iVar10 < iVar9) {
              iVar10 = iVar9;
            }
            iVar24 = iVar24 + *(int *)(lVar21 + 0x44) + *(int *)(lVar7 + 0x44);
            uVar15 = uVar15 - 2;
          } while (uVar15 != 0);
        }
        if ((uVar26 & 1) != 0) {
          lVar17 = *(long *)(*(long *)(this + 0x148) + -8 + (uVar16 + (long)iVar20) * 8);
          iVar9 = *(int *)(lVar17 + 0x40);
          if (iVar10 < iVar9) {
            iVar10 = iVar9;
          }
          iVar24 = iVar24 + *(int *)(lVar17 + 0x44);
        }
      }
      if (iVar18 < 4) {
        iVar18 = 3;
      }
      iVar18 = param_1 / (iVar18 + -2);
      pMVar12 = this;
      do {
        if ((*(long *)(pMVar12 + 0x68) != 0) &&
           (pLVar13 = *(LookAndFeel_V4 **)(*(long *)(pMVar12 + 0x68) + 0x10),
           pLVar13 != (LookAndFeel_V4 *)0x0)) goto LAB_0027fb87;
        pMVar12 = *(MenuWindow **)(pMVar12 + 0x30);
      } while (pMVar12 != (MenuWindow *)0x0);
      if (Desktop::instance == (Desktop *)0x0) {
                    /* try { // try from 0027fb5c to 0027fb65 has its CatchHandler @ 0027fe2b */
        this_00 = operator_new(0x1d0);
                    /* try { // try from 0027fb69 to 0027fb70 has its CatchHandler @ 0027fe18 */
        Desktop::Desktop(this_00);
        Desktop::instance = this_00;
      }
      pLVar13 = Desktop::getDefaultLookAndFeel(Desktop::instance);
LAB_0027fb87:
      iVar9 = (**(code **)(*(long *)(pLVar13 + 0x40) + 0xc0))(pLVar13 + 0x40,this + 0xf8);
      iVar10 = iVar10 + iVar9 * 2;
      if (iVar10 < iVar18) {
        iVar18 = iVar10;
      }
      iVar10 = *(int *)(this + 0x1a4);
      lVar17 = (long)iVar10;
      if (lVar25 < lVar17) {
        piVar22 = *(int **)(this + 0x198);
        piVar11 = piVar22 + lVar25;
      }
      else {
        if ((int)*(uint *)(this + 0x1a0) <= iVar10) {
          uVar8 = iVar10 + ((iVar10 - (iVar10 + 1 >> 0x1f)) + 1 >> 1) + 9U & 0xfffffff8;
          if (*(uint *)(this + 0x1a0) != uVar8) {
            if ((int)uVar8 < 1) {
              free(*(void **)(this + 0x198));
              *(undefined8 *)(this + 0x198) = 0;
            }
            else {
              pvVar14 = realloc(*(void **)(this + 0x198),(ulong)uVar8 << 2);
              *(void **)(this + 0x198) = pvVar14;
            }
          }
          *(uint *)(this + 0x1a0) = uVar8;
          iVar10 = *(int *)(this + 0x1a4);
          lVar17 = (long)iVar10;
        }
        *(int *)(this + 0x1a4) = iVar10 + 1;
        piVar22 = *(int **)(this + 0x198);
        piVar11 = piVar22 + lVar17;
      }
      *piVar11 = iVar18;
      iVar10 = *(int *)(this + 0x180);
      if (*(int *)(this + 0x180) < iVar24) {
        iVar10 = iVar24;
      }
      *(int *)(this + 0x180) = iVar10;
      iVar20 = iVar20 + uVar26;
      lVar25 = lVar25 + 1;
      uVar26 = *(uint *)(this + 0x17c);
      uVar16 = (ulong)(int)uVar26;
    } while (lVar25 < (long)uVar16);
  }
  iVar20 = *(int *)(this + 0x1a4);
  lVar25 = (long)iVar20;
  if (lVar25 == 0) {
    if (*(int *)(this + 300) < param_1) {
      param_1 = *(int *)(this + 300);
    }
    if (param_1 < 0) {
      return 0;
    }
    return param_1;
  }
  uVar16 = lVar25 - 1U & 0x3fffffffffffffff;
  iVar10 = 0;
  piVar11 = piVar22;
  if (6 < uVar16) {
    uVar16 = uVar16 + 1;
    uVar23 = uVar16 & 0xfffffffffffffff8;
    uVar15 = (uVar23 - 8 >> 3) + 1;
    uVar19 = (ulong)((uint)uVar15 & 3);
    if (uVar23 - 8 < 0x18) {
      iVar10 = 0;
      iVar18 = 0;
      iVar24 = 0;
      iVar9 = 0;
      lVar17 = 0;
      iVar27 = 0;
      iVar28 = 0;
      iVar29 = 0;
      iVar30 = 0;
    }
    else {
      uVar15 = uVar15 & 0x3ffffffffffffffc;
      iVar10 = 0;
      iVar18 = 0;
      iVar24 = 0;
      iVar9 = 0;
      lVar17 = 0;
      iVar27 = 0;
      iVar28 = 0;
      iVar29 = 0;
      iVar30 = 0;
      do {
        piVar11 = piVar22 + lVar17;
        piVar1 = piVar22 + lVar17 + 4;
        piVar2 = piVar22 + lVar17 + 8;
        piVar3 = piVar22 + lVar17 + 0xc;
        piVar4 = piVar22 + lVar17 + 0x10;
        piVar5 = piVar22 + lVar17 + 0x14;
        piVar6 = piVar22 + lVar17 + 0x18;
        iVar10 = *piVar6 + *piVar4 + *piVar2 + *piVar11 + iVar10;
        iVar18 = piVar6[1] + piVar4[1] + piVar2[1] + piVar11[1] + iVar18;
        iVar24 = piVar6[2] + piVar4[2] + piVar2[2] + piVar11[2] + iVar24;
        iVar9 = piVar6[3] + piVar4[3] + piVar2[3] + piVar11[3] + iVar9;
        piVar11 = piVar22 + lVar17 + 0x1c;
        iVar27 = *piVar11 + *piVar5 + *piVar3 + *piVar1 + iVar27;
        iVar28 = piVar11[1] + piVar5[1] + piVar3[1] + piVar1[1] + iVar28;
        iVar29 = piVar11[2] + piVar5[2] + piVar3[2] + piVar1[2] + iVar29;
        iVar30 = piVar11[3] + piVar5[3] + piVar3[3] + piVar1[3] + iVar30;
        lVar17 = lVar17 + 0x20;
        uVar15 = uVar15 - 4;
      } while (uVar15 != 0);
    }
    if (uVar19 != 0) {
      lVar21 = 0;
      do {
        piVar11 = (int *)((long)piVar22 + lVar21 + lVar17 * 4);
        iVar10 = iVar10 + *piVar11;
        iVar18 = iVar18 + piVar11[1];
        iVar24 = iVar24 + piVar11[2];
        iVar9 = iVar9 + piVar11[3];
        piVar11 = (int *)((long)piVar22 + lVar21 + lVar17 * 4 + 0x10);
        iVar27 = iVar27 + *piVar11;
        iVar28 = iVar28 + piVar11[1];
        iVar29 = iVar29 + piVar11[2];
        iVar30 = iVar30 + piVar11[3];
        lVar21 = lVar21 + 0x20;
      } while (uVar19 * 0x20 != lVar21);
    }
    iVar10 = iVar9 + iVar30 + iVar18 + iVar28 + iVar24 + iVar29 + iVar10 + iVar27;
    if (uVar16 == uVar23) goto LAB_0027fdbb;
    piVar11 = piVar22 + uVar23;
  }
  do {
    iVar10 = iVar10 + *piVar11;
    piVar11 = piVar11 + 1;
  } while (piVar11 != piVar22 + lVar25);
LAB_0027fdbb:
  if (*(int *)(this + 300) < param_1) {
    param_1 = *(int *)(this + 300);
  }
  if (iVar10 < param_1) {
    *piVar22 = param_1 / (int)uVar26;
    if (iVar20 != 1) {
      lVar17 = 4;
      do {
        *(int *)((long)piVar22 + lVar17) = param_1 / *(int *)(this + 0x17c);
        lVar17 = lVar17 + 4;
      } while (lVar25 * 4 != lVar17);
    }
    iVar10 = param_1;
  }
  return iVar10;
}


