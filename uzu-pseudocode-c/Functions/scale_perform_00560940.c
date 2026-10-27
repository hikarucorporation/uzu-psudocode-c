// Function : scale_perform
// Namespace: 
// Entry    : 00560940
// Prototype: long scale_perform(long param_1)
// Body     : 00560940 - 00560c51


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long scale_perform(long param_1)

{
  float fVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  int iVar9;
  long lVar10;
  float fVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  
  iVar9 = (int)*(undefined8 *)(param_1 + 0x10);
  if (iVar9 != 0) {
    lVar2 = *(long *)(param_1 + 0x18);
    lVar3 = *(long *)(param_1 + 0x20);
    lVar4 = *(long *)(param_1 + 0x28);
    lVar5 = *(long *)(param_1 + 0x30);
    lVar6 = *(long *)(param_1 + 0x38);
    lVar7 = *(long *)(param_1 + 0x40);
    lVar8 = *(long *)(param_1 + 0x48);
    if (*(long *)(*(long *)(param_1 + 8) + 0x58) == 0) {
      lVar10 = 0;
      do {
        fVar17 = *(float *)(lVar2 + lVar10 * 4);
        fVar19 = *(float *)(lVar3 + lVar10 * 4);
        fVar1 = *(float *)(lVar5 + lVar10 * 4);
        fVar15 = *(float *)(lVar4 + lVar10 * 4) - fVar19;
        fVar11 = (fVar17 - fVar19) / fVar15;
        if (fVar11 == 0.0) {
          dVar12 = (double)fVar1;
        }
        else {
          fVar18 = *(float *)(lVar7 + lVar10 * 4);
          if (fVar18 <= 0.0) {
            fVar18 = 0.0;
          }
          dVar12 = (double)(*(float *)(lVar6 + lVar10 * 4) - fVar1);
          if (fVar11 <= 0.0) {
            dVar13 = pow((double)((fVar19 - fVar17) / fVar15),(double)fVar18);
            dVar12 = (double)fVar1 - dVar13 * dVar12;
          }
          else {
            dVar13 = pow((double)fVar11,(double)fVar18);
            dVar12 = (double)fVar1 + dVar13 * dVar12;
          }
        }
        *(float *)(lVar8 + lVar10 * 4) = (float)dVar12;
        lVar10 = lVar10 + 1;
      } while (iVar9 != (int)lVar10);
    }
    else {
      lVar10 = 0;
      fVar17 = DAT_005d9038;
      do {
        fVar19 = *(float *)(lVar2 + lVar10 * 4);
        fVar1 = *(float *)(lVar3 + lVar10 * 4);
        fVar15 = *(float *)(lVar4 + lVar10 * 4);
        fVar11 = *(float *)(lVar5 + lVar10 * 4);
        fVar18 = *(float *)(lVar6 + lVar10 * 4);
        fVar16 = *(float *)(lVar7 + lVar10 * 4);
        if (fVar16 <= fVar17) {
          fVar16 = fVar17;
        }
        if (fVar16 == fVar17) {
          fVar19 = (fVar19 - fVar1) / (fVar15 - fVar1);
          if (fVar19 == 0.0) {
          }
          else {
            fVar1 = fVar19 * (fVar18 - fVar11);
            if (fVar19 <= 0.0) {
              fVar11 = fVar11 + fVar1;
            }
            else {
              fVar11 = fVar1 + fVar11;
            }
          }
        }
        else {
          fVar18 = fVar18 - fVar11;
          dVar12 = (double)fVar18;
          dVar13 = log((double)fVar16);
          dVar14 = exp((double)(fVar1 - fVar15) * dVar13);
          dVar13 = exp((double)fVar19 * dVar13);
          fVar11 = (float)(dVar12 * dVar12 * dVar14 * dVar13 + (double)fVar11);
          if (fVar18 <= 0.0) {
            fVar11 = (float)((uint)fVar11 ^ _DAT_006524b0);
          }
          fVar17 = DAT_005d9038;
        }
        *(float *)(lVar8 + lVar10 * 4) = fVar11;
        lVar10 = lVar10 + 1;
      } while (iVar9 != (int)lVar10);
    }
  }
  return param_1 + 0x50;
}


