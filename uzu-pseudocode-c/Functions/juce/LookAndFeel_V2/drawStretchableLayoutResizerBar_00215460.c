// Function : drawStretchableLayoutResizerBar
// Namespace: juce:LookAndFeel_V2
// Entry    : 00215460
// Prototype: undefined drawStretchableLayoutResizerBar(undefined8 param_1_00, Graphics * param_2, int param_3, int param_4, undefined8 param_5, int param_6_00, char param_7)
// Body     : 00215460 - 00215615


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* juce::LookAndFeel_V2::drawStretchableLayoutResizerBar(juce::Graphics&, int, int, bool, bool,
   bool) */

void __thiscall
juce::LookAndFeel_V2::drawStretchableLayoutResizerBar
          (undefined8 param_1_00,Graphics *param_2,int param_3,int param_4,undefined8 param_5,
          int param_6_00,char param_7)

{
  undefined1 auVar1 [16];
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  float fVar6;
  undefined1 auVar7 [16];
  undefined8 local_70;
  undefined8 uStack_68;
  undefined1 local_60;
  undefined8 *local_58;
  undefined4 local_50;
  undefined4 local_4c;
  float local_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float local_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float local_28;
  
  if ((param_6_00 == 0) && (param_7 == '\0')) {
    fVar6 = DAT_005d9044;
  }
  else {
    Graphics::fillAll(param_2,0x190000ff);
    fVar6 = DAT_005d9038;
  }
  local_28 = (float)param_3 * DAT_005d9044;
  if (param_4 < param_3) {
    param_3 = param_4;
  }
  local_48 = (float)param_4 * _DAT_005dd090;
  fStack_44 = (float)param_3 * _UNK_005dd094;
  fStack_40 = _UNK_005dd098 * 0.0;
  fStack_3c = _UNK_005dd09c * 0.0;
  uVar2 = 0xff000000;
  uVar3 = 0xff000000;
  if (fVar6 < DAT_005d9038) {
    uVar3 = SUB84((double)(DAT_005de3b0 * fVar6) + DAT_005d9098,0) << 0x18;
  }
  uVar4 = _ZN4juce7ColoursL5whiteE_144 & 0xffffff;
  if (fVar6 < DAT_005d9038) {
    uVar2 = SUB84((double)(fVar6 * DAT_005de3b0) + DAT_005d9098,0) << 0x18;
  }
  uVar5 = _ZN4juce7ColoursL5blackE_14 & 0xffffff;
  local_70 = CONCAT44(local_48 + fStack_44,DAT_005d9068 * fStack_44 + local_28);
  uStack_68 = CONCAT44(DAT_0065b5a8 * fStack_44 + local_48,local_28);
  local_60 = 1;
  local_38 = fStack_44;
  fStack_34 = fStack_44;
  fStack_30 = fStack_44;
  fStack_2c = fStack_44;
  local_58 = malloc(0x80);
  local_50 = 8;
  *local_58 = 0;
  *(uint *)(local_58 + 1) = uVar4 | uVar3;
  local_4c = 2;
  local_58[2] = 0x3ff0000000000000;
  *(uint *)(local_58 + 3) = uVar5 | uVar2;
                    /* try { // try from 002155c5 to 002155d1 has its CatchHandler @ 00215616 */
  Graphics::setGradientFill(param_2,&local_70);
  free(local_58);
  auVar1._4_4_ = fStack_34;
  auVar1._0_4_ = local_38;
  auVar1._8_4_ = fStack_30;
  auVar1._12_4_ = fStack_2c;
  auVar7._4_12_ = auVar1._4_12_;
  auVar7._0_4_ = local_38 + local_38;
  local_70 = CONCAT44(local_48 - fStack_34,local_28 - local_38);
  uStack_68 = CONCAT44(auVar7._0_4_,auVar7._0_4_);
  (**(code **)(**(long **)(param_2 + 8) + 0x130))
            (local_28 - local_38,auVar7._0_8_,*(long **)(param_2 + 8),&local_70);
  return;
}


