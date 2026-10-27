// Function : clipToPath
// Namespace: juce:RenderingHelpers:ClipRegions:EdgeTableRegion_juce__RenderingHelpers__SoftwareRendererSavedState_
// Entry    : 00336570
// Prototype: long * clipToPath(long * param_1, long param_2, undefined8 * param_3, float * param_4)
// Body     : 00336570 - 00336617


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::RenderingHelpers::ClipRegions::EdgeTableRegion<juce::RenderingHelpers::SoftwareRendererSavedState>::clipToPath(juce::Path
   const&, juce::AffineTransform const&) */

long * __cdecl
juce::RenderingHelpers::ClipRegions::
EdgeTableRegion<juce::RenderingHelpers::SoftwareRendererSavedState>::clipToPath
          (long *param_1,long param_2,undefined8 *param_3,float *param_4)

{
  int iVar1;
  int *piVar2;
  void *local_50 [6];
  
  EdgeTable::EdgeTable
            ((EdgeTable *)local_50,*(undefined8 *)(param_2 + 0x20),*(undefined8 *)(param_2 + 0x28),
             param_3,param_4);
  EdgeTable::clipToEdgeTable((EdgeTable *)(param_2 + 0x10),(long *)local_50);
  if (*(char *)(param_2 + 0x38) == '\0') {
    if (*(int *)(param_2 + 0x2c) != 0) {
LAB_003365ef:
      *param_1 = param_2;
      *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + 1;
      goto LAB_003365ff;
    }
  }
  else {
    *(undefined1 *)(param_2 + 0x38) = 0;
    if (0 < *(int *)(param_2 + 0x2c)) {
      piVar2 = *(int **)(param_2 + 0x10);
      iVar1 = *(int *)(param_2 + 0x2c) + 1;
      do {
        if (1 < *piVar2) goto LAB_003365ef;
        iVar1 = iVar1 + -1;
        piVar2 = piVar2 + *(int *)(param_2 + 0x34);
      } while (1 < iVar1);
    }
    *(undefined4 *)(param_2 + 0x2c) = 0;
  }
  *param_1 = 0;
LAB_003365ff:
  free(local_50[0]);
  return param_1;
}


