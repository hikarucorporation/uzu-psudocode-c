// Function : beginTransparencyLayer
// Namespace: juce:RenderingHelpers:StackBasedLowLevelGraphicsContext_juce__RenderingHelpers__SoftwareRendererSavedState_
// Entry    : 003317e0
// Prototype: undefined beginTransparencyLayer(undefined4 param_1, StackBasedLowLevelGraphicsContext<juce::RenderingHelpers::SoftwareRendererSavedState> * this)
// Body     : 003317e0 - 003319ce


/* juce::RenderingHelpers::StackBasedLowLevelGraphicsContext<juce::RenderingHelpers::SoftwareRendererSavedState>::beginTransparencyLayer(float)
    */

void __thiscall
juce::RenderingHelpers::
StackBasedLowLevelGraphicsContext<juce::RenderingHelpers::SoftwareRendererSavedState>::
beginTransparencyLayer
          (undefined4 param_1,
          StackBasedLowLevelGraphicsContext<juce::RenderingHelpers::SoftwareRendererSavedState>
          *this)

{
  SavedStateStack<juce::RenderingHelpers::SoftwareRendererSavedState> *this_00;
  long *plVar1;
  long lVar2;
  default_delete<juce::RenderingHelpers::SoftwareRendererSavedState> *this_01;
  SavedStateBase<juce::RenderingHelpers::SoftwareRendererSavedState> *this_02;
  long *plVar3;
  uint uVar4;
  long *plVar5;
  int iVar6;
  undefined1 auVar7 [16];
  long *local_48;
  long *local_40;
  undefined4 local_34;
  
  this_00 = (SavedStateStack<juce::RenderingHelpers::SoftwareRendererSavedState> *)(this + 8);
  local_34 = param_1;
  SavedStateStack<juce::RenderingHelpers::SoftwareRendererSavedState>::save(this_00);
  plVar3 = *(long **)(this + 8);
  this_02 = operator_new(0x78);
                    /* try { // try from 00331814 to 0033181e has its CatchHandler @ 00331a29 */
  SavedStateBase<juce::RenderingHelpers::SoftwareRendererSavedState>::SavedStateBase(this_02,plVar3)
  ;
  lVar2 = plVar3[0xd];
  *(long *)(this_02 + 0x68) = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  lVar2 = plVar3[0xe];
  *(long *)(this_02 + 0x70) = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  if ((long *)*plVar3 == (long *)0x0) goto LAB_003319b0;
                    /* try { // try from 00331854 to 00331856 has its CatchHandler @ 00331a16 */
  auVar7 = (**(code **)(*(long *)*plVar3 + 0x60))();
  plVar3 = (long *)plVar3[0xd];
  if (plVar3 != (long *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
  }
                    /* try { // try from 0033186e to 00331876 has its CatchHandler @ 00331a01 */
  (**(code **)(*plVar3 + 0x10))(&local_48,plVar3);
                    /* try { // try from 0033187e to 00331888 has its CatchHandler @ 003319e5 */
  (**(code **)(*local_48 + 0x110))(&local_40);
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 8))();
  }
  local_48 = (long *)0x0;
  LOCK();
  plVar5 = plVar3 + 1;
  *(int *)plVar5 = (int)*plVar5 + -1;
  UNLOCK();
  if ((int)*plVar5 == 0) {
    (**(code **)(*plVar3 + 8))(plVar3);
  }
                    /* try { // try from 003318bf to 003318d2 has its CatchHandler @ 003319d3 */
  (**(code **)(*local_40 + 0x10))
            (&local_48,local_40,2,auVar7._8_8_ & 0xffffffff,auVar7._8_8_ >> 0x20,1);
  plVar3 = *(long **)(this_02 + 0x68);
  *(long **)(this_02 + 0x68) = local_48;
  local_48 = plVar3;
  if (plVar3 != (long *)0x0) {
    LOCK();
    plVar5 = plVar3 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
      (**(code **)(*plVar3 + 8))();
    }
  }
  *(undefined4 *)(this_02 + 100) = local_34;
  uVar4 = -auVar7._4_4_;
  iVar6 = (int)-auVar7._0_8_;
  if (this_02[0x28] == (SavedStateBase<juce::RenderingHelpers::SoftwareRendererSavedState>)0x0) {
    *(float *)(this_02 + 0x10) = (float)iVar6 + *(float *)(this_02 + 0x10);
    *(float *)(this_02 + 0x1c) = (float)(int)uVar4 + *(float *)(this_02 + 0x1c);
    plVar3 = *(long **)this_02;
    if ((int)plVar3[1] < 2) goto LAB_00331989;
LAB_0033192e:
                    /* try { // try from 00331931 to 00331939 has its CatchHandler @ 003319cf */
    (**(code **)(*plVar3 + 0x10))(&local_48,plVar3);
    plVar5 = local_48;
    *(long **)this_02 = local_48;
    plVar1 = plVar3 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    local_48 = plVar3;
    if ((int)*plVar1 == 0) {
      (**(code **)(*plVar3 + 8))(plVar3);
    }
  }
  else {
    *(int *)(this_02 + 0x20) = *(int *)(this_02 + 0x20) + iVar6;
    *(int *)(this_02 + 0x24) = *(int *)(this_02 + 0x24) - auVar7._4_4_;
    plVar3 = *(long **)this_02;
    if (1 < (int)plVar3[1]) goto LAB_0033192e;
LAB_00331989:
    plVar5 = plVar3;
  }
                    /* try { // try from 0033199a to 0033199f has its CatchHandler @ 003319d1 */
  (**(code **)(*plVar5 + 0x50))(plVar5,-auVar7._0_8_ & 0xffffffffU | (ulong)uVar4 << 0x20);
  if (local_40 != (long *)0x0) {
    (**(code **)(*local_40 + 8))();
  }
LAB_003319b0:
  this_01 = *(default_delete<juce::RenderingHelpers::SoftwareRendererSavedState> **)this_00;
  *(SavedStateBase<juce::RenderingHelpers::SoftwareRendererSavedState> **)this_00 = this_02;
  if (this_01 != (default_delete<juce::RenderingHelpers::SoftwareRendererSavedState> *)0x0) {
    std::default_delete<juce::RenderingHelpers::SoftwareRendererSavedState>::operator()(this_01);
  }
  return;
}


