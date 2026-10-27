// Function : clipToPath
// Namespace: juce:RenderingHelpers:StackBasedLowLevelGraphicsContext_juce__RenderingHelpers__SoftwareRendererSavedState_
// Entry    : 00330f50
// Prototype: undefined clipToPath(StackBasedLowLevelGraphicsContext<juce::RenderingHelpers::SoftwareRendererSavedState> * this, undefined8 param_1, undefined8 * param_2)
// Body     : 00330f50 - 00330f58


/* juce::RenderingHelpers::StackBasedLowLevelGraphicsContext<juce::RenderingHelpers::SoftwareRendererSavedState>::clipToPath(juce::Path
   const&, juce::AffineTransform const&) */

void __thiscall
juce::RenderingHelpers::
StackBasedLowLevelGraphicsContext<juce::RenderingHelpers::SoftwareRendererSavedState>::clipToPath
          (StackBasedLowLevelGraphicsContext<juce::RenderingHelpers::SoftwareRendererSavedState>
           *this,undefined8 param_1,undefined8 *param_2)

{
  SavedStateBase<juce::RenderingHelpers::SoftwareRendererSavedState>::clipToPath
            (*(SavedStateBase<juce::RenderingHelpers::SoftwareRendererSavedState> **)(this + 8),
             param_1,param_2);
  return;
}


