// Function : drawLevelMeter
// Namespace: juce:LookAndFeel_V2
// Entry    : 002168f0
// Prototype: undefined drawLevelMeter(float param_1, undefined8 param_2_00, Graphics * param_3, int param_4, int param_5)
// Body     : 002168f0 - 00216d5c


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* juce::LookAndFeel_V2::drawLevelMeter(juce::Graphics&, int, int, float) */

void __thiscall
juce::LookAndFeel_V2::drawLevelMeter
          (float param_1,undefined8 param_2_00,Graphics *param_3,int param_4,int param_5)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  float fVar5;
  float fVar6;
  undefined8 local_78;
  undefined8 uStack_70;
  float local_68;
  float fStack_64;
  undefined8 uStack_60;
  float local_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  undefined1 local_48 [16];
  
  Graphics::setColour(param_3,_ZN4juce7ColoursL5whiteE_144 & 0xffffff | 0xb2000000);
  local_68 = (float)param_4;
  fStack_50 = (float)param_5;
  uStack_60 = 0;
  local_78 = 0;
  fStack_4c = fStack_50;
  uStack_70._0_4_ = local_68;
  fStack_64 = fStack_50;
  uStack_70._4_4_ = fStack_50;
  local_58 = fStack_50;
  fStack_54 = fStack_50;
  (**(code **)(**(long **)(param_3 + 8) + 0x120))(*(long **)(param_3 + 8),&local_78);
  Graphics::setColour(param_3,_ZN4juce7ColoursL5blackE_14 & 0xffffff | 0x33000000);
  uStack_70 = CONCAT44(_UNK_005dd0a4 + fStack_64,_DAT_005dd0a0 + local_68);
  local_78 = _DAT_005dcc70;
  (**(code **)(**(long **)(param_3 + 8) + 0x118))(*(long **)(param_3 + 8),&local_78);
  fVar5 = (local_68 + DAT_005d98e0) / DAT_0065b140;
  _local_68 = CONCAT44(fStack_64,fVar5);
  fVar6 = local_58 + DAT_005d98e0;
  fStack_50 = 0.0;
  fStack_4c = fStack_54;
  iVar2 = SUB84((double)(param_1 * DAT_0065b140) + DAT_005d9098,0);
  uVar3 = 0x99000000;
  if (0 < iVar2) {
    uVar3 = 0x80000000;
  }
  puVar4 = &_ZN4juce7ColoursL9lightblueE_70;
  puVar1 = &_ZN4juce7ColoursL9lightblueE_70;
  if (0 < iVar2) {
    puVar1 = &_ZN4juce7ColoursL4blueE_16;
  }
  local_58 = DAT_005de3cc * fVar5;
  fStack_54 = fVar6;
  Graphics::setColour(param_3,*puVar1 & 0xffffff | uVar3);
  local_48 = ZEXT416((uint)(DAT_005d9068 * local_68));
  local_78 = CONCAT44(_UNK_005dd0b4,local_68 * 0.0 + DAT_0065449c + DAT_005d9068 * local_68);
  uStack_70 = CONCAT44(fStack_54,local_58);
  (**(code **)(**(long **)(param_3 + 8) + 0x120))(*(long **)(param_3 + 8),&local_78);
  uVar3 = 0x99000000;
  if (1 < iVar2) {
    uVar3 = 0x80000000;
  }
  puVar1 = &_ZN4juce7ColoursL9lightblueE_70;
  if (1 < iVar2) {
    puVar1 = &_ZN4juce7ColoursL4blueE_16;
  }
  Graphics::setColour(param_3,*puVar1 & 0xffffff | uVar3);
  local_78 = CONCAT44(_UNK_005dd0b4,local_68 + DAT_0065449c + (float)local_48._0_4_);
  uStack_70 = CONCAT44(fStack_54,local_58);
  (**(code **)(**(long **)(param_3 + 8) + 0x120))(*(long **)(param_3 + 8),&local_78);
  uVar3 = 0x99000000;
  if (2 < iVar2) {
    uVar3 = 0x80000000;
  }
  puVar1 = &_ZN4juce7ColoursL9lightblueE_70;
  if (2 < iVar2) {
    puVar1 = &_ZN4juce7ColoursL4blueE_16;
  }
  Graphics::setColour(param_3,*puVar1 & 0xffffff | uVar3);
  local_78 = CONCAT44(_UNK_005dd0b4,local_68 + local_68 + DAT_0065449c + (float)local_48._0_4_);
  uStack_70 = CONCAT44(fStack_54,local_58);
  (**(code **)(**(long **)(param_3 + 8) + 0x120))(*(long **)(param_3 + 8),&local_78);
  uVar3 = 0x99000000;
  if (3 < iVar2) {
    uVar3 = 0x80000000;
  }
  puVar1 = &_ZN4juce7ColoursL9lightblueE_70;
  if (3 < iVar2) {
    puVar1 = &_ZN4juce7ColoursL4blueE_16;
  }
  Graphics::setColour(param_3,*puVar1 & 0xffffff | uVar3);
  local_78 = CONCAT44(_UNK_005dd0b4,local_68 * DAT_0065449c + DAT_0065449c + (float)local_48._0_4_);
  uStack_70 = CONCAT44(fStack_54,local_58);
  (**(code **)(**(long **)(param_3 + 8) + 0x120))(*(long **)(param_3 + 8),&local_78);
  uVar3 = 0x99000000;
  if (4 < iVar2) {
    uVar3 = 0x80000000;
  }
  puVar1 = &_ZN4juce7ColoursL9lightblueE_70;
  if (4 < iVar2) {
    puVar1 = &_ZN4juce7ColoursL4blueE_16;
  }
  Graphics::setColour(param_3,*puVar1 & 0xffffff | uVar3);
  local_78 = CONCAT44(_UNK_005dd0b4,DAT_005d94d4 * local_68 + DAT_0065449c + (float)local_48._0_4_);
  uStack_70 = CONCAT44(fStack_54,local_58);
  (**(code **)(**(long **)(param_3 + 8) + 0x120))(*(long **)(param_3 + 8),&local_78);
  uVar3 = 0x99000000;
  if (5 < iVar2) {
    uVar3 = 0x80000000;
    puVar4 = &_ZN4juce7ColoursL4blueE_16;
  }
  Graphics::setColour(param_3,*puVar4 & 0xffffff | uVar3);
  local_78 = CONCAT44(_UNK_005dd0b4,DAT_00652628 * local_68 + DAT_0065449c + (float)local_48._0_4_);
  uStack_70 = CONCAT44(fStack_54,local_58);
  (**(code **)(**(long **)(param_3 + 8) + 0x120))(*(long **)(param_3 + 8),&local_78);
  if (iVar2 < 7) {
    uVar3 = _ZN4juce7ColoursL9lightblueE_70 & 0xffffff | 0x99000000;
  }
  else {
    uVar3 = _ZN4juce7ColoursL3redE_121;
  }
  Graphics::setColour(param_3,uVar3);
  local_78 = CONCAT44(_UNK_005dd0b4,local_48._0_4_ + local_68 * DAT_005d98e4 + DAT_0065449c);
  uStack_70 = CONCAT44(fStack_54,local_58);
  (**(code **)(**(long **)(param_3 + 8) + 0x120))(*(long **)(param_3 + 8),&local_78);
  return;
}


