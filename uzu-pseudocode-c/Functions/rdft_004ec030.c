// Function : rdft
// Namespace: 
// Entry    : 004ec030
// Prototype: undefined rdft(uint param_1, int param_2, undefined1[16] * param_3, uint * param_4, undefined8 * param_5)
// Body     : 004ec030 - 004ec5a8


void rdft(uint param_1,int param_2,undefined1 (*param_3) [16],uint *param_4,undefined8 *param_5)

{
  undefined1 auVar1 [16];
  double dVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  uint uVar7;
  uint uVar8;
  double *pdVar9;
  double *pdVar10;
  uint uVar11;
  long lVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double local_60;
  double local_58;
  double local_50;
  double local_48;
  double local_40;
  double local_38;
  
  uVar11 = (int)param_1 >> 2;
  uVar3 = *param_4;
  if ((int)(*param_4 * 4) < (int)param_1) {
    makewt(uVar11,param_4,param_5);
    uVar3 = uVar11;
  }
  uVar8 = param_4[1];
  if ((int)(param_4[1] * 4) < (int)param_1) {
    param_4[1] = uVar11;
    uVar8 = uVar11;
    if (7 < (int)param_1) {
      lVar4 = (long)(int)uVar3;
      uVar7 = uVar11 >> 1;
      pdVar9 = (double *)(param_5 + lVar4);
      dVar13 = DAT_00653330 / (double)uVar7;
      dVar2 = cos((double)uVar7 * dVar13);
      *pdVar9 = dVar2;
      pdVar9[uVar7] = dVar2 * DAT_005db338;
      if (0xf < param_1) {
        uVar6 = 2;
        if (2 < uVar7) {
          uVar6 = (ulong)uVar7;
        }
        lVar12 = 1;
        if (0x17 < param_1) {
          pdVar10 = (double *)(param_5 + (ulong)uVar11 + lVar4 + -1);
          lVar12 = 1;
          do {
            sincos((double)(int)lVar12 * dVar13,&local_38,&local_40);
            dVar2 = DAT_005db338;
            param_5[lVar4 + lVar12] = local_40 * DAT_005db338;
            *pdVar10 = local_38 * dVar2;
            uVar5 = lVar12 + 1;
            sincos((double)(int)uVar5 * dVar13,&local_48,&local_50);
            dVar2 = DAT_005db338;
            param_5[lVar4 + lVar12 + 1] = local_50 * DAT_005db338;
            pdVar10[-1] = local_48 * dVar2;
            lVar12 = lVar12 + 2;
            pdVar10 = pdVar10 + -2;
          } while (uVar5 != (uVar6 - 1 & 0xfffffffffffffffe));
        }
        if ((uVar6 - 1 & 1) != 0) {
          sincos(dVar13 * (double)(int)lVar12,&local_58,&local_60);
          dVar2 = DAT_005db338;
          pdVar9[lVar12] = local_60 * DAT_005db338;
          pdVar9[(ulong)uVar11 - lVar12] = dVar2 * local_58;
        }
      }
    }
  }
  if (param_2 < 0) {
    dVar2 = *(double *)*param_3;
    dVar14 = (dVar2 - *(double *)(*param_3 + 8)) * DAT_005db338;
    *(double *)(*param_3 + 8) = dVar14;
    dVar2 = dVar2 - dVar14;
    *(double *)*param_3 = dVar2;
    dVar13 = DAT_005db338;
    if (4 < (int)param_1) {
      if (param_1 != 5) {
        lVar12 = (long)((int)(uVar8 * 2) / (int)(param_1 >> 1));
        pdVar9 = (double *)(param_5 + (int)uVar3 + lVar12);
        pdVar10 = (double *)(param_5 + (((long)(int)uVar8 + (long)(int)uVar3) - lVar12));
        lVar4 = (ulong)param_1 - 1;
        uVar6 = 2;
        do {
          dVar2 = *(double *)(*param_3 + uVar6 * 8);
          dVar14 = *(double *)((long)(*param_3 + uVar6 * 8) + 8);
          dVar17 = dVar2 - *(double *)(param_3[-1] + lVar4 * 8 + 8);
          dVar15 = dVar14 + *(double *)(*param_3 + lVar4 * 8);
          dVar16 = *pdVar9 * dVar15 + (dVar13 - *pdVar10) * dVar17;
          dVar15 = (dVar13 - *pdVar10) * dVar15 - *pdVar9 * dVar17;
          *(double *)(*param_3 + uVar6 * 8) = dVar2 - dVar16;
          *(double *)((long)(*param_3 + uVar6 * 8) + 8) = dVar14 - dVar15;
          *(double *)(param_3[-1] + lVar4 * 8 + 8) =
               dVar16 + *(double *)(param_3[-1] + lVar4 * 8 + 8);
          *(double *)(*param_3 + lVar4 * 8) = *(double *)(*param_3 + lVar4 * 8) - dVar15;
          uVar6 = uVar6 + 2;
          pdVar9 = pdVar9 + lVar12;
          pdVar10 = pdVar10 + -lVar12;
          lVar4 = lVar4 + -2;
        } while (uVar6 < param_1 >> 1);
      }
      cftbsub((ulong)param_1,(double *)param_3,(long)param_4,uVar3,(long)param_5);
      return;
    }
    if (param_1 == 4) {
      dVar15 = *(double *)param_3[1];
      dVar16 = *(double *)(param_3[1] + 8);
      dVar13 = dVar14 + dVar16;
      auVar1._8_4_ = SUB84(dVar13,0);
      auVar1._0_8_ = dVar2 + dVar15;
      auVar1._12_4_ = (int)((ulong)dVar13 >> 0x20);
      *param_3 = auVar1;
      *(double *)param_3[1] = dVar2 - dVar15;
      *(double *)(param_3[1] + 8) = dVar14 - dVar16;
    }
  }
  else {
    if ((int)param_1 < 5) {
      if (param_1 == 4) {
        dVar2 = *(double *)*param_3;
        dVar13 = *(double *)(*param_3 + 8);
        dVar14 = *(double *)param_3[1];
        dVar15 = *(double *)(param_3[1] + 8);
        *(double *)*param_3 = dVar14 + dVar2;
        *(double *)(*param_3 + 8) = dVar15 + dVar13;
        *(double *)param_3[1] = dVar2 - dVar14;
        *(double *)(param_3[1] + 8) = dVar13 - dVar15;
      }
    }
    else {
      cftfsub(param_1,param_3,(long)param_4,uVar3,(long)param_5);
      dVar2 = DAT_005db338;
      if (param_1 != 5) {
        lVar4 = (long)((int)(uVar8 * 2) / (int)(param_1 >> 1));
        pdVar9 = (double *)(param_5 + (int)uVar3 + lVar4);
        pdVar10 = (double *)(param_5 + (((long)(int)uVar8 + (long)(int)uVar3) - lVar4));
        uVar5 = 2;
        uVar6 = (ulong)param_1;
        do {
          dVar13 = *(double *)(*param_3 + uVar5 * 8);
          dVar14 = *(double *)((long)(*param_3 + uVar5 * 8) + 8);
          dVar17 = dVar13 - *(double *)(param_3[-1] + uVar6 * 8);
          dVar16 = *(double *)((long)(param_3[-1] + uVar6 * 8) + 8) + dVar14;
          dVar15 = (dVar2 - *pdVar10) * dVar17 - *pdVar9 * dVar16;
          dVar16 = *pdVar9 * dVar17 + (dVar2 - *pdVar10) * dVar16;
          *(double *)(*param_3 + uVar5 * 8) = dVar13 - dVar15;
          *(double *)((long)(*param_3 + uVar5 * 8) + 8) = dVar14 - dVar16;
          *(double *)(param_3[-1] + uVar6 * 8) = dVar15 + *(double *)(param_3[-1] + uVar6 * 8);
          *(double *)(param_3[-1] + uVar6 * 8 + 8) =
               *(double *)(param_3[-1] + uVar6 * 8 + 8) - dVar16;
          uVar5 = uVar5 + 2;
          pdVar9 = pdVar9 + lVar4;
          pdVar10 = pdVar10 + -lVar4;
          uVar6 = uVar6 - 2;
        } while (uVar5 < param_1 >> 1);
      }
    }
    dVar2 = *(double *)*param_3;
    dVar13 = *(double *)(*param_3 + 8);
    *(double *)*param_3 = dVar13 + dVar2;
    *(double *)(*param_3 + 8) = dVar2 - dVar13;
  }
  return;
}


