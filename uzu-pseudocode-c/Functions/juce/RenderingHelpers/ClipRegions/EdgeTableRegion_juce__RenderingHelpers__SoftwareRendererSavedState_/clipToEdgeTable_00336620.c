// Function : clipToEdgeTable
// Namespace: juce:RenderingHelpers:ClipRegions:EdgeTableRegion_juce__RenderingHelpers__SoftwareRendererSavedState_
// Entry    : 00336620
// Prototype: long * clipToEdgeTable(long * param_1, long param_2, long * param_3)
// Body     : 00336620 - 00336699


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::RenderingHelpers::ClipRegions::EdgeTableRegion<juce::RenderingHelpers::SoftwareRendererSavedState>::clipToEdgeTable(juce::EdgeTable
   const&) */

long * __cdecl
juce::RenderingHelpers::ClipRegions::
EdgeTableRegion<juce::RenderingHelpers::SoftwareRendererSavedState>::clipToEdgeTable
          (long *param_1,long param_2,long *param_3)

{
  int iVar1;
  int *piVar2;
  
  EdgeTable::clipToEdgeTable((EdgeTable *)(param_2 + 0x10),param_3);
  if (*(char *)(param_2 + 0x38) == '\0') {
    if (*(int *)(param_2 + 0x2c) != 0) {
LAB_0033667f:
      *param_1 = param_2;
      *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + 1;
      return param_1;
    }
  }
  else {
    *(undefined1 *)(param_2 + 0x38) = 0;
    if (0 < *(int *)(param_2 + 0x2c)) {
      piVar2 = *(int **)(param_2 + 0x10);
      iVar1 = *(int *)(param_2 + 0x2c) + 1;
      do {
        if (1 < *piVar2) goto LAB_0033667f;
        iVar1 = iVar1 + -1;
        piVar2 = piVar2 + *(int *)(param_2 + 0x34);
      } while (1 < iVar1);
    }
    *(undefined4 *)(param_2 + 0x2c) = 0;
  }
  *param_1 = 0;
  return param_1;
}


