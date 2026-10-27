// Function : clipRegionIntersects
// Namespace: juce:RenderingHelpers:ClipRegions:EdgeTableRegion_juce__RenderingHelpers__SoftwareRendererSavedState_
// Entry    : 00337090
// Prototype: bool clipRegionIntersects(long param_1, undefined8 param_2, undefined8 param_3)
// Body     : 00337090 - 003370ea


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::RenderingHelpers::ClipRegions::EdgeTableRegion<juce::RenderingHelpers::SoftwareRendererSavedState>::clipRegionIntersects(juce::Rectangle<int>)
   const */

bool __cdecl
juce::RenderingHelpers::ClipRegions::
EdgeTableRegion<juce::RenderingHelpers::SoftwareRendererSavedState>::clipRegionIntersects
          (long param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = (int)((ulong)param_3 >> 0x20);
  if (*(int *)(param_1 + 0x28) + *(int *)(param_1 + 0x20) <= (int)param_2) {
    return false;
  }
  bVar1 = false;
  iVar2 = (int)((ulong)param_2 >> 0x20);
  if ((((iVar2 < *(int *)(param_1 + 0x2c) + *(int *)(param_1 + 0x24)) &&
       (*(int *)(param_1 + 0x20) < (int)param_2 + (int)param_3)) &&
      (*(int *)(param_1 + 0x24) < iVar2 + iVar3)) && (0 < *(int *)(param_1 + 0x28))) {
    bVar1 = (0 < iVar3 && 0 < (int)param_3) && 0 < *(int *)(param_1 + 0x2c);
  }
  return bVar1;
}


