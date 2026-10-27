// Function : ~RectangleListRegion
// Namespace: juce:RenderingHelpers:ClipRegions:RectangleListRegion_juce__RenderingHelpers__SoftwareRendererSavedState_
// Entry    : 003b1930
// Prototype: undefined ~RectangleListRegion(RectangleListRegion<juce::RenderingHelpers::SoftwareRendererSavedState> * this)
// Body     : 003b1930 - 003b1956


/* juce::RenderingHelpers::ClipRegions::RectangleListRegion<juce::RenderingHelpers::SoftwareRendererSavedState>::~RectangleListRegion()
    */

void __thiscall
juce::RenderingHelpers::ClipRegions::
RectangleListRegion<juce::RenderingHelpers::SoftwareRendererSavedState>::~RectangleListRegion
          (RectangleListRegion<juce::RenderingHelpers::SoftwareRendererSavedState> *this)

{
  *(undefined ***)this = &PTR__RectangleListRegion_00711b08;
  *(undefined4 *)(this + 0x1c) = 0;
  free(*(void **)(this + 0x10));
  operator_delete(this);
  return;
}


