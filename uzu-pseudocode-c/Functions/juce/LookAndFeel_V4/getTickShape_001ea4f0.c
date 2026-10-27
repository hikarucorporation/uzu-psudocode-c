// Function : getTickShape
// Namespace: juce:LookAndFeel_V4
// Entry    : 001ea4f0
// Prototype: LookAndFeel_V4 * getTickShape(undefined8 param_1, LookAndFeel_V4 * this)
// Body     : 001ea4f0 - 001ea665


/* juce::LookAndFeel_V4::getTickShape(float) */

LookAndFeel_V4 * __thiscall
juce::LookAndFeel_V4::getTickShape(undefined8 param_1,LookAndFeel_V4 *this)

{
  undefined1 auVar2 [16];
  undefined1 auVar1 [16];
  undefined1 auVar3 [16];
  float fVar4;
  float fVar5;
  float fVar6;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  undefined8 local_28;
  
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  this[0x20] = (LookAndFeel_V4)0x1;
  local_28 = param_1;
                    /* try { // try from 001ea50d to 001ea51d has its CatchHandler @ 001ea666 */
  Path::loadPathFromData((Path *)this,getTickShape(float)::pathData,0x4d);
  fVar4 = (float)local_28 + (float)local_28;
  local_40 = DAT_005d9038;
  local_30 = DAT_005d9038;
  if ((0.0 < fVar4) && (local_3c = 0.0, 0.0 < (float)local_28)) {
    fVar5 = *(float *)(this + 0x14) - *(float *)(this + 0x10);
    if (0.0 < fVar5) {
      fVar6 = *(float *)(this + 0x1c) - *(float *)(this + 0x18);
      local_38 = 0.0;
      local_34 = 0.0;
      local_2c = 0.0;
      if (0.0 < fVar6) {
        auVar2._4_8_ = 0;
        auVar2._0_4_ = fVar6;
        auVar2._12_4_ = local_28._4_4_;
        auVar1._8_8_ = auVar2._8_8_;
        auVar1._4_4_ = (float)local_28;
        auVar1._0_4_ = fVar6;
        auVar3._4_4_ = fVar4;
        auVar3._0_4_ = fVar5;
        auVar3._8_4_ = 0;
        auVar3._12_4_ = local_28._4_4_;
        auVar3 = divps(auVar1,auVar3);
        local_30 = auVar3._0_4_;
        if (local_30 <= auVar3._4_4_) {
          local_30 = local_30 * fVar4;
          local_40 = fVar4;
        }
        else {
          local_40 = (float)local_28 / local_30;
          local_30 = (float)local_28;
        }
        local_40 = local_40 / fVar5;
        local_30 = local_30 / fVar6;
        local_3c = local_40 * 0.0;
        local_38 = (fVar5 * DAT_005d98c8 - *(float *)(this + 0x10)) * local_40 +
                   fVar4 * DAT_005d9044 + 0.0;
        local_34 = local_30 * 0.0;
        local_2c = (DAT_005d98c8 * fVar6 - *(float *)(this + 0x18)) * local_30 +
                   (float)local_28 * DAT_005d9044 + 0.0;
      }
      goto LAB_001ea62a;
    }
  }
  local_38 = 0.0;
  local_3c = 0.0;
  local_34 = 0.0;
  local_2c = 0.0;
LAB_001ea62a:
  Path::applyTransform((Path *)this,&local_40);
  return this;
}


