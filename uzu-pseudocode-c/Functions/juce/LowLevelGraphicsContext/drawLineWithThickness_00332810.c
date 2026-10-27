// Function : drawLineWithThickness
// Namespace: juce:LowLevelGraphicsContext
// Entry    : 00332810
// Prototype: undefined drawLineWithThickness(float param_1, LowLevelGraphicsContext * this, undefined8 * param_3)
// Body     : 00332810 - 00332884


/* juce::LowLevelGraphicsContext::drawLineWithThickness(juce::Line<float> const&, float) */

void __thiscall
juce::LowLevelGraphicsContext::drawLineWithThickness
          (float param_1,LowLevelGraphicsContext *this,undefined8 *param_3)

{
  void *local_58;
  ulong uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined1 local_38;
  undefined1 local_28 [16];
  undefined8 local_18;
  
  local_48 = 0;
  uStack_40 = 0;
  local_58 = (void *)0x0;
  uStack_50 = 0;
  local_38 = 1;
  Path::addLineSegment(*param_3,param_3[1],param_1,(Path *)&local_58);
  local_28 = ZEXT416(DAT_005d9038);
  local_18 = 0x3f800000;
                    /* try { // try from 0033285b to 0033286b has its CatchHandler @ 00332885 */
  (**(code **)(*(long *)this + 200))(this,&local_58,local_28);
  uStack_50 = uStack_50 & 0xffffffff;
  free(local_58);
  return;
}


