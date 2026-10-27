// Function : fillEllipse
// Namespace: juce:LowLevelGraphicsContext
// Entry    : 00333d20
// Prototype: undefined fillEllipse(LowLevelGraphicsContext * this, undefined8 * param_1)
// Body     : 00333d20 - 00333d91


/* juce::LowLevelGraphicsContext::fillEllipse(juce::Rectangle<float> const&) */

void __thiscall
juce::LowLevelGraphicsContext::fillEllipse(LowLevelGraphicsContext *this,undefined8 *param_1)

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
  Path::addEllipse(*param_1,param_1[1],(Path *)&local_58);
  local_28 = ZEXT416(DAT_005d9038);
  local_18 = 0x3f800000;
                    /* try { // try from 00333d68 to 00333d78 has its CatchHandler @ 00333d92 */
  (**(code **)(*(long *)this + 200))(this,&local_58,local_28);
  uStack_50 = uStack_50 & 0xffffffff;
  free(local_58);
  return;
}


