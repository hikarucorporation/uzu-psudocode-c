// Function : drawScrollbarButton
// Namespace: juce:LookAndFeel_V2
// Entry    : 001e9980
// Prototype: undefined drawScrollbarButton(undefined8 param_1_00, Graphics * param_2, Component * param_3, int param_4, int param_5, uint param_6, undefined8 param_7, undefined8 param_8, char param_9)
// Body     : 001e9980 - 001e9da6


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* juce::LookAndFeel_V2::drawScrollbarButton(juce::Graphics&, juce::ScrollBar&, int, int, int, bool,
   bool, bool) */

void __thiscall
juce::LookAndFeel_V2::drawScrollbarButton
          (undefined8 param_1_00,Graphics *param_2,Component *param_3,int param_4,int param_5,
          uint param_6,undefined8 param_7,undefined8 param_8,char param_9)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  float *pfVar8;
  uint uVar9;
  uint *puVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float *local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined1 local_68;
  undefined1 local_58 [16];
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  
  local_78 = 0;
  uStack_70 = 0;
  local_88 = (float *)0x0;
  uStack_80 = 0;
  local_68 = 1;
  if (3 < param_6) goto LAB_001e9a9e;
  fVar18 = (float)param_4;
  fVar20 = (float)param_5;
  switch(param_6) {
  case 0:
    fVar15 = DAT_005d9070;
    fVar17 = (float)s_333_power__f_00652630._0_4_;
    break;
  case 1:
    fVar14 = DAT_005de3cc;
    fVar16 = DAT_005d9088;
    goto LAB_001e9a7f;
  case 2:
    fVar15 = DAT_005de3cc;
    fVar17 = DAT_005d9088;
    break;
  case 3:
    fVar14 = DAT_005d9070;
    fVar16 = (float)s_333_power__f_00652630._0_4_;
LAB_001e9a7f:
    fVar16 = fVar18 * fVar16;
    fVar17 = DAT_005d9068 * fVar20;
    fVar19 = fVar16;
    fVar21 = fVar20 * DAT_005de3c8;
    fVar15 = DAT_005d9044;
    goto LAB_001e9a99;
  }
  fVar17 = fVar20 * fVar17;
  fVar16 = DAT_005d9068 * fVar18;
  fVar19 = fVar18 * DAT_005de3c8;
  fVar21 = fVar17;
  fVar14 = DAT_005d9044;
LAB_001e9a99:
  Path::addTriangle(fVar14 * fVar18,fVar15 * fVar20,fVar16,fVar17,fVar19,fVar21,(Path *)&local_88);
