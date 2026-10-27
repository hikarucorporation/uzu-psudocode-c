// Function : sigvcf_perform_old
// Namespace: 
// Entry    : 005993b0
// Prototype: long sigvcf_perform_old(long param_1)
// Body     : 005993b0 - 005995d0


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long sigvcf_perform_old(long param_1)

{
  float *pfVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  float fVar7;
  double dVar8;
  double dVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  int iVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  double dVar20;
  float fVar21;
  double dVar22;
  float fVar23;
  float fVar24;
  
  dVar9 = DAT_0065da20;
  dVar8 = DAT_0065da18;
  fVar7 = DAT_0065da0c;
  fVar14 = DAT_005d9038;
  pfVar1 = *(float **)(param_1 + 0x28);
  fVar16 = pfVar1[2];
  fVar24 = 0.0;
  if (0.0 < fVar16) {
    fVar24 = DAT_005d9038 / fVar16;
  }
  fVar17 = *pfVar1;
  fVar19 = pfVar1[1];
  iVar13 = (int)*(undefined8 *)(param_1 + 0x30);
  if (0 < iVar13) {
    dVar22 = _DAT_00653f50 - _DAT_00653f50 / ((double)fVar16 + _DAT_00653f50);
    fVar16 = pfVar1[3];
    lVar2 = *(long *)PTR_cos_table_00715460;
    lVar3 = *(long *)(param_1 + 0x20);
    lVar4 = *(long *)(param_1 + 0x18);
    lVar5 = *(long *)(param_1 + 8);
    lVar6 = *(long *)(param_1 + 0x10);
    lVar10 = 0;
    fVar15 = fVar17;
    do {
      fVar17 = *(float *)(lVar6 + lVar10 * 4) * fVar16;
      if (fVar17 <= 0.0) {
        fVar17 = 0.0;
      }
      dVar20 = (double)(fVar17 * fVar7) + dVar8;
      fVar23 = (float)((double)((ulong)dVar20 & 0xffffffff | 0x4138000000000000) + dVar9);
      uVar12 = (ulong)((uint)((ulong)dVar20 >> 0x1e) & 0x7fc);
      fVar18 = *(float *)(lVar2 + uVar12);
      uVar11 = (ulong)((int)((ulong)dVar20 >> 0x20) + 0x180U & 0x1ff);
      fVar21 = *(float *)(lVar2 + uVar11 * 4);
      fVar17 = (float)((uint)(fVar14 - fVar17 * fVar24) & -(uint)(0.0 < fVar24));
      if (fVar17 <= 0.0) {
        fVar17 = 0.0;
      }
      fVar18 = ((*(float *)(lVar2 + 4 + uVar12) - fVar18) * fVar23 + fVar18) * fVar17;
      fVar21 = ((*(float *)(lVar2 + 4 + uVar11 * 4) - fVar21) * fVar23 + fVar21) * fVar17;
      fVar17 = (fVar18 * fVar15 + *(float *)(lVar5 + lVar10 * 4) * (float)dVar22 * (fVar14 - fVar17)
               ) - fVar21 * fVar19;
      *(float *)(lVar4 + lVar10 * 4) = fVar17;
      fVar19 = fVar18 * fVar19 + fVar21 * fVar15;
      *(float *)(lVar3 + lVar10 * 4) = fVar19;
      lVar10 = lVar10 + 1;
      fVar15 = fVar17;
    } while (iVar13 != (int)lVar10);
  }
  fVar16 = 0.0;
  if ((((uint)fVar17 >> 0x1d ^ (uint)fVar17 >> 0x1e) & 1) != 0) {
    fVar16 = fVar17;
  }
  fVar14 = 0.0;
  if ((((uint)fVar19 >> 0x1d ^ (uint)fVar19 >> 0x1e) & 1) != 0) {
    fVar14 = fVar19;
  }
  *pfVar1 = fVar16;
  pfVar1[1] = fVar14;
  return param_1 + 0x38;
}


