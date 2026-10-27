// Function : fillRectWithColour
// Namespace: juce:RenderingHelpers:ClipRegions:EdgeTableRegion_juce__RenderingHelpers__SoftwareRendererSavedState_
// Entry    : 00337380
// Prototype: undefined fillRectWithColour(undefined8 param_1_00, undefined8 param_2, long param_3, long param_4, undefined4 param_5)
// Body     : 00337380 - 0033746b


/* WARNING: Unknown calling convention: __cdecl */
/* juce::RenderingHelpers::ClipRegions::EdgeTableRegion<juce::RenderingHelpers::SoftwareRendererSavedState>::fillRectWithColour(juce::RenderingHelpers::SoftwareRendererSavedState&,
   juce::Rectangle<float>, juce::PixelARGB) const */

void __cdecl
juce::RenderingHelpers::ClipRegions::
EdgeTableRegion<juce::RenderingHelpers::SoftwareRendererSavedState>::fillRectWithColour
          (undefined8 param_1_00,undefined8 param_2,long param_3,long param_4,undefined4 param_5)

{
  undefined4 in_XMM0_Dc;
  undefined4 in_XMM0_Dd;
  undefined8 uVar1;
  float fVar2;
  float fVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  float fVar6;
  float fVar7;
  void *local_50 [6];
  
  fVar6 = (float)(int)*(undefined8 *)(param_3 + 0x20);
  fVar7 = (float)(int)((ulong)*(undefined8 *)(param_3 + 0x20) >> 0x20);
  fVar2 = (float)param_2 + (float)param_1_00;
  fVar3 = (float)((ulong)param_2 >> 0x20) + (float)((ulong)param_1_00 >> 0x20);
  auVar4._8_4_ = in_XMM0_Dc;
  auVar4._0_8_ = param_1_00;
  auVar4._12_4_ = in_XMM0_Dd;
  auVar5._4_4_ = fVar7;
  auVar5._0_4_ = fVar6;
  auVar5._8_8_ = 0;
  auVar5 = maxps(auVar4,auVar5);
  fVar6 = (float)*(int *)(param_3 + 0x28) + fVar6;
  if (fVar6 <= fVar2) {
    fVar2 = fVar6;
  }
  fVar2 = fVar2 - auVar5._0_4_;
  uVar1 = 0;
  if (0.0 <= fVar2) {
    fVar7 = fVar7 + (float)*(int *)(param_3 + 0x2c);
    if (fVar7 <= fVar3) {
      fVar3 = fVar7;
    }
    fVar3 = fVar3 - auVar5._4_4_;
    fVar6 = 0.0;
    fVar7 = 0.0;
    if (0.0 <= fVar3) {
      uVar1 = CONCAT44(fVar3,fVar2);
      fVar6 = auVar5._0_4_;
      fVar7 = auVar5._4_4_;
    }
  }
  else {
    fVar6 = 0.0;
    fVar7 = 0.0;
  }
  if ((0.0 < (float)uVar1) && (0.0 < (float)((ulong)uVar1 >> 0x20))) {
    EdgeTable::EdgeTable(CONCAT44(fVar7,fVar6),uVar1,(EdgeTable *)local_50);
    EdgeTable::clipToEdgeTable((EdgeTable *)local_50,(long *)(param_3 + 0x10));
                    /* try { // try from 0033744a to 00337456 has its CatchHandler @ 0033746c */
    SoftwareRendererSavedState::fillWithSolidColour<juce::EdgeTable>
              (*(SoftwareRendererSavedState **)(param_4 + 0x68),(EdgeTable *)local_50,param_5,'\0');
    free(local_50[0]);
  }
  return;
}


