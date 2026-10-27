// Function : drawBubble
// Namespace: juce:LookAndFeel_V2
// Entry    : 001eeb70
// Prototype: undefined drawBubble(undefined8 param_1_00, Graphics * param_2, Component * param_3, ulong * param_4, ulong * param_5)
// Body     : 001eeb70 - 001ef9f0


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* juce::LookAndFeel_V2::drawBubble(juce::Graphics&, juce::BubbleComponent&, juce::Point<float>
   const&, juce::Rectangle<float> const&) */

void __thiscall
juce::LookAndFeel_V2::drawBubble
          (undefined8 param_1_00,Graphics *param_2,Component *param_3,ulong *param_4,ulong *param_5)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  bool bVar4;
  char cVar5;
  uint uVar6;
  ulong uVar7;
  float *pfVar8;
  long lVar9;
  int iVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar15;
  undefined1 auVar14 [16];
  float fVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  float *local_1d8;
  undefined8 uStack_1d0;
  float local_1c8;
  float fStack_1c4;
  float fStack_1c0;
  float fStack_1bc;
  undefined1 local_1b8;
  float local_1a8;
  float fStack_1a4;
  float fStack_1a0;
  float fStack_19c;
  float local_18c;
  undefined1 local_188 [8];
  float fStack_180;
  float fStack_17c;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined1 local_168 [8];
  float fStack_160;
  float fStack_15c;
  float local_158;
  float fStack_154;
  float fStack_150;
  float fStack_14c;
  float local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  float local_138;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  float local_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  float local_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  float local_108;
  uint uStack_104;
  uint uStack_100;
  uint uStack_fc;
  undefined1 local_f8 [16];
  float local_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  float local_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  float local_c0;
  float local_bc;
  undefined1 local_b8 [16];
  float local_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  float local_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  undefined1 local_88 [8];
  float fStack_80;
  float fStack_7c;
  float local_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  undefined1 local_68 [16];
  undefined8 local_58;
  undefined8 local_48;
  undefined4 local_40;
  float local_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  
  local_1d8 = (float *)0x0;
  uStack_1d0 = 0;
  local_1b8 = 1;
  uVar7 = *param_5;
  fVar16 = (float)(uVar7 >> 0x20);
  fVar11 = (float)param_5[1];
  auVar20._0_4_ = _DAT_005d9910 + fVar11;
  fStack_134 = (float)(param_5[1] >> 0x20);
  auVar20._4_4_ = _UNK_005d9914 + fStack_134;
  auVar20._8_4_ = _UNK_005d9918 + 0.0;
  auVar20._12_4_ = _UNK_005d991c + 0.0;
  _local_168 = maxps(auVar20,ZEXT816(0));
  local_e8 = _DAT_005d9920 + (float)uVar7;
  fStack_e4 = _UNK_005d9924 + fVar16;
  fStack_e0 = _UNK_005d9928 + 0.0;
  fStack_dc = _UNK_005d992c + 0.0;
  local_178 = *param_4;
  local_88._4_4_ = _UNK_005dcc74;
  local_88._0_4_ = _DAT_005dcc70;
  fStack_80 = _UNK_005dcc78;
  fStack_7c = _UNK_005dcc7c;
  local_18c = 0.0;
  if (fVar11 <= 0.0) {
    local_f8._8_8_ = 0;
    local_f8._0_8_ = local_178;
  }
  else {
    local_f8._8_8_ = 0;
    local_f8._0_8_ = local_178;
    if (0.0 < fStack_134) {
      auVar17._8_8_ = 0;
      auVar17._0_8_ = local_178;
      auVar1._8_8_ = 0;
      auVar1._0_8_ = uVar7;
      local_f8 = minps(auVar17,auVar1);
      auVar19._0_4_ = _DAT_005dcc70 + (float)local_178;
      auVar19._4_4_ = _UNK_005dcc74 + (float)(local_178 >> 0x20);
      auVar19._8_4_ = _UNK_005dcc78 + 0.0;
      auVar19._12_4_ = _UNK_005dcc7c + 0.0;
      auVar2._4_4_ = fVar16 + fStack_134;
      auVar2._0_4_ = (float)uVar7 + fVar11;
      auVar2._8_8_ = 0;
      auVar20 = maxps(auVar19,auVar2);
      local_88._4_4_ = auVar20._4_4_ - local_f8._4_4_;
      local_88._0_4_ = auVar20._0_4_ - local_f8._0_4_;
      fStack_80 = auVar20._8_4_ - local_f8._8_4_;
      fStack_7c = auVar20._12_4_ - local_f8._12_4_;
    }
  }
  uStack_170 = 0;
  fStack_134 = fStack_134 * _UNK_005dcdd4;
  fVar16 = fVar11 * _DAT_005dcdd0;
  if (DAT_005d906c <= fVar11 * _DAT_005dcdd0) {
    fVar16 = DAT_005d906c;
  }
  local_138 = fStack_134;
  if (fVar16 <= fStack_134) {
    local_138 = fVar16;
  }
  local_188._0_4_ = _DAT_005d9920 * (float)local_168._0_4_;
  local_188._4_4_ = _UNK_005d9924 * (float)local_168._4_4_;
  fStack_180 = _UNK_005d9928 * fStack_160;
  fStack_17c = _UNK_005d992c * fStack_15c;
  auVar20 = minps(_local_188,_DAT_005dcde0);
  fVar11 = auVar20._0_4_;
  fVar16 = auVar20._4_4_;
  fVar12 = auVar20._8_4_;
  fVar13 = auVar20._12_4_;
  local_38 = fVar11 + local_e8;
  fStack_34 = fVar16 + fStack_e4;
  fStack_30 = fVar12 + fStack_e0;
  fStack_2c = fVar13 + fStack_dc;
  _local_1c8 = CONCAT44(local_38,local_38);
  _fStack_1c0 = CONCAT44(fStack_e4,fStack_e4);
  fStack_130 = fStack_134;
  fStack_12c = fStack_134;
  local_d8 = fStack_e4;
  fStack_d4 = fStack_e4;
  fStack_d0 = fStack_e4;
  fStack_cc = fStack_e4;
  local_1d8 = malloc(0x20);
  *local_1d8 = 100002.0;
  local_1d8[1] = local_38;
  uStack_1d0._0_4_ = 8;
  uStack_1d0._4_4_ = 3;
  local_1d8[2] = local_d8;
  auVar14._0_4_ = (float)local_188._0_4_ + _DAT_005d9910;
  auVar14._4_4_ = (float)local_188._4_4_ + _UNK_005d9914;
  auVar14._8_4_ = fStack_180 + _UNK_005d9918;
  auVar14._12_4_ = fStack_17c + _UNK_005d991c;
  auVar18._0_4_ = local_138 + fVar11;
  auVar18._4_4_ = local_138 + fVar16;
  auVar18._8_4_ = local_138 + fVar12;
  auVar18._12_4_ = local_138 + fVar13;
  auVar20 = minps(auVar18,auVar14);
  local_bc = auVar20._0_4_;
  fStack_a4 = auVar20._4_4_;
  local_c0 = (float)local_168._0_4_ - (local_bc + local_bc);
  fVar15 = (float)local_168._4_4_ - (fStack_a4 + fStack_a4);
  iVar10 = -(uint)(0.0 < fVar15);
  auVar3._4_4_ = -(uint)(0.0 < local_c0);
  auVar3._0_4_ = -(uint)(0.0 < local_c0);
  auVar3._8_4_ = iVar10;
  auVar3._12_4_ = iVar10;
  uVar6 = movmskpd((int)local_1d8,auVar3);
  if ((uVar6 & 1) == 0) {
    local_c0 = 0.0;
  }
  if ((uVar6 & 2) != 0) {
    local_18c = fVar15;
  }
  local_188._4_4_ = fVar16;
  local_188._0_4_ = fVar11 + fVar11;
  fStack_180 = fVar12;
  fStack_17c = fVar13;
  local_118 = fVar16 + fVar16;
  local_bc = local_bc + local_e8;
  fStack_a4 = fStack_a4 + fStack_e4;
  fStack_a0 = auVar20._8_4_ + fStack_e0;
  fStack_9c = auVar20._12_4_ + fStack_dc;
  local_1a8 = local_178._4_4_;
  fStack_1a4 = local_178._4_4_;
  fStack_1a0 = local_178._4_4_;
  fStack_19c = local_178._4_4_;
  fStack_114 = fVar16;
  fStack_110 = fVar16;
  fStack_10c = fVar16;
  local_78 = fVar16;
  fStack_74 = fVar16;
  fStack_70 = fVar16;
  fStack_6c = fVar16;
  if ((((local_bc <= (float)local_178) && ((float)local_f8._4_4_ <= local_178._4_4_)) &&
      ((float)local_178 < local_bc + local_c0)) &&
     (local_178._4_4_ < (local_d8 - (float)local_f8._4_4_) + (float)local_f8._4_4_)) {
    local_a8 = local_bc;
    Path::lineTo((float)local_178 - local_138,local_d8,(Path *)&local_1d8);
    Path::lineTo((float)local_178,local_1a8,(Path *)&local_1d8);
    Path::lineTo((float)local_178 + local_138,local_d8,(Path *)&local_1d8);
  }
  local_168._0_4_ = (float)local_168._0_4_ + local_e8;
  local_168._4_4_ = (float)local_168._4_4_ + fStack_e4;
  fStack_160 = fStack_160 + fStack_e0;
  fStack_15c = fStack_15c + fStack_dc;
  local_a8 = fStack_a4;
  fStack_a0 = fStack_a4;
  fStack_9c = fStack_a4;
  Path::lineTo((float)local_168._0_4_ - fVar11,local_d8,(Path *)&local_1d8);
  fVar11 = (float)local_188._0_4_ * DAT_005d9044;
  fVar16 = DAT_005d9044 * local_118;
  local_148 = ((float)local_168._0_4_ - (float)local_188._0_4_) + fVar11;
  fVar15 = local_d8 + fVar16;
  local_188._0_4_ = fVar11;
  bVar4 = 0.0 < fVar16;
  local_b8 = ZEXT416((uint)fVar16);
  uStack_144 = local_168._4_4_;
  uStack_140 = fStack_160;
  uStack_13c = fStack_15c;
  if (bVar4 && 0.0 < fVar11) {
    fVar12 = (fVar15 * 0.0 - local_148) + local_148;
    local_158 = (DAT_00652e14 * local_148 - fVar15) + fVar15;
    local_108 = (float)(_DAT_006524b0 ^ (uint)fVar16);
    uStack_104 = _UNK_006524b4;
    uStack_100 = _UNK_006524b8;
    uStack_fc = _UNK_006524bc;
    fVar16 = 0.0;
    do {
      fVar13 = sinf(fVar16);
      local_128 = fVar13 * (float)local_188._0_4_ + local_148;
      fVar13 = cosf(fVar16);
      fVar13 = fVar13 * local_108 + fVar15;
      Path::lineTo((local_128 - fVar13 * 0.0) + fVar12,local_128 * 0.0 + fVar13 + local_158,
                   (Path *)&local_1d8);
      fVar16 = fVar16 + DAT_005d904c;
    } while (fVar16 < DAT_005de3fc);
    fVar16 = local_108 * DAT_005de400 + fVar15;
    Path::lineTo(fVar12 + (((float)local_188._0_4_ + local_148) - fVar16 * 0.0),
                 local_158 + ((float)local_188._0_4_ + local_148) * 0.0 + fVar16,(Path *)&local_1d8)
    ;
  }
  if (((float)local_168._0_4_ <= (float)local_178) && (local_a8 <= local_1a8)) {
    if (((float)local_178 <
         (((float)local_f8._0_4_ + (float)local_88._0_4_) - (float)local_168._0_4_) +
         (float)local_168._0_4_) && (local_1a8 < local_a8 + local_18c)) {
      Path::lineTo((float)local_168._0_4_,local_1a8 - local_138,(Path *)&local_1d8);
      Path::lineTo((float)local_178,local_1a8,(Path *)&local_1d8);
      Path::lineTo((float)local_168._0_4_,local_1a8 + local_138,(Path *)&local_1d8);
    }
  }
  local_98 = (float)local_168._4_4_;
  fStack_94 = (float)local_168._4_4_;
  fStack_90 = (float)local_168._4_4_;
  fStack_8c = (float)local_168._4_4_;
  Path::lineTo((float)local_168._0_4_,(float)local_168._4_4_ - local_78,(Path *)&local_1d8);
  local_128 = (local_98 - local_118) + (float)local_b8._0_4_;
  fStack_124 = fStack_94;
  fStack_120 = fStack_90;
  fStack_11c = fStack_8c;
  if (bVar4 && 0.0 < fVar11) {
    local_158 = (local_128 * 0.0 - local_148) + local_148;
    fStack_154 = fStack_94;
    fStack_150 = fStack_90;
    fStack_14c = fStack_8c;
    local_108 = (DAT_00652e14 * local_148 - local_128) + local_128;
    local_118 = (float)(_DAT_006524b0 ^ local_b8._0_4_);
    fStack_114 = (float)(_UNK_006524b4 ^ local_b8._4_4_);
    fStack_110 = (float)(_UNK_006524b8 ^ local_b8._8_4_);
    fStack_10c = (float)(_UNK_006524bc ^ local_b8._12_4_);
    fVar16 = DAT_005de3fc;
    do {
      fVar12 = sinf(fVar16);
      fVar12 = fVar12 * (float)local_188._0_4_ + local_148;
      fVar13 = cosf(fVar16);
      fVar13 = fVar13 * local_118 + local_128;
      Path::lineTo((fVar12 - fVar13 * 0.0) + local_158,fVar12 * 0.0 + fVar13 + local_108,
                   (Path *)&local_1d8);
      fVar16 = fVar16 + DAT_005d904c;
    } while (fVar16 < DAT_00652ba0);
    fVar16 = DAT_005de404 * (float)local_188._0_4_ + local_148;
    Path::lineTo(local_158 + (fVar16 - (local_128 - local_118) * 0.0),
                 local_108 + fVar16 * 0.0 + (local_128 - local_118),(Path *)&local_1d8);
  }
  if (((local_bc <= (float)local_178) && (local_98 <= local_1a8)) &&
     (((float)local_178 < local_c0 + local_bc &&
      (local_1a8 <
       (((float)local_88._4_4_ + (float)local_f8._4_4_) - (float)local_168._4_4_) +
       (float)local_168._4_4_)))) {
    Path::lineTo((float)local_178 + local_138,local_98,(Path *)&local_1d8);
    Path::lineTo((float)local_178,local_1a8,(Path *)&local_1d8);
    Path::lineTo((float)local_178 - local_138,local_98,(Path *)&local_1d8);
  }
  Path::lineTo(local_38,local_98,(Path *)&local_1d8);
  local_148 = local_e8 + (float)local_188._0_4_;
  if (bVar4 && 0.0 < fVar11) {
    local_158 = (local_128 * 0.0 - local_148) + local_148;
    fStack_154 = fStack_124;
    fStack_150 = fStack_120;
    fStack_14c = fStack_11c;
    local_108 = (DAT_00652e14 * local_148 - local_128) + local_128;
    local_118 = (float)(_DAT_006524b0 ^ local_b8._0_4_);
    fStack_114 = (float)(_UNK_006524b4 ^ local_b8._4_4_);
    fStack_110 = (float)(_UNK_006524b8 ^ local_b8._8_4_);
    fStack_10c = (float)(_UNK_006524bc ^ local_b8._12_4_);
    fVar16 = DAT_00652ba0;
    do {
      fVar12 = sinf(fVar16);
      fVar12 = fVar12 * (float)local_188._0_4_ + local_148;
      fVar13 = cosf(fVar16);
      fVar13 = fVar13 * local_118 + local_128;
      Path::lineTo((fVar12 - fVar13 * 0.0) + local_158,fVar12 * 0.0 + fVar13 + local_108,
                   (Path *)&local_1d8);
      fVar16 = fVar16 + DAT_005d904c;
    } while (fVar16 < DAT_005de408);
    fVar16 = local_118 * DAT_005de40c + local_128;
    Path::lineTo(local_158 + ((local_148 - (float)local_188._0_4_) - fVar16 * 0.0),
                 local_108 + (local_148 - (float)local_188._0_4_) * 0.0 + fVar16,(Path *)&local_1d8)
    ;
  }
  if (((((float)local_f8._0_4_ <= (float)local_178) && (local_a8 <= local_1a8)) &&
      ((float)local_178 < (local_e8 - (float)local_f8._0_4_) + (float)local_f8._0_4_)) &&
     (local_1a8 < local_a8 + local_18c)) {
    Path::lineTo(local_e8,local_1a8 + local_138,(Path *)&local_1d8);
    Path::lineTo((float)local_178,local_1a8,(Path *)&local_1d8);
    Path::lineTo(local_e8,local_1a8 - local_138,(Path *)&local_1d8);
  }
  Path::lineTo(local_e8,local_d8 + local_78,(Path *)&local_1d8);
  if (bVar4 && 0.0 < fVar11) {
    fVar16 = (fVar15 * 0.0 - local_148) + local_148;
    local_158 = (DAT_00652e14 * local_148 - fVar15) + fVar15;
    local_b8._4_4_ = local_b8._4_4_ ^ _UNK_006524b4;
    local_b8._0_4_ = local_b8._0_4_ ^ _DAT_006524b0;
    local_b8._8_4_ = local_b8._8_4_ ^ _UNK_006524b8;
    local_b8._12_4_ = local_b8._12_4_ ^ _UNK_006524bc;
    fVar11 = DAT_005de408;
    do {
      fVar12 = sinf(fVar11);
      local_128 = fVar12 * (float)local_188._0_4_ + local_148;
      fVar12 = cosf(fVar11);
      fVar12 = fVar12 * (float)local_b8._0_4_ + fVar15;
      Path::lineTo((local_128 - fVar12 * 0.0) + fVar16,local_128 * 0.0 + fVar12 + local_158,
                   (Path *)&local_1d8);
      fVar11 = fVar11 + DAT_005d904c;
    } while (fVar11 < DAT_005de410);
    fVar11 = (float)local_188._0_4_ * _DAT_005de414 + local_148;
    fVar15 = (float)local_b8._0_4_ * _DAT_005de418 + fVar15;
    Path::lineTo(fVar16 + (fVar11 - fVar15 * 0.0),local_158 + fVar11 * 0.0 + fVar15,
                 (Path *)&local_1d8);
  }
  lVar9 = (long)uStack_1d0._4_4_;
  if (lVar9 != 0) {
    if (0 < uStack_1d0._4_4_) {
      if ((local_1d8[uStack_1d0._4_4_ - 1] == DAT_005de41c) &&
         (!NAN(local_1d8[uStack_1d0._4_4_ - 1]) && !NAN(DAT_005de41c))) goto LAB_001ef815;
    }
    iVar10 = uStack_1d0._4_4_ + 1;
    if ((int)(uint)uStack_1d0 <= uStack_1d0._4_4_) {
      uVar6 = uStack_1d0._4_4_ + iVar10 / 2 + 9U & 0xfffffff8;
      if ((uint)uStack_1d0 != uVar6) {
        if ((int)uVar6 < 1) {
          free(local_1d8);
          local_1d8 = (float *)0x0;
        }
        else {
          local_1d8 = realloc(local_1d8,(ulong)uVar6 << 2);
        }
      }
      uStack_1d0._0_4_ = uVar6;
    }
    local_1d8[lVar9] = 100005.0;
    uStack_1d0._4_4_ = iVar10;
  }
