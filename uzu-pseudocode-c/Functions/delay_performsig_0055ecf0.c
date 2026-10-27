// Function : delay_performsig
// Namespace: 
// Entry    : 0055ecf0
// Prototype: long delay_performsig(long param_1)
// Body     : 0055ecf0 - 0055eeb6


long delay_performsig(long param_1)

{
  uint *puVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  uint uVar6;
  long lVar7;
  uint *puVar8;
  uint *puVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  float fVar13;
  double dVar14;
  long lVar15;
  uint *puVar16;
  long lVar17;
  uint *puVar18;
  int iVar19;
  uint uVar20;
  double dVar21;
  float fVar22;
  
  dVar14 = DAT_0065ab18;
  fVar13 = DAT_00652610;
  lVar7 = *(long *)(param_1 + 8);
  iVar19 = (int)*(undefined8 *)(param_1 + 0x10);
  if (iVar19 == 0) {
    puVar16 = *(uint **)(lVar7 + 0x50);
  }
  else {
    puVar8 = *(uint **)(lVar7 + 0x40);
    puVar9 = *(uint **)(lVar7 + 0x48);
    puVar1 = puVar8 + 3;
    iVar5 = *(int *)(lVar7 + 0x5c);
    lVar10 = *(long *)(param_1 + 0x28);
    lVar11 = *(long *)(param_1 + 0x18);
    lVar12 = *(long *)(param_1 + 0x20);
    fVar22 = (float)iVar5;
    lVar17 = 0;
    puVar18 = *(uint **)(lVar7 + 0x50);
    do {
      while( true ) {
        uVar6 = *(uint *)(lVar11 + lVar17 * 4);
        uVar20 = 0;
        if (((uVar6 >> 0x1d ^ uVar6 >> 0x1e) & 1) != 0) {
          uVar20 = uVar6;
        }
        *puVar18 = uVar20;
        fVar2 = *(float *)(lVar12 + lVar17 * 4);
        if (fVar2 <= 0.0) {
          fVar2 = 0.0;
        }
        if (fVar22 <= fVar2) {
          fVar2 = fVar22;
        }
        puVar16 = puVar18 + -(long)(int)fVar2;
        lVar15 = 0;
        if (puVar16 < puVar1) {
          lVar15 = (long)iVar5 + 4;
        }
        fVar3 = (float)puVar16[lVar15 + -1];
        fVar4 = (float)puVar16[lVar15];
        dVar21 = (double)(fVar2 - (float)(int)fVar2);
        *(float *)(lVar10 + lVar17 * 4) =
             (float)(((double)(fVar4 + fVar4 + (float)puVar16[lVar15 + -3] + fVar3 * fVar13 +
                              (((float)puVar16[lVar15 + -3] - fVar4) +
                              ((float)puVar16[lVar15 + -2] - fVar3) * fVar13) *
                              (fVar2 - (float)(int)fVar2)) * (dVar21 * dVar14 - dVar14) +
                     (double)((float)puVar16[lVar15 + -2] - fVar3)) * dVar21 + (double)fVar3);
        puVar16 = puVar18 + 1;
        if (puVar16 == puVar9) break;
        lVar17 = lVar17 + 1;
        puVar18 = puVar16;
        if (iVar19 == (int)lVar17) goto LAB_0055eea4;
      }
      *puVar8 = puVar18[-2];
      puVar8[1] = puVar18[-1];
      puVar8[2] = *puVar18;
      lVar17 = lVar17 + 1;
      puVar16 = puVar1;
      puVar18 = puVar1;
    } while (iVar19 != (int)lVar17);
  }
LAB_0055eea4:
  *(uint **)(lVar7 + 0x50) = puVar16;
  return param_1 + 0x30;
}


