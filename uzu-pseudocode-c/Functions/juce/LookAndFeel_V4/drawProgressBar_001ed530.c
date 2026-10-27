// Function : drawProgressBar
// Namespace: juce:LookAndFeel_V4
// Entry    : 001ed530
// Prototype: undefined drawProgressBar(double param_1, undefined8 param_2_00, undefined8 param_3, undefined8 param_4, undefined8 param_5_00, Graphics * param_6, ProgressBar * param_7, undefined8 param_8, uint * param_9, ulong * param_10)
// Body     : 001ed530 - 001ed5ae


/* juce::LookAndFeel_V4::drawProgressBar(juce::Graphics&, juce::ProgressBar&, int, int, double,
   juce::String const&) */

void __thiscall
juce::LookAndFeel_V4::drawProgressBar
          (double param_1,undefined8 param_2_00,undefined8 param_3,undefined8 param_4,
          undefined8 param_5_00,Graphics *param_6,ProgressBar *param_7,undefined8 param_8,
          uint *param_9,ulong *param_10)

{
  ulong uVar1;
  undefined8 uVar2;
  uint *puVar3;
  ulong *puVar4;
  
  uVar2 = param_8;
  puVar3 = param_9;
  puVar4 = param_10;
  uVar1 = ProgressBar::getResolvedStyle(param_7);
  if ((int)uVar1 == 1) {
    drawCircularProgressBar(param_6,(Component *)param_7,param_10,uVar2,puVar3,puVar4);
    return;
  }
  if ((int)uVar1 == 0) {
    drawLinearProgressBar
              (param_1,param_2_00,param_3,param_4,param_6,(Component *)param_7,(int)param_8,
               (uint)param_9,param_10,puVar4);
    return;
  }
  return;
}


