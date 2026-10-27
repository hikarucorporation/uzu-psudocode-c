// Function : sigvcf_perform
// Namespace: 
// Entry    : 005995e0
// Prototype: long sigvcf_perform(long param_1)
// Body     : 005995e0 - 005997f1


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long sigvcf_perform(long param_1)

{
  float fVar1;
  float fVar2;
  float *pfVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  float fVar8;
  double dVar9;
  double dVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  int iVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  double dVar22;
  double dVar23;
  float fVar24;
  float fVar25;
  
  lVar11 = cos_newtable;
  dVar10 = DAT_0065da20;
  dVar9 = DAT_0065da18;
  fVar8 = DAT_0065da10;
  fVar17 = DAT_005d9038;
  pfVar3 = *(float **)(param_1 + 0x28);
  fVar18 = pfVar3[2];
  fVar25 = 0.0;
  if (0.0 < fVar18) {
    fVar25 = DAT_005d9038 / fVar18;
  }
  fVar19 = *pfVar3;
  fVar21 = pfVar3[1];
  iVar15 = (int)*(undefined8 *)(param_1 + 0x30);
  if (0 < iVar15) {
    fVar1 = pfVar3[3];
    dVar22 = _DAT_00653f50 - _DAT_00653f50 / ((double)fVar18 + _DAT_00653f50);
    lVar4 = *(long *)(param_1 + 0x20);
    lVar5 = *(long *)(param_1 + 0x18);
    lVar6 = *(long *)(param_1 + 8);
    lVar7 = *(long *)(param_1 + 0x10);
    lVar12 = 0;
    fVar18 = fVar19;
    do {
      fVar19 = *(float *)(lVar7 + lVar12 * 4) * fVar1;
      if (fVar19 <= 0.0) {
        fVar19 = 0.0;
      }
      dVar23 = (double)(fVar19 * fVar8) + dVar9;
      fVar24 = (float)((double)((ulong)dVar23 & 0xffffffff | 0x4138000000000000) + dVar10);
      uVar14 = (ulong)((uint)((ulong)dVar23 >> 0x1e) & 0x1ffc);
      fVar16 = *(float *)(lVar11 + uVar14);
      uVar13 = (ulong)((int)((ulong)dVar23 >> 0x20) + 0x600U & 0x7ff);
      fVar2 = *(float *)(lVar11 + uVar13 * 4);
      fVar19 = (float)((uint)(fVar17 - fVar19 * fVar25) & -(uint)(0.0 < fVar25));
      if (fVar19 <= 0.0) {
        fVar19 = 0.0;
      }
      fVar20 = ((*(float *)(lVar11 + 4 + uVar14) - fVar16) * fVar24 + fVar16) * fVar19;
      fVar16 = ((*(float *)(lVar11 + 4 + uVar13 * 4) - fVar2) * fVar24 + fVar2) * fVar19;
      fVar19 = (fVar20 * fVar18 + *(float *)(lVar6 + lVar12 * 4) * (float)dVar22 * (fVar17 - fVar19)
               ) - fVar16 * fVar21;
      *(float *)(lVar5 + lVar12 * 4) = fVar19;
      fVar21 = fVar20 * fVar21 + fVar16 * fVar18;
      *(float *)(lVar4 + lVar12 * 4) = fVar21;
      lVar12 = lVar12 + 1;
      fVar18 = fVar19;
    } while (iVar15 != (int)lVar12);
  }
  fVar18 = 0.0;
  if ((((uint)fVar19 >> 0x1d ^ (uint)fVar19 >> 0x1e) & 1) != 0) {
    fVar18 = fVar19;
  }
  fVar17 = 0.0;
  if ((((uint)fVar21 >> 0x1d ^ (uint)fVar21 >> 0x1e) & 1) != 0) {
    fVar17 = fVar21;
  }
  *pfVar3 = fVar18;
  pfVar3[1] = fVar17;
  return param_1 + 0x38;
}


