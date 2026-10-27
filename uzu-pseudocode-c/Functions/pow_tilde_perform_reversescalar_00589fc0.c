// Function : pow_tilde_perform_reversescalar
// Namespace: 
// Entry    : 00589fc0
// Prototype: long pow_tilde_perform_reversescalar(long param_1)
// Body     : 00589fc0 - 0058a710


long pow_tilde_perform_reversescalar(long param_1)

{
  float *pfVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  double __x;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  float fVar14;
  float fVar15;
  uint uVar16;
  ulong uVar17;
  int iVar18;
  uint uVar19;
  long lVar20;
  int iVar21;
  uint uVar22;
  ulong uVar23;
  ulong uVar24;
  float *pfVar25;
  float *pfVar26;
  float *pfVar27;
  ulong uVar28;
  float *pfVar29;
  undefined4 uVar30;
  float fVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  float fVar35;
  double dStack_90;
  double dStack_80;
  double dStack_70;
  uint local_68;
  uint uStack_64;
  undefined8 uStack_60;
  
  iVar21 = (int)*(ulong *)(param_1 + 0x20);
  uVar16 = iVar21 - 1;
  uVar17 = (ulong)uVar16;
  if (iVar21 != 0) {
    pfVar27 = *(float **)(param_1 + 8);
    fVar31 = **(float **)(param_1 + 0x10);
    pfVar29 = *(float **)(param_1 + 0x18);
    __x = (double)fVar31;
    if (0.0 <= fVar31) {
      if (fVar31 != 0.0) {
        if ((2 < uVar16) && ((pfVar27 + uVar17 + 1 <= pfVar29 || (pfVar29 + uVar17 + 1 <= pfVar27)))
           ) {
          uVar23 = uVar17 + 1 & 0xfffffffffffffffc;
          uVar24 = (uVar23 - 4 >> 2) + 1;
          if (uVar23 - 4 == 0) {
            lVar20 = 0;
          }
          else {
            uVar28 = uVar24 & 0xfffffffffffffffe;
            lVar20 = 0;
            do {
              dVar6 = (double)(float)*(undefined8 *)(pfVar27 + lVar20 + 2);
              dVar7 = (double)(float)((ulong)*(undefined8 *)(pfVar27 + lVar20 + 2) >> 0x20);
              auVar3._8_4_ = SUB84(dVar7,0);
              auVar3._0_8_ = dVar6;
              auVar3._12_4_ = (int)((ulong)dVar7 >> 0x20);
              dVar7 = (double)(float)*(undefined8 *)(pfVar27 + lVar20);
              dVar8 = (double)(float)((ulong)*(undefined8 *)(pfVar27 + lVar20) >> 0x20);
              auVar11._8_4_ = SUB84(dVar8,0);
              auVar11._0_8_ = dVar7;
              auVar11._12_4_ = (int)((ulong)dVar8 >> 0x20);
              dVar7 = pow(__x,dVar7);
              dStack_90 = auVar11._8_8_;
              dVar8 = pow(__x,dStack_90);
              dVar6 = pow(__x,dVar6);
              dStack_80 = auVar3._8_8_;
              dVar9 = pow(__x,dStack_80);
              pfVar25 = pfVar29 + lVar20;
              *pfVar25 = (float)dVar7;
              pfVar25[1] = (float)dVar8;
              pfVar25[2] = (float)dVar6;
              pfVar25[3] = (float)dVar9;
              dVar6 = (double)(float)*(undefined8 *)(pfVar27 + lVar20 + 6);
              dVar7 = (double)(float)((ulong)*(undefined8 *)(pfVar27 + lVar20 + 6) >> 0x20);
              auVar4._8_4_ = SUB84(dVar7,0);
              auVar4._0_8_ = dVar6;
              auVar4._12_4_ = (int)((ulong)dVar7 >> 0x20);
              dVar7 = (double)(float)*(undefined8 *)(pfVar27 + lVar20 + 4);
              dVar8 = (double)(float)((ulong)*(undefined8 *)(pfVar27 + lVar20 + 4) >> 0x20);
              auVar12._8_4_ = SUB84(dVar8,0);
              auVar12._0_8_ = dVar7;
              auVar12._12_4_ = (int)((ulong)dVar8 >> 0x20);
              dVar7 = pow(__x,dVar7);
              dStack_90 = auVar12._8_8_;
              dVar8 = pow(__x,dStack_90);
              dVar6 = pow(__x,dVar6);
              dStack_80 = auVar4._8_8_;
              dVar9 = pow(__x,dStack_80);
              pfVar25 = pfVar29 + lVar20 + 4;
              *pfVar25 = (float)dVar7;
              pfVar25[1] = (float)dVar8;
              pfVar25[2] = (float)dVar6;
              pfVar25[3] = (float)dVar9;
              lVar20 = lVar20 + 8;
              uVar28 = uVar28 - 2;
            } while (uVar28 != 0);
          }
          if ((uVar24 & 1) != 0) {
            dVar6 = (double)(float)*(undefined8 *)(pfVar27 + lVar20 + 2);
            dVar7 = (double)(float)((ulong)*(undefined8 *)(pfVar27 + lVar20 + 2) >> 0x20);
            auVar5._8_4_ = SUB84(dVar7,0);
            auVar5._0_8_ = dVar6;
            auVar5._12_4_ = (int)((ulong)dVar7 >> 0x20);
            dVar7 = (double)(float)*(undefined8 *)(pfVar27 + lVar20);
            dVar8 = (double)(float)((ulong)*(undefined8 *)(pfVar27 + lVar20) >> 0x20);
            auVar13._8_4_ = SUB84(dVar8,0);
            auVar13._0_8_ = dVar7;
            auVar13._12_4_ = (int)((ulong)dVar8 >> 0x20);
            dVar7 = pow(__x,dVar7);
            dStack_90 = auVar13._8_8_;
            dVar8 = pow(__x,dStack_90);
            dVar6 = pow(__x,dVar6);
            dStack_80 = auVar5._8_8_;
            dVar9 = pow(__x,dStack_80);
            pfVar25 = pfVar29 + lVar20;
            *pfVar25 = (float)dVar7;
            pfVar25[1] = (float)dVar8;
            pfVar25[2] = (float)dVar6;
            pfVar25[3] = (float)dVar9;
          }
          if (uVar17 + 1 == uVar23) goto LAB_00589fde;
          uVar16 = uVar16 - (int)uVar23;
          pfVar27 = pfVar27 + uVar23;
          pfVar29 = pfVar29 + uVar23;
        }
        uVar19 = uVar16 + 1 & 3;
        uVar22 = uVar16;
        if (uVar19 != 0) {
          uVar22 = 0;
          do {
            fVar31 = *pfVar27;
            pfVar27 = pfVar27 + 1;
            dVar6 = pow(__x,(double)fVar31);
            *pfVar29 = (float)dVar6;
            pfVar29 = pfVar29 + 1;
            uVar22 = uVar22 + 1;
          } while (uVar19 != uVar22);
          uVar22 = uVar16 - uVar22;
        }
        if (2 < uVar16) {
          lVar20 = 0;
          do {
            dVar6 = pow(__x,(double)pfVar27[lVar20]);
            pfVar29[lVar20] = (float)dVar6;
            dVar6 = pow(__x,(double)pfVar27[lVar20 + 1]);
            pfVar29[lVar20 + 1] = (float)dVar6;
            dVar6 = pow(__x,(double)pfVar27[lVar20 + 2]);
            pfVar29[lVar20 + 2] = (float)dVar6;
            dVar6 = pow(__x,(double)pfVar27[lVar20 + 3]);
            pfVar29[lVar20 + 3] = (float)dVar6;
            lVar20 = lVar20 + 4;
          } while (uVar22 + 1 != (int)lVar20);
        }
      }
      else {
        uVar22 = uVar16;
        if ((*(ulong *)(param_1 + 0x20) & 1) != 0) {
          fVar31 = 0.0;
          if (0.0 <= *pfVar27) {
            dVar6 = pow(__x,(double)*pfVar27);
            fVar31 = (float)dVar6;
          }
          pfVar27 = pfVar27 + 1;
          *pfVar29 = fVar31;
          pfVar29 = pfVar29 + 1;
          uVar22 = iVar21 - 2;
        }
        if (uVar16 != 0) {
          lVar20 = 0;
          do {
            uVar30 = 0;
            uVar33 = 0;
            if (0.0 <= pfVar27[lVar20]) {
              dVar6 = pow(__x,(double)pfVar27[lVar20]);
              uVar30 = SUB84(dVar6,0);
              uVar33 = (undefined4)((ulong)dVar6 >> 0x20);
            }
            uVar34 = 0;
            uVar32 = 0;
            pfVar29[lVar20] = (float)(double)CONCAT44(uVar33,uVar30);
            if (0.0 <= pfVar27[lVar20 + 1]) {
              dVar6 = pow(__x,(double)pfVar27[lVar20 + 1]);
              uVar32 = SUB84(dVar6,0);
              uVar34 = (undefined4)((ulong)dVar6 >> 0x20);
            }
            pfVar29[lVar20 + 1] = (float)(double)CONCAT44(uVar34,uVar32);
            lVar20 = lVar20 + 2;
          } while (uVar22 + 1 != (int)lVar20);
        }
      }
    }
    else if (fVar31 != 0.0) {
      if ((uVar16 < 3) || ((pfVar29 < pfVar27 + uVar17 + 1 && (pfVar27 < pfVar29 + uVar17 + 1)))) {
        pfVar25 = pfVar29;
        pfVar26 = pfVar27;
      }
      else {
        uVar23 = uVar17 + 1;
        uVar24 = uVar23 & 0xfffffffffffffffc;
        uVar17 = (ulong)(uVar16 - (int)uVar24);
        pfVar26 = pfVar27 + uVar24;
        pfVar25 = pfVar29 + uVar24;
        uVar28 = 0;
        do {
          pfVar1 = pfVar27 + uVar28;
          fVar31 = *pfVar1;
          fVar35 = pfVar1[1];
          fVar14 = pfVar1[2];
          fVar15 = pfVar1[3];
          auVar10._8_4_ = SUB84((double)fVar35,0);
          auVar10._0_8_ = (double)fVar31;
          auVar10._12_4_ = (int)((ulong)(double)fVar35 >> 0x20);
          local_68 = -(uint)(fVar31 - (float)(int)fVar31 == DAT_005d9480);
          uStack_64 = -(uint)(fVar35 - (float)(int)fVar35 == DAT_005d9484);
          uStack_60._0_4_ = -(uint)(fVar14 - (float)(int)fVar14 == DAT_005d9488);
          uStack_60._4_4_ = -(uint)(fVar15 - (float)(int)fVar15 == DAT_005d948c);
          auVar2._8_4_ = SUB84((double)fVar15,0);
          auVar2._0_8_ = (double)fVar14;
          auVar2._12_4_ = (int)((ulong)(double)fVar15 >> 0x20);
          dVar6 = pow(__x,(double)fVar31);
          dStack_70 = auVar10._8_8_;
          dVar7 = pow(__x,dStack_70);
          dVar8 = pow(__x,(double)fVar14);
          dStack_80 = auVar2._8_8_;
          dVar9 = pow(__x,dStack_80);
          uStack_60 = CONCAT44((float)dVar9,(float)dVar8) & uStack_60;
          pfVar1 = pfVar29 + uVar28;
          *pfVar1 = (float)((uint)(float)dVar6 & local_68);
          pfVar1[1] = (float)((uint)(float)dVar7 & uStack_64);
          pfVar1[2] = (float)uStack_60;
          pfVar1[3] = (float)(uStack_60 >> 0x20);
          uVar28 = uVar28 + 4;
        } while (uVar24 != uVar28);
        if (uVar23 == uVar24) goto LAB_00589fde;
      }
      iVar21 = (int)uVar17;
      if ((uVar17 & 1) == 0) {
        fVar31 = *pfVar26;
        fVar35 = 0.0;
        if (fVar31 - (float)(int)fVar31 == 0.0) {
          dVar6 = pow(__x,(double)fVar31);
          fVar35 = (float)dVar6;
        }
        pfVar26 = pfVar26 + 1;
        *pfVar25 = fVar35;
        pfVar25 = pfVar25 + 1;
        iVar18 = iVar21 + -1;
      }
      else {
        iVar18 = iVar21;
      }
      if (iVar21 != 0) {
        lVar20 = 0;
        do {
          fVar31 = pfVar26[lVar20];
          uVar30 = 0;
          uVar33 = 0;
          if (fVar31 - (float)(int)fVar31 == 0.0) {
            dVar6 = pow(__x,(double)fVar31);
            uVar30 = SUB84(dVar6,0);
            uVar33 = (undefined4)((ulong)dVar6 >> 0x20);
          }
          uVar34 = 0;
          uVar32 = 0;
          pfVar25[lVar20] = (float)(double)CONCAT44(uVar33,uVar30);
          fVar31 = pfVar26[lVar20 + 1];
          if (fVar31 - (float)(int)fVar31 == 0.0) {
            dVar6 = pow(__x,(double)fVar31);
            uVar32 = SUB84(dVar6,0);
            uVar34 = (undefined4)((ulong)dVar6 >> 0x20);
          }
          pfVar25[lVar20 + 1] = (float)(double)CONCAT44(uVar34,uVar32);
          lVar20 = lVar20 + 2;
        } while (iVar18 + 1 != (int)lVar20);
      }
    }
    else {
      lVar20 = 0;
      do {
        fVar31 = pfVar27[lVar20];
        uVar30 = 0;
        uVar33 = 0;
        if ((0.0 <= fVar31) && (fVar31 - (float)(int)fVar31 == 0.0)) {
          dVar6 = pow(__x,(double)fVar31);
          uVar30 = SUB84(dVar6,0);
          uVar33 = (undefined4)((ulong)dVar6 >> 0x20);
        }
        pfVar29[lVar20] = (float)(double)CONCAT44(uVar33,uVar30);
        lVar20 = lVar20 + 1;
      } while (iVar21 != (int)lVar20);
    }
  }
LAB_00589fde:
  return param_1 + 0x28;
}


