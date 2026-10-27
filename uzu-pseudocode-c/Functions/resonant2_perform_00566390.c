// Function : resonant2_perform
// Namespace: 
// Entry    : 00566390
// Prototype: long resonant2_perform(long param_1)
// Body     : 00566390 - 00566901


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long resonant2_perform(long param_1)

{
  float fVar1;
  float fVar2;
  double dVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  double dVar10;
  undefined1 auVar11 [16];
  double dVar12;
  double dVar13;
  double dVar14;
  int iVar15;
  long lVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  ulong uVar19;
  double dVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined4 uVar23;
  undefined4 uVar28;
  double dVar24;
  double dVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  double dVar29;
  double dVar30;
  double dVar31;
  double local_140;
  double local_138;
  undefined1 local_e8 [16];
  undefined8 local_a8;
  double local_50;
  double local_48;
  double local_40;
  double local_38;
  
  lVar4 = *(long *)(param_1 + 8);
  dVar25 = *(double *)(lVar4 + 0x60);
  dVar31 = *(double *)(lVar4 + 0x68);
  uVar19 = *(ulong *)(lVar4 + 0x70);
  auVar21._8_8_ = 0;
  auVar21._0_8_ = uVar19;
  local_a8._0_4_ = *(undefined4 *)(lVar4 + 0x78);
  local_a8._4_4_ = *(undefined4 *)(lVar4 + 0x7c);
  dVar3 = *(double *)(lVar4 + 0x80);
  local_140 = *(double *)(lVar4 + 0x88);
  uVar17 = SUB84(local_140,0);
  uVar18 = (undefined4)((ulong)local_140 >> 0x20);
  dVar24 = *(double *)(lVar4 + 0x90);
  dVar30 = *(double *)(lVar4 + 0x98);
  iVar15 = (int)*(undefined8 *)(param_1 + 0x10);
  if (iVar15 != 0) {
    lVar5 = *(long *)(param_1 + 0x38);
    lVar6 = *(long *)(param_1 + 0x30);
    lVar7 = *(long *)(param_1 + 0x28);
    lVar8 = *(long *)(param_1 + 0x18);
    lVar9 = *(long *)(param_1 + 0x20);
    dVar12 = DAT_0065ac80 + (double)*(float *)(lVar4 + 0x58);
    dVar13 = _DAT_005d9000 / (double)*(float *)(lVar4 + 0x58);
    lVar16 = 0;
    dVar29 = dVar31;
    uVar23 = (undefined4)local_a8;
    uVar28 = local_a8._4_4_;
    local_138 = dVar30;
    do {
      dVar31 = dVar25;
      dVar14 = dVar3;
      dVar30 = dVar24;
      dVar3 = (double)*(float *)(lVar8 + lVar16 * 4);
      dVar25 = (double)*(float *)(lVar9 + lVar16 * 4);
      fVar1 = *(float *)(lVar7 + lVar16 * 4);
      fVar2 = *(float *)(lVar6 + lVar16 * 4);
      if (dVar25 <= DAT_00656ba0) {
        dVar25 = DAT_00656ba0;
      }
      if (dVar12 <= dVar25) {
        dVar25 = dVar12;
      }
      local_e8 = ZEXT816(0);
      local_a8 = auVar21._0_8_;
      if (0.0 < fVar1) {
        dVar20 = (double)fVar1;
        dVar10 = dVar25 * _DAT_0065aef8 * dVar20;
        sincos(dVar25 * DAT_00652e70 * dVar13,&local_38,&local_40);
        dVar24 = local_38 / (dVar10 * _DAT_0065af00);
        auVar22._8_8_ = DAT_0065af28;
        auVar22._0_8_ =
             local_40 * local_a8 * _UNK_0065af18 +
             dVar24 * dVar10 * (dVar3 - dVar29) * _DAT_0065af10 +
             (dVar24 + DAT_00651e70) * (double)CONCAT44(uVar28,uVar23);
        auVar27._8_4_ = SUB84(dVar20,0);
        auVar27._0_8_ = dVar24 + _DAT_005d9000;
        auVar27._12_4_ = (int)((ulong)dVar20 >> 0x20);
        local_e8 = divpd(auVar22,auVar27);
        if (fVar2 <= 0.0) goto LAB_005667a2;
LAB_00566543:
        dVar24 = dVar25 * _DAT_0065aef8 * (double)fVar2;
        sincos(dVar25 * DAT_00652e70 * dVar13,&local_48,&local_50);
        dVar25 = local_48 / (dVar24 * _DAT_0065af00);
        auVar26._8_8_ =
             local_50 * dVar30 * _UNK_0065af18 +
             dVar25 * dVar24 * (dVar3 - local_140) * _DAT_0065af10 +
             (dVar25 + DAT_00651e70) * local_138;
        auVar26._0_8_ = _DAT_0065af30;
        auVar11._8_4_ = SUB84(dVar25 + _DAT_005d9000,0);
        auVar11._0_8_ = (double)fVar2;
        auVar11._12_4_ = (int)((ulong)(dVar25 + _DAT_005d9000) >> 0x20);
        auVar27 = divpd(auVar26,auVar11);
        dVar25 = auVar27._0_8_;
        dVar24 = auVar27._8_8_;
        if (fVar1 <= 0.0) goto LAB_00566460;
LAB_005667bc:
        if ((fVar2 <= 0.0) || (fVar1 == fVar2)) goto LAB_00566460;
        dVar29 = local_e8._8_8_;
        dVar10 = log(dVar29 / dVar25);
        dVar10 = dVar10 / (dVar29 - dVar25);
        dVar25 = exp((double)((ulong)dVar25 ^ _DAT_00652d10) * dVar10);
        dVar29 = exp((double)((ulong)dVar29 ^ _DAT_00652d10) * dVar10);
        dVar25 = (dVar24 - local_e8._0_8_) *
                 (double)((ulong)(_DAT_005d9000 / (dVar25 - dVar29)) & _DAT_005d91b0);
      }
      else {
        if (0.0 < fVar2) goto LAB_00566543;
LAB_005667a2:
        dVar25 = 0.0;
        dVar24 = dVar3;
        if (0.0 < fVar1) goto LAB_005667bc;
LAB_00566460:
        dVar25 = dVar24 - local_e8._0_8_;
      }
      uVar19 = local_e8._0_8_;
      local_a8._0_4_ = auVar21._0_4_;
      local_a8._4_4_ = auVar21._4_4_;
      uVar17 = SUB84(dVar14,0);
      uVar18 = (undefined4)((ulong)dVar14 >> 0x20);
      *(float *)(lVar5 + lVar16 * 4) = (float)dVar25;
      lVar16 = lVar16 + 1;
      auVar21 = local_e8;
      dVar29 = dVar31;
      dVar25 = dVar3;
      uVar23 = (undefined4)local_a8;
      uVar28 = local_a8._4_4_;
      local_140 = dVar14;
      local_138 = dVar30;
    } while (iVar15 != (int)lVar16);
  }
  *(double *)(lVar4 + 0x60) = dVar25;
  *(double *)(lVar4 + 0x68) = dVar31;
  *(ulong *)(lVar4 + 0x70) = uVar19;
  *(ulong *)(lVar4 + 0x78) = CONCAT44(local_a8._4_4_,(undefined4)local_a8);
  *(double *)(lVar4 + 0x80) = dVar3;
  *(ulong *)(lVar4 + 0x88) = CONCAT44(uVar18,uVar17);
  *(double *)(lVar4 + 0x90) = dVar24;
  *(double *)(lVar4 + 0x98) = dVar30;
  return param_1 + 0x40;
}


