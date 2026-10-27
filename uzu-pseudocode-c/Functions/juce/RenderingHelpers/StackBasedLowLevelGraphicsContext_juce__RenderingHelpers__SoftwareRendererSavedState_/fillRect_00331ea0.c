// Function : fillRect
// Namespace: juce:RenderingHelpers:StackBasedLowLevelGraphicsContext_juce__RenderingHelpers__SoftwareRendererSavedState_
// Entry    : 00331ea0
// Prototype: undefined fillRect(StackBasedLowLevelGraphicsContext<juce::RenderingHelpers::SoftwareRendererSavedState> * this, undefined8 * param_1)
// Body     : 00331ea0 - 00331eb1


/* juce::RenderingHelpers::StackBasedLowLevelGraphicsContext<juce::RenderingHelpers::SoftwareRendererSavedState>::fillRect(juce::Rectangle<float>
   const&) */

void __thiscall
juce::RenderingHelpers::
StackBasedLowLevelGraphicsContext<juce::RenderingHelpers::SoftwareRendererSavedState>::fillRect
          (StackBasedLowLevelGraphicsContext<juce::RenderingHelpers::SoftwareRendererSavedState>
           *this,undefined8 *param_1)

{
  SavedStateBase<juce::RenderingHelpers::SoftwareRendererSavedState>::fillRect
            (*param_1,*(SavedStateBase<juce::RenderingHelpers::SoftwareRendererSavedState> **)
                       (this + 8));
  return;
}


