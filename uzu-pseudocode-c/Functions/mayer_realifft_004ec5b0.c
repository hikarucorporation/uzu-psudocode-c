// Function : mayer_realifft
// Namespace: 
// Entry    : 004ec5b0
// Prototype: undefined mayer_realifft(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, uint param_9, float * param_10)
// Body     : 004ec5b0 - 004ec8b5


/* WARNING: Removing unreachable block (ram,0x004ec8a7) */
/* WARNING: Removing unreachable block (ram,0x004ec8b4) */

void mayer_realifft(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                   uint param_9,float *param_10)

{
  undefined1 (*pauVar1) [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  double dVar10;
  double dVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  int iVar15;
  undefined1 (*pauVar16) [16];
  long lVar17;
  float *pfVar18;
  int iVar19;
  ulong uVar20;
  float *pfVar21;
  ulong uVar22;
  uint uVar23;
  ulong uVar24;
  double dVar25;
  double dVar26;
  
  uVar12 = ooura_init(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9);
  if ((int)uVar12 == 0) {
    return;
  }
  iVar15 = (int)param_9 / 2;
  lVar13 = __tls_get_addr();
  pauVar1 = *(undefined1 (**) [16])(lVar13 + 200);
  auVar2._8_4_ = SUB84((double)param_10[iVar15],0);
  auVar2._0_8_ = (double)*param_10;
  auVar2._12_4_ = (int)((ulong)(double)param_10[iVar15] >> 0x20);
  *pauVar1 = auVar2;
  if (3 < (int)param_9) {
    pfVar21 = param_10 + (param_9 - 1);
    iVar19 = 2;
    if (2 < iVar15) {
      iVar19 = iVar15;
    }
    if (iVar19 - 2U == 0) {
      uVar23 = 1;
      pfVar18 = param_10;
      pauVar16 = pauVar1;
    }
    else {
      uVar24 = (ulong)(iVar19 - 2U) + 1;
      uVar22 = uVar24 & 0xfffffffffffffffe;
      uVar20 = (uVar22 - 2 >> 1) + 1;
      if (uVar22 - 2 == 0) {
        lVar17 = 0;
LAB_004ec6d3:
        uVar12 = *(undefined8 *)(param_10 + lVar17 + 1);
        dVar25 = (double)(float)((ulong)*(undefined8 *)(pfVar21 + (-1 - lVar17)) >> 0x20);
        dVar26 = (double)(float)*(undefined8 *)(pfVar21 + (-1 - lVar17));
        auVar5._8_4_ = SUB84(dVar26,0);
        auVar5._0_8_ = (double)(float)((ulong)uVar12 >> 0x20);
        auVar5._12_4_ = (int)((ulong)dVar26 >> 0x20);
        pauVar1[lVar17 + 2] = auVar5;
        auVar9._8_4_ = SUB84(dVar25,0);
        auVar9._0_8_ = (double)(float)uVar12;
        auVar9._12_4_ = (int)((ulong)dVar25 >> 0x20);
        pauVar1[lVar17 + 1] = auVar9;
      }
      else {
        pauVar16 = pauVar1 + 3;
        lVar14 = 0;
        lVar17 = 0;
        do {
          uVar12 = *(undefined8 *)(param_10 + lVar17 + 1);
          dVar25 = (double)(float)((ulong)*(undefined8 *)(pfVar21 + lVar14 * 2 + -1) >> 0x20);
          dVar26 = (double)(float)*(undefined8 *)(pfVar21 + lVar14 * 2 + -1);
          auVar3._8_4_ = SUB84(dVar26,0);
          auVar3._0_8_ = (double)(float)((ulong)uVar12 >> 0x20);
          auVar3._12_4_ = (int)((ulong)dVar26 >> 0x20);
          pauVar16[-1] = auVar3;
          auVar7._8_4_ = SUB84(dVar25,0);
          auVar7._0_8_ = (double)(float)uVar12;
          auVar7._12_4_ = (int)((ulong)dVar25 >> 0x20);
          pauVar16[-2] = auVar7;
          uVar12 = *(undefined8 *)(param_10 + lVar17 + 3);
          dVar25 = (double)(float)((ulong)*(undefined8 *)(pfVar21 + lVar14 * 2 + -3) >> 0x20);
          dVar26 = (double)(float)*(undefined8 *)(pfVar21 + lVar14 * 2 + -3);
          auVar4._8_4_ = SUB84(dVar26,0);
          auVar4._0_8_ = (double)(float)((ulong)uVar12 >> 0x20);
          auVar4._12_4_ = (int)((ulong)dVar26 >> 0x20);
          pauVar16[1] = auVar4;
          auVar8._8_4_ = SUB84(dVar25,0);
          auVar8._0_8_ = (double)(float)uVar12;
          auVar8._12_4_ = (int)((ulong)dVar25 >> 0x20);
          *pauVar16 = auVar8;
          lVar17 = lVar17 + 4;
          pauVar16 = pauVar16 + 4;
          lVar14 = lVar14 + -2;
        } while (-lVar14 != (uVar20 & 0xfffffffffffffffe));
        if ((uVar20 & 1) != 0) goto LAB_004ec6d3;
      }
      if (uVar24 == uVar22) goto LAB_004ec774;
      pfVar21 = pfVar21 + -uVar22;
      uVar23 = (uint)uVar24 | 1;
      pfVar18 = param_10 + uVar22;
      pauVar16 = pauVar1 + uVar22;
    }
    lVar17 = 4;
    lVar14 = 0;
    do {
      auVar6._8_4_ = SUB84((double)pfVar21[lVar14],0);
      auVar6._0_8_ = (double)*(float *)((long)pfVar18 + lVar17);
      auVar6._12_4_ = (int)((ulong)(double)pfVar21[lVar14] >> 0x20);
      *(undefined1 (*) [16])(*pauVar16 + lVar17 * 4) = auVar6;
      lVar17 = lVar17 + 4;
      lVar14 = lVar14 + -1;
    } while (uVar23 - iVar19 != (int)lVar14);
  }
LAB_004ec774:
  rdft(param_9,-1,pauVar1,*(uint **)(lVar13 + 0xd0),*(undefined8 **)(lVar13 + 0xd8));
  if ((int)param_9 < 1) {
    return;
  }
  if (param_9 < 4) {
    uVar20 = 0;
    goto LAB_004ec870;
  }
  uVar20 = (ulong)(param_9 & 0xfffffffc);
  uVar22 = (uVar20 - 4 >> 2) + 1;
  if (uVar20 - 4 == 0) {
    lVar13 = 0;
LAB_004ec83c:
    dVar25 = *(double *)(*pauVar1 + lVar13 * 8);
    dVar26 = *(double *)((long)(*pauVar1 + lVar13 * 8) + 8);
    dVar10 = *(double *)(pauVar1[1] + lVar13 * 8);
    dVar11 = *(double *)((long)(pauVar1[1] + lVar13 * 8) + 8);
    pfVar21 = param_10 + lVar13;
    *pfVar21 = (float)(dVar25 + dVar25);
    pfVar21[1] = (float)(dVar26 + dVar26);
    pfVar21[2] = (float)(dVar10 + dVar10);
    pfVar21[3] = (float)(dVar11 + dVar11);
  }
  else {
    uVar24 = uVar22 & 0xfffffffffffffffe;
    lVar13 = 0;
    do {
      dVar25 = *(double *)(*pauVar1 + lVar13 * 8);
      dVar26 = *(double *)((long)(*pauVar1 + lVar13 * 8) + 8);
      dVar10 = *(double *)(pauVar1[1] + lVar13 * 8);
      dVar11 = *(double *)((long)(pauVar1[1] + lVar13 * 8) + 8);
      pfVar21 = param_10 + lVar13;
      *pfVar21 = (float)(dVar25 + dVar25);
      pfVar21[1] = (float)(dVar26 + dVar26);
      pfVar21[2] = (float)(dVar10 + dVar10);
      pfVar21[3] = (float)(dVar11 + dVar11);
      dVar25 = *(double *)(pauVar1[2] + lVar13 * 8);
      dVar26 = *(double *)((long)(pauVar1[2] + lVar13 * 8) + 8);
      dVar10 = *(double *)(pauVar1[3] + lVar13 * 8);
      dVar11 = *(double *)((long)(pauVar1[3] + lVar13 * 8) + 8);
      pfVar21 = param_10 + lVar13 + 4;
      *pfVar21 = (float)(dVar25 + dVar25);
      pfVar21[1] = (float)(dVar26 + dVar26);
      pfVar21[2] = (float)(dVar10 + dVar10);
      pfVar21[3] = (float)(dVar11 + dVar11);
      lVar13 = lVar13 + 8;
      uVar24 = uVar24 - 2;
    } while (uVar24 != 0);
    if ((uVar22 & 1) != 0) goto LAB_004ec83c;
  }
  if (uVar20 == param_9) {
    return;
  }
LAB_004ec870:
  do {
    param_10[uVar20] =
         (float)(*(double *)(*pauVar1 + uVar20 * 8) + *(double *)(*pauVar1 + uVar20 * 8));
    uVar20 = uVar20 + 1;
  } while (param_9 != uVar20);
  return;
}


