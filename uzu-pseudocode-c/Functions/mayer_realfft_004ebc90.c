// Function : mayer_realfft
// Namespace: 
// Entry    : 004ebc90
// Prototype: undefined mayer_realfft(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, uint param_9, float * param_10)
// Body     : 004ebc90 - 004ebe8b


/* WARNING: Removing unreachable block (ram,0x004ebe87) */

void mayer_realfft(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  uint param_9,float *param_10)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  double dVar4;
  undefined8 uVar5;
  long lVar6;
  float *pfVar7;
  int iVar8;
  ulong uVar9;
  undefined1 (*pauVar10) [16];
  int iVar11;
  uint uVar12;
  ulong uVar13;
  long lVar14;
  undefined1 (*pauVar15) [16];
  ulong uVar16;
  
  uVar5 = ooura_init(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9);
  if ((int)uVar5 == 0) {
    return;
  }
  iVar11 = (int)param_9 / 2;
  lVar6 = __tls_get_addr();
  pauVar15 = *(undefined1 (**) [16])(lVar6 + 200);
  if ((int)param_9 < 1) goto LAB_004ebd88;
  if (param_9 < 4) {
    uVar9 = 0;
  }
  else {
    uVar9 = (ulong)(param_9 & 0xfffffffc);
    uVar16 = (uVar9 - 4 >> 2) + 1;
    if (uVar9 - 4 == 0) {
      lVar14 = 0;
LAB_004ebd4a:
      dVar4 = (double)(float)((ulong)*(undefined8 *)(param_10 + lVar14) >> 0x20);
      uVar5 = *(undefined8 *)(param_10 + lVar14 + 2);
      auVar3._8_4_ = SUB84(dVar4,0);
      auVar3._0_8_ = (double)(float)*(undefined8 *)(param_10 + lVar14);
      auVar3._12_4_ = (int)((ulong)dVar4 >> 0x20);
      *(undefined1 (*) [16])(*pauVar15 + lVar14 * 8) = auVar3;
      *(double *)(pauVar15[1] + lVar14 * 8) = (double)(float)uVar5;
      *(double *)((long)(pauVar15[1] + lVar14 * 8) + 8) = (double)(float)((ulong)uVar5 >> 0x20);
    }
    else {
      uVar13 = uVar16 & 0xfffffffffffffffe;
      lVar14 = 0;
      do {
        dVar4 = (double)(float)((ulong)*(undefined8 *)(param_10 + lVar14) >> 0x20);
        uVar5 = *(undefined8 *)(param_10 + lVar14 + 2);
        auVar1._8_4_ = SUB84(dVar4,0);
        auVar1._0_8_ = (double)(float)*(undefined8 *)(param_10 + lVar14);
        auVar1._12_4_ = (int)((ulong)dVar4 >> 0x20);
        *(undefined1 (*) [16])(*pauVar15 + lVar14 * 8) = auVar1;
        *(double *)(pauVar15[1] + lVar14 * 8) = (double)(float)uVar5;
        *(double *)((long)(pauVar15[1] + lVar14 * 8) + 8) = (double)(float)((ulong)uVar5 >> 0x20);
        dVar4 = (double)(float)((ulong)*(undefined8 *)(param_10 + lVar14 + 4) >> 0x20);
        uVar5 = *(undefined8 *)(param_10 + lVar14 + 6);
        auVar2._8_4_ = SUB84(dVar4,0);
        auVar2._0_8_ = (double)(float)*(undefined8 *)(param_10 + lVar14 + 4);
        auVar2._12_4_ = (int)((ulong)dVar4 >> 0x20);
        *(undefined1 (*) [16])(pauVar15[2] + lVar14 * 8) = auVar2;
        *(double *)(pauVar15[3] + lVar14 * 8) = (double)(float)uVar5;
        *(double *)((long)(pauVar15[3] + lVar14 * 8) + 8) = (double)(float)((ulong)uVar5 >> 0x20);
        lVar14 = lVar14 + 8;
        uVar13 = uVar13 - 2;
      } while (uVar13 != 0);
      if ((uVar16 & 1) != 0) goto LAB_004ebd4a;
    }
    if (uVar9 == param_9) goto LAB_004ebd88;
  }
  do {
    *(double *)(*pauVar15 + uVar9 * 8) = (double)param_10[uVar9];
    uVar9 = uVar9 + 1;
  } while (param_9 != uVar9);
LAB_004ebd88:
  rdft(param_9,1,pauVar15,*(uint **)(lVar6 + 0xd0),*(undefined8 **)(lVar6 + 0xd8));
  *param_10 = (float)*(double *)*pauVar15;
  param_10[iVar11] = (float)*(double *)(*pauVar15 + 8);
  if (3 < (int)param_9) {
    pfVar7 = param_10 + (param_9 - 1);
    iVar8 = 2;
    if (2 < iVar11) {
      iVar8 = iVar11;
    }
    if (5 < (int)param_9) {
      uVar12 = 0;
      pauVar10 = pauVar15;
      do {
        param_10[1] = (float)*(double *)pauVar10[1];
        *pfVar7 = (float)*(double *)(pauVar10[1] + 8);
        pauVar15 = pauVar10 + 2;
        param_10[2] = (float)*(double *)pauVar10[2];
        param_10 = param_10 + 2;
        pfVar7[-1] = (float)*(double *)(pauVar10[2] + 8);
        pfVar7 = pfVar7 + -2;
        uVar12 = uVar12 + 2;
        pauVar10 = pauVar15;
      } while (uVar12 != (iVar8 - 1U & 0xfffffffe));
    }
    if ((iVar8 - 1U & 1) != 0) {
      param_10[1] = (float)*(double *)pauVar15[1];
      *pfVar7 = (float)*(double *)(pauVar15[1] + 8);
    }
  }
  return;
}


