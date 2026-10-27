// Function : excludeClipRectangle
// Namespace: juce:RenderingHelpers:ClipRegions:EdgeTableRegion_juce__RenderingHelpers__SoftwareRendererSavedState_
// Entry    : 00336410
// Prototype: long * excludeClipRectangle(long * param_1, long param_2, undefined8 param_3, undefined8 param_4)
// Body     : 00336410 - 00336563


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::RenderingHelpers::ClipRegions::EdgeTableRegion<juce::RenderingHelpers::SoftwareRendererSavedState>::excludeClipRectangle(juce::Rectangle<int>)
    */

long * __cdecl
juce::RenderingHelpers::ClipRegions::
EdgeTableRegion<juce::RenderingHelpers::SoftwareRendererSavedState>::excludeClipRectangle
          (long *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int local_58 [4];
  undefined4 local_48;
  int local_44;
  undefined8 local_40;
  undefined4 local_38;
  
  local_58[3] = (int)param_3;
  iVar3 = (int)*(undefined8 *)(param_2 + 0x20);
  local_44 = (int)param_4 + local_58[3];
  if (local_58[3] < iVar3) {
    local_58[3] = iVar3;
  }
  iVar1 = (int)((ulong)param_3 >> 0x20);
  iVar5 = (int)((ulong)*(undefined8 *)(param_2 + 0x20) >> 0x20);
  iVar4 = iVar1;
  if (iVar1 < iVar5) {
    iVar4 = iVar5;
  }
  iVar3 = (int)*(undefined8 *)(param_2 + 0x28) + iVar3;
  if (iVar3 < local_44) {
    local_44 = iVar3;
  }
  if (-1 < local_44 - local_58[3]) {
    iVar1 = (int)((ulong)param_4 >> 0x20) + iVar1;
    iVar3 = (int)((ulong)*(undefined8 *)(param_2 + 0x28) >> 0x20) + iVar5;
    if (iVar1 <= iVar3) {
      iVar3 = iVar1;
    }
    iVar1 = iVar3 - iVar4;
    if (((-1 < iVar1) && (local_44 != local_58[3])) && (iVar1 != 0)) {
      iVar4 = iVar4 - iVar5;
      local_58[0] = 4;
      local_58[1] = -0x80000000;
      local_58[2] = 0xff;
      local_58[3] = local_58[3] << 8;
      local_48 = 0;
      local_44 = local_44 << 8;
      local_40 = 0x7fffffff000000ff;
      local_38 = 0;
      if (iVar4 < iVar3 - iVar5) {
        do {
          EdgeTable::intersectWithEdgeTableLine((EdgeTable *)(param_2 + 0x10),iVar4,local_58);
          iVar4 = iVar4 + 1;
          iVar1 = iVar1 + -1;
        } while (iVar1 != 0);
      }
      *(undefined1 *)(param_2 + 0x38) = 1;
    }
  }
  if (*(char *)(param_2 + 0x38) == '\0') {
    if (*(int *)(param_2 + 0x2c) != 0) {
LAB_00336541:
      *param_1 = param_2;
      *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + 1;
      return param_1;
    }
  }
  else {
    *(undefined1 *)(param_2 + 0x38) = 0;
    if (0 < *(int *)(param_2 + 0x2c)) {
      piVar2 = *(int **)(param_2 + 0x10);
      iVar3 = *(int *)(param_2 + 0x2c) + 1;
      do {
        if (1 < *piVar2) goto LAB_00336541;
        iVar3 = iVar3 + -1;
        piVar2 = piVar2 + *(int *)(param_2 + 0x34);
      } while (1 < iVar3);
    }
    *(undefined4 *)(param_2 + 0x2c) = 0;
  }
  *param_1 = 0;
  return param_1;
}


