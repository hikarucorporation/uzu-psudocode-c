// Function : drawRoundedRectangle
// Namespace: juce:LowLevelGraphicsContext
// Entry    : 003339c0
// Prototype: undefined drawRoundedRectangle(float param_1, undefined4 param_2, LowLevelGraphicsContext * this, undefined8 * param_4)
// Body     : 003339c0 - 00333a7e


/* juce::LowLevelGraphicsContext::drawRoundedRectangle(juce::Rectangle<float> const&, float, float)
    */

void __thiscall
juce::LowLevelGraphicsContext::drawRoundedRectangle
          (float param_1,undefined4 param_2,LowLevelGraphicsContext *this,undefined8 *param_4)

{
  undefined4 local_68;
  undefined8 local_64;
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
            ((float)*param_4,(float)((ulong)*param_4 >> 0x20),(float)param_4[1],
             (float)((ulong)param_4[1] >> 0x20),param_1,param_1,(Path *)&local_58,1,'\x01','\x01',
             '\x01');
  local_64 = 0;
  local_28 = ZEXT416(DAT_005d9038);
  local_18 = 0x3f800000;
                    /* try { // try from 00333a4f to 00333a64 has its CatchHandler @ 00333a7f */
  local_68 = param_2;
  (**(code **)(*(long *)this + 0xd8))(this,(Path *)&local_58,&local_68,local_28);
  uStack_50 = uStack_50 & 0xffffffff;
  free(local_58);
  return;
}


