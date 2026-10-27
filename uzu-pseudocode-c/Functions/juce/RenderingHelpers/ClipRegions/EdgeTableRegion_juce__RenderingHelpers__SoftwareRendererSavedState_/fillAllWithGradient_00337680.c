// Function : fillAllWithGradient
// Namespace: juce:RenderingHelpers:ClipRegions:EdgeTableRegion_juce__RenderingHelpers__SoftwareRendererSavedState_
// Entry    : 00337680
// Prototype: undefined fillAllWithGradient(EdgeTableRegion<juce::RenderingHelpers::SoftwareRendererSavedState> * this, SoftwareRendererSavedState * param_1, ColourGradient * param_2, float * param_3, char param_4)
// Body     : 00337680 - 0033768e


/* juce::RenderingHelpers::ClipRegions::EdgeTableRegion<juce::RenderingHelpers::SoftwareRendererSavedState>::fillAllWithGradient(juce::RenderingHelpers::SoftwareRendererSavedState&,
   juce::ColourGradient&, juce::AffineTransform const&, bool) const */

void __thiscall
juce::RenderingHelpers::ClipRegions::
EdgeTableRegion<juce::RenderingHelpers::SoftwareRendererSavedState>::fillAllWithGradient
          (EdgeTableRegion<juce::RenderingHelpers::SoftwareRendererSavedState> *this,
          SoftwareRendererSavedState *param_1,ColourGradient *param_2,float *param_3,char param_4)

{
  SoftwareRendererSavedState::fillWithGradient<juce::EdgeTable_const>
            (param_1,(undefined8 *)(this + 0x10),param_2,param_3,param_4);
  return;
}


