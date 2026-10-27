// Function : drawTreeviewPlusMinusBox
// Namespace: juce:LookAndFeel_V2
// Entry    : 0020fa80
// Prototype: undefined drawTreeviewPlusMinusBox(undefined8 param_1, Graphics * param_2, undefined8 * param_3, undefined8 param_4, int param_5)
// Body     : 0020fa80 - 0020fc43


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::LookAndFeel_V2::drawTreeviewPlusMinusBox(juce::Graphics&, juce::Rectangle<float> const&,
   juce::Colour, bool, bool) */

void __cdecl
juce::LookAndFeel_V2::drawTreeviewPlusMinusBox
          (undefined8 param_1,Graphics *param_2,undefined8 *param_3,undefined8 param_4,int param_5)

{
  uint uVar1;
  float fVar2;
  float fVar4;
  ulong uVar3;
  float fVar5;
  undefined8 local_70;
  undefined8 uStack_68;
  float local_5c;
  undefined1 local_58 [16];
  float local_48;
  float fStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  float local_38;
  float fStack_34;
  undefined8 uStack_30;
  undefined1 local_28 [16];
  
  uVar3 = param_3[1];
  fVar2 = (float)uVar3;
  fVar4 = (float)(uVar3 >> 0x20);
  if (DAT_005d98ec <= fVar2) {
    uVar3 = (ulong)(uint)DAT_005d98ec;
  }
  fVar5 = fVar4;
  if ((float)uVar3 <= fVar4) {
    fVar5 = (float)uVar3;
  }
  uVar1 = SUB84((double)(fVar5 * (float)s_333_power__f_00652630._0_4_) + DAT_005d9098,0);
  uVar3 = CONCAT44(uVar1,uVar1) | 0x100000001;
  local_38 = (float)((int)(float)*param_3 + ((int)fVar2 - (int)uVar3) / 2);
  fStack_34 = (float)((int)(float)((ulong)*param_3 >> 0x20) +
                     ((int)fVar4 - (int)(uVar3 >> 0x20)) / 2);
  uStack_30 = 0;
  local_58 = ZEXT416((uint)(float)(int)(uVar1 | 1));
  Graphics::setColour(param_2,0xe5ffffff);
  local_48 = local_38;
  fStack_44 = fStack_34;
  uStack_40 = local_58._0_4_;
  uStack_3c = local_58._0_4_;
  local_70 = CONCAT44(fStack_34,local_38);
  uStack_68 = CONCAT44(local_58._0_4_,local_58._0_4_);
  (**(code **)(**(long **)(param_2 + 8) + 0xb8))(*(long **)(param_2 + 8),&local_70);
  Graphics::setColour(param_2,0x80000000);
  local_70 = CONCAT44(fStack_44,local_48);
  uStack_68 = CONCAT44(uStack_3c,uStack_40);
  (**(code **)(**(long **)(param_2 + 8) + 0xd0))(DAT_005d9038,*(long **)(param_2 + 8),&local_70);
  local_48 = (float)local_58._0_4_ * DAT_005d9044 + DAT_005d9038;
  local_5c = (float)((int)(uVar1 | 1) / 2);
  local_58._0_4_ = (float)local_58._0_4_ - local_48;
  local_28._4_4_ = fStack_34;
  local_28._0_4_ = fStack_34;
  local_28._8_4_ = fStack_34;
  local_28._12_4_ = fStack_34;
  fStack_44 = (float)local_58._4_4_;
  uStack_40 = local_58._8_4_;
  uStack_3c = local_58._12_4_;
  local_70 = CONCAT44(fStack_34 + local_5c,DAT_005d9044 * (float)local_58._0_4_ + local_38);
  uStack_68 = CONCAT44(DAT_005d9960._4_4_,local_48);
  (**(code **)(**(long **)(param_2 + 8) + 0xb8))(*(long **)(param_2 + 8),&local_70);
  if (param_5 == 0) {
    local_70 = CONCAT44((float)local_58._0_4_ * DAT_005d9044 + (float)local_28._0_4_,
                        local_38 + local_5c);
    uStack_68 = CONCAT44(local_48,_DAT_005dd050);
    (**(code **)(**(long **)(param_2 + 8) + 0xb8))(*(long **)(param_2 + 8),&local_70);
  }
  return;
}


