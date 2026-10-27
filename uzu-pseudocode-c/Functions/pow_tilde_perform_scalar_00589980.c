// Function : pow_tilde_perform_scalar
// Namespace: 
// Entry    : 00589980
// Prototype: long pow_tilde_perform_scalar(long param_1)
// Body     : 00589980 - 00589fbf


long pow_tilde_perform_scalar(long param_1)

{
  float *pfVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double __y;
  ulong uVar12;
  ulong uVar13;
  float *pfVar14;
  uint uVar15;
  long lVar16;
  uint uVar17;
  uint uVar18;
  ulong uVar19;
  ulong uVar20;
  float *pfVar21;
  float fVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  double dStack_80;
  double dStack_70;
  
  uVar18 = *(uint *)(param_1 + 0x20);
  uVar17 = uVar18 - 1;
  if (uVar18 != 0) {
    pfVar14 = *(float **)(param_1 + 8);
    fVar22 = **(float **)(param_1 + 0x10);
    pfVar21 = *(float **)(param_1 + 0x18);
    __y = (double)fVar22;
    if (0.0 <= fVar22) {
      if (fVar22 - (float)(int)fVar22 == 0.0) {
        if ((2 < uVar17) &&
           ((uVar12 = (ulong)uVar17, pfVar14 + uVar12 + 1 <= pfVar21 ||
            (pfVar21 + uVar12 + 1 <= pfVar14)))) {
          uVar13 = uVar12 + 1 & 0xfffffffffffffffc;
          uVar19 = (uVar13 - 4 >> 2) + 1;
          if (uVar13 - 4 == 0) {
            lVar16 = 0;
          }
          else {
            uVar20 = uVar19 & 0xfffffffffffffffe;
            lVar16 = 0;
            do {
              dVar9 = (double)(float)*(undefined8 *)(pfVar14 + lVar16 + 2);
              dVar10 = (double)(float)((ulong)*(undefined8 *)(pfVar14 + lVar16 + 2) >> 0x20);
              auVar2._8_4_ = SUB84(dVar10,0);
              auVar2._0_8_ = dVar9;
              auVar2._12_4_ = (int)((ulong)dVar10 >> 0x20);
              dVar10 = (double)(float)*(undefined8 *)(pfVar14 + lVar16);
              dVar11 = (double)(float)((ulong)*(undefined8 *)(pfVar14 + lVar16) >> 0x20);
              auVar3._8_4_ = SUB84(dVar11,0);
              auVar3._0_8_ = dVar10;
              auVar3._12_4_ = (int)((ulong)dVar11 >> 0x20);
              dVar10 = pow(dVar10,__y);
              dStack_80 = auVar3._8_8_;
              dVar11 = pow(dStack_80,__y);
              dVar9 = pow(dVar9,__y);
              dStack_70 = auVar2._8_8_;
              dVar8 = pow(dStack_70,__y);
              pfVar1 = pfVar21 + lVar16;
              *pfVar1 = (float)dVar10;
              pfVar1[1] = (float)dVar11;
              pfVar1[2] = (float)dVar9;
              pfVar1[3] = (float)dVar8;
              dVar9 = (double)(float)*(undefined8 *)(pfVar14 + lVar16 + 6);
              dVar10 = (double)(float)((ulong)*(undefined8 *)(pfVar14 + lVar16 + 6) >> 0x20);
              auVar4._8_4_ = SUB84(dVar10,0);
              auVar4._0_8_ = dVar9;
              auVar4._12_4_ = (int)((ulong)dVar10 >> 0x20);
              dVar10 = (double)(float)*(undefined8 *)(pfVar14 + lVar16 + 4);
              dVar11 = (double)(float)((ulong)*(undefined8 *)(pfVar14 + lVar16 + 4) >> 0x20);
              auVar5._8_4_ = SUB84(dVar11,0);
              auVar5._0_8_ = dVar10;
              auVar5._12_4_ = (int)((ulong)dVar11 >> 0x20);
              dVar10 = pow(dVar10,__y);
              dStack_80 = auVar5._8_8_;
              dVar11 = pow(dStack_80,__y);
              dVar9 = pow(dVar9,__y);
              dStack_70 = auVar4._8_8_;
              dVar8 = pow(dStack_70,__y);
              pfVar1 = pfVar21 + lVar16 + 4;
              *pfVar1 = (float)dVar10;
              pfVar1[1] = (float)dVar11;
              pfVar1[2] = (float)dVar9;
              pfVar1[3] = (float)dVar8;
              lVar16 = lVar16 + 8;
              uVar20 = uVar20 - 2;
            } while (uVar20 != 0);
          }
          if ((uVar19 & 1) != 0) {
            dVar9 = (double)(float)*(undefined8 *)(pfVar14 + lVar16 + 2);
            dVar10 = (double)(float)((ulong)*(undefined8 *)(pfVar14 + lVar16 + 2) >> 0x20);
            auVar6._8_4_ = SUB84(dVar10,0);
            auVar6._0_8_ = dVar9;
            auVar6._12_4_ = (int)((ulong)dVar10 >> 0x20);
            dVar10 = (double)(float)*(undefined8 *)(pfVar14 + lVar16);
            dVar11 = (double)(float)((ulong)*(undefined8 *)(pfVar14 + lVar16) >> 0x20);
            auVar7._8_4_ = SUB84(dVar11,0);
            auVar7._0_8_ = dVar10;
            auVar7._12_4_ = (int)((ulong)dVar11 >> 0x20);
            dVar10 = pow(dVar10,__y);
            dStack_80 = auVar7._8_8_;
            dVar11 = pow(dStack_80,__y);
            dVar9 = pow(dVar9,__y);
            dStack_70 = auVar6._8_8_;
            dVar8 = pow(dStack_70,__y);
            pfVar1 = pfVar21 + lVar16;
            *pfVar1 = (float)dVar10;
            pfVar1[1] = (float)dVar11;
            pfVar1[2] = (float)dVar9;
            pfVar1[3] = (float)dVar8;
          }
          if (uVar12 + 1 == uVar13) goto LAB_0058999e;
          uVar17 = uVar17 - (int)uVar13;
          pfVar14 = pfVar14 + uVar13;
          pfVar21 = pfVar21 + uVar13;
        }
        uVar15 = uVar17 + 1 & 3;
        uVar18 = uVar17;
        if (uVar15 != 0) {
          uVar18 = 0;
          do {
            fVar22 = *pfVar14;
            pfVar14 = pfVar14 + 1;
            dVar9 = pow((double)fVar22,__y);
            *pfVar21 = (float)dVar9;
            pfVar21 = pfVar21 + 1;
            uVar18 = uVar18 + 1;
          } while (uVar15 != uVar18);
          uVar18 = uVar17 - uVar18;
        }
        if (2 < uVar17) {
          lVar16 = 0;
          do {
            dVar9 = pow((double)pfVar14[lVar16],__y);
            pfVar21[lVar16] = (float)dVar9;
            dVar9 = pow((double)pfVar14[lVar16 + 1],__y);
            pfVar21[lVar16 + 1] = (float)dVar9;
            dVar9 = pow((double)pfVar14[lVar16 + 2],__y);
            pfVar21[lVar16 + 2] = (float)dVar9;
            dVar9 = pow((double)pfVar14[lVar16 + 3],__y);
            pfVar21[lVar16 + 3] = (float)dVar9;
            lVar16 = lVar16 + 4;
          } while (uVar18 + 1 != (int)lVar16);
        }
      }
      else {
        uVar15 = uVar17;
        if ((uVar18 & 1) != 0) {
          fVar22 = 0.0;
          if (0.0 <= *pfVar14) {
            dVar9 = pow((double)*pfVar14,__y);
            fVar22 = (float)dVar9;
          }
          pfVar14 = pfVar14 + 1;
          *pfVar21 = fVar22;
          pfVar21 = pfVar21 + 1;
          uVar15 = uVar18 - 2;
        }
        if (uVar17 != 0) {
          lVar16 = 0;
          do {
            uVar23 = 0;
            uVar25 = 0;
            if (0.0 <= pfVar14[lVar16]) {
              dVar9 = pow((double)pfVar14[lVar16],__y);
              uVar23 = SUB84(dVar9,0);
              uVar25 = (undefined4)((ulong)dVar9 >> 0x20);
            }
            uVar26 = 0;
            uVar24 = 0;
            pfVar21[lVar16] = (float)(double)CONCAT44(uVar25,uVar23);
            if (0.0 <= pfVar14[lVar16 + 1]) {
              dVar9 = pow((double)pfVar14[lVar16 + 1],__y);
              uVar24 = SUB84(dVar9,0);
              uVar26 = (undefined4)((ulong)dVar9 >> 0x20);
            }
            pfVar21[lVar16 + 1] = (float)(double)CONCAT44(uVar26,uVar24);
            lVar16 = lVar16 + 2;
          } while (uVar15 + 1 != (int)lVar16);
        }
      }
    }
    else if (fVar22 - (float)(int)fVar22 == 0.0) {
      if ((uVar18 & 1) == 0) {
        uVar18 = uVar17;
      }
      else {
        fVar22 = 0.0;
        if (*pfVar14 != 0.0) {
          dVar9 = pow((double)*pfVar14,__y);
          fVar22 = (float)dVar9;
        }
        pfVar14 = pfVar14 + 1;
        *pfVar21 = fVar22;
        pfVar21 = pfVar21 + 1;
        uVar18 = uVar18 - 2;
      }
      if (uVar17 != 0) {
        lVar16 = 0;
        do {
          uVar23 = 0;
          uVar25 = 0;
          if (pfVar14[lVar16] != 0.0) {
            dVar9 = pow((double)pfVar14[lVar16],__y);
            uVar23 = SUB84(dVar9,0);
            uVar25 = (undefined4)((ulong)dVar9 >> 0x20);
          }
          uVar26 = 0;
          uVar24 = 0;
          pfVar21[lVar16] = (float)(double)CONCAT44(uVar25,uVar23);
          if (pfVar14[lVar16 + 1] != 0.0) {
            dVar9 = pow((double)pfVar14[lVar16 + 1],__y);
            uVar24 = SUB84(dVar9,0);
            uVar26 = (undefined4)((ulong)dVar9 >> 0x20);
          }
          pfVar21[lVar16 + 1] = (float)(double)CONCAT44(uVar26,uVar24);
          lVar16 = lVar16 + 2;
        } while (uVar18 + 1 != (int)lVar16);
      }
    }
    else {
      uVar15 = uVar17;
      if ((uVar18 & 1) != 0) {
        fVar22 = 0.0;
        if (0.0 < *pfVar14) {
          dVar9 = pow((double)*pfVar14,__y);
          fVar22 = (float)dVar9;
        }
        pfVar14 = pfVar14 + 1;
        *pfVar21 = fVar22;
        pfVar21 = pfVar21 + 1;
        uVar15 = uVar18 - 2;
      }
      if (uVar17 != 0) {
        lVar16 = 0;
        do {
          uVar23 = 0;
          uVar25 = 0;
          if (0.0 < pfVar14[lVar16]) {
            dVar9 = pow((double)pfVar14[lVar16],__y);
            uVar23 = SUB84(dVar9,0);
            uVar25 = (undefined4)((ulong)dVar9 >> 0x20);
          }
          uVar26 = 0;
          uVar24 = 0;
          pfVar21[lVar16] = (float)(double)CONCAT44(uVar25,uVar23);
          if (0.0 < pfVar14[lVar16 + 1]) {
            dVar9 = pow((double)pfVar14[lVar16 + 1],__y);
            uVar24 = SUB84(dVar9,0);
            uVar26 = (undefined4)((ulong)dVar9 >> 0x20);
          }
          pfVar21[lVar16 + 1] = (float)(double)CONCAT44(uVar26,uVar24);
          lVar16 = lVar16 + 2;
        } while (uVar15 + 1 != (int)lVar16);
      }
    }
  }
LAB_0058999e:
  return param_1 + 0x28;
}


