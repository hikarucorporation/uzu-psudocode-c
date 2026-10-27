// Function : upsampling_perform_linear
// Namespace: 
// Entry    : 00573b70
// Prototype: long upsampling_perform_linear(long param_1)
// Body     : 00573b70 - 00573c6b


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long upsampling_perform_linear(long param_1)

{
  int iVar1;
  float *pfVar2;
  float *pfVar3;
  long lVar4;
  double dVar5;
  float fVar6;
  int iVar7;
  long lVar8;
  int iVar9;
  uint uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  fVar6 = DAT_005d9038;
  dVar5 = _DAT_005d9000;
  iVar1 = *(int *)(param_1 + 0x28);
  iVar7 = iVar1 * *(int *)(param_1 + 0x20);
  pfVar2 = *(float **)(*(long *)(param_1 + 8) + 0x30);
  fVar11 = *pfVar2;
  if (0 < iVar7) {
    pfVar3 = *(float **)(param_1 + 0x10);
    fVar12 = *pfVar3;
    lVar4 = *(long *)(param_1 + 0x18);
    fVar13 = DAT_005d9038 / (float)*(int *)(param_1 + 0x20);
    lVar8 = 0;
    do {
      fVar14 = (float)((int)lVar8 + 1) * fVar13;
      iVar9 = (int)fVar14;
      uVar10 = -(uint)(fVar14 - (float)(int)fVar14 == 0.0);
      fVar14 = (float)(uVar10 & (uint)fVar6 | ~uVar10 & (uint)(fVar14 - (float)(int)fVar14));
      *(float *)(lVar4 + lVar8 * 4) =
           (float)((double)fVar11 * (dVar5 - (double)fVar14) + (double)(fVar14 * fVar12));
      if (iVar9 < iVar1) {
        fVar12 = pfVar3[iVar9];
      }
      if (iVar9 != 0) {
        fVar11 = pfVar3[(long)iVar9 + -1];
      }
      lVar8 = lVar8 + 1;
    } while (iVar7 != (int)lVar8);
  }
  *pfVar2 = fVar11;
  return param_1 + 0x30;
}


