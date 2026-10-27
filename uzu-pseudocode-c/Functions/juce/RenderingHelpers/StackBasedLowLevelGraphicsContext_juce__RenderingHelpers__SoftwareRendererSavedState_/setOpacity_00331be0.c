// Function : setOpacity
// Namespace: juce:RenderingHelpers:StackBasedLowLevelGraphicsContext_juce__RenderingHelpers__SoftwareRendererSavedState_
// Entry    : 00331be0
// Prototype: undefined setOpacity(float param_1, StackBasedLowLevelGraphicsContext<juce::RenderingHelpers::SoftwareRendererSavedState> * this)
// Body     : 00331be0 - 00331c26


/* juce::RenderingHelpers::StackBasedLowLevelGraphicsContext<juce::RenderingHelpers::SoftwareRendererSavedState>::setOpacity(float)
    */

void __thiscall
juce::RenderingHelpers::
StackBasedLowLevelGraphicsContext<juce::RenderingHelpers::SoftwareRendererSavedState>::setOpacity
          (float param_1,
          StackBasedLowLevelGraphicsContext<juce::RenderingHelpers::SoftwareRendererSavedState>
          *this)

{
  uint uVar1;
  
  uVar1 = 0;
  if ((0.0 < param_1) && (uVar1 = 0xff000000, param_1 < DAT_005d9038)) {
    uVar1 = SUB84((double)(param_1 * DAT_005de3b0) + DAT_005d9098,0) << 0x18;
  }
  *(uint *)(*(long *)(this + 8) + 0x30) = *(uint *)(*(long *)(this + 8) + 0x30) & 0xffffff | uVar1;
  return;
}