LAB_001ef815:
                    /* try { // try from 001ef815 to 001ef8fb has its CatchHandler @ 001ef9f3 */
  uVar7 = Component::findColour(param_3,0x1000af0,'\0');
  Graphics::setColour(param_2,(int)uVar7);
  cVar5 = (**(code **)(**(long **)(param_2 + 8) + 0x68))();
  if ((cVar5 == '\0') && ((long)uStack_1d0._4_4_ != 0)) {
    pfVar8 = local_1d8;
    do {
      fVar11 = *pfVar8;
      if ((fVar11 != DAT_005de3d0) || (NAN(fVar11) || NAN(DAT_005de3d0))) {
        if ((fVar11 != DAT_005de3d4) || (NAN(fVar11) || NAN(DAT_005de3d4))) {
          if (((fVar11 != DAT_005de3d8) || (NAN(fVar11) || NAN(DAT_005de3d8))) &&
             ((fVar11 != DAT_005de3dc || (NAN(fVar11) || NAN(DAT_005de3dc))))) goto LAB_001ef884;
        }
        local_68 = ZEXT416(DAT_005d9038);
        local_58 = 0x3f800000;
        (**(code **)(**(long **)(param_2 + 8) + 200))(*(long **)(param_2 + 8),&local_1d8,local_68);
        break;
      }
      pfVar8 = pfVar8 + 2;
LAB_001ef884:
      pfVar8 = pfVar8 + 1;
    } while (pfVar8 != local_1d8 + uStack_1d0._4_4_);
  }
  uVar7 = Component::findColour(param_3,0x1000af1,'\0');
  Graphics::setColour(param_2,(int)uVar7);
  local_48 = 0x3f800000;
  local_40 = 0;
  local_68 = ZEXT416(DAT_005d9038);
  local_58 = 0x3f800000;
                    /* try { // try from 001ef936 to 001ef9ce has its CatchHandler @ 001ef9f1 */
  cVar5 = (**(code **)(**(long **)(param_2 + 8) + 0x68))();
  if ((cVar5 == '\0') && ((long)uStack_1d0._4_4_ != 0)) {
    pfVar8 = local_1d8;
    do {
      fVar11 = *pfVar8;
      if ((fVar11 != DAT_005de3d0) || (NAN(fVar11) || NAN(DAT_005de3d0))) {
        if ((fVar11 != DAT_005de3d4) || (NAN(fVar11) || NAN(DAT_005de3d4))) {
          if (((fVar11 != DAT_005de3d8) || (NAN(fVar11) || NAN(DAT_005de3d8))) &&
             ((fVar11 != DAT_005de3dc || (NAN(fVar11) || NAN(DAT_005de3dc))))) goto LAB_001ef984;
        }
        (**(code **)(**(long **)(param_2 + 8) + 0xd8))
                  (*(long **)(param_2 + 8),&local_1d8,&local_48,local_68);
        break;
      }
      pfVar8 = pfVar8 + 2;
LAB_001ef984:
      pfVar8 = pfVar8 + 1;
    } while (pfVar8 != local_1d8 + uStack_1d0._4_4_);
  }
  uStack_1d0 = (ulong)(uint)uStack_1d0;
  free(local_1d8);
  return;
}


