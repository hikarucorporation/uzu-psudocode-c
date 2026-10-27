// Function : clipToImageAlpha
// Namespace: juce:RenderingHelpers:ClipRegions:RectangleListRegion_juce__RenderingHelpers__SoftwareRendererSavedState_
// Entry    : 003b2030
// Prototype: undefined8 clipToImageAlpha(undefined8 param_1, long param_2, undefined8 param_3, undefined8 param_4, undefined4 param_5)
// Body     : 003b2030 - 003b20b1


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::RenderingHelpers::ClipRegions::RectangleListRegion<juce::RenderingHelpers::SoftwareRendererSavedState>::clipToImageAlpha(juce::Image
   const&, juce::AffineTransform const&, juce::Graphics::ResamplingQuality) */

undefined8 __cdecl
juce::RenderingHelpers::ClipRegions::
RectangleListRegion<juce::RenderingHelpers::SoftwareRendererSavedState>::clipToImageAlpha
          (undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,undefined4 param_5)

{
  long *plVar1;
  long *plVar2;
  
  plVar2 = operator_new(0x40);
  *(undefined4 *)(plVar2 + 1) = 0;
  *plVar2 = (long)&PTR__EdgeTableRegion_00711be0;
  EdgeTable::EdgeTable((EdgeTable *)(plVar2 + 2),(undefined8 *)(param_2 + 0x10));
  *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
                    /* try { // try from 003b207f to 003b2090 has its CatchHandler @ 003b20b2 */
  (**(code **)(*plVar2 + 0x48))(param_1,plVar2,param_3,param_4,param_5);
  plVar1 = plVar2 + 1;
  *(int *)plVar1 = (int)*plVar1 + -1;
  if ((int)*plVar1 == 0) {
    (**(code **)(*plVar2 + 8))(plVar2);
  }
  return param_1;
}


