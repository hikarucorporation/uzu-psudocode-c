// Function : drawImage
// Namespace: juce:RenderingHelpers:StackBasedLowLevelGraphicsContext_juce__RenderingHelpers__SoftwareRendererSavedState_
// Entry    : 00332750
// Prototype: undefined drawImage(StackBasedLowLevelGraphicsContext<juce::RenderingHelpers::SoftwareRendererSavedState> * this, long * param_1, undefined8 * param_2)
// Body     : 00332750 - 00332767


/* juce::RenderingHelpers::StackBasedLowLevelGraphicsContext<juce::RenderingHelpers::SoftwareRendererSavedState>::drawImage(juce::Image
   const&, juce::AffineTransform const&) */

void __thiscall
juce::RenderingHelpers::
StackBasedLowLevelGraphicsContext<juce::RenderingHelpers::SoftwareRendererSavedState>::drawImage
          (StackBasedLowLevelGraphicsContext<juce::RenderingHelpers::SoftwareRendererSavedState>
           *this,long *param_1,undefined8 *param_2)

{
  SavedStateBase<juce::RenderingHelpers::SoftwareRendererSavedState> *this_00;
  
  this_00 = *(SavedStateBase<juce::RenderingHelpers::SoftwareRendererSavedState> **)(this + 8);
  if ((*(long *)this_00 == 0) ||
     (this_00[0x33] == (SavedStateBase<juce::RenderingHelpers::SoftwareRendererSavedState>)0x0)) {
    return;
  }
  SavedStateBase<juce::RenderingHelpers::SoftwareRendererSavedState>::renderImage
            (this_00,param_1,param_2,(long *)0x0);
  return;
}


