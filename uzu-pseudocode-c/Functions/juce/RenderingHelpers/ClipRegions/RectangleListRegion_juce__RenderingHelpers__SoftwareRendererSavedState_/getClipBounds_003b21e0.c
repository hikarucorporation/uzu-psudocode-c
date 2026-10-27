// Function : getClipBounds
// Namespace: juce:RenderingHelpers:ClipRegions:RectangleListRegion_juce__RenderingHelpers__SoftwareRendererSavedState_
// Entry    : 003b21e0
// Prototype: undefined1[16] getClipBounds(RectangleListRegion<juce::RenderingHelpers::SoftwareRendererSavedState> * this)
// Body     : 003b21e0 - 003b22a1


/* juce::RenderingHelpers::ClipRegions::RectangleListRegion<juce::RenderingHelpers::SoftwareRendererSavedState>::getClipBounds()
   const */

undefined1  [16] __thiscall
juce::RenderingHelpers::ClipRegions::
RectangleListRegion<juce::RenderingHelpers::SoftwareRendererSavedState>::getClipBounds
          (RectangleListRegion<juce::RenderingHelpers::SoftwareRendererSavedState> *this)

{
  undefined1 (*pauVar1) [16];
  int iVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined1 auVar10 [16];
  
  uVar6 = *(uint *)(this + 0x1c);
  if ((ulong)uVar6 == 0) {
    return ZEXT816(0);
  }
  pauVar1 = *(undefined1 (**) [16])(this + 0x10);
  if (uVar6 == 1) {
    return *pauVar1;
  }
  iVar7 = *(int *)*pauVar1;
  iVar8 = *(int *)(*pauVar1 + 4);
  iVar2 = *(int *)(*pauVar1 + 8) + iVar7;
  iVar9 = *(int *)(*pauVar1 + 0xc) + iVar8;
  if (1 < (int)uVar6) {
    uVar5 = (ulong)uVar6 + 1;
    do {
      uVar6 = (int)uVar5 - 2;
      iVar3 = *(int *)pauVar1[uVar6];
      iVar4 = *(int *)(pauVar1[uVar6] + 4);
      if (iVar3 < iVar7) {
        iVar7 = iVar3;
      }
      if (iVar4 < iVar8) {
        iVar8 = iVar4;
      }
      iVar3 = iVar3 + *(int *)(pauVar1[uVar6] + 8);
      if (iVar3 <= iVar2) {
        iVar3 = iVar2;
      }
      iVar2 = iVar3;
      iVar4 = iVar4 + *(int *)(pauVar1[uVar6] + 0xc);
      if (iVar4 <= iVar9) {
        iVar4 = iVar9;
      }
      iVar9 = iVar4;
      uVar5 = uVar5 - 1;
    } while (2 < uVar5);
  }
  auVar10._12_4_ = iVar9 - iVar8;
  auVar10._8_4_ = iVar2 - iVar7;
  auVar10._4_4_ = iVar8;
  auVar10._0_4_ = iVar7;
  return auVar10;
}


