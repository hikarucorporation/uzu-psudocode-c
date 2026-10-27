// Function : translate
// Namespace: juce:RenderingHelpers:ClipRegions:RectangleListRegion_juce__RenderingHelpers__SoftwareRendererSavedState_
// Entry    : 003b20d0
// Prototype: undefined translate(RectangleListRegion<juce::RenderingHelpers::SoftwareRendererSavedState> * this, undefined8 param_1)
// Body     : 003b20d0 - 003b20fe


/* juce::RenderingHelpers::ClipRegions::RectangleListRegion<juce::RenderingHelpers::SoftwareRendererSavedState>::translate(juce::Point<int>)
    */

void __thiscall
juce::RenderingHelpers::ClipRegions::
RectangleListRegion<juce::RenderingHelpers::SoftwareRendererSavedState>::translate
          (RectangleListRegion<juce::RenderingHelpers::SoftwareRendererSavedState> *this,
          undefined8 param_1)

{
  int *piVar1;
  int *piVar2;
  
  if ((long)*(int *)(this + 0x1c) != 0) {
    piVar2 = *(int **)(this + 0x10);
    piVar1 = piVar2 + (long)*(int *)(this + 0x1c) * 4;
    do {
      *piVar2 = *piVar2 + (int)param_1;
      piVar2[1] = piVar2[1] + (int)((ulong)param_1 >> 0x20);
      piVar2 = piVar2 + 4;
    } while (piVar2 != piVar1);
  }
  return;
}


