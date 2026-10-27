// Function : operator()
// Namespace: AudioPluginAudioProcessor:workerProcessAvailableTick__:__0
// Entry    : 0016e040
// Prototype: undefined operator()(long param_1, int * param_2, int param_3, uint param_4, int * param_5)
// Body     : 0016e040 - 0016e575


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* AudioPluginAudioProcessor::workerProcessAvailableTick()::$_0::TEMPNAMEPLACEHOLDERVALUE(int, int,
   int&) const */

void __cdecl
AudioPluginAudioProcessor::workerProcessAvailableTick()::$_0::operator()
          (long param_1,int *param_2,int param_3,uint param_4,int *param_5)

{
  long lVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  int iVar13;
  uint uVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  
  iVar5 = *param_5;
  if ((int)param_4 < 1) goto LAB_0016e1f6;
  lVar6 = **(long **)(param_1 + 0x2a0);
  lVar7 = *(long *)(param_1 + 0x4f0);
  if (*param_2 < 2) {
    lVar18 = (long)param_3;
    uVar10 = (ulong)param_4;
    if (param_4 < 4) {
LAB_0016e153:
      uVar17 = 0;
    }
    else {
      uVar11 = uVar10 - 1;
      iVar13 = iVar5 * 2;
      uVar14 = (uint)uVar11;
      auVar9._8_8_ = 0;
      auVar9._0_8_ = uVar11;
      lVar20 = SUB168(auVar9 * ZEXT816(8),0);
      uVar17 = 0;
      if ((((iVar13 <= (int)(uVar14 * 2 + iVar5 * 2)) && (!CARRY4(uVar14,uVar14))) &&
          (uVar11 >> 0x20 == 0)) && (iVar5 * 2 + 1 <= (int)(uVar14 * 2 + 1 + iVar5 * 2))) {
        lVar16 = (long)iVar13;
        uVar11 = lVar7 + lVar16 * 4;
        if (((uVar11 <= uVar11 + lVar20) && (SUB168(auVar9 * ZEXT816(8),8) == 0)) &&
           (lVar7 + lVar16 * 4 + 4U <= lVar20 + uVar11 + 4)) {
          if (((ulong)(lVar6 + lVar18 * 4) < lVar7 + (lVar16 + uVar10 * 2) * 4) &&
             (uVar11 < lVar6 + (lVar18 + uVar10) * 4)) goto LAB_0016e153;
          uVar17 = (ulong)(param_4 & 0xfffffffc);
          lVar20 = lVar6 + lVar18 * 4;
          iVar13 = iVar13 + 5;
          uVar11 = 0;
          do {
            uVar3 = *(undefined8 *)(lVar20 + uVar11);
            uVar21 = (undefined4)uVar3;
            uVar22 = (undefined4)((ulong)uVar3 >> 0x20);
            uVar3 = *(undefined8 *)(lVar20 + 8 + uVar11);
            uVar23 = (undefined4)uVar3;
            uVar24 = (undefined4)((ulong)uVar3 >> 0x20);
            puVar2 = (undefined4 *)(lVar7 + -4 + (long)(iVar13 + -4) * 4);
            *puVar2 = uVar21;
            puVar2[1] = uVar21;
            puVar2[2] = uVar22;
            puVar2[3] = uVar22;
            puVar2 = (undefined4 *)(lVar7 + -4 + (long)iVar13 * 4);
            *puVar2 = uVar23;
            puVar2[1] = uVar23;
            puVar2[2] = uVar24;
            puVar2[3] = uVar24;
            uVar11 = uVar11 + 0x10;
            iVar13 = iVar13 + 8;
          } while ((uVar10 * 4 & 0xfffffffffffffff0) != uVar11);
          if (uVar17 == uVar10) goto LAB_0016e1f6;
        }
      }
    }
    uVar11 = ~uVar17;
    if ((param_4 & 1) != 0) {
      iVar13 = iVar5 + (int)uVar17;
      uVar21 = *(undefined4 *)(lVar6 + (uVar17 + lVar18) * 4);
      *(undefined4 *)(lVar7 + (long)(iVar13 * 2) * 4) = uVar21;
      *(undefined4 *)(lVar7 + (long)(iVar13 * 2 + 1) * 4) = uVar21;
      uVar17 = uVar17 | 1;
    }
    if (uVar11 + uVar10 != 0) {
      lVar20 = uVar10 - uVar17;
      lVar6 = lVar6 + (lVar18 + uVar17) * 4;
      lVar18 = 0;
      do {
        iVar13 = (int)uVar17 * 2 + iVar5 * 2 + (int)lVar18;
        uVar21 = *(undefined4 *)(lVar6 + lVar18 * 2);
        *(undefined4 *)(lVar7 + (long)iVar13 * 4) = uVar21;
        *(undefined4 *)(lVar7 + (long)(iVar13 + 1) * 4) = uVar21;
        uVar21 = *(undefined4 *)(lVar6 + 4 + lVar18 * 2);
        *(undefined4 *)(lVar7 + (long)(iVar13 + 2) * 4) = uVar21;
        *(undefined4 *)(lVar7 + (long)(iVar13 + 3) * 4) = uVar21;
        lVar18 = lVar18 + 4;
        lVar20 = lVar20 + -2;
      } while (lVar20 != 0);
    }
    goto LAB_0016e1f6;
  }
  lVar18 = (*(long **)(param_1 + 0x2a0))[1];
  lVar20 = (long)param_3;
  uVar10 = (ulong)param_4;
  if (param_4 < 2) {
LAB_0016e081:
    uVar17 = 0;
  }
  else {
    uVar11 = uVar10 - 1;
    iVar13 = iVar5 * 2;
    uVar14 = (uint)uVar11;
    auVar8._8_8_ = 0;
    auVar8._0_8_ = uVar11;
    lVar16 = SUB168(auVar8 * ZEXT816(8),0);
    if (((((int)(uVar14 * 2 + iVar5 * 2) < iVar13) || (CARRY4(uVar14,uVar14))) ||
        (uVar11 >> 0x20 != 0)) || ((int)(uVar14 * 2 + 1 + iVar5 * 2) < iVar5 * 2 + 1))
    goto LAB_0016e081;
    lVar15 = (long)iVar13;
    uVar11 = lVar7 + lVar15 * 4;
    uVar17 = 0;
    if (((uVar11 <= uVar11 + lVar16) && (SUB168(auVar8 * ZEXT816(8),8) == 0)) &&
       (lVar7 + lVar15 * 4 + 4U <= lVar16 + uVar11 + 4)) {
      uVar12 = lVar7 + (lVar15 + uVar10 * 2) * 4;
      if ((ulong)(lVar6 + lVar20 * 4) < uVar12 && uVar11 < lVar6 + (uVar10 + lVar20) * 4)
      goto LAB_0016e081;
      uVar17 = 0;
      if (uVar12 <= (ulong)(lVar18 + lVar20 * 4) || lVar18 + (uVar10 + lVar20) * 4 <= uVar11) {
        uVar17 = (ulong)(param_4 & 0xfffffffe);
        uVar11 = (uVar17 - 2 >> 1) + 1;
        if (uVar17 - 2 == 0) {
          lVar16 = 0;
        }
        else {
          uVar12 = uVar11 & 0xfffffffffffffffe;
          lVar15 = lVar18 + lVar20 * 4;
          lVar1 = lVar6 + lVar20 * 4;
          lVar19 = 0;
          lVar16 = 0;
          do {
            uVar3 = *(undefined8 *)(lVar1 + lVar19 * 2);
            uVar4 = *(undefined8 *)(lVar15 + lVar19 * 2);
            puVar2 = (undefined4 *)(lVar7 + -4 + (long)(iVar13 + 1 + (int)lVar19) * 4);
            *puVar2 = (int)uVar3;
            puVar2[1] = (int)uVar4;
            puVar2[2] = (int)((ulong)uVar3 >> 0x20);
            puVar2[3] = (int)((ulong)uVar4 >> 0x20);
            uVar3 = *(undefined8 *)(lVar1 + 8 + lVar19 * 2);
            uVar4 = *(undefined8 *)(lVar15 + 8 + lVar19 * 2);
            puVar2 = (undefined4 *)(lVar7 + -4 + (long)((int)lVar19 + iVar13 + 5) * 4);
            *puVar2 = (int)uVar3;
            puVar2[1] = (int)uVar4;
            puVar2[2] = (int)((ulong)uVar3 >> 0x20);
            puVar2[3] = (int)((ulong)uVar4 >> 0x20);
            lVar16 = lVar16 + 4;
            lVar19 = lVar19 + 8;
            uVar12 = uVar12 - 2;
          } while (uVar12 != 0);
        }
        if ((uVar11 & 1) != 0) {
          uVar3 = *(undefined8 *)(lVar6 + (lVar16 + lVar20) * 4);
          uVar4 = *(undefined8 *)(lVar18 + (lVar16 + lVar20) * 4);
          puVar2 = (undefined4 *)(lVar7 + -4 + (long)((iVar5 + (int)lVar16) * 2 + 1) * 4);
          *puVar2 = (int)uVar3;
          puVar2[1] = (int)uVar4;
          puVar2[2] = (int)((ulong)uVar3 >> 0x20);
          puVar2[3] = (int)((ulong)uVar4 >> 0x20);
        }
        if (uVar17 == uVar10) goto LAB_0016e1f6;
      }
    }
  }
  uVar11 = ~uVar17;
  if ((param_4 & 1) != 0) {
    iVar13 = iVar5 + (int)uVar17;
    uVar21 = *(undefined4 *)(lVar18 + (uVar17 + lVar20) * 4);
    *(undefined4 *)(lVar7 + (long)(iVar13 * 2) * 4) = *(undefined4 *)(lVar6 + (uVar17 + lVar20) * 4)
    ;
    *(undefined4 *)(lVar7 + (long)(iVar13 * 2 + 1) * 4) = uVar21;
    uVar17 = uVar17 | 1;
  }
  if (uVar11 + uVar10 != 0) {
    lVar16 = uVar10 - uVar17;
    lVar6 = lVar6 + (lVar20 + uVar17) * 4;
    lVar18 = lVar18 + (lVar20 + uVar17) * 4;
    lVar20 = 0;
    do {
      iVar13 = (int)uVar17 * 2 + iVar5 * 2 + (int)lVar20;
      uVar21 = *(undefined4 *)(lVar18 + lVar20 * 2);
      *(undefined4 *)(lVar7 + (long)iVar13 * 4) = *(undefined4 *)(lVar6 + lVar20 * 2);
      *(undefined4 *)(lVar7 + (long)(iVar13 + 1) * 4) = uVar21;
      uVar21 = *(undefined4 *)(lVar18 + 4 + lVar20 * 2);
      *(undefined4 *)(lVar7 + (long)(iVar13 + 2) * 4) = *(undefined4 *)(lVar6 + 4 + lVar20 * 2);
      *(undefined4 *)(lVar7 + (long)(iVar13 + 3) * 4) = uVar21;
      lVar20 = lVar20 + 4;
      lVar16 = lVar16 + -2;
    } while (lVar16 != 0);
  }
LAB_0016e1f6:
  *param_5 = iVar5 + param_4;
  return;
}


