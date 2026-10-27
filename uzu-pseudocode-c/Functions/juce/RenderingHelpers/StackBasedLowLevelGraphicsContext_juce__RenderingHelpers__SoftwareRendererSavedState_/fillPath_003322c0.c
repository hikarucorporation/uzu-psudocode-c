// Function : fillPath
// Namespace: juce:RenderingHelpers:StackBasedLowLevelGraphicsContext_juce__RenderingHelpers__SoftwareRendererSavedState_
// Entry    : 003322c0
// Prototype: undefined fillPath(StackBasedLowLevelGraphicsContext<juce::RenderingHelpers::SoftwareRendererSavedState> * this, undefined8 * param_1, undefined8 * param_2)
// Body     : 003322c0 - 003322c8


/* juce::RenderingHelpers::StackBasedLowLevelGraphicsContext<juce::RenderingHelpers::SoftwareRendererSavedState>::fillPath(juce::Path
   const&, juce::AffineTransform const&) */

void __thiscall
juce::RenderingHelpers::
StackBasedLowLevelGraphicsContext<juce::RenderingHelpers::SoftwareRendererSavedState>::fillPath
          (StackBasedLowLevelGraphicsContext<juce::RenderingHelpers::SoftwareRendererSavedState>
           *this,undefined8 *param_1,undefined8 *param_2)

{
  SavedStateBase<juce::RenderingHelpers::SoftwareRendererSavedState>::fillPath
            (*(SavedStateBase<juce::RenderingHelpers::SoftwareRendererSavedState> **)(this + 8),
             param_1,param_2);
  return;
}


