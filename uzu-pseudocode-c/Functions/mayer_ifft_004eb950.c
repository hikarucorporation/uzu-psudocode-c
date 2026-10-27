// Function : mayer_ifft
// Namespace: 
// Entry    : 004eb950
// Prototype: undefined mayer_ifft(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, uint param_9, float * param_10, float * param_11)
// Body     : 004eb950 - 004ebc83


/* WARNING: Removing unreachable block (ram,0x004ebbe6) */

void mayer_ifft(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
               uint param_9,float *param_10,float *param_11)

{
  float *pfVar1;
  uint *puVar2;
  undefined8 *puVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  double dVar8;
  double dVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  undefined8 uVar18;
  long lVar19;
  float *pfVar20;
  undefined1 (*pauVar21) [16];
  float *pfVar22;
  ulong uVar23;
  uint uVar24;
  undefined1 (*pauVar25) [16];
  ulong uVar26;
  long lVar27;
  ulong uVar28;
  ulong uVar29;
  uint uVar30;
  
  uVar24 = param_9 * 2;
  uVar18 = ooura_init(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,uVar24);
  if ((int)uVar18 == 0) {
    return;
  }
  lVar19 = __tls_get_addr(&PTR_007153d8);
  pauVar25 = *(undefined1 (**) [16])(lVar19 + 200);
  if ((int)param_9 < 1) goto LAB_004ebab0;
  if (param_9 - 1 == 0) {
    uVar29 = 0;
    pfVar20 = param_11;
    pauVar21 = pauVar25;
    pfVar22 = param_10;
  }
  else {
    uVar23 = (ulong)(param_9 - 1) + 1;
    uVar29 = uVar23 & 0x1fffffffe;
    uVar26 = (uVar29 - 2 >> 1) + 1;
    if (uVar29 - 2 == 0) {
      lVar27 = 0;
LAB_004eba31:
      uVar18 = *(undefined8 *)(param_10 + lVar27);
      dVar8 = (double)(float)*(undefined8 *)(param_11 + lVar27);
      dVar9 = (double)(float)((ulong)*(undefined8 *)(param_11 + lVar27) >> 0x20);
      auVar6._8_4_ = SUB84(dVar9,0);
      auVar6._0_8_ = (double)(float)((ulong)uVar18 >> 0x20);
      auVar6._12_4_ = (int)((ulong)dVar9 >> 0x20);
      pauVar25[lVar27 + 1] = auVar6;
      auVar12._8_4_ = SUB84(dVar8,0);
      auVar12._0_8_ = (double)(float)uVar18;
      auVar12._12_4_ = (int)((ulong)dVar8 >> 0x20);
      pauVar25[lVar27] = auVar12;
    }
    else {
      uVar28 = uVar26 & 0xfffffffffffffffe;
      pauVar21 = pauVar25 + 2;
      lVar27 = 0;
      do {
        uVar18 = *(undefined8 *)(param_10 + lVar27);
        dVar8 = (double)(float)*(undefined8 *)(param_11 + lVar27);
        dVar9 = (double)(float)((ulong)*(undefined8 *)(param_11 + lVar27) >> 0x20);
        auVar4._8_4_ = SUB84(dVar9,0);
        auVar4._0_8_ = (double)(float)((ulong)uVar18 >> 0x20);
        auVar4._12_4_ = (int)((ulong)dVar9 >> 0x20);
        pauVar21[-1] = auVar4;
        auVar10._8_4_ = SUB84(dVar8,0);
        auVar10._0_8_ = (double)(float)uVar18;
        auVar10._12_4_ = (int)((ulong)dVar8 >> 0x20);
        pauVar21[-2] = auVar10;
        uVar18 = *(undefined8 *)(param_10 + lVar27 + 2);
        dVar8 = (double)(float)*(undefined8 *)(param_11 + lVar27 + 2);
        dVar9 = (double)(float)((ulong)*(undefined8 *)(param_11 + lVar27 + 2) >> 0x20);
        auVar5._8_4_ = SUB84(dVar9,0);
        auVar5._0_8_ = (double)(float)((ulong)uVar18 >> 0x20);
        auVar5._12_4_ = (int)((ulong)dVar9 >> 0x20);
        pauVar21[1] = auVar5;
        auVar11._8_4_ = SUB84(dVar8,0);
        auVar11._0_8_ = (double)(float)uVar18;
        auVar11._12_4_ = (int)((ulong)dVar8 >> 0x20);
        *pauVar21 = auVar11;
        lVar27 = lVar27 + 4;
        pauVar21 = pauVar21 + 4;
        uVar28 = uVar28 - 2;
      } while (uVar28 != 0);
      if ((uVar26 & 1) != 0) goto LAB_004eba31;
    }
    if (uVar23 == uVar29) goto LAB_004ebab0;
    pfVar20 = param_11 + uVar29;
    pauVar21 = pauVar25 + uVar29;
    pfVar22 = param_10 + uVar29;
  }
  lVar27 = 0;
  do {
    auVar7._8_4_ = SUB84((double)pfVar20[lVar27],0);
    auVar7._0_8_ = (double)pfVar22[lVar27];
    auVar7._12_4_ = (int)((ulong)(double)pfVar20[lVar27] >> 0x20);
    *pauVar21 = auVar7;
    pauVar21 = pauVar21 + 1;
    lVar27 = lVar27 + 1;
  } while (param_9 - (int)uVar29 != (int)lVar27);
LAB_004ebab0:
  puVar2 = *(uint **)(lVar19 + 0xd0);
  puVar3 = *(undefined8 **)(lVar19 + 0xd8);
  uVar30 = *puVar2;
  if ((int)(uVar30 * 4) < (int)uVar24) {
    uVar30 = (int)param_9 >> 1;
    makewt(uVar30,puVar2,puVar3);
  }
  cftfsub(uVar24,pauVar25,(long)puVar2,uVar30,(long)puVar3);
  if (0 < (int)param_9) {
    uVar23 = (ulong)(param_9 - 1);
    uVar29 = 0;
    if ((param_9 - 1 < 3) ||
       ((param_10 < param_11 + uVar23 + 1 && (param_11 < param_10 + uVar23 + 1)))) {
      pfVar20 = param_11;
      pfVar22 = param_10;
      pauVar21 = pauVar25;
    }
    else {
      uVar29 = uVar23 + 1 & 0xfffffffffffffffc;
      pfVar20 = param_11 + uVar29;
      pfVar22 = param_10 + uVar29;
      pauVar21 = pauVar25 + uVar29;
      pauVar25 = pauVar25 + 2;
      uVar26 = 0;
      do {
        dVar8 = *(double *)(pauVar25[-2] + 8);
        dVar9 = *(double *)pauVar25[-1];
        dVar13 = *(double *)(pauVar25[-1] + 8);
        dVar14 = *(double *)*pauVar25;
        dVar15 = *(double *)(*pauVar25 + 8);
        dVar16 = *(double *)pauVar25[1];
        dVar17 = *(double *)(pauVar25[1] + 8);
        pfVar1 = param_10 + uVar26;
        *pfVar1 = (float)*(double *)pauVar25[-2];
        pfVar1[1] = (float)dVar9;
        pfVar1[2] = (float)dVar14;
        pfVar1[3] = (float)dVar16;
        pfVar1 = param_11 + uVar26;
        *pfVar1 = (float)dVar8;
        pfVar1[1] = (float)dVar13;
        pfVar1[2] = (float)dVar15;
        pfVar1[3] = (float)dVar17;
        uVar26 = uVar26 + 4;
        pauVar25 = pauVar25 + 4;
      } while (uVar29 != uVar26);
      if (uVar23 + 1 == uVar29) {
        return;
      }
    }
    uVar30 = (uint)uVar29;
    uVar24 = ~uVar30;
    if ((param_9 & 1) != 0) {
      *pfVar22 = (float)*(double *)*pauVar21;
      pfVar22 = pfVar22 + 1;
      *pfVar20 = (float)*(double *)(*pauVar21 + 8);
      pfVar20 = pfVar20 + 1;
      pauVar21 = pauVar21 + 1;
      uVar30 = uVar30 + 1;
    }
    if (uVar24 + param_9 != 0) {
      lVar19 = 0;
      do {
        pfVar22[lVar19] = (float)*(double *)*pauVar21;
        pfVar20[lVar19] = (float)*(double *)(*pauVar21 + 8);
        pfVar22[lVar19 + 1] = (float)*(double *)pauVar21[1];
        pfVar20[lVar19 + 1] = (float)*(double *)(pauVar21[1] + 8);
        lVar19 = lVar19 + 2;
        pauVar21 = pauVar21 + 2;
      } while (param_9 - uVar30 != (int)lVar19);
    }
  }
  return;
}


