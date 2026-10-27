// Function : fillTargetRect
// Namespace: juce:RenderingHelpers:SavedStateBase_juce__RenderingHelpers__SoftwareRendererSavedState_
// Entry    : 003b1720
// Prototype: undefined fillTargetRect(SavedStateBase<juce::RenderingHelpers::SoftwareRendererSavedState> * param_1, undefined8 param_2, undefined8 param_3, undefined1 param_4)
// Body     : 003b1720 - 003b18d0


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::RenderingHelpers::SavedStateBase<juce::RenderingHelpers::SoftwareRendererSavedState>::fillTargetRect(juce::Rectangle<int>,
   bool) */

void __cdecl
juce::RenderingHelpers::SavedStateBase<juce::RenderingHelpers::SoftwareRendererSavedState>::
fillTargetRect(SavedStateBase<juce::RenderingHelpers::SoftwareRendererSavedState> *param_1,
              undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  uint uVar1;
  undefined8 uVar2;
  int iVar3;
  char cVar4;
  uint uVar5;
  long *plVar6;
  undefined8 *puVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  undefined1 auVar14 [16];
  long *local_30;
  
  plVar6 = *(long **)param_1;
  if ((*(long *)(param_1 + 0x38) == 0) && (*(long *)(param_1 + 0x40) == 0)) {
    uVar1 = *(uint *)(param_1 + 0x30);
    uVar9 = uVar1 >> 8;
    uVar12 = uVar1 >> 0x10;
    uVar5 = uVar1 >> 0x18;
    cVar4 = (char)(uVar1 >> 0x18);
    if (cVar4 == -1) {
      uVar5 = uVar1;
    }
    else if (cVar4 == '\0') {
      uVar12 = 0;
      uVar9 = 0;
      uVar5 = 0;
    }
    else {
      uVar9 = (uVar9 & 0xff) * uVar5 + 0x7f >> 8;
      uVar12 = (uVar12 & 0xff) * uVar5 + 0x7f >> 8;
      uVar5 = (uVar1 & 0xff) * uVar5 + 0x7f >> 8;
    }
                    /* WARNING: Could not recover jumptable at 0x003b18cf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar6 + 0x68))
              (plVar6,param_1,param_2,param_3,
               uVar5 & 0xff | (uVar9 & 0xff) << 8 | (uVar12 & 0xff) << 0x10 | uVar1 & 0xff000000,
               param_4);
    return;
  }
  auVar14 = (**(code **)(*plVar6 + 0x60))();
  iVar8 = auVar14._8_4_ + auVar14._0_4_;
  uVar2 = auVar14._0_8_;
  if (auVar14._0_4_ < (int)param_2) {
    uVar2 = param_2;
  }
  iVar10 = auVar14._4_4_;
  iVar13 = (int)((ulong)param_2 >> 0x20);
  iVar3 = iVar10;
  if (iVar10 < iVar13) {
    iVar3 = iVar13;
  }
  iVar11 = (int)param_2 + (int)param_3;
  if (iVar11 < iVar8) {
    iVar8 = iVar11;
  }
  iVar8 = iVar8 - (int)uVar2;
  if (-1 < iVar8) {
    iVar10 = auVar14._12_4_ + iVar10;
    iVar13 = (int)((ulong)param_3 >> 0x20) + iVar13;
    if (iVar10 <= iVar13) {
      iVar13 = iVar10;
    }
    iVar13 = iVar13 - iVar3;
    if (((-1 < iVar13) && (0 < iVar8)) && (iVar13 != 0)) {
      plVar6 = operator_new(0x20);
      *plVar6 = (long)&PTR__RectangleListRegion_00711b08;
      puVar7 = malloc(0x80);
      plVar6[2] = (long)puVar7;
      plVar6[3] = (long)&DAT_100000008;
      *puVar7 = CONCAT44(iVar3,(int)uVar2);
      puVar7[1] = CONCAT44(iVar13,iVar8);
      *(undefined4 *)(plVar6 + 1) = 1;
                    /* try { // try from 003b1831 to 003b183d has its CatchHandler @ 003b18d1 */
      local_30 = plVar6;
      fillShape(param_1,(long *)&local_30);
      if (local_30 != (long *)0x0) {
        plVar6 = local_30 + 1;
        *(int *)plVar6 = (int)*plVar6 + -1;
        if ((int)*plVar6 == 0) {
          (**(code **)(*local_30 + 8))();
        }
      }
    }
  }
  return;
}


