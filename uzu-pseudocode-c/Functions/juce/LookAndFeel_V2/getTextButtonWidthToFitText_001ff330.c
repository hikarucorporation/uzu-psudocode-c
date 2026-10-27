// Function : getTextButtonWidthToFitText
// Namespace: juce:LookAndFeel_V2
// Entry    : 001ff330
// Prototype: int getTextButtonWidthToFitText(undefined8 param_1_00, float param_2_00, LookAndFeel_V2 * this, long param_4, uint param_5, undefined8 param_6, uint * param_7, ulong param_8)
// Body     : 001ff330 - 001ff3a1


/* non-virtual thunk to juce::LookAndFeel_V2::getTextButtonWidthToFitText(juce::TextButton&, int) */

int __thiscall
juce::LookAndFeel_V2::getTextButtonWidthToFitText
          (undefined8 param_1_00,float param_2_00,LookAndFeel_V2 *this,long param_4,uint param_5,
          undefined8 param_6,uint *param_7,ulong param_8)

{
  long *plVar1;
  ulong uVar2;
  undefined8 extraout_RDX;
  float fVar3;
  long *local_30;
  float local_28;
  
  uVar2 = (ulong)param_5;
  (**(code **)(*(long *)(this + -8) + 0xa0))(&local_30,this + -8,param_4);
                    /* try { // try from 001ff361 to 001ff368 has its CatchHandler @ 001ff3a2 */
  GlyphArrangement::getStringBounds
            (&local_30,*(byte **)(param_4 + 0x158),extraout_RDX,uVar2,param_7,param_8);
  if (local_30 != (long *)0x0) {
    LOCK();
    plVar1 = local_30 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      local_28 = param_2_00;
      (**(code **)(*local_30 + 8))();
      param_2_00 = local_28;
    }
  }
  fVar3 = ceilf(param_2_00);
  return (int)fVar3 + param_5;
}


