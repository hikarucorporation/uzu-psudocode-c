// Function : drawMenuBarBackground
// Namespace: juce:LookAndFeel_V3
// Entry    : 00291020
// Prototype: undefined drawMenuBarBackground(undefined8 param_1_00, Graphics * param_2, undefined4 param_3, uint param_4, undefined8 param_5_00, Component * param_6)
// Body     : 00291020 - 00291363


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* juce::LookAndFeel_V3::drawMenuBarBackground(juce::Graphics&, int, int, bool,
   juce::MenuBarComponent&) */

void __thiscall
juce::LookAndFeel_V3::drawMenuBarBackground
          (undefined8 param_1_00,Graphics *param_2,undefined4 param_3,uint param_4,
          undefined8 param_5_00,Component *param_6)

{
  uint uVar1;
  uint uVar2;
  Graphics *pGVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  uint uVar7;
  uint *puVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  uint local_84;
  uint local_80;
  uint local_7c;
  long local_60;
  long lStack_58;
  undefined1 local_50;
  undefined8 *local_48;
  undefined4 local_40;
  undefined4 local_3c;
  Graphics *local_38;
  
  uVar6 = Component::findColour(param_6,0x1000700,'\0');
  uVar4 = (uint)uVar6;
  uVar1 = (uint)(uVar6 >> 0x10);
  fVar17 = (float)(uVar1 & 0xff) / DAT_005de3b0;
  uVar2 = (uint)(uVar6 >> 8);
  fVar15 = (float)(uVar2 & 0xff) / DAT_005de3b0;
  fVar16 = (float)(uVar4 & 0xff) / DAT_005de3b0;
  fVar15 = fVar16 * fVar16 * _DAT_005de3bc +
           fVar17 * fVar17 * _DAT_005de3b8 + fVar15 * fVar15 * _DAT_005de3b4;
  if (fVar15 < 0.0) {
    fVar15 = sqrtf(fVar15);
  }
  else {
    fVar15 = SQRT(fVar15);
  }
  puVar8 = &_ZN4juce7ColoursL5whiteE_474;
  if (DAT_005d9044 <= fVar15) {
    puVar8 = &_ZN4juce7ColoursL5blackE_344;
  }
  uVar14 = *puVar8;
  uVar7 = uVar14 & 0xffffff;
  uVar10 = uVar7 >> 8;
  uVar11 = uVar7 >> 0x10;
  if (uVar4 < 0x1000000) {
    uVar9 = 0x26000000;
  }
  else {
    uVar5 = (uint)(uVar6 >> 0x18) & 0xff;
    uVar9 = (uVar5 ^ 0xff) * 0xd9 >> 8 ^ 0xff;
    uVar5 = (uVar5 * 0xd9) / uVar9;
    uVar11 = uVar11 + (((uVar1 & 0xff) - ((uVar14 & 0xff0000) >> 0x10)) * uVar5 >> 8);
    uVar10 = uVar10 + (((uVar2 & 0xff) - ((uVar14 & 0xff00) >> 8)) * uVar5 >> 8);
    uVar7 = uVar7 + (((uVar4 & 0xff) - (uVar14 & 0xff)) * uVar5 >> 8);
    uVar9 = uVar9 << 0x18;
  }
  local_7c = uVar1 & 0xff;
  local_80 = uVar4 & 0xff;
  local_84 = uVar2 & 0xff;
  Graphics::setColour(param_2,uVar7 & 0xff | (uVar10 & 0xff) << 8 | (uVar11 & 0xff) << 0x10 | uVar9)
  ;
  uVar14 = 1;
  if ((int)param_4 < 1) {
    uVar14 = param_4;
  }
  iVar13 = param_4 - uVar14;
  lStack_58 = CONCAT44(uVar14,param_3);
  local_60 = 0;
  local_38 = param_2;
  (**(code **)(**(long **)(param_2 + 8) + 0xb0))(*(long **)(param_2 + 8),&local_60,0);
  iVar12 = 1;
  if (iVar13 < 1) {
    iVar12 = iVar13;
  }
  local_60 = (ulong)(param_4 - iVar12) << 0x20;
  lStack_58 = CONCAT44(iVar12,param_3);
  (**(code **)(**(long **)(param_2 + 8) + 0xb0))(*(long **)(param_2 + 8),&local_60,0);
  fVar15 = (float)(uVar1 & 0xff) * DAT_005de4b4;
  fVar16 = (float)(uVar2 & 0xff) * DAT_005de4b4;
  fVar17 = (float)(uVar4 & 0xff) * DAT_005de4b4;
  local_60 = 0;
  lStack_58 = (ulong)(uint)(float)(int)param_4 << 0x20;
  local_50 = 0;
  local_48 = malloc(0x80);
  pGVar3 = local_38;
  local_40 = 8;
  *local_48 = 0;
  *(uint *)(local_48 + 1) = (local_84 << 8 | local_7c << 0x10 | uVar4 & 0xff000000) + local_80;
  local_3c = 2;
  local_48[2] = 0x3ff0000000000000;
  *(uint *)(local_48 + 3) =
       (int)fVar17 & 0xffU |
       ((int)fVar16 & 0xffU) << 8 | ((int)fVar15 & 0xffU) << 0x10 | uVar4 & 0xff000000;
                    /* try { // try from 00291314 to 00291320 has its CatchHandler @ 00291364 */
  Graphics::setGradientFill(local_38,&local_60);
  free(local_48);
  local_60 = (ulong)uVar14 << 0x20;
  lStack_58 = CONCAT44(iVar13 - iVar12,param_3);
  (**(code **)(**(long **)(pGVar3 + 8) + 0xb0))(*(long **)(pGVar3 + 8),&local_60,0);
  return;
}


