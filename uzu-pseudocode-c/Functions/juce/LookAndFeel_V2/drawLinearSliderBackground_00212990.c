// Function : drawLinearSliderBackground
// Namespace: juce:LookAndFeel_V2
// Entry    : 00212990
// Prototype: undefined drawLinearSliderBackground(long * param_1, Graphics * param_2, float param_3, float param_4, float param_5, float param_6, undefined8 param_7, Component * param_8)
// Body     : 00212990 - 00212f24


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention: __cdecl */
/* juce::LookAndFeel_V2::drawLinearSliderBackground(juce::Graphics&, int, int, int, int, float,
   float, float, juce::Slider::SliderStyle, juce::Slider&) */

void __cdecl
juce::LookAndFeel_V2::drawLinearSliderBackground
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
  ulong uVar8;
  Component *pCVar9;
  float *pfVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  float fVar16;
  uint extraout_XMM0_Db;
  uint extraout_XMM0_Dc;
  uint extraout_XMM0_Dd;
  float fVar17;
  float fVar18;
  float fVar19;
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
  
  local_88 = param_3;
  local_68 = param_4;
  iVar5 = (**(code **)(*param_1 + 0x2e0))(param_1,param_8);
  local_c8 = (float)(iVar5 + -2);
  uStack_c4 = extraout_XMM0_Db;
  uStack_c0 = extraout_XMM0_Dc;
  uStack_bc = extraout_XMM0_Dd;
  uVar8 = Component::findColour(param_8,0x1001310,'\0');
  uVar15 = (uint)uVar8;
  uVar7 = (uint)(uVar8 >> 0x18) & 0xff;
  pCVar9 = param_8;
  do {
    if ((*(ushort *)(pCVar9 + 0xe8) & 0x8000) != 0) {
      uVar14 = 0x21000000;
      goto LAB_00212a34;
    }
    pCVar9 = *(Component **)(pCVar9 + 0x30);
  } while (pCVar9 != (Component *)0x0);
  uVar14 = 0x40000000;
