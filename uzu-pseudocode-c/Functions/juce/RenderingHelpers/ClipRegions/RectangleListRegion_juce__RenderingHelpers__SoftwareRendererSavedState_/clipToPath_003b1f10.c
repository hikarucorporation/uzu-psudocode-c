// Function : clipToPath
// Namespace: juce:RenderingHelpers:ClipRegions:RectangleListRegion_juce__RenderingHelpers__SoftwareRendererSavedState_
// Entry    : 003b1f10
// Prototype: undefined8 clipToPath(undefined8 param_1, long param_2, undefined8 param_3, undefined8 param_4)
// Body     : 003b1f10 - 003b1f84


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::RenderingHelpers::ClipRegions::RectangleListRegion<juce::RenderingHelpers::SoftwareRendererSavedState>::clipToPath(juce::Path
   const&, juce::AffineTransform const&) */

undefined8 __cdecl
juce::RenderingHelpers::ClipRegions::
RectangleListRegion<juce::RenderingHelpers::SoftwareRendererSavedState>::clipToPath
          (undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  long *plVar2;
  
  plVar2 = operator_new(0x40);
  *(undefined4 *)(plVar2 + 1) = 0;
  *plVar2 = (long)&PTR__EdgeTableRegion_00711be0;
  EdgeTable::EdgeTable((EdgeTable *)(plVar2 + 2),(undefined8 *)(param_2 + 0x10));
  *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
                    /* try { // try from 003b1f5a to 003b1f68 has its CatchHandler @ 003b1f85 */
  (**(code **)(*plVar2 + 0x38))(param_1,plVar2,param_3,param_4);
  plVar1 = plVar2 + 1;
  *(int *)plVar1 = (int)*plVar1 + -1;
  if ((int)*plVar1 == 0) {
    (**(code **)(*plVar2 + 8))(plVar2);
  }
  return param_1;
}


