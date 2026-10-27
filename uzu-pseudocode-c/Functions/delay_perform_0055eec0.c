// Function : delay_perform
// Namespace: 
// Entry    : 0055eec0
// Prototype: long delay_perform(long param_1)
// Body     : 0055eec0 - 0055f34d


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long delay_perform(long param_1)

{
  float *pfVar1;
  double dVar2;
  long lVar3;
  ulong uVar4;
  float *pfVar5;
  float *pfVar6;
  int iVar7;
  long lVar8;
  float *pfVar9;
  float *pfVar10;
  float *pfVar11;
  float *pfVar12;
  long lVar13;
  int iVar14;
  float *pfVar15;
  float *pfVar16;
  int iVar17;
  int iVar18;
  bool bVar19;
  float fVar20;
  double dVar21;
  float fVar22;
  double dVar23;
  
  lVar3 = *(long *)(param_1 + 8);
  uVar4 = *(ulong *)(param_1 + 0x10);
  pfVar16 = *(float **)(param_1 + 0x18);
  pfVar15 = *(float **)(param_1 + 0x28);
  pfVar5 = *(float **)(lVar3 + 0x40);
  pfVar6 = *(float **)(lVar3 + 0x48);
  pfVar10 = *(float **)(lVar3 + 0x50);
  iVar18 = *(int *)(lVar3 + 0x5c);
  pfVar12 = (float *)(long)iVar18;
  iVar7 = *(int *)(lVar3 + 100);
  fVar20 = **(float **)(param_1 + 0x20);
  iVar17 = *(int *)(lVar3 + 0x88);
  iVar14 = (int)uVar4;
  if ((float)iVar7 == fVar20) {
LAB_0055ef77:
    if (iVar17 == 0) {
      if (iVar7 == 0) {
        if (iVar14 != 0) {
          if ((uVar4 & 1) == 0) {
            iVar18 = iVar14;
          }
          else {
            fVar20 = *pfVar16;
            fVar22 = 0.0;
            if ((((uint)fVar20 >> 0x1d ^ (uint)fVar20 >> 0x1e) & 1) != 0) {
              fVar22 = fVar20;
            }
            iVar18 = iVar14 + -1;
            pfVar16 = pfVar16 + 1;
            *pfVar10 = fVar22;
            *pfVar15 = fVar22;
            pfVar15 = pfVar15 + 1;
            bVar19 = pfVar10 == pfVar6;
            pfVar10 = pfVar10 + 1;
            if (bVar19) {
              pfVar10 = pfVar5;
            }
            pfVar12 = pfVar10;
          }
          if (iVar14 != 1) {
            lVar8 = 0;
            pfVar12 = pfVar10;
            do {
              fVar20 = pfVar16[lVar8];
              fVar22 = 0.0;
              if ((((uint)fVar20 >> 0x1d ^ (uint)fVar20 >> 0x1e) & 1) != 0) {
                fVar22 = fVar20;
              }
              *pfVar12 = fVar22;
              pfVar15[lVar8] = fVar22;
              pfVar10 = pfVar12 + 1;
              if (pfVar12 == pfVar6) {
                pfVar10 = pfVar5;
              }
              fVar20 = pfVar16[lVar8 + 1];
              fVar22 = 0.0;
              if ((((uint)fVar20 >> 0x1d ^ (uint)fVar20 >> 0x1e) & 1) != 0) {
                fVar22 = fVar20;
              }
              *pfVar10 = fVar22;
              pfVar15[lVar8 + 1] = fVar22;
              pfVar12 = pfVar10 + 1;
              if (pfVar10 == pfVar6) {
                pfVar12 = pfVar5;
              }
              lVar8 = lVar8 + 2;
            } while (iVar18 != (int)lVar8);
          }
          goto LAB_0055f252;
        }
      }
      else if (iVar14 != 0) {
        lVar13 = (long)pfVar12 + 1;
        lVar8 = 0;
        if (pfVar5 <= pfVar10 + -(long)iVar7) {
          lVar13 = 0;
        }
        pfVar9 = pfVar10 + -(long)iVar7 + lVar13;
        do {
          fVar20 = pfVar16[lVar8];
          fVar22 = 0.0;
          if ((((uint)fVar20 >> 0x1d ^ (uint)fVar20 >> 0x1e) & 1) != 0) {
            fVar22 = fVar20;
          }
          pfVar15[lVar8] = *pfVar9;
          *pfVar10 = fVar22;
          bVar19 = pfVar9 == pfVar6;
          pfVar9 = pfVar9 + 1;
          if (bVar19) {
            pfVar9 = pfVar5;
          }
          bVar19 = pfVar10 == pfVar6;
          pfVar10 = pfVar10 + 1;
          if (bVar19) {
            pfVar10 = pfVar5;
          }
          lVar8 = lVar8 + 1;
          pfVar12 = pfVar10;
        } while (iVar14 != (int)lVar8);
        goto LAB_0055f252;
      }
      pfVar12 = pfVar10;
      goto LAB_0055f252;
    }
  }
  else if (iVar17 == 0) {
    if (fVar20 <= 0.0) {
      fVar20 = 0.0;
    }
    *(int *)(lVar3 + 0x68) = iVar7;
    iVar7 = iVar18;
    if ((int)fVar20 <= iVar18) {
      iVar7 = (int)fVar20;
    }
    *(int *)(lVar3 + 100) = iVar7;
    dVar21 = (double)((float)*(int *)(lVar3 + 0x58) * *(float *)(lVar3 + 0x6c)) * DAT_00651e50;
    iVar17 = (int)dVar21;
    *(int *)(lVar3 + 0x88) = iVar17;
    dVar2 = _DAT_005d9000;
    *(double *)(lVar3 + 0x70) = _DAT_005d9000 / (double)(int)dVar21;
    *(undefined8 *)(lVar3 + 0x78) = 0;
    *(double *)(lVar3 + 0x80) = dVar2;
    goto LAB_0055ef77;
  }
  dVar2 = *(double *)(lVar3 + 0x70);
  dVar21 = *(double *)(lVar3 + 0x78);
  dVar23 = *(double *)(lVar3 + 0x80);
  lVar13 = (long)pfVar12 + 1;
  lVar8 = 0;
  if (pfVar10 + -(long)*(int *)(lVar3 + 0x68) < pfVar5) {
    lVar8 = lVar13;
  }
  pfVar12 = pfVar10 + -(long)*(int *)(lVar3 + 0x68) + lVar8;
  if (pfVar5 <= pfVar10 + -(long)iVar7) {
    lVar13 = 0;
  }
  pfVar9 = pfVar10 + -(long)iVar7 + lVar13;
  iVar18 = iVar17 - iVar14;
  if (iVar18 == 0 || iVar17 < iVar14) {
    iVar18 = iVar17;
    do {
      fVar20 = *pfVar16;
      fVar22 = 0.0;
      if ((((uint)fVar20 >> 0x1d ^ (uint)fVar20 >> 0x1e) & 1) != 0) {
        fVar22 = fVar20;
      }
      pfVar16 = pfVar16 + 1;
      pfVar1 = pfVar15 + 1;
      bVar19 = pfVar12 == pfVar6;
      *pfVar10 = fVar22;
      fVar20 = *pfVar12;
      pfVar12 = pfVar12 + 1;
      if (bVar19) {
        pfVar12 = pfVar5;
      }
      pfVar11 = pfVar9 + 1;
      if (pfVar9 == pfVar6) {
        pfVar11 = pfVar5;
      }
      bVar19 = pfVar10 == pfVar6;
      pfVar10 = pfVar10 + 1;
      if (bVar19) {
        pfVar10 = pfVar5;
      }
      dVar21 = dVar21 + dVar2;
      dVar23 = dVar23 - dVar2;
      *pfVar15 = (float)((double)*pfVar9 * dVar21 + (double)fVar20 * dVar23);
      iVar18 = iVar18 + -1;
      pfVar15 = pfVar1;
      pfVar9 = pfVar11;
    } while (iVar18 != 0);
    if (iVar14 != iVar17) {
      lVar8 = 0;
      do {
        fVar20 = pfVar16[lVar8];
        fVar22 = 0.0;
        if ((((uint)fVar20 >> 0x1d ^ (uint)fVar20 >> 0x1e) & 1) != 0) {
          fVar22 = fVar20;
        }
        *pfVar10 = fVar22;
        pfVar1[lVar8] = *pfVar11;
        bVar19 = pfVar11 == pfVar6;
        pfVar11 = pfVar11 + 1;
        if (bVar19) {
          pfVar11 = pfVar5;
        }
        bVar19 = pfVar10 == pfVar6;
        pfVar10 = pfVar10 + 1;
        if (bVar19) {
          pfVar10 = pfVar5;
        }
        lVar8 = lVar8 + 1;
      } while (iVar14 - iVar17 != (int)lVar8);
    }
    iVar18 = 0;
  }
  else if (iVar14 != 0) {
    lVar8 = 0;
    do {
      fVar20 = pfVar16[lVar8];
      fVar22 = 0.0;
      if ((((uint)fVar20 >> 0x1d ^ (uint)fVar20 >> 0x1e) & 1) != 0) {
        fVar22 = fVar20;
      }
      dVar21 = dVar21 + dVar2;
      dVar23 = dVar23 - dVar2;
      *pfVar10 = fVar22;
      pfVar15[lVar8] = (float)((double)*pfVar9 * dVar21 + (double)*pfVar12 * dVar23);
      bVar19 = pfVar12 == pfVar6;
      pfVar12 = pfVar12 + 1;
      if (bVar19) {
        pfVar12 = pfVar5;
      }
      bVar19 = pfVar9 == pfVar6;
      pfVar9 = pfVar9 + 1;
      if (bVar19) {
        pfVar9 = pfVar5;
      }
      bVar19 = pfVar10 == pfVar6;
      pfVar10 = pfVar10 + 1;
      if (bVar19) {
        pfVar10 = pfVar5;
      }
      lVar8 = lVar8 + 1;
    } while (iVar14 != (int)lVar8);
  }
  *(double *)(lVar3 + 0x78) = dVar21;
  *(double *)(lVar3 + 0x80) = dVar23;
  *(int *)(lVar3 + 0x88) = iVar18;
  pfVar12 = pfVar10;
LAB_0055f252:
  *(float **)(lVar3 + 0x50) = pfVar12;
  return param_1 + 0x30;
}


