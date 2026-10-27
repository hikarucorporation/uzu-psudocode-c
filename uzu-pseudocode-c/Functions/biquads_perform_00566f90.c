// Function : biquads_perform
// Namespace: 
// Entry    : 00566f90
// Prototype: long biquads_perform(long param_1)
// Body     : 00566f90 - 0056749a


long biquads_perform(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  float fVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  double *pdVar16;
  ulong uVar17;
  long lVar18;
  uint uVar19;
  uint uVar20;
  ulong uVar21;
  long lVar22;
  ulong uVar23;
  ulong uVar24;
  uint uVar25;
  float *pfVar26;
  float *pfVar27;
  bool bVar28;
  
  uVar20 = *(uint *)(param_1 + 0x10);
  uVar25 = uVar20 - 1;
  if (uVar20 != 0) {
    lVar18 = *(long *)(param_1 + 8);
    pfVar26 = *(float **)(param_1 + 0x18);
    pfVar27 = *(float **)(param_1 + 0x20);
    if (*(long *)(lVar18 + 0x680) == 0) {
      uVar20 = *(uint *)(lVar18 + 0x688);
      if ((int)uVar20 < 1) {
        if ((6 < uVar25) &&
           ((uVar21 = (ulong)uVar25, pfVar26 + uVar21 + 1 <= pfVar27 ||
            (pfVar27 + uVar21 + 1 <= pfVar26)))) {
          uVar24 = uVar21 + 1 & 0xfffffffffffffff8;
          uVar17 = (uVar24 - 8 >> 3) + 1;
          uVar23 = (ulong)((uint)uVar17 & 3);
          if (uVar24 - 8 < 0x18) {
            lVar18 = 0;
          }
          else {
            uVar17 = uVar17 & 0xfffffffffffffffc;
            lVar18 = 0;
            do {
              uVar13 = *(undefined8 *)(pfVar26 + lVar18 + 2);
              uVar14 = *(undefined8 *)(pfVar26 + lVar18 + 4);
              uVar15 = *(undefined8 *)(pfVar26 + lVar18 + 4 + 2);
              *(undefined8 *)(pfVar27 + lVar18) = *(undefined8 *)(pfVar26 + lVar18);
              *(undefined8 *)(pfVar27 + lVar18 + 2) = uVar13;
              *(undefined8 *)(pfVar27 + lVar18 + 4) = uVar14;
              *(undefined8 *)(pfVar27 + lVar18 + 4 + 2) = uVar15;
              uVar13 = *(undefined8 *)(pfVar26 + lVar18 + 8 + 2);
              uVar14 = *(undefined8 *)(pfVar26 + lVar18 + 0xc);
              uVar15 = *(undefined8 *)(pfVar26 + lVar18 + 0xc + 2);
              *(undefined8 *)(pfVar27 + lVar18 + 8) = *(undefined8 *)(pfVar26 + lVar18 + 8);
              *(undefined8 *)(pfVar27 + lVar18 + 8 + 2) = uVar13;
              *(undefined8 *)(pfVar27 + lVar18 + 0xc) = uVar14;
              *(undefined8 *)(pfVar27 + lVar18 + 0xc + 2) = uVar15;
              uVar13 = *(undefined8 *)(pfVar26 + lVar18 + 0x10 + 2);
              uVar14 = *(undefined8 *)(pfVar26 + lVar18 + 0x14);
              uVar15 = *(undefined8 *)(pfVar26 + lVar18 + 0x14 + 2);
              *(undefined8 *)(pfVar27 + lVar18 + 0x10) = *(undefined8 *)(pfVar26 + lVar18 + 0x10);
              *(undefined8 *)(pfVar27 + lVar18 + 0x10 + 2) = uVar13;
              *(undefined8 *)(pfVar27 + lVar18 + 0x14) = uVar14;
              *(undefined8 *)(pfVar27 + lVar18 + 0x14 + 2) = uVar15;
              uVar13 = *(undefined8 *)(pfVar26 + lVar18 + 0x18 + 2);
              uVar14 = *(undefined8 *)(pfVar26 + lVar18 + 0x1c);
              uVar15 = *(undefined8 *)(pfVar26 + lVar18 + 0x1c + 2);
              *(undefined8 *)(pfVar27 + lVar18 + 0x18) = *(undefined8 *)(pfVar26 + lVar18 + 0x18);
              *(undefined8 *)(pfVar27 + lVar18 + 0x18 + 2) = uVar13;
              *(undefined8 *)(pfVar27 + lVar18 + 0x1c) = uVar14;
              *(undefined8 *)(pfVar27 + lVar18 + 0x1c + 2) = uVar15;
              lVar18 = lVar18 + 0x20;
              uVar17 = uVar17 - 4;
            } while (uVar17 != 0);
          }
          if (uVar23 != 0) {
            lVar22 = 0;
            do {
              puVar2 = (undefined8 *)((long)pfVar26 + lVar22 + lVar18 * 4);
              uVar13 = puVar2[1];
              puVar1 = (undefined8 *)((long)pfVar26 + lVar22 + lVar18 * 4 + 0x10);
              uVar14 = *puVar1;
              uVar15 = puVar1[1];
              puVar1 = (undefined8 *)((long)pfVar27 + lVar22 + lVar18 * 4);
              *puVar1 = *puVar2;
              puVar1[1] = uVar13;
              puVar1 = (undefined8 *)((long)pfVar27 + lVar22 + lVar18 * 4 + 0x10);
              *puVar1 = uVar14;
              puVar1[1] = uVar15;
              lVar22 = lVar22 + 0x20;
            } while (uVar23 * 0x20 != lVar22);
          }
          if (uVar21 + 1 == uVar24) goto LAB_005672f6;
          uVar25 = uVar25 - (int)uVar24;
          pfVar26 = pfVar26 + uVar24;
          pfVar27 = pfVar27 + uVar24;
        }
        uVar19 = uVar25 + 1 & 7;
        uVar20 = uVar25;
        if (uVar19 != 0) {
          uVar20 = 0;
          do {
            fVar3 = *pfVar26;
            pfVar26 = pfVar26 + 1;
            *pfVar27 = fVar3;
            pfVar27 = pfVar27 + 1;
            uVar20 = uVar20 + 1;
          } while (uVar19 != uVar20);
          uVar20 = uVar25 - uVar20;
        }
        if (6 < uVar25) {
          lVar18 = 0;
          do {
            pfVar27[lVar18] = pfVar26[lVar18];
            pfVar27[lVar18 + 1] = pfVar26[lVar18 + 1];
            pfVar27[lVar18 + 2] = pfVar26[lVar18 + 2];
            pfVar27[lVar18 + 3] = pfVar26[lVar18 + 3];
            pfVar27[lVar18 + 4] = pfVar26[lVar18 + 4];
            pfVar27[lVar18 + 5] = pfVar26[lVar18 + 5];
            pfVar27[lVar18 + 6] = pfVar26[lVar18 + 6];
            pfVar27[lVar18 + 7] = pfVar26[lVar18 + 7];
            lVar18 = lVar18 + 8;
          } while (uVar20 + 1 != (int)lVar18);
        }
      }
      else {
        do {
          dVar10 = (double)*pfVar26;
          uVar21 = 0;
          pdVar16 = (double *)(lVar18 + 0x6b0);
          do {
            dVar11 = pdVar16[-2];
            dVar12 = pdVar16[-1];
            dVar4 = *(double *)(lVar18 + 0x40 + uVar21 * 8);
            dVar5 = *(double *)(lVar18 + 0x360 + uVar21 * 8);
            dVar6 = *pdVar16;
            dVar7 = pdVar16[-4];
            dVar8 = *(double *)(lVar18 + 0x1d0 + uVar21 * 8);
            dVar9 = pdVar16[-3];
            *(double *)(lVar18 + 0x1d0 + uVar21 * 8) = dVar4;
            *(double *)(lVar18 + 0x40 + uVar21 * 8) = dVar10;
            dVar10 = dVar10 * dVar11 + dVar5 * dVar7 + dVar4 * dVar12 + dVar8 * dVar6 +
                     *(double *)(lVar18 + 0x4f0 + uVar21 * 8) * dVar9;
            *(double *)(lVar18 + 0x4f0 + uVar21 * 8) = dVar5;
            *(double *)(lVar18 + 0x360 + uVar21 * 8) = dVar10;
            uVar21 = uVar21 + 1;
            pdVar16 = pdVar16 + 5;
          } while (uVar20 != uVar21);
          pfVar26 = pfVar26 + 1;
          *pfVar27 = (float)dVar10;
          pfVar27 = pfVar27 + 1;
          bVar28 = uVar25 != 0;
          uVar25 = uVar25 - 1;
        } while (bVar28);
      }
    }
    else {
      if ((6 < uVar25) &&
         ((uVar21 = (ulong)uVar25, pfVar26 + uVar21 + 1 <= pfVar27 ||
          (pfVar27 + uVar21 + 1 <= pfVar26)))) {
        uVar24 = uVar21 + 1 & 0xfffffffffffffff8;
        uVar17 = (uVar24 - 8 >> 3) + 1;
        uVar23 = (ulong)((uint)uVar17 & 3);
        if (uVar24 - 8 < 0x18) {
          lVar18 = 0;
        }
        else {
          uVar17 = uVar17 & 0xfffffffffffffffc;
          lVar18 = 0;
          do {
            uVar13 = *(undefined8 *)(pfVar26 + lVar18 + 2);
            uVar14 = *(undefined8 *)(pfVar26 + lVar18 + 4);
            uVar15 = *(undefined8 *)(pfVar26 + lVar18 + 4 + 2);
            *(undefined8 *)(pfVar27 + lVar18) = *(undefined8 *)(pfVar26 + lVar18);
            *(undefined8 *)(pfVar27 + lVar18 + 2) = uVar13;
            *(undefined8 *)(pfVar27 + lVar18 + 4) = uVar14;
            *(undefined8 *)(pfVar27 + lVar18 + 4 + 2) = uVar15;
            uVar13 = *(undefined8 *)(pfVar26 + lVar18 + 8 + 2);
            uVar14 = *(undefined8 *)(pfVar26 + lVar18 + 0xc);
            uVar15 = *(undefined8 *)(pfVar26 + lVar18 + 0xc + 2);
            *(undefined8 *)(pfVar27 + lVar18 + 8) = *(undefined8 *)(pfVar26 + lVar18 + 8);
            *(undefined8 *)(pfVar27 + lVar18 + 8 + 2) = uVar13;
            *(undefined8 *)(pfVar27 + lVar18 + 0xc) = uVar14;
            *(undefined8 *)(pfVar27 + lVar18 + 0xc + 2) = uVar15;
            uVar13 = *(undefined8 *)(pfVar26 + lVar18 + 0x10 + 2);
            uVar14 = *(undefined8 *)(pfVar26 + lVar18 + 0x14);
            uVar15 = *(undefined8 *)(pfVar26 + lVar18 + 0x14 + 2);
            *(undefined8 *)(pfVar27 + lVar18 + 0x10) = *(undefined8 *)(pfVar26 + lVar18 + 0x10);
            *(undefined8 *)(pfVar27 + lVar18 + 0x10 + 2) = uVar13;
            *(undefined8 *)(pfVar27 + lVar18 + 0x14) = uVar14;
            *(undefined8 *)(pfVar27 + lVar18 + 0x14 + 2) = uVar15;
            uVar13 = *(undefined8 *)(pfVar26 + lVar18 + 0x18 + 2);
            uVar14 = *(undefined8 *)(pfVar26 + lVar18 + 0x1c);
            uVar15 = *(undefined8 *)(pfVar26 + lVar18 + 0x1c + 2);
            *(undefined8 *)(pfVar27 + lVar18 + 0x18) = *(undefined8 *)(pfVar26 + lVar18 + 0x18);
            *(undefined8 *)(pfVar27 + lVar18 + 0x18 + 2) = uVar13;
            *(undefined8 *)(pfVar27 + lVar18 + 0x1c) = uVar14;
            *(undefined8 *)(pfVar27 + lVar18 + 0x1c + 2) = uVar15;
            lVar18 = lVar18 + 0x20;
            uVar17 = uVar17 - 4;
          } while (uVar17 != 0);
        }
        if (uVar23 != 0) {
          lVar22 = 0;
          do {
            puVar2 = (undefined8 *)((long)pfVar26 + lVar22 + lVar18 * 4);
            uVar13 = puVar2[1];
            puVar1 = (undefined8 *)((long)pfVar26 + lVar22 + lVar18 * 4 + 0x10);
            uVar14 = *puVar1;
            uVar15 = puVar1[1];
            puVar1 = (undefined8 *)((long)pfVar27 + lVar22 + lVar18 * 4);
            *puVar1 = *puVar2;
            puVar1[1] = uVar13;
            puVar1 = (undefined8 *)((long)pfVar27 + lVar22 + lVar18 * 4 + 0x10);
            *puVar1 = uVar14;
            puVar1[1] = uVar15;
            lVar22 = lVar22 + 0x20;
          } while (uVar23 * 0x20 != lVar22);
        }
        if (uVar21 + 1 == uVar24) goto LAB_005672f6;
        uVar25 = uVar25 - (int)uVar24;
        pfVar26 = pfVar26 + uVar24;
        pfVar27 = pfVar27 + uVar24;
        uVar20 = uVar25 + 1;
      }
      uVar19 = uVar25;
      if ((uVar20 & 7) != 0) {
        uVar19 = 0;
        do {
          fVar3 = *pfVar26;
          pfVar26 = pfVar26 + 1;
          *pfVar27 = fVar3;
          pfVar27 = pfVar27 + 1;
          uVar19 = uVar19 + 1;
        } while ((uVar20 & 7) != uVar19);
        uVar19 = uVar25 - uVar19;
      }
      if (6 < uVar25) {
        lVar18 = 0;
        do {
          pfVar27[lVar18] = pfVar26[lVar18];
          pfVar27[lVar18 + 1] = pfVar26[lVar18 + 1];
          pfVar27[lVar18 + 2] = pfVar26[lVar18 + 2];
          pfVar27[lVar18 + 3] = pfVar26[lVar18 + 3];
          pfVar27[lVar18 + 4] = pfVar26[lVar18 + 4];
          pfVar27[lVar18 + 5] = pfVar26[lVar18 + 5];
          pfVar27[lVar18 + 6] = pfVar26[lVar18 + 6];
          pfVar27[lVar18 + 7] = pfVar26[lVar18 + 7];
          lVar18 = lVar18 + 8;
        } while (uVar19 + 1 != (int)lVar18);
      }
    }
  }
LAB_005672f6:
  return param_1 + 0x28;
}


