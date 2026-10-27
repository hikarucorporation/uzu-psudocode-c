// Function : drawMenuBarBackground
// Namespace: juce:LookAndFeel_V4
// Entry    : 001f1630
// Prototype: undefined drawMenuBarBackground(undefined8 param_1_00, Graphics * param_2, uint param_3, uint param_4, undefined8 param_5_00, Component * param_6)
// Body     : 001f1630 - 001f191e


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* juce::LookAndFeel_V4::drawMenuBarBackground(juce::Graphics&, int, int, bool,
   juce::MenuBarComponent&) */

void __thiscall
juce::LookAndFeel_V4::drawMenuBarBackground
          (undefined8 param_1_00,Graphics *param_2,uint param_3,uint param_4,undefined8 param_5_00,
          Component *param_6)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  long local_70;
  ulong uStack_68;
  undefined1 local_60;
  undefined8 *local_58;
  undefined4 local_50;
  undefined4 local_4c;
  ulong local_48;
  ulong local_40;
  ulong local_38;
  
  local_38 = Component::findColour(param_6,0x1000100,'\0');
  uVar5 = (uint)(local_38 >> 0x10);
  fVar11 = (float)(uVar5 & 0xff);
  uVar2 = (uint)local_38 >> 8;
  fVar12 = fVar11 / DAT_005de3b0;
  fVar7 = (float)(uVar2 & 0xff);
  fVar8 = fVar7 / DAT_005de3b0;
  fVar9 = (float)((uint)local_38 & 0xff);
  fVar10 = fVar9 / DAT_005de3b0;
  fVar8 = fVar10 * fVar10 * _DAT_005de3bc +
          fVar12 * fVar12 * _DAT_005de3b8 + fVar8 * fVar8 * _DAT_005de3b4;
  if (fVar8 < 0.0) {
    fVar8 = sqrtf(fVar8);
  }
  else {
    fVar8 = SQRT(fVar8);
  }
  puVar1 = &_ZN4juce7ColoursL5whiteE_474;
  if (DAT_005d9044 <= fVar8) {
    puVar1 = &_ZN4juce7ColoursL5blackE_344;
  }
  uVar3 = *puVar1;
  uVar5 = uVar5 & 0xff;
  uVar2 = uVar2 & 0xff;
  local_38 = local_38 & 0xff;
  local_40 = (ulong)(uVar2 << 8);
  Graphics::setColour(param_2,((((int)local_38 - (uVar3 & 0xff)) * 0xaf >> 8) + uVar3 & 0xff) +
                              ((uVar3 & 0xff00) + (uVar2 - (uVar3 >> 8 & 0xff)) * 0xaf & 0xff00 |
                              (((uVar5 - (uVar3 >> 0x10 & 0xff)) * 0xaf >> 8) + (uVar3 >> 0x10) &
                              0xff) << 0x10) + 0x7e000000);
  uVar2 = 1;
  if ((int)param_4 < 1) {
    uVar2 = param_4;
  }
  uVar3 = param_4 - uVar2;
  uStack_68 = CONCAT44(uVar2,param_3);
  local_70 = 0;
  (**(code **)(**(long **)(param_2 + 8) + 0xb0))(*(long **)(param_2 + 8),&local_70,0);
  local_48 = 1;
  if ((int)uVar3 < 1) {
    local_48 = (ulong)uVar3;
  }
  local_70 = (ulong)(param_4 - (int)local_48) << 0x20;
  uStack_68 = local_48 << 0x20 | (ulong)param_3;
  (**(code **)(**(long **)(param_2 + 8) + 0xb0))(*(long **)(param_2 + 8),&local_70,0);
  fVar11 = fVar11 * DAT_005de424;
  fVar7 = fVar7 * DAT_005de424;
  iVar6 = (int)local_40;
  fVar9 = fVar9 * DAT_005de424;
  iVar4 = (int)local_38;
  local_70 = 0;
  uStack_68 = (ulong)(uint)(float)(int)param_4 << 0x20;
  local_60 = 0;
  local_58 = malloc(0x80);
  local_50 = 8;
  *local_58 = 0;
  *(uint *)(local_58 + 1) = iVar4 + iVar6 + uVar5 * 0x10000 + 0x66000000;
  local_4c = 2;
  local_58[2] = 0x3ff0000000000000;
  *(uint *)(local_58 + 3) =
       ((int)fVar9 & 0xffU) + (((int)fVar7 & 0xffU) << 8 | ((int)fVar11 & 0xffU) << 0x10) +
       0x66000000;
                    /* try { // try from 001f18ce to 001f18da has its CatchHandler @ 001f191f */
  Graphics::setGradientFill(param_2,&local_70);
  iVar4 = uVar3 - (int)local_48;
  free(local_58);
  local_70 = (ulong)uVar2 << 0x20;
  uStack_68 = CONCAT44(iVar4,param_3);
  (**(code **)(**(long **)(param_2 + 8) + 0xb0))(*(long **)(param_2 + 8),&local_70,0);
  return;
}


