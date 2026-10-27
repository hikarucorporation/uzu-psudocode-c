// Function : cftmdl1
// Namespace: 
// Entry    : 004f13b0
// Prototype: undefined cftmdl1(int param_1, double * param_2, long param_3)
// Body     : 004f13b0 - 004f18a8


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cftmdl1(int param_1,double *param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  double *pdVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  uint uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  long local_58;
  long local_50;
  long local_48;
  
  iVar3 = param_1 >> 3;
  uVar1 = iVar3 * 2;
  uVar12 = iVar3 * 4;
  uVar4 = iVar3 * 6;
  dVar17 = param_2[uVar12];
  dVar18 = (param_2 + uVar12)[1];
  dVar19 = dVar17 + *param_2;
  dVar21 = dVar18 + param_2[1];
  dVar17 = *param_2 - dVar17;
  dVar18 = param_2[1] - dVar18;
  dVar23 = param_2[uVar1];
  dVar24 = (param_2 + uVar1)[1];
  dVar25 = param_2[uVar4];
  dVar20 = (param_2 + uVar4)[1];
  dVar27 = dVar25 + dVar23;
  dVar28 = dVar20 + dVar24;
  dVar23 = dVar23 - dVar25;
  dVar24 = dVar24 - dVar20;
  *param_2 = dVar27 + dVar19;
  param_2[1] = dVar28 + dVar21;
  param_2[uVar1] = dVar19 - dVar27;
  (param_2 + uVar1)[1] = dVar21 - dVar28;
  param_2[uVar12] = dVar17 - dVar24;
  param_2[iVar3 * 4 + 1] = dVar23 + dVar18;
  param_2[uVar4] = dVar24 + dVar17;
  param_2[uVar4 | 1] = dVar18 - dVar23;
  dVar17 = *(double *)(param_3 + 8);
  if (0x17 < param_1) {
    lVar7 = (long)(int)uVar1;
    pdVar6 = (double *)(param_3 + 0x38);
    lVar8 = (long)(iVar3 * 6) + 3;
    lVar16 = (long)(int)uVar12 + 3;
    local_58 = (long)(int)uVar12 + -1;
    local_50 = (long)(iVar3 * 6) + -1;
    lVar14 = lVar7 * 0x10;
    lVar9 = lVar7 * 0x18;
    local_48 = lVar7 << 0x22;
    lVar15 = lVar7 * 0x20;
    lVar11 = lVar7 * 0x18;
    lVar13 = 2;
    lVar2 = lVar7;
    lVar5 = lVar14;
    do {
      local_48 = local_48 + -0x200000000;
      lVar5 = lVar5 + -0x10;
      lVar2 = lVar2 + -2;
      lVar15 = lVar15 + -0x10;
      lVar14 = lVar14 + 0x10;
      lVar11 = lVar11 + 0x10;
      lVar9 = lVar9 + -0x10;
      lVar7 = lVar7 + 2;
      dVar18 = pdVar6[-3];
      dVar23 = pdVar6[-2];
      dVar24 = pdVar6[-1];
      dVar25 = *pdVar6;
      dVar20 = param_2[lVar13];
      dVar19 = (param_2 + lVar13)[1];
      dVar29 = dVar20 - *(double *)((long)param_2 + lVar14);
      dVar20 = *(double *)((long)param_2 + lVar14) + dVar20;
      dVar22 = param_2[lVar16] + dVar19;
      dVar21 = param_2[lVar7];
      dVar27 = (param_2 + lVar7)[1];
      dVar28 = dVar21 - *(double *)((long)param_2 + lVar11);
      dVar21 = *(double *)((long)param_2 + lVar11) + dVar21;
      dVar26 = param_2[lVar8] + dVar27;
      dVar19 = dVar19 - param_2[lVar16];
      dVar27 = dVar27 - param_2[lVar8];
      param_2[lVar13] = dVar21 + dVar20;
      (param_2 + lVar13)[1] = dVar26 + dVar22;
      param_2[lVar7] = dVar20 - dVar21;
      (param_2 + lVar7)[1] = dVar22 - dVar26;
      dVar20 = dVar29 - dVar27;
      dVar21 = dVar28 + dVar19;
      dVar27 = dVar27 + dVar29;
      dVar19 = dVar19 - dVar28;
      *(double *)((long)param_2 + lVar14) = dVar20 * dVar18 - dVar21 * dVar23;
      param_2[lVar16] = dVar20 * dVar23 + dVar21 * dVar18;
      *(double *)((long)param_2 + lVar11) = dVar19 * dVar25 + dVar27 * dVar24;
      param_2[lVar8] = dVar19 * dVar24 - dVar27 * dVar25;
      dVar19 = param_2[lVar2];
      dVar21 = (param_2 + lVar2)[1];
      dVar29 = dVar19 - *(double *)((long)param_2 + lVar9);
      dVar19 = *(double *)((long)param_2 + lVar9) + dVar19;
      dVar28 = param_2[local_50] + dVar21;
      uVar10 = local_48 >> 0x1d | 8;
      dVar20 = *(double *)((long)param_2 + uVar10);
      dVar22 = *(double *)((long)param_2 + lVar5) - *(double *)((long)param_2 + lVar15);
      dVar21 = dVar21 - param_2[local_50];
      dVar26 = param_2[local_58] - dVar20;
      dVar27 = *(double *)((long)param_2 + lVar5) + *(double *)((long)param_2 + lVar15);
      dVar20 = param_2[local_58] + dVar20;
      param_2[lVar2] = dVar27 + dVar19;
      (param_2 + lVar2)[1] = dVar20 + dVar28;
      *(double *)((long)param_2 + lVar5) = dVar19 - dVar27;
      dVar19 = dVar29 - dVar26;
      dVar27 = dVar22 + dVar21;
      param_2[local_58] = dVar28 - dVar20;
      dVar26 = dVar26 + dVar29;
      dVar21 = dVar21 - dVar22;
      *(double *)((long)param_2 + lVar9) = dVar19 * dVar23 - dVar27 * dVar18;
      param_2[local_50] = dVar19 * dVar18 + dVar27 * dVar23;
      *(double *)((long)param_2 + lVar15) = dVar21 * dVar24 + dVar26 * dVar25;
      *(double *)((long)param_2 + uVar10) = dVar21 * dVar25 - dVar26 * dVar24;
      lVar13 = lVar13 + 2;
      pdVar6 = pdVar6 + 4;
      lVar8 = lVar8 + 2;
      lVar16 = lVar16 + 2;
      local_58 = local_58 + -2;
      local_50 = local_50 + -2;
    } while (lVar13 < iVar3);
  }
  uVar1 = iVar3 * 7;
  dVar18 = param_2[(uint)(iVar3 * 5)] + param_2[iVar3];
  uVar12 = iVar3 * 5 + 1;
  dVar19 = param_2[uVar12] + param_2[iVar3 + 1U];
  dVar27 = param_2[iVar3] - param_2[(uint)(iVar3 * 5)];
  dVar23 = param_2[iVar3 + 1U] - param_2[uVar12];
  dVar21 = param_2[uVar1] + param_2[(uint)(iVar3 * 3)];
  uVar4 = iVar3 * 3 + 1;
  dVar24 = param_2[uVar1 + 1] + param_2[uVar4];
  dVar20 = param_2[(uint)(iVar3 * 3)] - param_2[uVar1];
  dVar25 = param_2[uVar4] - param_2[uVar1 + 1];
  param_2[iVar3] = dVar21 + dVar18;
  param_2[iVar3 + 1U] = dVar24 + dVar19;
  param_2[(uint)(iVar3 * 3)] = dVar18 - dVar21;
  param_2[uVar4] = dVar19 - dVar24;
  dVar18 = dVar27 - dVar25;
  dVar24 = dVar20 + dVar23;
  param_2[(uint)(iVar3 * 5)] = (dVar18 - dVar24) * dVar17;
  param_2[uVar12] = (dVar24 + dVar18) * dVar17;
  dVar25 = dVar25 + dVar27;
  dVar23 = dVar23 - dVar20;
  param_2[uVar1] = (dVar25 + dVar23) * (double)(_DAT_00652d10 ^ (ulong)dVar17);
  param_2[uVar1 + 1] = (dVar25 - dVar23) * dVar17;
  return;
}


