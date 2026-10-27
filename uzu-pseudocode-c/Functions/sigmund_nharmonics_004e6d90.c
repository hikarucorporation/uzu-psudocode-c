// Function : sigmund_nharmonics
// Namespace: 
// Entry    : 004e6d90
// Prototype: undefined sigmund_nharmonics(float param_1, float param_2, long param_3)
// Body     : 004e6d90 - 004e6f41


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void sigmund_nharmonics(float param_1,float param_2,long param_3)

{
  undefined1 auVar1 [16];
  float fVar2;
  float fVar5;
  float fVar6;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar7 [16];
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  uint uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  
  if (param_1 <= 0.0) {
    param_1 = 0.0;
  }
  fVar16 = DAT_00652e00;
  if ((DAT_00652e00 <= param_2) && (fVar16 = param_2, DAT_005d94c4 < param_2)) {
    fVar16 = DAT_005d94c4;
  }
  if (0.0 < param_1) {
    fVar9 = DAT_005d9038 - DAT_00652618 * fVar16;
    fVar2 = (float)(-(uint)(0.0 < fVar16) & (uint)DAT_005d9038 |
                   ~-(uint)(0.0 < fVar16) & (uint)(DAT_00652618 * fVar16 + DAT_005d9038));
    uVar13 = -(uint)(fVar16 < 0.0) & (uint)DAT_005d9038;
    *(float *)(param_3 + 0x90) = fVar2;
    fVar14 = (float)(uVar13 | ~-(uint)(fVar16 < 0.0) & (uint)fVar9) * param_1;
    fVar15 = fVar2 * param_1;
    fVar10 = _UNK_00652ce4 + param_1;
    fVar11 = _UNK_00652ce8 + param_1;
    fVar12 = _UNK_00652cec + param_1;
    auVar1._4_4_ = fVar10;
    auVar1._0_4_ = _DAT_00652ce0 + param_1;
    auVar1._8_4_ = fVar11;
    auVar1._12_4_ = fVar12;
    auVar7 = rcpps(ZEXT416((uint)fVar2),auVar1);
    fVar2 = fVar14 * auVar7._0_4_;
    fVar9 = fVar15 * auVar7._4_4_;
    fVar5 = fVar14 * auVar7._8_4_;
    fVar6 = fVar15 * auVar7._12_4_;
    *(float *)(param_3 + 0x94) = (fVar14 - (_DAT_00652ce0 + param_1) * fVar2) * auVar7._0_4_ + fVar2
    ;
    *(float *)(param_3 + 0x98) = (fVar15 - fVar10 * fVar9) * auVar7._4_4_ + fVar9;
    *(float *)(param_3 + 0x9c) = (fVar14 - fVar11 * fVar5) * auVar7._8_4_ + fVar5;
    *(float *)(param_3 + 0xa0) = (fVar15 - fVar12 * fVar6) * auVar7._12_4_ + fVar6;
    auVar3._0_4_ = _DAT_00652cf0 + param_1;
    auVar3._4_4_ = _UNK_00652cf4 + param_1;
    auVar3._8_4_ = _UNK_00652cf8 + param_1;
    auVar3._12_4_ = _UNK_00652cfc + param_1;
    auVar7 = rcpps(auVar7,auVar3);
    fVar2 = fVar14 * auVar7._0_4_;
    fVar9 = fVar15 * auVar7._4_4_;
    fVar5 = fVar14 * auVar7._8_4_;
    fVar6 = fVar15 * auVar7._12_4_;
    auVar4._0_4_ = auVar3._0_4_ * fVar2;
    auVar4._4_4_ = auVar3._4_4_ * fVar9;
    auVar4._8_4_ = auVar3._8_4_ * fVar5;
    auVar4._12_4_ = auVar3._12_4_ * fVar6;
    fVar10 = param_1 + _DAT_00652d00;
    fVar11 = param_1 + _UNK_00652d04;
    fVar12 = param_1 + _UNK_00652d08;
    fVar8 = param_1 + _UNK_00652d0c;
    *(float *)(param_3 + 0xa4) = (fVar14 - auVar4._0_4_) * auVar7._0_4_ + fVar2;
    *(float *)(param_3 + 0xa8) = (fVar15 - auVar4._4_4_) * auVar7._4_4_ + fVar9;
    *(float *)(param_3 + 0xac) = (fVar14 - auVar4._8_4_) * auVar7._8_4_ + fVar5;
    *(float *)(param_3 + 0xb0) = (fVar15 - auVar4._12_4_) * auVar7._12_4_ + fVar6;
    auVar7._4_4_ = fVar11;
    auVar7._0_4_ = fVar10;
    auVar7._8_4_ = fVar12;
    auVar7._12_4_ = fVar8;
    auVar7 = rcpps(auVar4,auVar7);
    fVar2 = fVar14 * auVar7._0_4_;
    fVar9 = fVar15 * auVar7._4_4_;
    fVar5 = fVar14 * auVar7._8_4_;
    fVar6 = fVar15 * auVar7._12_4_;
    *(float *)(param_3 + 0xb4) = (fVar14 - fVar10 * fVar2) * auVar7._0_4_ + fVar2;
    *(float *)(param_3 + 0xb8) = (fVar15 - fVar11 * fVar9) * auVar7._4_4_ + fVar9;
    *(float *)(param_3 + 0xbc) = (fVar14 - fVar12 * fVar5) * auVar7._8_4_ + fVar5;
    *(float *)(param_3 + 0xc0) = (fVar15 - fVar8 * fVar6) * auVar7._12_4_ + fVar6;
    *(float *)(param_3 + 0xc4) = fVar14 / (DAT_00652e04 + param_1);
    *(float *)(param_3 + 200) = fVar15 / (DAT_005d9064 + param_1);
    *(float *)(param_3 + 0xcc) = fVar14 / (DAT_005d906c + param_1);
    *(float *)(param_3 + 0xd0) = param_1;
    *(float *)(param_3 + 0xd4) = fVar16;
    return;
  }
  *(undefined4 *)(param_3 + 0x90) = 0x3f800000;
  *(undefined8 *)(param_3 + 0x94) = 0;
  *(undefined8 *)(param_3 + 0x9c) = 0;
  *(undefined8 *)(param_3 + 0xa4) = 0;
  *(undefined8 *)(param_3 + 0xac) = 0;
  *(undefined8 *)(param_3 + 0xb4) = 0;
  *(undefined8 *)(param_3 + 0xbc) = 0;
  *(undefined8 *)(param_3 + 0xc0) = 0;
  *(undefined8 *)(param_3 + 200) = 0;
  *(float *)(param_3 + 0xd0) = param_1;
  *(float *)(param_3 + 0xd4) = fVar16;
  return;
}


