// Function : fillRoundedRectangle
// Namespace: juce:LowLevelGraphicsContext
// Entry    : 00333aa0
// Prototype: undefined fillRoundedRectangle(float param_1, LowLevelGraphicsContext * this, undefined8 * param_3)
// Body     : 00333aa0 - 00333b3a


/* juce::LowLevelGraphicsContext::fillRoundedRectangle(juce::Rectangle<float> const&, float) */

void __thiscall
juce::LowLevelGraphicsContext::fillRoundedRectangle
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
  Path::addRoundedRectangle
            ((float)*param_3,(float)((ulong)*param_3 >> 0x20),(float)param_3[1],
             (float)((ulong)param_3[1] >> 0x20),param_1,param_1,(Path *)&local_58,1,'\x01','\x01',
             '\x01');
  local_28 = ZEXT416(DAT_005d9038);
  local_18 = 0x3f800000;
                    /* try { // try from 00333b11 to 00333b21 has its CatchHandler @ 00333b3b */
  (**(code **)(*(long *)this + 200))(this,&local_58,local_28);
  uStack_50 = uStack_50 & 0xffffffff;
  free(local_58);
  return;
}


