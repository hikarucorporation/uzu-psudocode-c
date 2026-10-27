// Function : getTextButtonWidthToFitText
// Namespace: juce:LookAndFeel_V2
// Entry    : 001eb6f0
// Prototype: int getTextButtonWidthToFitText(undefined8 param_1_00, float param_2, long * param_3, long param_4, uint param_5, undefined8 param_6, uint * param_7, ulong param_8)
// Body     : 001eb6f0 - 001eb75f


/* WARNING: Unknown calling convention: __cdecl */
/* juce::LookAndFeel_V2::getTextButtonWidthToFitText(juce::TextButton&, int) */

int __cdecl
juce::LookAndFeel_V2::getTextButtonWidthToFitText
          (undefined8 param_1_00,float param_2,long *param_3,long param_4,uint param_5,
          undefined8 param_6,uint *param_7,ulong param_8)

{
  long *plVar1;
  ulong uVar2;
  undefined8 extraout_RDX;
  float fVar3;
  long *local_30;
  float local_28;
  
  uVar2 = (ulong)param_5;
  (**(code **)(*param_3 + 0xa0))(&local_30,param_3,param_4);
                    /* try { // try from 001eb71f to 001eb726 has its CatchHandler @ 001eb760 */
  GlyphArrangement::getStringBounds
            (&local_30,*(byte **)(param_4 + 0x158),extraout_RDX,uVar2,param_7,param_8);
  if (local_30 != (long *)0x0) {
    LOCK();
    plVar1 = local_30 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      local_28 = param_2;
      (**(code **)(*local_30 + 8))();
      param_2 = local_28;
    }
  }
  fVar3 = ceilf(param_2);
  return (int)fVar3 + param_5;
}


