// Function : saveState
// Namespace: juce:RenderingHelpers:StackBasedLowLevelGraphicsContext_juce__RenderingHelpers__SoftwareRendererSavedState_
// Entry    : 00331730
// Prototype: undefined saveState(StackBasedLowLevelGraphicsContext<juce::RenderingHelpers::SoftwareRendererSavedState> * this)
// Body     : 00331730 - 00331738


/* juce::RenderingHelpers::StackBasedLowLevelGraphicsContext<juce::RenderingHelpers::SoftwareRendererSavedState>::saveState()
    */

void __thiscall
juce::RenderingHelpers::
StackBasedLowLevelGraphicsContext<juce::RenderingHelpers::SoftwareRendererSavedState>::saveState
          (StackBasedLowLevelGraphicsContext<juce::RenderingHelpers::SoftwareRendererSavedState>
           *this)

{
  SavedStateStack<juce::RenderingHelpers::SoftwareRendererSavedState>::save
            ((SavedStateStack<juce::RenderingHelpers::SoftwareRendererSavedState> *)(this + 8));
  return;
}


