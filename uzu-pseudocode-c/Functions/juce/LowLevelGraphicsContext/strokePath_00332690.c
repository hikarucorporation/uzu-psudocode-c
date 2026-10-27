// Function : strokePath
// Namespace: juce:LowLevelGraphicsContext
// Entry    : 00332690
// Prototype: undefined strokePath(LowLevelGraphicsContext * this, Path * param_1, float * param_2, float * param_3)
// Body     : 00332690 - 00332723


/* juce::LowLevelGraphicsContext::strokePath(juce::Path const&, juce::PathStrokeType const&,
   juce::AffineTransform const&) */

void __thiscall
juce::LowLevelGraphicsContext::strokePath
          (LowLevelGraphicsContext *this,Path *param_1,float *param_2,float *param_3)

{
  float fVar1;
  void *local_68;
  ulong uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined1 local_48;
  undefined1 local_38 [16];
  undefined8 local_28;
  
  local_58 = 0;
  uStack_50 = 0;
  local_68 = (void *)0x0;
  uStack_60 = 0;
  local_48 = 1;
                    /* try { // try from 003326bb to 003326bd has its CatchHandler @ 0033272d */
  fVar1 = (float)(**(code **)(*(long *)this + 0x28))();
  PathStrokeHelpers::createStroke
            (*param_2,fVar1,(int)param_2[1],(int)param_2[2],(Path *)&local_68,param_1,param_3);
  local_38 = ZEXT416(DAT_005d9038);
  local_28 = 0x3f800000;
                    /* try { // try from 003326f6 to 00332706 has its CatchHandler @ 00332724 */
  (**(code **)(*(long *)this + 200))(this,&local_68,local_38);
  uStack_60 = uStack_60 & 0xffffffff;
  free(local_68);
  return;
}


