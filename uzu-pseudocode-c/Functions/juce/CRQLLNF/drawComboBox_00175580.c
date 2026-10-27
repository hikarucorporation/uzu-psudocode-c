// Function : drawComboBox
// Namespace: juce:CRQLLNF
// Entry    : 00175580
// Prototype: undefined drawComboBox(undefined8 param_1_00, Graphics * param_2, int param_3, int param_4, undefined8 param_5_00, int param_6, int param_7, int param_8, int param_9, Component * param_10)
// Body     : 00175580 - 0017572f


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* juce::CRQLLNF::drawComboBox(juce::Graphics&, int, int, bool, int, int, int, int, juce::ComboBox&)
    */

void __thiscall
juce::CRQLLNF::drawComboBox
          (undefined8 param_1_00,Graphics *param_2,int param_3,int param_4,undefined8 param_5_00,
          int param_6,int param_7,int param_8,int param_9,Component *param_10)

{
  ulong uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined1 auVar5 [16];
  float fVar6;
  undefined8 local_78;
  Path local_50 [40];
  
  auVar5._0_4_ = (float)param_3 + _DAT_005d9910;
  auVar5._4_4_ = (float)param_4 + _UNK_005d9914;
  auVar5._8_4_ = _UNK_005d9918 + 0.0;
  auVar5._12_4_ = _UNK_005d991c + 0.0;
  auVar5 = maxps(auVar5,(undefined1  [16])0x0);
  fVar3 = DAT_005d9044 * auVar5._4_4_;
  uVar1 = Component::findColour(param_10,0x30100304,'\0');
  Graphics::setColour(param_2,(int)uVar1);
  local_78 = auVar5._0_8_;
  Graphics::fillRoundedRectangle(_DAT_005d9920,local_78,fVar3,(long)param_2);
  uVar1 = Component::findColour(param_10,0x30100306,'\0');
  Graphics::setColour(param_2,(int)uVar1);
  local_78._0_4_ = auVar5._0_4_;
  Graphics::drawRoundedRectangle
            (_DAT_005d9920,(undefined4)local_78,fVar3,DAT_005d9038,(long)param_2);
  uVar1 = Component::findColour(param_10,0x30100307,'\0');
  Graphics::setColour(param_2,(int)uVar1);
  fVar2 = (float)(param_8 / 2 + param_6) + DAT_005d98e0;
  fVar3 = auVar5._4_4_ * DAT_005d9070;
  if (DAT_005d98e4 <= fVar3) {
    fVar3 = DAT_005d98e4;
  }
  Path::Path(local_50);
  fVar6 = (float)(param_9 / 2 + param_7);
  fVar4 = fVar6 - DAT_005d98e8 * fVar3;
                    /* try { // try from 00175701 to 00175718 has its CatchHandler @ 00175730 */
  Path::addTriangle(fVar2 - fVar3,fVar4,fVar3 + fVar2,fVar4,fVar2,DAT_005d98e8 * fVar3 + fVar6,
                    local_50);
  Graphics::fillPath(param_2,(undefined8 *)local_50);
  Path::~Path(local_50);
  return;
}


