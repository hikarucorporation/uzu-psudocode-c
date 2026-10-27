// Function : paintButton
// Namespace: juce:LookAndFeel_V3_DocumentWindowButton
// Entry    : 0029dbc0
// Prototype: undefined paintButton(LookAndFeel_V3_DocumentWindowButton * this, Graphics * param_1, undefined4 param_2, undefined4 param_3)
// Body     : 0029dbc0 - 0029e26e


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* juce::LookAndFeel_V3_DocumentWindowButton::paintButton(juce::Graphics&, bool, bool) */

void __thiscall
juce::LookAndFeel_V3_DocumentWindowButton::paintButton
          (LookAndFeel_V3_DocumentWindowButton *this,Graphics *param_1,undefined4 param_2,
          undefined4 param_3)

{
  float *pfVar1;
  undefined1 auVar2 [15];
  undefined1 auVar3 [14];
  undefined1 auVar4 [15];
  undefined1 auVar5 [15];
  undefined1 auVar6 [15];
  undefined1 auVar7 [14];
  undefined1 auVar8 [15];
  undefined1 auVar9 [15];
  undefined1 auVar10 [15];
  undefined1 auVar11 [15];
  undefined1 auVar12 [15];
  unkuint9 Var13;
  undefined1 auVar14 [15];
  undefined1 auVar15 [11];
  undefined1 auVar16 [15];
  undefined1 auVar17 [14];
  char cVar18;
  uint uVar19;
  Component *this_00;
  ulong uVar20;
  float *pfVar21;
  LookAndFeel_V3_DocumentWindowButton *pLVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  float fVar26;
  undefined1 auVar27 [15];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  float fVar31;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  float fVar35;
  float fVar36;
  float fVar37;
  undefined1 auVar38 [16];
  float fVar39;
  float fVar40;
  float fVar41;
  undefined8 local_a8;
  undefined8 uStack_a0;
  float local_98;
  float local_94;
  undefined4 local_8c;
  undefined1 local_88 [16];
  float local_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float local_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  long local_48;
  undefined8 uStack_40;
  
  uVar25 = _ZN4juce7ColoursL4greyE_57;
  local_88._0_4_ = param_3;
  pLVar22 = this;
  local_8c = param_2;
  do {
    pLVar22 = *(LookAndFeel_V3_DocumentWindowButton **)(pLVar22 + 0x30);
    if (pLVar22 == (LookAndFeel_V3_DocumentWindowButton *)0x0) goto LAB_0029dc30;
    this_00 = (Component *)__dynamic_cast(pLVar22,&Component::typeinfo,&ResizableWindow::typeinfo,0)
    ;
  } while (this_00 == (Component *)0x0);
                    /* try { // try from 0029dc1f to 0029dc2d has its CatchHandler @ 0029e26f */
  uVar20 = Component::findColour(this_00,0x1005700,'\0');
  uVar25 = (uint)uVar20;
LAB_0029dc30:
  local_78 = (float)(int)*(undefined8 *)(this + 0x40) * _DAT_005d9920;
  fStack_74 = (float)(int)((ulong)*(undefined8 *)(this + 0x40) >> 0x20) * _UNK_005d9924;
  fStack_70 = _UNK_005d9928 * 0.0;
  fStack_6c = _UNK_005d992c * 0.0;
  fVar26 = fStack_74;
  if (local_78 <= fStack_74) {
    fVar26 = local_78;
  }
  fVar36 = DAT_005d98e8;
  if (local_88[0] == '\0') {
    fVar36 = DAT_005de438;
  }
  local_88 = ZEXT416((uint)(fVar36 * fVar26));
  local_68 = fStack_74;
  fStack_64 = fStack_74;
  fStack_60 = fStack_74;
  fStack_5c = fStack_74;
  Graphics::setColour(param_1,uVar25);
  local_a8 = CONCAT44(fStack_74 - (float)local_88._0_4_,local_78 - (float)local_88._0_4_);
  local_58 = (float)local_88._0_4_ + (float)local_88._0_4_;
  uStack_54 = local_88._4_4_;
  uStack_50 = local_88._8_4_;
  uStack_4c = local_88._12_4_;
  uStack_a0 = CONCAT44(local_58,local_58);
  local_48 = local_a8;
  uStack_40 = uStack_a0;
  (**(code **)(**(long **)(param_1 + 8) + 0x130))(*(long **)(param_1 + 8),&local_a8);
  uVar24 = *(uint *)(this + 0x1f8);
  uVar19 = uVar24 >> 0x18;
  auVar33._0_4_ = (float)(uVar25 >> 0x10 & _DAT_005dcd60);
  auVar33._4_4_ = (float)(uVar24 >> 0x10 & _UNK_005dcd64);
  auVar33._8_8_ = 0;
  auVar29._4_4_ = _UNK_005dcd54;
  auVar29._0_4_ = _DAT_005dcd50;
  auVar29._8_8_ = _UNK_005dcd58;
  auVar33 = divps(auVar33,auVar29);
  auVar38._0_4_ = (float)(uVar25 >> 8 & _DAT_005dcd60);
  auVar38._4_4_ = (float)(uVar24 >> 8 & _UNK_005dcd64);
  auVar38._8_8_ = 0;
  auVar38 = divps(auVar38,auVar29);
  auVar28._0_4_ = (float)(int)(uVar25 & _DAT_005dcd60);
  auVar28._4_4_ = (float)(int)(uVar24 & _UNK_005dcd64);
  auVar28._8_8_ = 0;
  auVar29 = divps(auVar28,auVar29);
  fVar37 = auVar38._4_4_;
  fVar36 = auVar33._4_4_;
  fVar26 = auVar29._4_4_;
  fVar35 = _DAT_005dd1d0 * auVar29._0_4_ +
           _DAT_005dd1c0 * auVar33._0_4_ + _DAT_005dd1b0 * auVar38._0_4_;
  if ((float)((uint)(fVar35 - (_UNK_005dd1d4 * fVar26 +
                              _UNK_005dd1c4 * fVar36 + _UNK_005dd1b4 * fVar37)) & _DAT_005d91c0) <
      DAT_005d98e8) {
    fVar31 = DAT_005de4c4 * fVar26 + DAT_005de4c0 * fVar36 + DAT_005de4bc * fVar37;
    fVar26 = fVar26 * _DAT_005de4d0 + fVar36 * _DAT_005de4cc + fVar37 * _DAT_005de4c8;
    fVar36 = DAT_005de4d4 + fVar35;
    if (fVar36 <= 0.0) {
      fVar36 = 0.0;
    }
    fVar37 = DAT_005d98e8 + fVar35;
    if (DAT_005d9038 <= DAT_005d98e8 + fVar35) {
      fVar37 = DAT_005d9038;
    }
    uVar25 = -(uint)((float)((uint)(fVar37 - fVar35) & _DAT_005d91c0) <
                    (float)((uint)(fVar36 - fVar35) & _DAT_005d91c0));
    fVar36 = (float)(~uVar25 & (uint)fVar37 | (uint)fVar36 & uVar25);
    fVar35 = DAT_005de4dc * fVar26 + DAT_005de4d8 * fVar31 + fVar36;
    fVar37 = DAT_005de4e4 * fVar26 + DAT_005de4e0 * fVar31 + fVar36;
    uVar24 = 0;
    uVar25 = 0;
    if ((0.0 < fVar35) && (uVar25 = 0xff0000, fVar35 < DAT_005d9038)) {
      uVar25 = (SUB84((double)(fVar35 * DAT_005de3b0) + DAT_005d9098,0) & 0xff) << 0x10;
    }
    fVar26 = fVar26 * _DAT_005de4ec + fVar31 * _DAT_005de4e8 + fVar36;
    if ((0.0 < fVar37) && (uVar24 = 0xff00, fVar37 < DAT_005d9038)) {
      uVar24 = (SUB84((double)(fVar37 * DAT_005de3b0) + DAT_005d9098,0) & 0xff) << 8;
    }
    fVar36 = (float)uVar19 / DAT_005de3b0;
    uVar19 = 0;
    uVar23 = 0;
    if ((0.0 < fVar26) && (uVar23 = 0xff, fVar26 < DAT_005d9038)) {
      uVar23 = SUB84((double)(fVar26 * DAT_005de3b0) + DAT_005d9098,0) & 0xff;
    }
    if ((0.0 < fVar36) && (uVar19 = 0xff000000, fVar36 < DAT_005d9038)) {
      uVar19 = SUB84((double)(fVar36 * DAT_005de3b0) + DAT_005d9098,0) << 0x18;
    }
    uVar24 = uVar24 | uVar25 | uVar23 | uVar19;
    uVar19 = uVar19 >> 0x18;
  }
  pLVar22 = this;
  do {
    if ((*(ushort *)(pLVar22 + 0xe8) & 0x8000) != 0) {
      uVar24 = uVar24 & 0xffffff | 0x99000000;
      goto LAB_0029e00f;
    }
    pLVar22 = *(LookAndFeel_V3_DocumentWindowButton **)(pLVar22 + 0x30);
  } while (pLVar22 != (LookAndFeel_V3_DocumentWindowButton *)0x0);
  if ((char)local_8c != '\0') {
    auVar32._8_4_ = 0xffffffff;
    auVar32._0_8_ = 0xffffffffffffffff;
    auVar32._12_4_ = 0xffffffff;
    auVar27 = ZEXT415(uVar24 >> 8) ^ auVar32._0_15_;
    auVar2[0xd] = 0;
    auVar2._0_13_ = auVar27._0_13_;
    auVar2[0xe] = auVar27[7];
    auVar4[0xc] = auVar27[6];
    auVar4._0_12_ = auVar27._0_12_;
    auVar4._13_2_ = auVar2._13_2_;
    auVar5[0xb] = 0;
    auVar5._0_11_ = auVar27._0_11_;
    auVar5._12_3_ = auVar4._12_3_;
    auVar6[10] = auVar27[5];
    auVar6._0_10_ = auVar27._0_10_;
    auVar6._11_4_ = auVar5._11_4_;
    auVar8[9] = 0;
    auVar8._0_9_ = auVar27._0_9_;
    auVar8._10_5_ = auVar6._10_5_;
    auVar9[8] = auVar27[4];
    auVar9._0_8_ = auVar27._0_8_;
    auVar9._9_6_ = auVar8._9_6_;
    auVar12._7_8_ = 0;
    auVar12._0_7_ = auVar9._8_7_;
    Var13 = CONCAT81(SUB158(auVar12 << 0x40,7),auVar27[3]);
    auVar14._9_6_ = 0;
    auVar14._0_9_ = Var13;
    auVar15._1_10_ = SUB1510(auVar14 << 0x30,5);
    auVar15[0] = auVar27[2];
    auVar16._11_4_ = 0;
    auVar16._0_11_ = auVar15;
    auVar10[2] = auVar27[1];
    auVar10._0_2_ = auVar27._0_2_;
    auVar10._3_12_ = SUB1512(auVar16 << 0x20,3);
    auVar11._2_13_ = auVar10._2_13_;
    auVar11._0_2_ = auVar27._0_2_ & 0xff;
    auVar3._10_2_ = 0;
    auVar3._0_10_ = auVar11._0_10_;
    auVar3._12_2_ = (short)Var13;
    auVar17._2_4_ = auVar3._10_4_;
    auVar17._0_2_ = auVar15._0_2_;
    auVar17._6_8_ = 0;
    auVar7._4_2_ = auVar10._2_2_;
    auVar7._0_4_ = auVar11._0_4_;
    auVar7._6_8_ = SUB148(auVar17 << 0x40,6);
    uVar24 = (int)((float)(byte)~(byte)uVar24 * _DAT_005de3c4 + DAT_005de3b0) & 0xffU |
             ((int)((float)(auVar11._0_4_ & 0xffff) * _DAT_005dcd40 + _DAT_005dcd50) & _DAT_005dcd60
             ) << 8 | ((int)((float)auVar7._4_4_ * _UNK_005dcd44 + _UNK_005dcd54) & _UNK_005dcd64)
                      << 0x10 | uVar19 << 0x18;
  }
LAB_0029e00f:
  Graphics::setColour(param_1,uVar24);
  local_a8 = local_48;
  uStack_a0 = uStack_40;
  (**(code **)(**(long **)(param_1 + 8) + 0x128))
            (DAT_005d9070 * (float)local_88._0_4_,*(long **)(param_1 + 8),&local_a8);
                    /* try { // try from 0029e048 to 0029e04d has its CatchHandler @ 0029e287 */
  (**(code **)(**(long **)(this + 0x1c0) + 0x10))(&local_a8);
                    /* try { // try from 0029e057 to 0029e05c has its CatchHandler @ 0029e27f */
  cVar18 = (**(code **)(local_a8 + 0x30))(&uStack_a0);
                    /* try { // try from 0029e063 to 0029e068 has its CatchHandler @ 0029e277 */
  (**(code **)(local_a8 + 0x58))(&uStack_a0);
  pLVar22 = this + 0x200;
  if (cVar18 != '\0') {
    pLVar22 = this + 0x228;
  }
  fVar36 = local_58 * DAT_005de46c;
  local_98 = DAT_005d9038;
  fVar26 = DAT_005d9038;
  if (0.0 < fVar36) {
    fVar35 = *(float *)(pLVar22 + 0x14) - *(float *)(pLVar22 + 0x10);
    fVar37 = 0.0;
    if (0.0 < fVar35) {
      fVar41 = *(float *)(pLVar22 + 0x1c) - *(float *)(pLVar22 + 0x18);
      fVar31 = 0.0;
      fVar40 = 0.0;
      local_94 = 0.0;
      if (0.0 < fVar41) {
        fVar39 = (float)(local_88._0_4_ ^ _DAT_006524b0) * DAT_005de46c;
        local_78 = local_78 + fVar39;
        auVar34._4_4_ = fVar36;
        auVar34._0_4_ = fVar41;
        auVar34._8_8_ = 0;
        auVar30._4_4_ = fVar36;
        auVar30._0_4_ = fVar35;
        auVar30._8_8_ = 0;
        auVar29 = divps(auVar34,auVar30);
        local_98 = auVar29._0_4_;
        if (local_98 <= auVar29._4_4_) {
          local_98 = local_98 * fVar36;
          fVar26 = fVar36;
        }
        else {
          fVar26 = fVar36 / local_98;
          local_98 = fVar36;
        }
        fVar26 = fVar26 / fVar35;
        local_98 = local_98 / fVar41;
        fVar37 = fVar26 * 0.0;
        fVar31 = (fVar35 * DAT_005d98c8 - *(float *)(pLVar22 + 0x10)) * fVar26 +
                 local_78 + fVar36 * DAT_005d9044;
        fVar40 = local_98 * 0.0;
        local_94 = (DAT_005d98c8 * fVar41 - *(float *)(pLVar22 + 0x18)) * local_98 +
                   fVar36 * DAT_005d9044 + fVar39 + local_68;
      }
      goto LAB_0029e1b0;
    }
  }
  fVar37 = 0.0;
  fVar31 = 0.0;
  fVar40 = 0.0;
  local_94 = 0.0;
LAB_0029e1b0:
  local_a8 = CONCAT44(fVar37,fVar26);
  uStack_a0 = CONCAT44(fVar40,fVar31);
  cVar18 = (**(code **)(**(long **)(param_1 + 8) + 0x68))();
  if ((cVar18 == '\0') && ((long)*(int *)(pLVar22 + 0xc) != 0)) {
    pfVar21 = *(float **)pLVar22;
    pfVar1 = pfVar21 + *(int *)(pLVar22 + 0xc);
    do {
      fVar26 = *pfVar21;
      if ((fVar26 != DAT_005de3d0) || (NAN(fVar26) || NAN(DAT_005de3d0))) {
        if ((fVar26 == DAT_005de3d4) && (!NAN(fVar26) && !NAN(DAT_005de3d4))) {
LAB_0029e24d:
          (**(code **)(**(long **)(param_1 + 8) + 200))(*(long **)(param_1 + 8),pLVar22,&local_a8);
          return;
        }
        if (((fVar26 == DAT_005de3d8) && (!NAN(fVar26) && !NAN(DAT_005de3d8))) ||
           ((fVar26 == DAT_005de3dc && (!NAN(fVar26) && !NAN(DAT_005de3dc))))) goto LAB_0029e24d;
      }
      else {
        pfVar21 = pfVar21 + 2;
      }
      pfVar21 = pfVar21 + 1;
    } while (pfVar21 != pfVar1);
  }
  return;
}