LAB_001e9a9e:
  if (param_9 == '\0') {
                    /* try { // try from 001e9b36 to 001e9b4e has its CatchHandler @ 001e9dab */
    uVar7 = Component::findColour(param_3,0x1000400,'\0');
    Graphics::setColour(param_2,(int)uVar7);
  }
  else {
                    /* try { // try from 001e9aa7 to 001e9ab5 has its CatchHandler @ 001e9da9 */
    uVar7 = Component::findColour(param_3,0x1000400,'\0');
    uVar5 = (uint)uVar7;
    uVar2 = (uint)(uVar7 >> 0x10);
    fVar16 = (float)(uVar2 & 0xff) / DAT_005de3b0;
    uVar3 = (uint)(uVar7 >> 8);
    fVar18 = (float)(uVar3 & 0xff) / DAT_005de3b0;
    fVar20 = (float)(uVar5 & 0xff) / DAT_005de3b0;
    fVar18 = fVar20 * fVar20 * _DAT_005de3bc +
             fVar16 * fVar16 * _DAT_005de3b8 + fVar18 * fVar18 * _DAT_005de3b4;
    if (fVar18 < 0.0) {
      fVar18 = sqrtf(fVar18);
    }
    else {
      fVar18 = SQRT(fVar18);
    }
    puVar10 = &_ZN4juce7ColoursL5whiteE_474;
    if (DAT_005d9044 <= fVar18) {
      puVar10 = &_ZN4juce7ColoursL5blackE_344;
    }
    uVar1 = *puVar10;
    uVar9 = uVar1 & 0xffffff;
    uVar12 = uVar9 >> 8;
    uVar13 = uVar9 >> 0x10;
    uVar11 = 0x33000000;
    if (0xffffff < uVar5) {
      uVar11 = (uVar5 >> 0x18 ^ 0xff) * 0xcc >> 8 ^ 0xff;
      uVar6 = ((uVar5 >> 0x18) * 0xcc) / uVar11;
      uVar13 = uVar13 + (((uVar2 & 0xff) - ((uVar1 & 0xff0000) >> 0x10)) * uVar6 >> 8);
      uVar12 = uVar12 + (((uVar3 & 0xff) - ((uVar1 & 0xff00) >> 8)) * uVar6 >> 8);
      uVar9 = uVar9 + (((uVar5 & 0xff) - (uVar1 & 0xff)) * uVar6 >> 8);
      uVar11 = uVar11 << 0x18;
    }
                    /* try { // try from 001e9c10 to 001e9c17 has its CatchHandler @ 001e9da9 */
    Graphics::setColour(param_2,uVar9 & 0xff | (uVar12 & 0xff) << 8 |
                                (uVar13 & 0xff) << 0x10 | uVar11);
  }
                    /* try { // try from 001e9c1f to 001e9cd4 has its CatchHandler @ 001e9dab */
  cVar4 = (**(code **)(**(long **)(param_2 + 8) + 0x68))();
  if ((cVar4 == '\0') && ((long)uStack_80._4_4_ != 0)) {
    pfVar8 = local_88;
    do {
      fVar18 = *pfVar8;
      if ((fVar18 != DAT_005de3d0) || (NAN(fVar18) || NAN(DAT_005de3d0))) {
        if ((fVar18 != DAT_005de3d4) || (NAN(fVar18) || NAN(DAT_005de3d4))) {
          if (((fVar18 != DAT_005de3d8) || (NAN(fVar18) || NAN(DAT_005de3d8))) &&
             ((fVar18 != DAT_005de3dc || (NAN(fVar18) || NAN(DAT_005de3dc))))) goto LAB_001e9c74;
        }
        local_58 = ZEXT416(DAT_005d9038);
        local_48 = 0x3f800000;
        (**(code **)(**(long **)(param_2 + 8) + 200))(*(long **)(param_2 + 8),&local_88,local_58);
        break;
      }
      pfVar8 = pfVar8 + 2;
LAB_001e9c74:
      pfVar8 = pfVar8 + 1;
    } while (pfVar8 != local_88 + uStack_80._4_4_);
  }
  Graphics::setColour(param_2,0x80000000);
  local_40 = 0x3f000000;
  local_38 = 0;
  local_58 = ZEXT416(DAT_005d9038);
  local_48 = 0x3f800000;
                    /* try { // try from 001e9d03 to 001e9d86 has its CatchHandler @ 001e9da7 */
  cVar4 = (**(code **)(**(long **)(param_2 + 8) + 0x68))();
  if ((cVar4 == '\0') && ((long)uStack_80._4_4_ != 0)) {
    pfVar8 = local_88;
    do {
      fVar18 = *pfVar8;
      if ((fVar18 != DAT_005de3d0) || (NAN(fVar18) || NAN(DAT_005de3d0))) {
        if ((fVar18 != DAT_005de3d4) || (NAN(fVar18) || NAN(DAT_005de3d4))) {
          if (((fVar18 != DAT_005de3d8) || (NAN(fVar18) || NAN(DAT_005de3d8))) &&
             ((fVar18 != DAT_005de3dc || (NAN(fVar18) || NAN(DAT_005de3dc))))) goto LAB_001e9d44;
        }
        (**(code **)(**(long **)(param_2 + 8) + 0xd8))
                  (*(long **)(param_2 + 8),&local_88,&local_40,local_58);
        break;
      }
      pfVar8 = pfVar8 + 2;
LAB_001e9d44:
      pfVar8 = pfVar8 + 1;
    } while (pfVar8 != local_88 + uStack_80._4_4_);
  }
  uStack_80 = uStack_80 & 0xffffffff;
  free(local_88);
  return;
}


