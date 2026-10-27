// Function : drawLinearSlider
// Namespace: juce:CRQLLNF
// Entry    : 00174c20
// Prototype: undefined drawLinearSlider(float param_1, undefined8 param_2, Graphics * param_3_00, int param_4, int param_5, int param_6, int param_7)
// Body     : 00174c20 - 00174def


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::CRQLLNF::drawLinearSlider(juce::Graphics&, int, int, int, int, float, float, float,
   juce::Slider::SliderStyle, juce::Slider&) */

void __cdecl
juce::CRQLLNF::drawLinearSlider
          (float param_1,undefined8 param_2,Graphics *param_3_00,int param_4,int param_5,int param_6
          ,int param_7)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  undefined1 in_XMM2 [16];
  undefined4 local_88 [2];
  undefined4 local_80 [2];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  float local_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  
  local_78._4_12_ = in_XMM2._4_12_;
  local_78._0_4_ = (BADTYPE)param_6;
  local_68 = ZEXT416((uint)(float)param_7);
  local_28 = (float)param_5;
  local_58 = CONCAT44(local_28,(float)param_4);
  uStack_50 = 0;
  local_48 = ZEXT416((uint)((float)param_7 * DAT_005d9044));
  fStack_24 = local_28;
  fStack_20 = local_28;
  fStack_1c = local_28;
  Colour::Colour((Colour *)local_80,(Colour)0x28,(Colour)0x28,(Colour)0x28);
  Graphics::setColour(param_3_00,local_80[0]);
  Graphics::fillRoundedRectangle
            ((float)local_58,CONCAT44(local_68._0_4_,local_78._0_4_),local_48._0_4_,(long)param_3_00
            );
  fVar2 = (float)(param_6 + param_4) + _DAT_005d98c4;
  if (param_1 <= fVar2) {
    fVar2 = param_1;
  }
  uVar1 = -(uint)(param_1 < DAT_005d98c0 + (float)local_58);
  fVar2 = (float)(~uVar1 & (uint)fVar2 | (uint)(DAT_005d98c0 + (float)local_58) & uVar1);
  fVar3 = (float)local_78._0_4_ * DAT_005d9044 + (float)local_58;
  local_38 = ZEXT416(~-(uint)(fVar2 < fVar3) & (uint)fVar3 | -(uint)(fVar2 < fVar3) & (uint)fVar2);
  if (fVar2 < fVar3) {
    local_78._0_4_ = fVar3 - fVar2;
  }
  else {
    local_78 = ZEXT416((uint)(fVar2 - fVar3));
  }
  Colour::Colour((Colour *)local_88,(Colour)0xff,(Colour)0x85,(Colour)0x33);
  Graphics::setColour(param_3_00,local_88[0]);
  Graphics::fillRoundedRectangle
            (local_38._0_4_,CONCAT44(local_68._0_4_,local_78._0_4_),local_48._0_4_,(long)param_3_00)
  ;
  fVar2 = fVar2 + _DAT_005d98c4;
  Graphics::setColour(param_3_00,Colours::white);
  Graphics::fillRoundedRectangle
            (fVar2,CONCAT44(local_68._0_4_,_DAT_005d9900),local_48._0_4_,(long)param_3_00);
  return;
}


