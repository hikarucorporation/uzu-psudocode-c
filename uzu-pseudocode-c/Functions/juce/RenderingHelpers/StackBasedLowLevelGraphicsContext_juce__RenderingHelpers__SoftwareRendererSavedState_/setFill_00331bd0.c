// Function : setFill
// Namespace: juce:RenderingHelpers:StackBasedLowLevelGraphicsContext_juce__RenderingHelpers__SoftwareRendererSavedState_
// Entry    : 00331bd0
// Prototype: undefined setFill(StackBasedLowLevelGraphicsContext<juce::RenderingHelpers::SoftwareRendererSavedState> * this, FillType * param_1)
// Body     : 00331bd0 - 00331bdc


/* juce::RenderingHelpers::StackBasedLowLevelGraphicsContext<juce::RenderingHelpers::SoftwareRendererSavedState>::setFill(juce::FillType
   const&) */

void __thiscall
juce::RenderingHelpers::
StackBasedLowLevelGraphicsContext<juce::RenderingHelpers::SoftwareRendererSavedState>::setFill
          (StackBasedLowLevelGraphicsContext<juce::RenderingHelpers::SoftwareRendererSavedState>
           *this,FillType *param_1)

{
  FillType::operator=((FillType *)(*(long *)(this + 8) + 0x30),param_1);
  return;
}