LAB_00212a34:
  uVar11 = _ZN4juce7ColoursL5blackE_14 & 0xffffff;
  uVar12 = uVar11 >> 8;
  uVar13 = uVar11 >> 0x10;
  uVar2 = (uint)(uVar8 >> 8);
  uVar1 = (uint)(uVar8 >> 0x10);
  if (uVar15 < 0x1000000) {
    uVar6 = uVar14 >> 0x18;
  }
  else {
    uVar6 = (uVar7 ^ 0xff) * (~uVar14 >> 0x18) >> 8 ^ 0xff;
    uVar14 = ((~uVar14 >> 0x18) * uVar7) / uVar6;
    uVar13 = uVar13 + (((uVar1 & 0xff) - uVar13) * uVar14 >> 8);
    uVar12 = uVar12 + (((uVar2 & 0xff) - (uVar12 & 0xff)) * uVar14 >> 8);
    uVar11 = uVar11 + (((uVar15 & 0xff) - (_ZN4juce7ColoursL5blackE_14 & 0xff)) * uVar14 >> 8);
  }
  uVar14 = 0x14000000;
  if (0xffffff < uVar15) {
    uVar14 = (uVar7 ^ 0xff) * 0xeb >> 8 ^ 0xff;
    uVar7 = (uVar7 * 0xeb) / uVar14;
    uVar14 = (uVar15 & 0xff) * uVar7 >> 8 & 0xff |
             (uVar2 & 0xff) * uVar7 & 0xff00 |
             (uVar1 & 0xff) * uVar7 * 0x100 & 0xff0000 | uVar14 << 0x18;
  }
  uVar15 = (uVar12 & 0xff) << 8 | (uVar13 & 0xff) << 0x10 | uVar6 << 0x18 | uVar11 & 0xff;
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
    local_d8 = 8;
    *local_e0 = 0;
    *(uint *)(local_e0 + 1) = uVar15;
    local_d4 = 2;
    local_e0[2] = 0x3ff0000000000000;
    *(uint *)(local_e0 + 3) = uVar14;
                    /* try { // try from 00212bfd to 00212c07 has its CatchHandler @ 00212f27 */
    Graphics::setGradientFill(param_2,(undefined8 *)local_f8);
    local_68 = (float)(_DAT_006524b0 ^ (uint)local_c8);
    uStack_64 = _UNK_006524b4 ^ uStack_c4;
    uStack_60 = _UNK_006524b8 ^ uStack_c0;
    uStack_5c = _UNK_006524bc ^ uStack_bc;
    free(local_e0);
    fVar16 = local_68 * DAT_005d9044 + (float)(int)local_88;
    fVar17 = local_58;
    fVar18 = (float)(int)local_78 + local_c8;
    fVar19 = local_c8;
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
    local_d8 = 8;
    *local_e0 = 0;
    *(uint *)(local_e0 + 1) = uVar15;
    local_d4 = 2;
    local_e0[2] = 0x3ff0000000000000;
    *(uint *)(local_e0 + 3) = uVar14;
                    /* try { // try from 00212eb6 to 00212ec0 has its CatchHandler @ 00212f25 */
    Graphics::setGradientFill(param_2,(undefined8 *)local_f8);
    local_88 = (float)(_DAT_006524b0 ^ (uint)local_c8);
    uStack_84 = _UNK_006524b4 ^ uStack_c4;
    uStack_80 = _UNK_006524b8 ^ uStack_c0;
    uStack_7c = _UNK_006524bc ^ uStack_bc;
    free(local_e0);
    fVar17 = local_88 * DAT_005d9044 + (float)(int)local_68;
    fVar19 = (float)(int)local_58 + local_c8;
    fVar16 = local_78;
    fVar18 = local_c8;
  }
  Path::addRoundedRectangle
            (fVar16,fVar17,fVar18,fVar19,DAT_00652628,DAT_00652628,(Path *)&local_b8,1,'\x01','\x01'
             ,'\x01');
                    /* try { // try from 00212c94 to 00212d43 has its CatchHandler @ 00212f38 */
  cVar4 = (**(code **)(**(long **)(param_2 + 8) + 0x68))();
  if ((cVar4 == '\0') && ((long)uStack_b0._4_4_ != 0)) {
    pfVar10 = local_b8;
    do {
      fVar16 = *pfVar10;
      if ((fVar16 != DAT_005de3d0) || (NAN(fVar16) || NAN(DAT_005de3d0))) {
        if ((fVar16 != DAT_005de3d4) || (NAN(fVar16) || NAN(DAT_005de3d4))) {
          if (((fVar16 != DAT_005de3d8) || (NAN(fVar16) || NAN(DAT_005de3d8))) &&
             ((fVar16 != DAT_005de3dc || (NAN(fVar16) || NAN(DAT_005de3dc))))) goto LAB_00212ce4;
        }
        local_f8 = ZEXT416(DAT_005d9038);
        local_e8 = 0x3f800000;
        (**(code **)(**(long **)(param_2 + 8) + 200))(*(long **)(param_2 + 8),&local_b8,local_f8);
        break;
      }
      pfVar10 = pfVar10 + 2;
LAB_00212ce4:
      pfVar10 = pfVar10 + 1;
    } while (pfVar10 != local_b8 + uStack_b0._4_4_);
  }
  Graphics::setColour(param_2,0x4c000000);
  local_40 = 0x3f000000;
  local_38 = 0;
  local_f8 = ZEXT416(DAT_005d9038);
  local_e8 = 0x3f800000;
                    /* try { // try from 00212d77 to 00212e09 has its CatchHandler @ 00212f36 */
  cVar4 = (**(code **)(**(long **)(param_2 + 8) + 0x68))();
  if ((cVar4 == '\0') && ((long)uStack_b0._4_4_ != 0)) {
    pfVar10 = local_b8;
    do {
      fVar16 = *pfVar10;
      if ((fVar16 != DAT_005de3d0) || (NAN(fVar16) || NAN(DAT_005de3d0))) {
        if ((fVar16 != DAT_005de3d4) || (NAN(fVar16) || NAN(DAT_005de3d4))) {
          if (((fVar16 != DAT_005de3d8) || (NAN(fVar16) || NAN(DAT_005de3d8))) &&
             ((fVar16 != DAT_005de3dc || (NAN(fVar16) || NAN(DAT_005de3dc))))) goto LAB_00212dc4;
        }
        (**(code **)(**(long **)(param_2 + 8) + 0xd8))
                  (*(long **)(param_2 + 8),&local_b8,&local_40,local_f8);
        break;
      }
      pfVar10 = pfVar10 + 2;
LAB_00212dc4:
      pfVar10 = pfVar10 + 1;
    } while (pfVar10 != local_b8 + uStack_b0._4_4_);
  }
  uStack_b0 = uStack_b0 & 0xffffffff;
  free(local_b8);
  return;
}


