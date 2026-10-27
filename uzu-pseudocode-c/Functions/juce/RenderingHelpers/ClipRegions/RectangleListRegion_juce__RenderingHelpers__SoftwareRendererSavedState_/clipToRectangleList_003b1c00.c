// Function : clipToRectangleList
// Namespace: juce:RenderingHelpers:ClipRegions:RectangleListRegion_juce__RenderingHelpers__SoftwareRendererSavedState_
// Entry    : 003b1c00
// Prototype: undefined clipToRectangleList(long * param_1, long param_2, undefined8 * param_3)
// Body     : 003b1c00 - 003b1da4


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::RenderingHelpers::ClipRegions::RectangleListRegion<juce::RenderingHelpers::SoftwareRendererSavedState>::clipToRectangleList(juce::RectangleList<int>
   const&) */

void __cdecl
juce::RenderingHelpers::ClipRegions::
RectangleListRegion<juce::RenderingHelpers::SoftwareRendererSavedState>::clipToRectangleList
          (long *param_1,long param_2,undefined8 *param_3)

{
  int iVar1;
  int iVar2;
  void *__ptr;
  void *__ptr_00;
  uint uVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  int *piVar10;
  int iVar11;
  int *piVar12;
  int iVar13;
  
  if ((long)*(int *)(param_2 + 0x1c) != 0) {
    piVar9 = *(int **)(param_2 + 0x10);
    piVar4 = piVar9 + (long)*(int *)(param_2 + 0x1c) * 4;
    iVar8 = 0;
    uVar3 = 0;
    __ptr_00 = (void *)0x0;
    do {
      if ((long)*(int *)((long)param_3 + 0xc) != 0) {
        piVar12 = (int *)*param_3;
        piVar10 = piVar12 + (long)*(int *)((long)param_3 + 0xc) * 4;
        iVar13 = iVar8;
        do {
          while( true ) {
            iVar8 = *piVar12;
            iVar1 = *piVar9;
            iVar11 = iVar8;
            if (iVar8 < iVar1) {
              iVar11 = iVar1;
            }
            iVar5 = iVar1 + piVar9[2];
            if (iVar8 + piVar12[2] <= iVar1 + piVar9[2]) {
              iVar5 = iVar8 + piVar12[2];
            }
            if (iVar5 - iVar11 != 0 && iVar11 <= iVar5) break;
LAB_003b1c90:
            piVar12 = piVar12 + 4;
            iVar8 = iVar13;
            if (piVar12 == piVar10) goto LAB_003b1c50;
          }
          iVar8 = piVar12[1];
          iVar1 = piVar9[1];
          iVar2 = iVar8;
          if (iVar8 < iVar1) {
            iVar2 = iVar1;
          }
          iVar7 = iVar1 + piVar9[3];
          if (iVar8 + piVar12[3] <= iVar1 + piVar9[3]) {
            iVar7 = iVar8 + piVar12[3];
          }
          if (iVar7 - iVar2 < 1) goto LAB_003b1c90;
          iVar8 = iVar13 + 1;
          if ((iVar13 < (int)uVar3) ||
             (uVar6 = iVar13 + iVar8 / 2 + 9U & 0xfffffff8, uVar3 == uVar6)) {
          }
          else {
            __ptr_00 = realloc(__ptr_00,(ulong)uVar6 << 4);
            uVar3 = uVar6;
          }
          *(ulong *)((long)__ptr_00 + (long)iVar13 * 0x10) = CONCAT44(iVar2,iVar11);
          *(ulong *)((long)__ptr_00 + (long)iVar13 * 0x10 + 8) =
               CONCAT44(iVar7 - iVar2,iVar5 - iVar11);
          piVar12 = piVar12 + 4;
          iVar13 = iVar8;
        } while (piVar12 != piVar10);
      }
LAB_003b1c50:
      piVar9 = piVar9 + 4;
    } while (piVar9 != piVar4);
    __ptr = *(void **)(param_2 + 0x10);
    *(void **)(param_2 + 0x10) = __ptr_00;
    *(uint *)(param_2 + 0x18) = uVar3;
    *(int *)(param_2 + 0x1c) = iVar8;
    free(__ptr);
    if (*(int *)(param_2 + 0x1c) != 0) {
      *param_1 = param_2;
      *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + 1;
      return;
    }
  }
  *param_1 = 0;
  return;
}


