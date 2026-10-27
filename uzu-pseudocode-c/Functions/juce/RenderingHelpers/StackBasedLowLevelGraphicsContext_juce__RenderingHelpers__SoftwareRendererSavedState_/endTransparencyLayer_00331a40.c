// Function : endTransparencyLayer
// Namespace: juce:RenderingHelpers:StackBasedLowLevelGraphicsContext_juce__RenderingHelpers__SoftwareRendererSavedState_
// Entry    : 00331a40
// Prototype: undefined endTransparencyLayer(long param_1)
// Body     : 00331a40 - 00331b83


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::RenderingHelpers::StackBasedLowLevelGraphicsContext<juce::RenderingHelpers::SoftwareRendererSavedState>::endTransparencyLayer()
    */

void __cdecl
juce::RenderingHelpers::
StackBasedLowLevelGraphicsContext<juce::RenderingHelpers::SoftwareRendererSavedState>::
endTransparencyLayer(long param_1)

{
  uint uVar1;
  int iVar2;
  default_delete<juce::RenderingHelpers::SoftwareRendererSavedState> *this;
  long lVar3;
  undefined8 *puVar4;
  long *plVar5;
  void *pvVar6;
  undefined8 uVar7;
  long *local_38;
  undefined8 local_30;
  float local_28;
  undefined8 local_24;
  float local_1c;
  
  this = *(default_delete<juce::RenderingHelpers::SoftwareRendererSavedState> **)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = 0;
  iVar2 = *(int *)(param_1 + 0x1c);
  if (0 < iVar2) {
    uVar1 = iVar2 - 1;
    pvVar6 = *(void **)(param_1 + 0x10);
    lVar3 = *(long *)((long)pvVar6 + (ulong)uVar1 * 8);
    if (lVar3 != 0) {
      *(long *)(param_1 + 8) = lVar3;
      if (iVar2 < 2) {
        *(undefined4 *)(param_1 + 0x1c) = 0;
        if (*(int *)(param_1 + 0x18) != 0) {
          free(pvVar6);
          *(undefined8 *)(param_1 + 0x10) = 0;
        }
        *(undefined4 *)(param_1 + 0x18) = 0;
        puVar4 = *(undefined8 **)(param_1 + 8);
        plVar5 = (long *)*puVar4;
        goto joined_r0x00331aaf;
      }
      *(uint *)(param_1 + 0x1c) = uVar1;
      if (((int)(uVar1 * 2) < *(int *)(param_1 + 0x18)) && (iVar2 <= *(int *)(param_1 + 0x18))) {
        pvVar6 = realloc(pvVar6,(ulong)uVar1 * 8);
        *(void **)(param_1 + 0x10) = pvVar6;
        *(uint *)(param_1 + 0x18) = uVar1;
      }
    }
  }
  puVar4 = *(undefined8 **)(param_1 + 8);
  plVar5 = (long *)*puVar4;
joined_r0x00331aaf:
  if (plVar5 != (long *)0x0) {
                    /* try { // try from 00331ab8 to 00331aca has its CatchHandler @ 00331bac */
    uVar7 = (**(code **)(*plVar5 + 0x60))();
    (**(code **)(*(long *)puVar4[0xd] + 0x10))(&local_38);
                    /* try { // try from 00331ad8 to 00331add has its CatchHandler @ 00331b86 */
    (**(code **)(*local_38 + 0x98))(*(undefined4 *)(this + 100));
    local_28 = (float)(int)uVar7;
    local_1c = (float)(int)((ulong)uVar7 >> 0x20);
    local_30 = 0x3f800000;
    local_24 = 0x3f80000000000000;
                    /* try { // try from 00331b20 to 00331b2a has its CatchHandler @ 00331b84 */
    (**(code **)(*local_38 + 0xe0))(local_38,this + 0x68,&local_30);
    if (local_38 != (long *)0x0) {
      (**(code **)(*local_38 + 8))();
    }
  }
  if (this != (default_delete<juce::RenderingHelpers::SoftwareRendererSavedState> *)0x0) {
    std::default_delete<juce::RenderingHelpers::SoftwareRendererSavedState>::operator()(this);
  }
  return;
}


