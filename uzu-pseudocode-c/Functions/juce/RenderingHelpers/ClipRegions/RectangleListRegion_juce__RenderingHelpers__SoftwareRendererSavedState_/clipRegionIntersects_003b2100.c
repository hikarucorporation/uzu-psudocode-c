// Function : clipRegionIntersects
// Namespace: juce:RenderingHelpers:ClipRegions:RectangleListRegion_juce__RenderingHelpers__SoftwareRendererSavedState_
// Entry    : 003b2100
// Prototype: undefined8 clipRegionIntersects(long param_1, undefined8 param_2, undefined8 param_3)
// Body     : 003b2100 - 003b21da


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::RenderingHelpers::ClipRegions::RectangleListRegion<juce::RenderingHelpers::SoftwareRendererSavedState>::clipRegionIntersects(juce::Rectangle<int>)
   const */

undefined8 __cdecl
juce::RenderingHelpers::ClipRegions::
RectangleListRegion<juce::RenderingHelpers::SoftwareRendererSavedState>::clipRegionIntersects
          (long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  undefined8 *__ptr;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined8 *puVar7;
  int iVar8;
  undefined8 uVar9;
  
  __ptr = (undefined8 *)0x0;
  uVar9 = 0;
  iVar8 = (int)param_3;
  if ((0 < iVar8) && (0xffffffff < param_3)) {
    __ptr = malloc(0x80);
    *__ptr = param_2;
    __ptr[1] = param_3;
    if ((long)*(int *)(param_1 + 0x1c) != 0) {
      puVar2 = *(undefined8 **)(param_1 + 0x10);
      puVar7 = puVar2 + (long)*(int *)(param_1 + 0x1c) * 2;
      do {
        iVar4 = (int)puVar2[1];
        if (((((0 < iVar4) && (iVar6 = (int)((ulong)puVar2[1] >> 0x20), 0 < iVar6)) &&
             (iVar5 = (int)*puVar2, iVar5 < iVar8 + (int)param_2)) &&
            ((iVar1 = (int)((ulong)param_2 >> 0x20), iVar3 = (int)((ulong)*puVar2 >> 0x20),
             iVar3 < iVar1 + (int)((ulong)param_3 >> 0x20) && ((int)param_2 < iVar4 + iVar5)))) &&
           ((iVar1 < iVar6 + iVar3 && ((0 < iVar8 && (0xffffffff < param_3)))))) {
          uVar9 = 1;
          goto LAB_003b21c4;
        }
        puVar2 = puVar2 + 2;
      } while (puVar2 != puVar7);
    }
    uVar9 = 0;
  }
LAB_003b21c4:
  free(__ptr);
  return uVar9;
}


