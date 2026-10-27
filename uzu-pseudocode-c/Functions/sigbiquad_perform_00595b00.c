// Function : sigbiquad_perform
// Namespace: 
// Entry    : 00595b00
// Prototype: long sigbiquad_perform(long param_1)
// Body     : 00595b00 - 00595bc2


long sigbiquad_perform(long param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float *pfVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  int iVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  pfVar6 = *(float **)(param_1 + 0x18);
  fVar11 = *pfVar6;
  fVar12 = pfVar6[1];
  iVar10 = (int)*(undefined8 *)(param_1 + 0x20);
  if (0 < iVar10) {
    fVar1 = pfVar6[2];
    fVar2 = pfVar6[3];
    fVar3 = pfVar6[4];
    fVar4 = pfVar6[5];
    fVar5 = pfVar6[6];
    lVar7 = *(long *)(param_1 + 8);
    lVar8 = *(long *)(param_1 + 0x10);
    lVar9 = 0;
    fVar13 = fVar12;
    do {
      fVar12 = fVar11;
      fVar14 = fVar13 * fVar2 + fVar12 * fVar1 + *(float *)(lVar7 + lVar9 * 4);
      fVar11 = 0.0;
      if ((((uint)fVar14 >> 0x1d ^ (uint)fVar14 >> 0x1e) & 1) != 0) {
        fVar11 = fVar14;
      }
      *(float *)(lVar8 + lVar9 * 4) = fVar13 * fVar5 + fVar12 * fVar4 + fVar11 * fVar3;
      lVar9 = lVar9 + 1;
      fVar13 = fVar12;
    } while (iVar10 != (int)lVar9);
  }
  *pfVar6 = fVar11;
  pfVar6[1] = fVar12;
  return param_1 + 0x28;
}


