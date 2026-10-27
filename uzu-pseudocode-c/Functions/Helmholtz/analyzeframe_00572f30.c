// Function : analyzeframe
// Namespace: Helmholtz
// Entry    : 00572f30
// Prototype: undefined analyzeframe(undefined8 param_1, ulong param_2, ulong param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, Helmholtz * param_8)
// Body     : 00572f30 - 00573393


/* WARNING: Removing unreachable block (ram,0x0057337e) */
/* WARNING: Removing unreachable block (ram,0x0057338f) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention: __cdecl */
/* Helmholtz::analyzeframe() */

void __cdecl
Helmholtz::analyzeframe
          (ulong param_1,ulong param_2,ulong param_3,undefined8 param_4,undefined8 param_5,
          undefined8 param_6,undefined8 param_7,Helmholtz *param_8)

{
  int iVar1;
  float *pfVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  ulong uVar10;
  float *pfVar11;
  float fVar12;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Db;
  undefined4 in_XMM0_Dc;
  undefined4 in_XMM0_Dd;
  undefined8 uVar13;
  ulong extraout_XMM1_Qa;
  double dVar14;
  undefined1 in_XMM1 [16];
  undefined1 auVar15 [16];
  float fVar16;
  float fVar17;
  float fVar18;
  
  uVar8 = (uint)(param_1 >> 0x20);
  uVar7 = *(uint *)(param_8 + 0x1c);
  uVar6 = uVar7 - 1;
  uVar3 = uVar7 * 2;
  if ((long)(int)uVar7 < 1) goto LAB_00573086;
  fVar12 = (float)(int)uVar3;
  auVar15._4_4_ = uVar8;
  auVar15._0_4_ = fVar12;
  auVar15._8_4_ = in_XMM0_Dc;
  auVar15._12_4_ = in_XMM0_Dd;
  auVar15 = rsqrtss(in_XMM1,auVar15);
  fVar16 = fVar12 * auVar15._0_4_;
  fVar17 = DAT_005d98c8 * fVar16;
  param_3 = (ulong)(uint)fVar17;
  fVar17 = (fVar16 * auVar15._0_4_ + DAT_00652610) * fVar17;
  param_2 = CONCAT44(uVar8,fVar17);
  fVar17 = (float)(~-(uint)((float)((uint)fVar12 & _DAT_005d91c0) < DAT_005d94cc) & (uint)fVar17);
  param_1 = CONCAT44(~(uVar8 & _UNK_005d91c4) & uVar8,fVar17);
  uVar8 = *(uint *)(param_8 + 0x18);
  lVar4 = *(long *)param_8;
  lVar5 = *(long *)(param_8 + 0x10);
  if (uVar7 == 1) {
    uVar10 = 0;
LAB_00573002:
    uVar9 = uVar8 + 1;
    fVar12 = *(float *)(lVar4 + (long)(int)(uVar8 & uVar6) * 4) / fVar17;
    *(float *)(lVar5 + uVar10 * 4) = fVar12;
  }
  else {
    fVar12 = DAT_005d9038 / fVar17;
    uVar10 = 0;
    do {
      *(float *)(lVar5 + uVar10 * 4) =
           *(float *)(lVar4 + (long)(int)(uVar8 + (int)uVar10 & uVar6) * 4) * fVar12;
      fVar16 = *(float *)(lVar4 + (long)(int)(uVar8 + (int)uVar10 + 1 & uVar6) * 4) * fVar12;
      param_2 = (ulong)(uint)fVar16;
      *(float *)(lVar5 + 4 + uVar10 * 4) = fVar16;
      uVar10 = uVar10 + 2;
    } while ((uVar7 & 0xfffffffe) != uVar10);
    uVar8 = uVar8 + (int)uVar10;
    uVar9 = uVar8;
    if ((uVar7 & 1) != 0) goto LAB_00573002;
  }
  in_XMM1 = ZEXT416((uint)fVar12);
  if (0 < (int)uVar7) {
    lVar4 = *(long *)param_8;
    lVar5 = *(long *)(param_8 + 8);
    if (uVar7 == 1) {
      uVar10 = 0;
    }
    else {
      uVar10 = 0;
      do {
        *(undefined4 *)(lVar5 + uVar10 * 4) =
             *(undefined4 *)(lVar4 + (long)(int)(uVar9 + (int)uVar10 & uVar6) * 4);
        uVar8 = *(uint *)(lVar4 + (long)(int)(uVar9 + (int)uVar10 + 1 & uVar6) * 4);
        param_1 = (ulong)uVar8;
        *(uint *)(lVar5 + 4 + uVar10 * 4) = uVar8;
        uVar10 = uVar10 + 2;
      } while ((uVar7 & 0xfffffffe) != uVar10);
      uVar9 = uVar9 + (int)uVar10;
      if ((uVar7 & 1) == 0) goto LAB_00573086;
    }
    uVar8 = *(uint *)(lVar4 + (long)(int)(uVar9 & uVar6) * 4);
    param_1 = (ulong)uVar8;
    *(uint *)(lVar5 + uVar10 * 4) = uVar8;
  }
LAB_00573086:
  uVar13 = in_XMM1._0_8_;
  pfVar2 = *(float **)(param_8 + 0x10);
  if ((int)uVar7 < (int)uVar3) {
    memset(pfVar2 + (int)uVar7,0,(ulong)uVar6 * 4 + 4);
    uVar13 = in_XMM1._0_8_;
    param_1 = CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da);
  }
  mayer_realfft(param_1,uVar13,param_2,param_3,param_4,param_5,param_6,param_7,uVar3,pfVar2);
  pfVar2 = *(float **)(param_8 + 0x10);
  *pfVar2 = *pfVar2 * *pfVar2;
  uVar7 = *(uint *)(param_8 + 0x1c);
  lVar4 = (long)(int)uVar7;
  fVar12 = pfVar2[lVar4] * pfVar2[lVar4];
  pfVar2[lVar4] = fVar12;
  uVar10 = extraout_XMM1_Qa;
  if (1 < lVar4) {
    lVar4 = 1;
    if (uVar7 != 2) {
      pfVar11 = pfVar2 + (long)(int)uVar3 + -1;
      lVar4 = 1;
      do {
        pfVar2[lVar4] = *pfVar11 * *pfVar11 + pfVar2[lVar4] * pfVar2[lVar4];
        *pfVar11 = 0.0;
        fVar12 = pfVar2[lVar4 + 1] * pfVar2[lVar4 + 1];
        fVar17 = pfVar11[-1] * pfVar11[-1] + fVar12;
        uVar10 = (ulong)(uint)fVar17;
        pfVar2[lVar4 + 1] = fVar17;
        pfVar11[-1] = 0.0;
        pfVar11 = pfVar11 + -2;
        lVar5 = lVar4 - ((ulong)uVar7 - 1 & 0xfffffffffffffffe);
        lVar4 = lVar4 + 2;
      } while (lVar5 != -1);
    }
    if (((ulong)uVar7 - 1 & 1) != 0) {
      fVar12 = pfVar2[lVar4] * pfVar2[lVar4];
      lVar5 = (int)uVar3 - lVar4;
      fVar17 = pfVar2[lVar5] * pfVar2[lVar5] + fVar12;
      uVar10 = (ulong)(uint)fVar17;
      pfVar2[lVar4] = fVar17;
      pfVar2[lVar5] = 0.0;
    }
  }
  mayer_realifft((ulong)(uint)fVar12,uVar10,param_2,param_3,param_4,param_5,param_6,param_7,uVar3,
                 pfVar2);
  iVar1 = *(int *)(param_8 + 0x1c);
  uVar7 = (uint)((double)iVar1 * _DAT_0065b7f8);
  fVar12 = *(float *)(param_8 + 0x34);
  pfVar2 = *(float **)(param_8 + 0x10);
  fVar17 = *pfVar2;
  *pfVar2 = 1.0;
  dVar14 = DAT_005db338;
  if (1 < (int)uVar7) {
    fVar12 = (float)((double)fVar12 / SQRT(_DAT_005d9000 / (double)iVar1));
    fVar12 = fVar12 * fVar12;
    if (fVar12 <= fVar17) {
      fVar12 = fVar17;
    }
    fVar12 = fVar12 + fVar12;
    lVar4 = *(long *)(param_8 + 8);
    pfVar11 = (float *)(lVar4 + (long)iVar1 * 4);
    uVar10 = 1;
    do {
      pfVar11 = pfVar11 + -1;
      fVar17 = *(float *)(lVar4 + -4 + uVar10 * 4);
      fVar12 = fVar12 - (*pfVar11 * *pfVar11 + fVar17 * fVar17);
      pfVar2[uVar10] = (float)((double)pfVar2[uVar10] / ((double)fVar12 * dVar14));
      uVar10 = uVar10 + 1;
    } while (uVar7 != uVar10);
  }
  if ((int)uVar7 < iVar1) {
    memset(pfVar2 + (int)uVar7,0,(ulong)(~uVar7 + iVar1) * 4 + 4);
  }
  pickpeak(param_8);
  lVar4 = (long)*(int *)(param_8 + 0x24);
  if (lVar4 != 0) {
    lVar5 = *(long *)(param_8 + 0x10);
    fVar12 = *(float *)(lVar5 + -4 + lVar4 * 4);
    fVar17 = *(float *)(lVar5 + 4 + lVar4 * 4);
    dVar14 = (double)*(float *)(lVar5 + lVar4 * 4);
    *(float *)(param_8 + 0x28) =
         (float)(((double)(fVar17 - fVar12) * DAT_005db338) /
                ((dVar14 + dVar14) - ((double)fVar17 + (double)fVar12))) +
         (float)*(int *)(param_8 + 0x24);
    fVar12 = *(float *)(lVar5 + lVar4 * 4);
    fVar17 = *(float *)(lVar5 + -4 + lVar4 * 4);
    fVar16 = *(float *)(lVar5 + 4 + lVar4 * 4);
    fVar18 = fVar16 - fVar17;
    *(float *)(param_8 + 0x2c) =
         (float)(((double)(fVar18 * fVar18) * DAT_006544a8) /
                 (double)((fVar12 + fVar12) - (fVar17 + fVar16)) + (double)fVar12);
  }
  return;
}


