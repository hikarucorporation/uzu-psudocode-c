// Function : fillRectWithColour
// Namespace: juce:RenderingHelpers:ClipRegions:EdgeTableRegion_juce__RenderingHelpers__SoftwareRendererSavedState_
// Entry    : 00337100
// Prototype: undefined fillRectWithColour(long param_1, long param_2, undefined8 param_3, undefined8 param_4, undefined4 param_5, char param_6)
// Body     : 00337100 - 00337369


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::RenderingHelpers::ClipRegions::EdgeTableRegion<juce::RenderingHelpers::SoftwareRendererSavedState>::fillRectWithColour(juce::RenderingHelpers::SoftwareRendererSavedState&,
   juce::Rectangle<int>, juce::PixelARGB, bool) const */

void __cdecl
juce::RenderingHelpers::ClipRegions::
EdgeTableRegion<juce::RenderingHelpers::SoftwareRendererSavedState>::fillRectWithColour
          (long param_1,long param_2,undefined8 param_3,undefined8 param_4,undefined4 param_5,
          char param_6)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  long lVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  undefined4 *local_60;
  long local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined1 local_38;
  
  iVar6 = *(int *)(param_1 + 0x20);
  iVar4 = (int)param_3;
  iVar9 = iVar6;
  if (iVar6 < iVar4) {
    iVar9 = iVar4;
  }
  uVar10 = *(uint *)(param_1 + 0x24);
  uVar5 = (uint)((ulong)param_3 >> 0x20);
  uVar1 = uVar10;
  if ((int)uVar10 < (int)uVar5) {
    uVar1 = uVar5;
  }
  iVar6 = iVar6 + *(int *)(param_1 + 0x28);
  iVar4 = (int)param_4 + iVar4;
  if (iVar4 < iVar6) {
    iVar6 = iVar4;
  }
  iVar4 = iVar6 - iVar9;
  if (-1 < iVar4) {
    iVar2 = uVar10 + *(int *)(param_1 + 0x2c);
    iVar8 = (int)((ulong)param_4 >> 0x20) + uVar5;
    if (iVar2 <= iVar8) {
      iVar8 = iVar2;
    }
    uVar10 = iVar8 - uVar1;
    if (((-1 < (int)uVar10) && (0 < iVar4)) && (uVar10 != 0)) {
      local_48 = CONCAT44(uVar10,iVar4);
      local_50 = CONCAT44(uVar1,iVar9);
      local_40 = 0x4100000020;
      local_38 = 1;
      lVar7 = (ulong)uVar10 * 0x4100000000 + 0x8200000000;
      local_60 = malloc(lVar7 >> 0x1e);
      *local_60 = 0;
      iVar9 = iVar9 << 8;
      iVar6 = iVar6 << 8;
      uVar5 = uVar10 & 3;
      puVar3 = local_60;
      if (uVar5 != 0) {
        uVar10 = uVar5;
        do {
          *puVar3 = 2;
          puVar3[1] = iVar9;
          puVar3[2] = 0xff;
          puVar3[3] = iVar6;
          puVar3[4] = 0;
          puVar3 = puVar3 + 0x41;
          uVar10 = uVar10 - 1;
        } while (uVar10 != 0);
        uVar10 = iVar8 - (uVar1 + uVar5);
      }
      if (2 < ~uVar1 + iVar8) {
        uVar10 = uVar10 - 1;
        do {
          *puVar3 = 2;
          puVar3[1] = iVar9;
          puVar3[2] = 0xff;
          puVar3[3] = iVar6;
          puVar3[4] = 0;
          puVar3[0x41] = 2;
          puVar3[0x42] = iVar9;
          puVar3[0x43] = 0xff;
          puVar3[0x44] = iVar6;
          puVar3[0x45] = 0;
          puVar3[0x82] = 2;
          puVar3[0x83] = iVar9;
          puVar3[0x84] = 0xff;
          puVar3[0x85] = iVar6;
          puVar3[0x86] = 0;
          puVar3[0xc3] = 2;
          puVar3[0xc4] = iVar9;
          puVar3[0xc5] = 0xff;
          puVar3[0xc6] = iVar6;
          puVar3[199] = 0;
          uVar10 = uVar10 - 4;
          puVar3 = puVar3 + 0x104;
        } while (uVar10 < 0xfffffffe);
      }
      local_58 = lVar7 >> 0x20;
      EdgeTable::clipToEdgeTable((EdgeTable *)&local_60,(long *)(param_1 + 0x10));
                    /* try { // try from 00337341 to 00337350 has its CatchHandler @ 0033736a */
      SoftwareRendererSavedState::fillWithSolidColour<juce::EdgeTable>
                (*(SoftwareRendererSavedState **)(param_2 + 0x68),(EdgeTable *)&local_60,param_5,
                 param_6);
      free(local_60);
    }
  }
  return;
}


