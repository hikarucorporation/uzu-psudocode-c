// Function : log_tilde_perform_reversescalar
// Namespace: 
// Entry    : 00589620
// Prototype: long log_tilde_perform_reversescalar(long param_1)
// Body     : 00589620 - 005898cb


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long log_tilde_perform_reversescalar(long param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  double dVar3;
  double dVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  float *pfVar11;
  ulong uVar12;
  long lVar13;
  float *pfVar14;
  uint uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  
  uVar2 = *(uint *)(param_1 + 0x20);
  uVar15 = uVar2 - 1;
  if (uVar2 != 0) {
    pfVar11 = *(float **)(param_1 + 0x18);
    fVar16 = **(float **)(param_1 + 0x10);
    dVar3 = log((double)fVar16);
    uVar7 = _UNK_0065d2f8;
    uVar6 = _DAT_0065d2f0;
    if (0.0 <= fVar16) {
      pfVar14 = *(float **)(param_1 + 8);
      uVar5 = uVar15;
      fVar16 = DAT_005d9038;
      fVar17 = DAT_0065b9c0;
      if ((uVar2 & 1) != 0) {
        if (*pfVar14 <= DAT_005d9038) {
          fVar16 = DAT_0065b9c0;
        }
        else {
          dVar4 = log((double)*pfVar14);
          fVar16 = (float)(dVar3 / dVar4);
        }
        pfVar14 = pfVar14 + 1;
        *pfVar11 = fVar16;
        pfVar11 = pfVar11 + 1;
        uVar5 = uVar2 - 2;
        fVar16 = DAT_005d9038;
        fVar17 = DAT_0065b9c0;
      }
      DAT_005d9038 = fVar16;
      DAT_0065b9c0 = fVar17;
      if (uVar15 != 0) {
        lVar9 = 0;
        do {
          fVar18 = fVar17;
          if (fVar16 < pfVar14[lVar9]) {
            dVar4 = log((double)pfVar14[lVar9]);
            fVar17 = (float)(dVar3 / dVar4);
            fVar18 = DAT_0065b9c0;
            fVar16 = DAT_005d9038;
          }
          pfVar11[lVar9] = fVar17;
          fVar17 = fVar18;
          if (fVar16 < pfVar14[lVar9 + 1]) {
            dVar4 = log((double)pfVar14[lVar9 + 1]);
            fVar18 = (float)(dVar3 / dVar4);
            fVar17 = DAT_0065b9c0;
            fVar16 = DAT_005d9038;
          }
          pfVar11[lVar9 + 1] = fVar18;
          lVar9 = lVar9 + 2;
        } while (uVar5 + 1 != (int)lVar9);
      }
    }
    else {
      if (6 < uVar15) {
        uVar8 = (ulong)uVar15 + 1 & 0xfffffffffffffff8;
        uVar12 = (uVar8 - 8 >> 3) + 1;
        uVar10 = (ulong)((uint)uVar12 & 7);
        if (uVar8 - 8 < 0x38) {
          lVar9 = 0;
        }
        else {
          uVar12 = uVar12 & 0xfffffffffffffff8;
          lVar9 = 0;
          do {
            *(undefined8 *)(pfVar11 + lVar9) = uVar6;
            *(undefined8 *)(pfVar11 + lVar9 + 2) = uVar7;
            *(undefined8 *)(pfVar11 + lVar9 + 4) = uVar6;
            *(undefined8 *)(pfVar11 + lVar9 + 4 + 2) = uVar7;
            *(undefined8 *)(pfVar11 + lVar9 + 8) = uVar6;
            *(undefined8 *)(pfVar11 + lVar9 + 8 + 2) = uVar7;
            *(undefined8 *)(pfVar11 + lVar9 + 0xc) = uVar6;
            *(undefined8 *)(pfVar11 + lVar9 + 0xc + 2) = uVar7;
            *(undefined8 *)(pfVar11 + lVar9 + 0x10) = uVar6;
            *(undefined8 *)(pfVar11 + lVar9 + 0x10 + 2) = uVar7;
            *(undefined8 *)(pfVar11 + lVar9 + 0x14) = uVar6;
            *(undefined8 *)(pfVar11 + lVar9 + 0x14 + 2) = uVar7;
            *(undefined8 *)(pfVar11 + lVar9 + 0x18) = uVar6;
            *(undefined8 *)(pfVar11 + lVar9 + 0x18 + 2) = uVar7;
            *(undefined8 *)(pfVar11 + lVar9 + 0x1c) = uVar6;
            *(undefined8 *)(pfVar11 + lVar9 + 0x1c + 2) = uVar7;
            *(undefined8 *)(pfVar11 + lVar9 + 0x20) = uVar6;
            *(undefined8 *)(pfVar11 + lVar9 + 0x20 + 2) = uVar7;
            *(undefined8 *)(pfVar11 + lVar9 + 0x24) = uVar6;
            *(undefined8 *)(pfVar11 + lVar9 + 0x24 + 2) = uVar7;
            *(undefined8 *)(pfVar11 + lVar9 + 0x28) = uVar6;
            *(undefined8 *)(pfVar11 + lVar9 + 0x28 + 2) = uVar7;
            *(undefined8 *)(pfVar11 + lVar9 + 0x2c) = uVar6;
            *(undefined8 *)(pfVar11 + lVar9 + 0x2c + 2) = uVar7;
            *(undefined8 *)(pfVar11 + lVar9 + 0x30) = uVar6;
            *(undefined8 *)(pfVar11 + lVar9 + 0x30 + 2) = uVar7;
            *(undefined8 *)(pfVar11 + lVar9 + 0x34) = uVar6;
            *(undefined8 *)(pfVar11 + lVar9 + 0x34 + 2) = uVar7;
            *(undefined8 *)(pfVar11 + lVar9 + 0x38) = uVar6;
            *(undefined8 *)(pfVar11 + lVar9 + 0x38 + 2) = uVar7;
            *(undefined8 *)(pfVar11 + lVar9 + 0x3c) = uVar6;
            *(undefined8 *)(pfVar11 + lVar9 + 0x3c + 2) = uVar7;
            lVar9 = lVar9 + 0x40;
            uVar12 = uVar12 - 8;
          } while (uVar12 != 0);
        }
        uVar7 = _UNK_0065d2f8;
        uVar6 = _DAT_0065d2f0;
        if (uVar10 != 0) {
          lVar13 = 0;
          do {
            puVar1 = (undefined8 *)((long)pfVar11 + lVar13 + lVar9 * 4);
            *puVar1 = uVar6;
            puVar1[1] = uVar7;
            puVar1 = (undefined8 *)((long)pfVar11 + lVar13 + lVar9 * 4 + 0x10);
            *puVar1 = uVar6;
            puVar1[1] = uVar7;
            lVar13 = lVar13 + 0x20;
          } while (uVar10 * 0x20 != lVar13);
        }
        if ((ulong)uVar15 + 1 == uVar8) goto LAB_005898b6;
        uVar15 = uVar15 - (int)uVar8;
        pfVar11 = pfVar11 + uVar8;
      }
      lVar9 = 0;
      do {
        pfVar11[lVar9] = -1000.0;
        lVar9 = lVar9 + 1;
      } while (uVar15 + 1 != (int)lVar9);
    }
  }
LAB_005898b6:
  return param_1 + 0x28;
}


