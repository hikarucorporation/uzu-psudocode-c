// Function : processDisplay
// Namespace: juce
// Entry    : 001de3e0
// Prototype: undefined processDisplay(long * param_1, undefined8 * param_2)
// Body     : 001de3e0 - 001dea7e


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::processDisplay(juce::DisplayNode*, juce::Array<juce::DisplayNode,
   juce::DummyCriticalSection, 0>&) */

void __cdecl juce::processDisplay(long *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 auVar4 [16];
  uint uVar5;
  void *__ptr;
  long *plVar6;
  long lVar7;
  int iVar8;
  uint uVar9;
  double dVar10;
  double dVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined4 uVar20;
  undefined4 uVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  ulong uVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  undefined1 auVar32 [16];
  
  lVar7 = *param_1;
  dVar27 = (double)(int)*(undefined8 *)(lVar7 + 4);
  dVar28 = (double)(int)((ulong)*(undefined8 *)(lVar7 + 4) >> 0x20);
  dVar29 = (double)(int)*(undefined8 *)(lVar7 + 0xc);
  dVar30 = (double)(int)((ulong)*(undefined8 *)(lVar7 + 0xc) >> 0x20);
  uVar2 = *(undefined8 *)(lVar7 + 0x50);
  uVar20 = (undefined4)uVar2;
  uVar21 = (undefined4)((ulong)uVar2 >> 0x20);
  if ((char)param_1[1] != '\0') {
    auVar12._8_8_ = dVar28;
    auVar12._0_8_ = dVar27;
    auVar13._8_4_ = uVar20;
    auVar13._0_8_ = uVar2;
    auVar13._12_4_ = uVar21;
    auVar13 = divpd(auVar12,auVar13);
    auVar18._8_8_ = dVar30;
    auVar18._0_8_ = dVar29;
    auVar19._8_4_ = uVar20;
    auVar19._0_8_ = uVar2;
    auVar19._12_4_ = uVar21;
    auVar19 = divpd(auVar18,auVar19);
    *(undefined1 (*) [16])(param_1 + 3) = auVar13;
    *(undefined1 (*) [16])(param_1 + 5) = auVar19;
    param_1[2] = (long)param_1;
    iVar8 = *(int *)((long)param_2 + 0xc);
    uVar26 = _DAT_005d91b0;
    dVar17 = DAT_005d94e0;
    dVar11 = DAT_005db368;
    goto joined_r0x001de9fd;
  }
  auVar32._8_8_ = dVar30;
  auVar32._0_8_ = dVar29;
  plVar6 = (long *)param_1[2];
  lVar7 = *plVar6;
  dVar15 = (double)*(int *)(lVar7 + 4);
  dVar31 = (double)*(int *)(lVar7 + 8);
  auVar4._8_4_ = uVar20;
  auVar4._0_8_ = uVar2;
  auVar4._12_4_ = uVar21;
  auVar13 = divpd(auVar32,auVar4);
  dVar17 = *(double *)(lVar7 + 0x50);
  dVar11 = dVar27 + dVar29;
  dVar14 = dVar28 + dVar30;
  dVar16 = (double)((ulong)dVar11 & _DAT_005d91b0);
  if ((dVar16 == DAT_005d94e0) ||
     (dVar22 = (double)((ulong)dVar15 & _DAT_005d91b0), dVar22 == DAT_005d94e0)) {
    if ((dVar11 == dVar15) && (!NAN(dVar11) && !NAN(dVar15))) goto LAB_001de9b1;
LAB_001de853:
    dVar15 = dVar15 + (double)*(int *)(lVar7 + 0xc);
    dVar11 = (double)((ulong)dVar27 & _DAT_005d91b0);
    if ((dVar11 != DAT_005d94e0) &&
       (dVar16 = (double)((ulong)dVar15 & _DAT_005d91b0), dVar16 != DAT_005d94e0)) {
      dVar15 = (double)((ulong)(dVar27 - dVar15) & _DAT_005d91b0);
      if (DAT_005db368 < dVar15) {
        if (dVar16 <= dVar11) {
          dVar16 = dVar11;
        }
        if (dVar16 * DAT_005db370 < dVar15) goto LAB_001de8c5;
      }
LAB_001de9d0:
      dVar11 = (double)plVar6[3] + (double)plVar6[5];
      goto LAB_001de9d5;
    }
    if ((dVar15 == dVar27) && (!NAN(dVar15) && !NAN(dVar27))) goto LAB_001de9d0;
LAB_001de8c5:
    dVar11 = (double)((ulong)dVar14 & _DAT_005d91b0);
    if ((dVar11 == DAT_005d94e0) ||
       (dVar15 = (double)((ulong)dVar31 & _DAT_005d91b0), dVar15 == DAT_005d94e0)) {
      if ((dVar14 == dVar31) && (!NAN(dVar14) && !NAN(dVar31))) goto LAB_001dea30;
LAB_001de92b:
      dVar31 = dVar31 + (double)*(int *)(lVar7 + 0x10);
      dVar11 = (double)((ulong)dVar28 & _DAT_005d91b0);
      if ((dVar11 == DAT_005d94e0) ||
         (dVar14 = (double)(_DAT_005d91b0 & (ulong)dVar31), dVar14 == DAT_005d94e0)) {
        if ((dVar31 == dVar28) && (!NAN(dVar31) && !NAN(dVar28))) goto LAB_001dea58;
        dVar11 = 0.0;
        dVar15 = 0.0;
      }
      else {
        dVar16 = (double)((ulong)(dVar28 - dVar31) & _DAT_005d91b0);
        if (DAT_005db368 < dVar16) {
          if (dVar14 <= dVar11) {
            dVar14 = dVar11;
          }
          dVar11 = 0.0;
          dVar15 = 0.0;
          if (dVar14 * DAT_005db370 < dVar16) goto LAB_001de9e4;
        }
LAB_001dea58:
        dVar11 = dVar27 / dVar17;
        dVar15 = (double)plVar6[4] + (double)plVar6[6];
      }
    }
    else {
      dVar14 = (double)((ulong)(dVar14 - dVar31) & _DAT_005d91b0);
      if (DAT_005db368 < dVar14) {
        if (dVar15 <= dVar11) {
          dVar15 = dVar11;
        }
        if (dVar15 * DAT_005db370 < dVar14) goto LAB_001de92b;
      }
LAB_001dea30:
      dVar11 = dVar27 / dVar17;
      dVar15 = (double)plVar6[4] - auVar13._8_8_;
    }
  }
  else {
    dVar11 = (double)((ulong)(dVar11 - dVar15) & _DAT_005d91b0);
    if (DAT_005db368 < dVar11) {
      if (dVar22 <= dVar16) {
        dVar22 = dVar16;
      }
      if (dVar22 * DAT_005db370 < dVar11) goto LAB_001de853;
    }
LAB_001de9b1:
    dVar11 = (double)plVar6[3] - auVar13._0_8_;
LAB_001de9d5:
    dVar15 = dVar28 / dVar17;
  }
LAB_001de9e4:
  param_1[3] = (long)dVar11;
  param_1[4] = (long)dVar15;
  *(undefined1 (*) [16])(param_1 + 5) = auVar13;
  iVar8 = *(int *)((long)param_2 + 0xc);
  uVar26 = _DAT_005d91b0;
  dVar17 = DAT_005d94e0;
  dVar11 = DAT_005db368;
joined_r0x001de9fd:
  _DAT_005d91b0 = uVar26;
  DAT_005d94e0 = dVar17;
  DAT_005db368 = dVar11;
  if ((long)iVar8 == 0) {
    __ptr = (void *)0x0;
  }
  else {
    uVar5 = 0;
    plVar6 = (long *)*param_2;
    dVar29 = dVar29 + dVar27;
    dVar30 = dVar30 + dVar28;
    dVar31 = (double)((ulong)dVar29 & uVar26);
    dVar15 = (double)((ulong)dVar27 & uVar26);
    dVar14 = (double)((ulong)dVar30 & uVar26);
    dVar16 = (double)((ulong)dVar28 & uVar26);
    lVar7 = (long)iVar8 * 0x38;
    __ptr = (void *)0x0;
    iVar8 = 0;
    do {
      while( true ) {
        if (plVar6[2] != 0) goto LAB_001de4f0;
        lVar3 = *plVar6;
        dVar22 = (double)*(int *)(lVar3 + 4);
        dVar10 = (double)*(int *)(lVar3 + 8);
        dVar23 = (double)((ulong)dVar22 & uVar26);
        if ((dVar23 == dVar17) || (dVar31 == dVar17)) break;
        dVar24 = (double)((ulong)(dVar22 - dVar29) & uVar26);
        if (dVar11 < dVar24) {
          dVar25 = dVar31;
          if (dVar31 <= dVar23) {
            dVar25 = dVar23;
          }
          if (dVar25 * DAT_005db370 < dVar24) goto LAB_001de586;
        }
LAB_001de6b0:
        plVar6[2] = (long)param_1;
        iVar1 = iVar8 + 1;
        if ((iVar8 < (int)uVar5) || (uVar9 = iVar1 / 2 + iVar8 + 9U & 0xfffffff8, uVar5 == uVar9)) {
        }
        else {
          if ((int)uVar9 < 1) {
            free(__ptr);
            __ptr = (void *)0x0;
          }
          else {
            __ptr = realloc(__ptr,(ulong)uVar9 << 3);
          }
          uVar26 = _DAT_005d91b0;
          dVar11 = DAT_005db368;
          uVar5 = uVar9;
          dVar17 = DAT_005d94e0;
        }
        *(long **)((long)__ptr + (long)iVar8 * 8) = plVar6;
        plVar6 = plVar6 + 7;
        lVar7 = lVar7 + -0x38;
        iVar8 = iVar1;
        if (lVar7 == 0) goto LAB_001de74f;
      }
      if ((dVar29 == dVar22) && (!NAN(dVar29) && !NAN(dVar22))) goto LAB_001de6b0;
LAB_001de586:
      dVar22 = dVar22 + (double)*(int *)(lVar3 + 0xc);
      dVar23 = (double)((ulong)dVar22 & uVar26);
      if ((dVar23 != dVar17) && (dVar15 != dVar17)) {
        dVar22 = (double)((ulong)(dVar22 - dVar27) & uVar26);
        if (dVar11 < dVar22) {
          dVar24 = dVar15;
          if (dVar15 <= dVar23) {
            dVar24 = dVar23;
          }
          if (dVar24 * DAT_005db370 < dVar22) goto LAB_001de5e0;
        }
        goto LAB_001de6b0;
      }
      if ((dVar22 == dVar27) && (!NAN(dVar22) && !NAN(dVar27))) goto LAB_001de6b0;
LAB_001de5e0:
      dVar22 = (double)((ulong)dVar10 & uVar26);
      if ((dVar22 != dVar17) && (dVar14 != dVar17)) {
        dVar23 = (double)((ulong)(dVar10 - dVar30) & uVar26);
        if (dVar11 < dVar23) {
          dVar24 = dVar14;
          if (dVar14 <= dVar22) {
            dVar24 = dVar22;
          }
          if (dVar24 * DAT_005db370 < dVar23) goto LAB_001de644;
        }
        goto LAB_001de6b0;
      }
      if ((dVar30 == dVar10) && (!NAN(dVar30) && !NAN(dVar10))) goto LAB_001de6b0;
LAB_001de644:
      dVar10 = dVar10 + (double)*(int *)(lVar3 + 0x10);
      dVar22 = (double)((ulong)dVar10 & uVar26);
      if ((dVar22 != dVar17) && (dVar16 != dVar17)) {
        dVar10 = (double)((ulong)(dVar10 - dVar28) & uVar26);
        if (dVar11 < dVar10) {
          uVar20 = SUB84(dVar16,0);
          uVar21 = (undefined4)((ulong)dVar16 >> 0x20);
          if (dVar16 <= dVar22) {
            uVar20 = SUB84(dVar22,0);
            uVar21 = (undefined4)((ulong)dVar22 >> 0x20);
          }
          if ((double)CONCAT44(uVar21,uVar20) * DAT_005db370 < dVar10) goto LAB_001de4f0;
        }
        goto LAB_001de6b0;
      }
      if ((dVar10 == dVar28) && (!NAN(dVar10) && !NAN(dVar28))) goto LAB_001de6b0;
LAB_001de4f0:
      plVar6 = plVar6 + 7;
      lVar7 = lVar7 + -0x38;
    } while (lVar7 != 0);
LAB_001de74f:
    if (iVar8 != 0) {
      lVar7 = 0;
      do {
                    /* try { // try from 001de774 to 001de77b has its CatchHandler @ 001dea7f */
        processDisplay(*(long **)((long)__ptr + lVar7),param_2);
        lVar7 = lVar7 + 8;
      } while ((long)iVar8 * 8 != lVar7);
    }
  }
  free(__ptr);
  return;
}


