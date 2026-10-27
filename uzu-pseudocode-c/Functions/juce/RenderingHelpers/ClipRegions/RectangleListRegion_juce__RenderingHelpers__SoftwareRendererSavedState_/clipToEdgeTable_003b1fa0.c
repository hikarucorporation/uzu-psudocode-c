// Function : clipToEdgeTable
// Namespace: juce:RenderingHelpers:ClipRegions:RectangleListRegion_juce__RenderingHelpers__SoftwareRendererSavedState_
// Entry    : 003b1fa0
// Prototype: undefined8 clipToEdgeTable(undefined8 param_1, long param_2, undefined8 param_3)
// Body     : 003b1fa0 - 003b200f


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::RenderingHelpers::ClipRegions::RectangleListRegion<juce::RenderingHelpers::SoftwareRendererSavedState>::clipToEdgeTable(juce::EdgeTable
   const&) */

undefined8 __cdecl
juce::RenderingHelpers::ClipRegions::
RectangleListRegion<juce::RenderingHelpers::SoftwareRendererSavedState>::clipToEdgeTable
          (undefined8 param_1,long param_2,undefined8 param_3)

{
  long *plVar1;
  long *plVar2;
  
  plVar2 = operator_new(0x40);
  *(undefined4 *)(plVar2 + 1) = 0;
  *plVar2 = (long)&PTR__EdgeTableRegion_00711be0;
  EdgeTable::EdgeTable((EdgeTable *)(plVar2 + 2),(undefined8 *)(param_2 + 0x10));
  *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
                    /* try { // try from 003b1fe6 to 003b1ff1 has its CatchHandler @ 003b2010 */
  (**(code **)(*plVar2 + 0x40))(param_1,plVar2,param_3);
  plVar1 = plVar2 + 1;
  *(int *)plVar1 = (int)*plVar1 + -1;
  if ((int)*plVar1 == 0) {
    (**(code **)(*plVar2 + 8))(plVar2);
  }
  return param_1;
}


