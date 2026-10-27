// Function : translate
// Namespace: juce:RenderingHelpers:ClipRegions:EdgeTableRegion_juce__RenderingHelpers__SoftwareRendererSavedState_
// Entry    : 00336ff0
// Prototype: undefined translate(EdgeTableRegion<juce::RenderingHelpers::SoftwareRendererSavedState> * this, undefined8 param_1)
// Body     : 00336ff0 - 00337089


/* juce::RenderingHelpers::ClipRegions::EdgeTableRegion<juce::RenderingHelpers::SoftwareRendererSavedState>::translate(juce::Point<int>)
    */

void __thiscall
juce::RenderingHelpers::ClipRegions::
EdgeTableRegion<juce::RenderingHelpers::SoftwareRendererSavedState>::translate
          (EdgeTableRegion<juce::RenderingHelpers::SoftwareRendererSavedState> *this,
          undefined8 param_1)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  uint *puVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint *puVar9;
  
  *(int *)(this + 0x20) = *(int *)(this + 0x20) + (int)(float)(int)param_1;
  *(int *)(this + 0x24) = *(int *)(this + 0x24) + (int)((ulong)param_1 >> 0x20);
  if (0 < *(int *)(this + 0x2c)) {
    iVar5 = (int)((float)(int)param_1 * DAT_005de53c);
    puVar9 = *(uint **)(this + 0x10);
    iVar8 = *(int *)(this + 0x2c);
    do {
      iVar2 = *(int *)(this + 0x34);
      uVar7 = *puVar9;
      if (0 < (int)uVar7) {
        puVar4 = puVar9 + 1;
        uVar1 = uVar7 - 1;
        uVar6 = uVar7 & 3;
        if (uVar6 != 0) {
          uVar7 = uVar7 & 0xfffffffc;
          do {
            *puVar4 = *puVar4 + iVar5;
            puVar4 = puVar4 + 2;
            uVar6 = uVar6 - 1;
          } while (uVar6 != 0);
        }
        if (2 < uVar1) {
          uVar7 = uVar7 - 1;
          do {
            *puVar4 = *puVar4 + iVar5;
            puVar4[2] = puVar4[2] + iVar5;
            puVar4[4] = puVar4[4] + iVar5;
            puVar4[6] = puVar4[6] + iVar5;
            uVar7 = uVar7 - 4;
            puVar4 = puVar4 + 8;
          } while (uVar7 < 0xfffffffe);
        }
      }
      puVar9 = puVar9 + iVar2;
      bVar3 = 1 < iVar8;
      iVar8 = iVar8 + -1;
    } while (bVar3);
  }
  return;
}


