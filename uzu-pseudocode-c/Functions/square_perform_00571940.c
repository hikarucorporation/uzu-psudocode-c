// Function : square_perform
// Namespace: 
// Entry    : 00571940
// Prototype: long square_perform(long param_1)
// Body     : 00571940 - 00571f17


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long square_perform(long param_1)

{
  float fVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  int iVar31;
  bool bVar32;
  int iVar33;
  int iVar34;
  undefined7 extraout_var;
  long lVar35;
  ulong uVar36;
  long lVar37;
  ulong uVar38;
  ulong uVar39;
  float *pfVar40;
  int iVar41;
  ulong uVar42;
  float fVar43;
  undefined4 uVar44;
  double dVar45;
  undefined4 uVar50;
  double dVar46;
  double dVar47;
  double dVar48;
  double dVar49;
  double dVar51;
  
  lVar3 = *(long *)(param_1 + 8);
  lVar4 = *(long *)(param_1 + 0x10);
  lVar5 = *(long *)(param_1 + 0x18);
  lVar6 = *(long *)(param_1 + 0x20);
  lVar7 = *(long *)(param_1 + 0x28);
  lVar8 = *(long *)(param_1 + 0x30);
  lVar9 = *(long *)(lVar3 + 0x88);
  lVar10 = *(long *)(lVar3 + 0x30);
  lVar11 = *(long *)(lVar3 + 0x38);
  if (*(long *)(lVar3 + 0x58) != 0) goto LAB_00571b1a;
  pfVar40 = *(float **)(lVar3 + 0xd8);
  bVar32 = else_magic_isnan((uint)*pfVar40);
  if ((int)CONCAT71(extraout_var,bVar32) != 0) goto LAB_00571b1a;
  fVar43 = fmodf(*pfVar40,DAT_005d9038);
  uVar2 = *(uint *)(lVar3 + 0x40);
  if (0 < (int)uVar2) {
    dVar45 = (double)(float)(~-(uint)(fVar43 < 0.0) & (uint)fVar43 |
                            (uint)(DAT_005d9038 + fVar43) & -(uint)(fVar43 < 0.0));
    lVar12 = *(long *)(lVar3 + 0x30);
    if (uVar2 < 4) {
      uVar36 = 0;
    }
    else {
      uVar36 = (ulong)(uVar2 & 0xfffffffc);
      uVar44 = SUB84(dVar45,0);
      uVar50 = (undefined4)((ulong)dVar45 >> 0x20);
      uVar38 = (uVar36 - 4 >> 2) + 1;
      uVar39 = (ulong)((uint)uVar38 & 7);
      if (uVar36 - 4 < 0x1c) {
        lVar35 = 0;
      }
      else {
        uVar38 = uVar38 & 0xfffffffffffffff8;
        lVar35 = 0;
        do {
          auVar15._8_4_ = uVar44;
          auVar15._0_8_ = dVar45;
          auVar15._12_4_ = uVar50;
          *(undefined1 (*) [16])(lVar12 + lVar35 * 8) = auVar15;
          auVar16._8_4_ = uVar44;
          auVar16._0_8_ = dVar45;
          auVar16._12_4_ = uVar50;
          *(undefined1 (*) [16])(lVar12 + 0x10 + lVar35 * 8) = auVar16;
          auVar17._8_4_ = uVar44;
          auVar17._0_8_ = dVar45;
          auVar17._12_4_ = uVar50;
          *(undefined1 (*) [16])(lVar12 + 0x20 + lVar35 * 8) = auVar17;
          auVar18._8_4_ = uVar44;
          auVar18._0_8_ = dVar45;
          auVar18._12_4_ = uVar50;
          *(undefined1 (*) [16])(lVar12 + 0x30 + lVar35 * 8) = auVar18;
          auVar19._8_4_ = uVar44;
          auVar19._0_8_ = dVar45;
          auVar19._12_4_ = uVar50;
          *(undefined1 (*) [16])(lVar12 + 0x40 + lVar35 * 8) = auVar19;
          auVar20._8_4_ = uVar44;
          auVar20._0_8_ = dVar45;
          auVar20._12_4_ = uVar50;
          *(undefined1 (*) [16])(lVar12 + 0x50 + lVar35 * 8) = auVar20;
          auVar21._8_4_ = uVar44;
          auVar21._0_8_ = dVar45;
          auVar21._12_4_ = uVar50;
          *(undefined1 (*) [16])(lVar12 + 0x60 + lVar35 * 8) = auVar21;
          auVar22._8_4_ = uVar44;
          auVar22._0_8_ = dVar45;
          auVar22._12_4_ = uVar50;
          *(undefined1 (*) [16])(lVar12 + 0x70 + lVar35 * 8) = auVar22;
          auVar23._8_4_ = uVar44;
          auVar23._0_8_ = dVar45;
          auVar23._12_4_ = uVar50;
          *(undefined1 (*) [16])(lVar12 + 0x80 + lVar35 * 8) = auVar23;
          auVar24._8_4_ = uVar44;
          auVar24._0_8_ = dVar45;
          auVar24._12_4_ = uVar50;
          *(undefined1 (*) [16])(lVar12 + 0x90 + lVar35 * 8) = auVar24;
          auVar25._8_4_ = uVar44;
          auVar25._0_8_ = dVar45;
          auVar25._12_4_ = uVar50;
          *(undefined1 (*) [16])(lVar12 + 0xa0 + lVar35 * 8) = auVar25;
          auVar26._8_4_ = uVar44;
          auVar26._0_8_ = dVar45;
          auVar26._12_4_ = uVar50;
          *(undefined1 (*) [16])(lVar12 + 0xb0 + lVar35 * 8) = auVar26;
          auVar27._8_4_ = uVar44;
          auVar27._0_8_ = dVar45;
          auVar27._12_4_ = uVar50;
          *(undefined1 (*) [16])(lVar12 + 0xc0 + lVar35 * 8) = auVar27;
          auVar28._8_4_ = uVar44;
          auVar28._0_8_ = dVar45;
          auVar28._12_4_ = uVar50;
          *(undefined1 (*) [16])(lVar12 + 0xd0 + lVar35 * 8) = auVar28;
          auVar29._8_4_ = uVar44;
          auVar29._0_8_ = dVar45;
          auVar29._12_4_ = uVar50;
          *(undefined1 (*) [16])(lVar12 + 0xe0 + lVar35 * 8) = auVar29;
          auVar30._8_4_ = uVar44;
          auVar30._0_8_ = dVar45;
          auVar30._12_4_ = uVar50;
          *(undefined1 (*) [16])(lVar12 + 0xf0 + lVar35 * 8) = auVar30;
          lVar35 = lVar35 + 0x20;
          uVar38 = uVar38 - 8;
        } while (uVar38 != 0);
      }
      if (uVar39 != 0) {
        lVar35 = lVar12 + lVar35 * 8;
        lVar37 = 0;
        do {
          auVar13._8_4_ = uVar44;
          auVar13._0_8_ = dVar45;
          auVar13._12_4_ = uVar50;
          *(undefined1 (*) [16])(lVar35 + lVar37) = auVar13;
          auVar14._8_4_ = uVar44;
          auVar14._0_8_ = dVar45;
          auVar14._12_4_ = uVar50;
          *(undefined1 (*) [16])(lVar35 + 0x10 + lVar37) = auVar14;
          lVar37 = lVar37 + 0x20;
        } while (uVar39 * 0x20 != lVar37);
      }
      if (uVar36 == uVar2) goto LAB_00571b0e;
    }
    do {
      *(double *)(lVar12 + uVar36 * 8) = dVar45;
      uVar36 = uVar36 + 1;
    } while (uVar2 != uVar36);
  }
LAB_00571b0e:
  else_magic_setnan(*(undefined4 **)(lVar3 + 0xd8));
LAB_00571b1a:
  uVar2 = *(uint *)(lVar3 + 0x40);
  if (0 < (int)uVar2) {
    uVar36 = 0;
    uVar44 = (undefined4)_DAT_005d9000;
    uVar50 = (undefined4)((ulong)_DAT_005d9000 >> 0x20);
    dVar45 = DAT_00651e70;
    do {
      uVar39 = *(ulong *)(lVar3 + 0x48);
      iVar33 = (int)uVar39;
      if (0 < iVar33) {
        iVar33 = iVar33 * (int)uVar36;
        lVar12 = lVar8 + (long)iVar33 * 4;
        pfVar40 = (float *)(lVar4 + (long)iVar33 * 4);
        uVar38 = 0;
        do {
          if (*(long *)(lVar3 + 0x50) == 0) {
            fVar43 = *(float *)(uVar36 * 4 + *(long *)(lVar3 + 0x90));
            if (*(long *)(lVar3 + 0x78) == 0) goto LAB_00571c5a;
LAB_00571bf1:
            if (DAT_0065abf4 <= fVar43) {
              fVar43 = DAT_0065abf4;
            }
            dVar46 = 0.0;
            if (DAT_005d9058 < fVar43) {
              dVar46 = exp2((double)fVar43 * _DAT_0065b668 + _DAT_0065b670);
              uVar44 = (undefined4)_DAT_005d9000;
              uVar50 = (undefined4)((ulong)_DAT_005d9000 >> 0x20);
              dVar46 = dVar46 * _DAT_0065b678;
              dVar45 = DAT_00651e70;
            }
          }
          else {
            fVar43 = *pfVar40;
            if (*(long *)(lVar3 + 0x78) != 0) goto LAB_00571bf1;
LAB_00571c5a:
            dVar46 = (double)fVar43;
          }
          dVar51 = *(double *)(lVar3 + 200) * dVar46;
          if (dVar51 <= dVar45) {
            dVar51 = dVar45;
          }
          iVar31 = (int)uVar38;
          iVar41 = iVar33 + iVar31;
          iVar34 = iVar41;
          if (*(long *)(lVar3 + 0x60) == 1) {
            iVar34 = iVar31;
          }
          if ((double)CONCAT44(uVar50,uVar44) <= dVar51) {
            dVar51 = (double)CONCAT44(uVar50,uVar44);
          }
          fVar43 = *(float *)(lVar5 + (long)iVar34 * 4);
          iVar34 = iVar41;
          if (*(long *)(lVar3 + 0x70) == 1) {
            iVar34 = iVar31;
          }
          dVar47 = (double)*(float *)(lVar7 + (long)iVar34 * 4);
          dVar48 = dVar47 - *(double *)(lVar11 + uVar36 * 8);
          dVar49 = fmod(dVar48,(double)CONCAT44(uVar50,uVar44));
          if (*(long *)(lVar3 + 0x80) == 0) {
            uVar44 = (undefined4)_DAT_005d9000;
            uVar50 = (undefined4)((ulong)_DAT_005d9000 >> 0x20);
            lVar35 = *(long *)(lVar3 + 0x58);
            dVar45 = DAT_00651e70;
          }
          else {
            lVar35 = *(long *)(lVar9 + uVar36 * 8);
            if (lVar35 == 0) {
              *(undefined8 *)(lVar9 + uVar36 * 8) = 1;
              lVar35 = 1;
            }
            dVar51 = dVar51 * (double)lVar35;
            uVar44 = (undefined4)_DAT_005d9000;
            uVar50 = (undefined4)((ulong)_DAT_005d9000 >> 0x20);
            lVar35 = *(long *)(lVar3 + 0x58);
            dVar45 = DAT_00651e70;
          }
          DAT_00651e70 = dVar45;
          if (lVar35 != 0) {
            if (*(long *)(lVar3 + 0x68) == 1) {
              iVar41 = iVar31;
            }
            fVar1 = *(float *)(lVar6 + (long)iVar41 * 4);
            if ((0.0 < fVar1) && (fVar1 <= DAT_005d9038)) {
              if (*(long *)(lVar3 + 0x80) == 0) {
                *(double *)(lVar10 + uVar36 * 8) = (double)fVar1;
              }
              else {
                *(ulong *)(lVar9 + uVar36 * 8) =
                     (ulong)(*(long *)(lVar9 + uVar36 * 8) != 1) * 2 + -1;
              }
            }
          }
          uVar42 = -(ulong)((double)CONCAT44(uVar50,uVar44) <= dVar48);
          dVar48 = (double)(uVar42 & (ulong)dVar49 |
                           ~uVar42 & (~-(ulong)(dVar48 <= dVar45) & (ulong)dVar48 |
                                     -(ulong)(dVar48 <= dVar45) & (ulong)dVar49)) +
                   *(double *)(lVar10 + uVar36 * 8);
          if (0.0 <= dVar46) {
            dVar46 = (double)(~-(ulong)(dVar48 < 0.0) & (ulong)dVar48 |
                             (ulong)(dVar48 + (double)CONCAT44(uVar50,uVar44)) &
                             -(ulong)(dVar48 < 0.0));
            if ((double)CONCAT44(uVar50,uVar44) <= dVar46) {
              *(undefined4 *)(lVar12 + uVar38 * 4) = 0x3f800000;
              dVar46 = dVar46 + dVar45;
            }
            else {
              if (dVar46 + dVar51 < (double)CONCAT44(uVar50,uVar44)) goto LAB_00571b90;
              *(undefined4 *)(lVar12 + uVar38 * 4) = 0xbf800000;
            }
          }
          else {
            uVar42 = -(ulong)(dVar48 < (double)CONCAT44(uVar50,uVar44));
            dVar46 = (double)(~uVar42 & (ulong)(dVar48 + dVar45) | (ulong)dVar48 & uVar42);
            if (dVar46 <= 0.0) {
              *(undefined4 *)(lVar12 + uVar38 * 4) = 0xbf800000;
              dVar46 = dVar46 + (double)CONCAT44(uVar50,uVar44);
            }
            else if (0.0 < dVar46 + dVar51) {
LAB_00571b90:
              *(undefined4 *)(lVar12 + uVar38 * 4) =
                   *(undefined4 *)(&DAT_0065b680 + (ulong)(dVar46 < (double)fVar43) * 4);
            }
            else {
              *(undefined4 *)(lVar12 + uVar38 * 4) = 0x3f800000;
            }
          }
          *(double *)(lVar10 + uVar36 * 8) = dVar46 + dVar51;
          *(double *)(lVar11 + uVar36 * 8) = dVar47;
          uVar38 = uVar38 + 1;
          pfVar40 = pfVar40 + 1;
        } while ((uVar39 & 0xffffffff) != uVar38);
      }
      uVar36 = uVar36 + 1;
    } while (uVar36 != uVar2);
  }
  *(long *)(lVar3 + 0x30) = lVar10;
  *(long *)(lVar3 + 0x38) = lVar11;
  *(long *)(lVar3 + 0x88) = lVar9;
  return param_1 + 0x38;
}


