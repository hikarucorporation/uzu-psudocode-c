// Function : getMenuBarItemWidth
// Namespace: juce:LookAndFeel_V2
// Entry    : 00202980
// Prototype: int getMenuBarItemWidth(undefined8 param_1_00, float param_2, LookAndFeel_V2 * this, long param_4, ulong param_5, uint * param_6, undefined8 param_7, ulong param_8)
// Body     : 00202980 - 002029f6


/* non-virtual thunk to juce::LookAndFeel_V2::getMenuBarItemWidth(juce::MenuBarComponent&, int,
   juce::String const&) */

int __thiscall
juce::LookAndFeel_V2::getMenuBarItemWidth
          (undefined8 param_1_00,float param_2,LookAndFeel_V2 *this,long param_4,ulong param_5,
          uint *param_6,undefined8 param_7,ulong param_8)

{
  long *plVar1;
  int iVar2;
  ulong uVar3;
  undefined8 extraout_RDX;
  uint *puVar4;
  float fVar5;
  long *local_30;
  float local_28;
  
  uVar3 = param_5 & 0xffffffff;
  puVar4 = param_6;
  (**(code **)(*(long *)(this + -0x40) + 0x228))(&local_30,this + -0x40,param_4);
                    /* try { // try from 002029b0 to 002029b7 has its CatchHandler @ 002029f7 */
  GlyphArrangement::getStringBounds(&local_30,*(byte **)param_6,extraout_RDX,uVar3,puVar4,param_8);
  iVar2 = *(int *)(param_4 + 0x44);
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
  fVar5 = ceilf(param_2);
  return iVar2 + (int)fVar5;
}


