// Function : getPropertyComponentContentPosition
// Namespace: juce:LookAndFeel_V2
// Entry    : 00216550
// Prototype: undefined1[16] getPropertyComponentContentPosition(undefined8 param_1_00, long param_2)
// Body     : 00216550 - 00216593


/* juce::LookAndFeel_V2::getPropertyComponentContentPosition(juce::PropertyComponent&) */

undefined1  [16] __thiscall
juce::LookAndFeel_V2::getPropertyComponentContentPosition(undefined8 param_1_00,long param_2)

{
  uint uVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  
  uVar1 = *(int *)(param_2 + 0x40) / 3;
  uVar2 = 200;
  if ((int)uVar1 < 200) {
    uVar2 = (ulong)uVar1;
  }
  auVar3._0_8_ = uVar2 | 0x100000000;
  auVar3._8_4_ = ~(uint)uVar2 + *(int *)(param_2 + 0x40);
  auVar3._12_4_ = *(int *)(param_2 + 0x44) + -3;
  return auVar3;
}


