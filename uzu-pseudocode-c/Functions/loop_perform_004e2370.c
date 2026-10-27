// Function : loop_perform
// Namespace: 
// Entry    : 004e2370
// Prototype: long loop_perform(long param_1)
// Body     : 004e2370 - 004e24c6


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long loop_perform(long param_1)

{
  double *pdVar1;
  long lVar2;
  float *pfVar3;
  long lVar4;
  long lVar5;
  double dVar6;
  float fVar7;
  float fVar8;
  double dVar9;
  long lVar10;
  int iVar11;
  float fVar12;
  float fVar13;
  double dVar14;
  double dVar15;
  float fVar16;
  
  pdVar1 = *(double **)(param_1 + 8);
  lVar2 = *(long *)(param_1 + 0x10);
  pfVar3 = *(float **)(param_1 + 0x18);
  lVar4 = *(long *)(param_1 + 0x20);
  lVar5 = *(long *)(param_1 + 0x28);
  dVar14 = *pdVar1;
  iVar11 = (int)*(undefined8 *)(param_1 + 0x30);
  if (*(int *)(pdVar1 + 2) == 0) {
    fVar13 = *(float *)(pdVar1 + 1);
    fVar12 = *(float *)((long)pdVar1 + 0xc);
    dVar6 = DAT_00651e70;
    fVar7 = DAT_005d9054;
    fVar8 = DAT_005d9038;
    dVar9 = _DAT_005d9000;
  }
  else {
    fVar12 = *pfVar3;
    if (0.0 <= fVar12) {
      fVar13 = DAT_005d9038;
      if (fVar12 <= DAT_005d9038) {
        fVar12 = DAT_005d9038;
      }
    }
    else {
      fVar13 = DAT_005d9054;
      if (DAT_005d9054 <= fVar12) {
        fVar12 = DAT_005d9054;
      }
    }
    fVar13 = fVar13 / fVar12;
    *(undefined4 *)(pdVar1 + 2) = 0;
    dVar6 = DAT_00651e70;
    fVar7 = DAT_005d9054;
    fVar8 = DAT_005d9038;
    dVar9 = _DAT_005d9000;
  }
  _DAT_005d9000 = dVar9;
  DAT_005d9038 = fVar8;
  DAT_005d9054 = fVar7;
  DAT_00651e70 = dVar6;
  if (iVar11 != 0) {
    lVar10 = 0;
    do {
      fVar16 = *(float *)(lVar2 + lVar10 * 4) * fVar13;
      dVar15 = 0.0;
      if (0.0 <= fVar16) {
        dVar15 = (double)fVar16;
        if (fVar16 < fVar8) goto LAB_004e249c;
LAB_004e247c:
        dVar14 = dVar14 + 0.0;
      }
      else {
        if (fVar8 <= fVar16) goto LAB_004e247c;
LAB_004e249c:
        dVar14 = dVar15 + dVar14;
      }
      if (dVar9 <= dVar14) {
        fVar12 = pfVar3[lVar10];
        if (0.0 <= fVar12) {
          if (fVar12 <= fVar8) {
            fVar12 = fVar8;
          }
          fVar13 = fVar8;
        }
        else {
          if (fVar7 <= fVar12) {
            fVar12 = fVar7;
          }
          fVar13 = fVar7;
        }
        fVar13 = fVar13 / fVar12;
        dVar14 = dVar14 + dVar6;
      }
      *(float *)(lVar4 + lVar10 * 4) = (float)dVar14;
      *(float *)(lVar5 + lVar10 * 4) = fVar12;
      lVar10 = lVar10 + 1;
    } while (iVar11 != (int)lVar10);
  }
  *(float *)(pdVar1 + 1) = fVar13;
  *(float *)((long)pdVar1 + 0xc) = fVar12;
  *pdVar1 = dVar14;
  return param_1 + 0x38;
}


