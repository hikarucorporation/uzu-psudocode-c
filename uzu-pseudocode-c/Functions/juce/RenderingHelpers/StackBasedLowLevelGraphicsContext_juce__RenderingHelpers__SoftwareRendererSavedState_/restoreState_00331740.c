// Function : restoreState
// Namespace: juce:RenderingHelpers:StackBasedLowLevelGraphicsContext_juce__RenderingHelpers__SoftwareRendererSavedState_
// Entry    : 00331740
// Prototype: undefined restoreState(long param_1)
// Body     : 00331740 - 003317d6


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::RenderingHelpers::StackBasedLowLevelGraphicsContext<juce::RenderingHelpers::SoftwareRendererSavedState>::restoreState()
    */

void __cdecl
juce::RenderingHelpers::
StackBasedLowLevelGraphicsContext<juce::RenderingHelpers::SoftwareRendererSavedState>::restoreState
          (long param_1)

{
  uint uVar1;
  long lVar2;
  default_delete<juce::RenderingHelpers::SoftwareRendererSavedState> *this;
  int iVar3;
  void *pvVar4;
  
  iVar3 = *(int *)(param_1 + 0x1c);
  if ((0 < iVar3) &&
     (lVar2 = *(long *)(*(long *)(param_1 + 0x10) + (ulong)(iVar3 - 1) * 8), lVar2 != 0)) {
    this = *(default_delete<juce::RenderingHelpers::SoftwareRendererSavedState> **)(param_1 + 8);
    *(long *)(param_1 + 8) = lVar2;
    if (this != (default_delete<juce::RenderingHelpers::SoftwareRendererSavedState> *)0x0) {
      std::default_delete<juce::RenderingHelpers::SoftwareRendererSavedState>::operator()(this);
      iVar3 = *(int *)(param_1 + 0x1c);
    }
    if (iVar3 < 2) {
      *(undefined4 *)(param_1 + 0x1c) = 0;
      if (*(int *)(param_1 + 0x18) != 0) {
        free(*(void **)(param_1 + 0x10));
        *(undefined8 *)(param_1 + 0x10) = 0;
      }
      *(undefined4 *)(param_1 + 0x18) = 0;
      return;
    }
    uVar1 = iVar3 - 1;
    *(uint *)(param_1 + 0x1c) = uVar1;
    if ((iVar3 * 2 + -2 < *(int *)(param_1 + 0x18)) && (iVar3 <= *(int *)(param_1 + 0x18))) {
      pvVar4 = realloc(*(void **)(param_1 + 0x10),(ulong)uVar1 << 3);
      *(void **)(param_1 + 0x10) = pvVar4;
      *(uint *)(param_1 + 0x18) = uVar1;
    }
  }
  return;
}


