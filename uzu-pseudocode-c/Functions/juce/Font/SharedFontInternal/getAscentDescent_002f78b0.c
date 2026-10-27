// Function : getAscentDescent
// Namespace: juce:Font:SharedFontInternal
// Entry    : 002f78b0
// Prototype: undefined8 getAscentDescent(SharedFontInternal * this, long * param_2, undefined8 param_3, undefined8 param_4, uint * param_5, ulong param_6)
// Body     : 002f78b0 - 002f7970


/* juce::Font::SharedFontInternal::getAscentDescent(juce::Font const&) */

undefined8 __thiscall
juce::Font::SharedFontInternal::getAscentDescent
          (SharedFontInternal *this,long *param_2,undefined8 param_3,undefined8 param_4,
          uint *param_5,ulong param_6)

{
  long *plVar1;
  long lVar2;
  undefined8 *puVar3;
  uint uVar4;
  uint uVar5;
  float fVar6;
  float fVar7;
  undefined8 uVar8;
  uint uVar9;
  uint uVar10;
  undefined8 local_58;
  long *local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  
  pthread_mutex_lock((pthread_mutex_t *)(this + 0x80));
                    /* try { // try from 002f78d0 to 002f78df has its CatchHandler @ 002f7986 */
  getTypefacePtr((SharedFontInternal *)&local_40,(long)this,param_2,param_4,param_5,param_6);
  if (local_40 == (long *)0x0) {
    local_58 = 0;
    goto LAB_002f7959;
  }
                    /* try { // try from 002f78ed to 002f78f2 has its CatchHandler @ 002f7971 */
  lVar2 = (**(code **)(*local_40 + 0x18))(local_40);
  if (*(int *)(*param_2 + 0x60) == 1) {
    puVar3 = (undefined8 *)(lVar2 + 0x10);
LAB_002f7919:
    uVar8 = *puVar3;
  }
  else {
    uVar8 = 0;
    if (*(int *)(*param_2 + 0x60) == 0) {
      puVar3 = (undefined8 *)(lVar2 + 8);
      goto LAB_002f7919;
    }
  }
  fVar6 = (float)*(undefined8 *)(this + 0x74);
  fVar7 = (float)((ulong)*(undefined8 *)(this + 0x74) >> 0x20);
  uVar4 = -(uint)(fVar6 < 0.0);
  uVar5 = -(uint)(fVar7 < 0.0);
  uVar9 = ~uVar4 & (uint)fVar6;
  uVar10 = ~uVar5 & (uint)fVar7;
  LOCK();
  plVar1 = local_40 + 1;
  *(int *)plVar1 = (int)*plVar1 + -1;
  UNLOCK();
  if ((int)*plVar1 == 0) {
    local_38 = CONCAT44(uVar10,uVar9);
    uStack_30 = 0;
    (**(code **)(*local_40 + 8))(local_40);
    uVar9 = (uint)local_38;
    uVar10 = local_38._4_4_;
  }
  local_58 = CONCAT44((uint)((ulong)uVar8 >> 0x20) & uVar5 | uVar10,(uint)uVar8 & uVar4 | uVar9);
LAB_002f7959:
  pthread_mutex_unlock((pthread_mutex_t *)(this + 0x80));
  return local_58;
}


