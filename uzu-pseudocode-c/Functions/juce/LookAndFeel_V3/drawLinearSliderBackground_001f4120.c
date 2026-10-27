// Function : drawLinearSliderBackground
// Namespace: juce:LookAndFeel_V3
// Entry    : 001f4120
// Prototype: undefined drawLinearSliderBackground(long * param_1, Graphics * param_2, float param_3, float param_4, float param_5, float param_6, undefined8 param_7, Component * param_8)
// Body     : 001f4120 - 001f47f6


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention: __cdecl */
/* juce::LookAndFeel_V3::drawLinearSliderBackground(juce::Graphics&, int, int, int, int, float,
   float, float, juce::Slider::SliderStyle, juce::Slider&) */

void __cdecl
juce::LookAndFeel_V3::drawLinearSliderBackground
          (long *param_1,Graphics *param_2,float param_3,float param_4,float param_5,float param_6,
          undefined8 param_7,Component *param_8)

{
  uint uVar1;
  uint uVar2;
  undefined1 auVar3 [16];
  char cVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  ulong uVar9;
  Component *pCVar10;
  float *pfVar11;
  uint uVar12;
  uint uVar13;
  uint *puVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  Graphics *this;
  float fVar18;
  float fVar19;
  uint extraout_XMM0_Db;
  uint extraout_XMM0_Dc;
  uint extraout_XMM0_Dd;
  float fVar20;
  float fVar21;
  undefined1 local_f8 [16];
  long local_e8;
  undefined8 *local_e0;
  undefined4 local_d8;
  undefined4 local_d4;
  float local_c8;
  uint uStack_c4;
  uint uStack_c0;
  uint uStack_bc;
  float *local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined1 local_98;
  Graphics *local_90;
  float local_88;
  uint uStack_84;
  uint uStack_80;
  uint uStack_7c;
  float local_78;
  float local_68;
  uint uStack_64;
  uint uStack_60;
  uint uStack_5c;
  float local_58;
  undefined8 local_40;
  undefined4 local_38;
  
  local_90 = param_2;
  local_88 = param_3;
  local_68 = param_4;
  iVar5 = (**(code **)(*param_1 + 0x2e0))(param_1,param_8);
  local_c8 = (float)(iVar5 + -2);
  uStack_c4 = extraout_XMM0_Db;
  uStack_c0 = extraout_XMM0_Dc;
  uStack_bc = extraout_XMM0_Dd;
  uVar9 = Component::findColour(param_8,0x1001310,'\0');
  uVar6 = (uint)uVar9;
  uVar2 = (uint)(uVar9 >> 8);
  uVar8 = (uint)(uVar9 >> 0x18) & 0xff;
  pCVar10 = param_8;
  do {
    if ((*(ushort *)(pCVar10 + 0xe8) & 0x8000) != 0) {
      uVar15 = 0x9000000;
      goto LAB_001f41d4;
    }
    pCVar10 = *(Component **)(pCVar10 + 0x30);
  } while (pCVar10 != (Component *)0x0);
  uVar15 = 0x13000000;
LAB_001f41d4:
  uVar13 = 0;
  uVar1 = (uint)(uVar9 >> 0x10);
  if (uVar6 < 0x1000000) {
    uVar12 = uVar15 >> 0x18;
    uVar16 = uVar15;
  }
  else {
    uVar12 = (uVar8 ^ 0xff) * (~uVar15 >> 0x18) >> 8 ^ 0xff;
    uVar15 = ((~uVar15 >> 0x18) * uVar8) / uVar12;
    uVar13 = (uVar1 & 0xff) * uVar15 >> 8;
    uVar16 = (uVar2 & 0xff) * uVar15;
    uVar15 = (uVar6 & 0xff) * uVar15 >> 8;
  }
  uVar7 = 0x6000000;
  if (0xffffff < uVar6) {
    uVar17 = (uVar8 ^ 0xff) * 0xf9 >> 8 ^ 0xff;
    uVar7 = (uVar8 * 0xf9) / uVar17;
    uVar7 = (uVar6 & 0xff) * uVar7 >> 8 & 0xff |
            (uVar2 & 0xff) * uVar7 & 0xff00 |
            (uVar1 & 0xff) * uVar7 * 0x100 & 0xff0000 | uVar17 << 0x18;
  }
  uVar15 = (uVar16 >> 8 & 0xff) << 8 | (uVar13 & 0xff) << 0x10 | uVar12 << 0x18 | uVar15 & 0xff;
  local_a8 = 0;
  uStack_a0 = 0;
  local_b8 = (float *)0x0;
  uStack_b0 = 0;
  local_98 = 1;
  if ((*(uint *)(*(long *)(param_8 + 0x1a0) + 0x20) < 0xc) &&
     ((0xa05U >> (*(uint *)(*(long *)(param_8 + 0x1a0) + 0x20) & 0x1f) & 1) != 0)) {
    local_58 = ((float)(int)param_6 * DAT_005d9044 + (float)(int)local_68) - DAT_005d9044 * local_c8
    ;
    auVar3._4_4_ = 0;
    auVar3._0_4_ = local_58;
    auVar3._8_4_ = local_58 + local_c8;
    auVar3._12_4_ = 0;
    local_f8 = auVar3 << 0x20;
    local_e8 = (ulong)local_e8._1_7_ << 8;
    local_78 = param_5;
    local_e0 = malloc(0x80);
    this = local_90;
    local_d8 = 8;
    *local_e0 = 0;
    *(uint *)(local_e0 + 1) = uVar15;
    local_d4 = 2;
    local_e0[2] = 0x3ff0000000000000;
    *(uint *)(local_e0 + 3) = uVar7;
                    /* try { // try from 001f437d to 001f438e has its CatchHandler @ 001f47f9 */
    Graphics::setGradientFill(local_90,(undefined8 *)local_f8);
    local_68 = (float)(_DAT_006524b0 ^ (uint)local_c8);
    uStack_64 = _UNK_006524b4 ^ uStack_c4;
    uStack_60 = _UNK_006524b8 ^ uStack_c0;
    uStack_5c = _UNK_006524bc ^ uStack_bc;
    free(local_e0);
    fVar18 = local_68 * DAT_005d9044 + (float)(int)local_88;
    fVar19 = local_58;
    fVar20 = (float)(int)local_78 + local_c8;
    fVar21 = local_c8;
  }
  else {
    local_78 = ((float)(int)param_5 * DAT_005d9044 + (float)(int)local_88) - DAT_005d9044 * local_c8
    ;
    local_f8._4_4_ = 0;
    local_f8._0_4_ = local_78;
    local_f8._8_4_ = local_78 + local_c8;
    local_f8._12_4_ = 0;
    local_e8 = (ulong)local_e8._1_7_ << 8;
    local_58 = param_6;
    local_e0 = malloc(0x80);
    this = local_90;
    local_d8 = 8;
    *local_e0 = 0;
    *(uint *)(local_e0 + 1) = uVar15;
    local_d4 = 2;
    local_e0[2] = 0x3ff0000000000000;
    *(uint *)(local_e0 + 3) = uVar7;
                    /* try { // try from 001f477b to 001f478c has its CatchHandler @ 001f47f7 */
    Graphics::setGradientFill(local_90,(undefined8 *)local_f8);
    local_88 = (float)(_DAT_006524b0 ^ (uint)local_c8);
    uStack_84 = _UNK_006524b4 ^ uStack_c4;
    uStack_80 = _UNK_006524b8 ^ uStack_c0;
    uStack_7c = _UNK_006524bc ^ uStack_bc;
    free(local_e0);
    fVar19 = local_88 * DAT_005d9044 + (float)(int)local_68;
    fVar21 = (float)(int)local_58 + local_c8;
    fVar18 = local_78;
    fVar20 = local_c8;
  }
  Path::addRoundedRectangle
            (fVar18,fVar19,fVar20,fVar21,DAT_00652628,DAT_00652628,(Path *)&local_b8,1,'\x01','\x01'
             ,'\x01');
                    /* try { // try from 001f441e to 001f4606 has its CatchHandler @ 001f480a */
  cVar4 = (**(code **)(**(long **)(this + 8) + 0x68))();
  if ((cVar4 == '\0') && ((long)uStack_b0._4_4_ != 0)) {
    pfVar11 = local_b8;
    do {
      fVar18 = *pfVar11;
      if ((fVar18 != DAT_005de3d0) || (NAN(fVar18) || NAN(DAT_005de3d0))) {
        if ((fVar18 != DAT_005de3d4) || (NAN(fVar18) || NAN(DAT_005de3d4))) {
          if (((fVar18 != DAT_005de3d8) || (NAN(fVar18) || NAN(DAT_005de3d8))) &&
             ((fVar18 != DAT_005de3dc || (NAN(fVar18) || NAN(DAT_005de3dc))))) goto LAB_001f4474;
        }
        local_f8 = ZEXT416(DAT_005d9038);
        local_e8 = 0x3f800000;
        (**(code **)(**(long **)(this + 8) + 200))(*(long **)(this + 8),&local_b8,local_f8);
        break;
      }
      pfVar11 = pfVar11 + 2;
LAB_001f4474:
      pfVar11 = pfVar11 + 1;
    } while (pfVar11 != local_b8 + uStack_b0._4_4_);
  }
  fVar20 = (float)(uVar1 & 0xff) / DAT_005de3b0;
  fVar18 = (float)(uVar2 & 0xff) / DAT_005de3b0;
  fVar19 = (float)(uVar6 & 0xff) / DAT_005de3b0;
  fVar18 = fVar19 * fVar19 * _DAT_005de3bc +
           fVar20 * fVar20 * _DAT_005de3b8 + fVar18 * fVar18 * _DAT_005de3b4;
  if (fVar18 < 0.0) {
    fVar18 = sqrtf(fVar18);
  }
  else {
    fVar18 = SQRT(fVar18);
  }
  puVar14 = &_ZN4juce7ColoursL5whiteE_474;
  if (DAT_005d9044 <= fVar18) {
    puVar14 = &_ZN4juce7ColoursL5blackE_344;
  }
  uVar15 = *puVar14;
  uVar13 = uVar15 & 0xffffff;
  uVar12 = uVar13 >> 8;
  uVar7 = uVar13 >> 0x10;
  uVar16 = 0x80000000;
  if (0xffffff < uVar6) {
    uVar16 = (uVar8 ^ 0xff) * 0x7f >> 8 ^ 0xff;
    uVar8 = (uVar8 * 0x7f) / uVar16;
    uVar7 = uVar7 + (((uVar1 & 0xff) - ((uVar15 & 0xff0000) >> 0x10)) * uVar8 >> 8);
    uVar12 = uVar12 + (((uVar2 & 0xff) - ((uVar15 & 0xff00) >> 8)) * uVar8 >> 8);
    uVar13 = uVar13 + (((uVar6 & 0xff) - (uVar15 & 0xff)) * uVar8 >> 8);
    uVar16 = uVar16 << 0x18;
  }
  Graphics::setColour(this,uVar13 & 0xff | (uVar12 & 0xff) << 8 | (uVar7 & 0xff) << 0x10 | uVar16);
  local_40 = 0x3f000000;
  local_38 = 0;
  local_f8 = ZEXT416(DAT_005d9038);
  local_e8 = 0x3f800000;
                    /* try { // try from 001f463b to 001f46cb has its CatchHandler @ 001f4808 */
  cVar4 = (**(code **)(**(long **)(this + 8) + 0x68))();
  if ((cVar4 == '\0') && ((long)uStack_b0._4_4_ != 0)) {
    pfVar11 = local_b8;
    do {
      fVar18 = *pfVar11;
      if ((fVar18 != DAT_005de3d0) || (NAN(fVar18) || NAN(DAT_005de3d0))) {
        if ((fVar18 != DAT_005de3d4) || (NAN(fVar18) || NAN(DAT_005de3d4))) {
          if (((fVar18 != DAT_005de3d8) || (NAN(fVar18) || NAN(DAT_005de3d8))) &&
             ((fVar18 != DAT_005de3dc || (NAN(fVar18) || NAN(DAT_005de3dc))))) goto LAB_001f4684;
        }
        (**(code **)(**(long **)(this + 8) + 0xd8))
                  (*(long **)(this + 8),&local_b8,&local_40,local_f8);
        break;
      }
      pfVar11 = pfVar11 + 2;
LAB_001f4684:
      pfVar11 = pfVar11 + 1;
    } while (pfVar11 != local_b8 + uStack_b0._4_4_);
  }
  uStack_b0 = uStack_b0 & 0xffffffff;
  free(local_b8);
  return;
}


