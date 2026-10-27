// Function : fillTargetRect
// Namespace: juce:RenderingHelpers:SavedStateBase_juce__RenderingHelpers__SoftwareRendererSavedState_
// Entry    : 003b1530
// Prototype: undefined fillTargetRect(undefined8 param_1, undefined8 param_2, SavedStateBase<juce::RenderingHelpers::SoftwareRendererSavedState> * param_3)
// Body     : 003b1530 - 003b16f4


/* WARNING: Unknown calling convention: __cdecl */
/* juce::RenderingHelpers::SavedStateBase<juce::RenderingHelpers::SoftwareRendererSavedState>::fillTargetRect(juce::Rectangle<float>)
    */

void __cdecl
juce::RenderingHelpers::SavedStateBase<juce::RenderingHelpers::SoftwareRendererSavedState>::
fillTargetRect(undefined8 param_1,undefined8 param_2,
              SavedStateBase<juce::RenderingHelpers::SoftwareRendererSavedState> *param_3)

{
  uint uVar1;
  char cVar2;
  uint uVar3;
  long *plVar4;
  uint uVar5;
  uint uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined1 auVar13 [16];
  long *local_50;
  undefined8 local_48;
  undefined4 uStack_40;
  float fStack_3c;
  undefined8 local_38;
  float fStack_30;
  float fStack_2c;
  undefined8 local_28;
  
  plVar4 = *(long **)param_3;
  if ((*(long *)(param_3 + 0x38) == 0) && (*(long *)(param_3 + 0x40) == 0)) {
    uVar1 = *(uint *)(param_3 + 0x30);
    uVar5 = uVar1 >> 8;
    uVar6 = uVar1 >> 0x10;
    uVar3 = uVar1 >> 0x18;
    cVar2 = (char)(uVar1 >> 0x18);
    if (cVar2 == -1) {
      uVar3 = uVar1;
    }
    else if (cVar2 == '\0') {
      uVar6 = 0;
      uVar5 = 0;
      uVar3 = 0;
    }
    else {
      uVar5 = (uVar5 & 0xff) * uVar3 + 0x7f >> 8;
      uVar6 = (uVar6 & 0xff) * uVar3 + 0x7f >> 8;
      uVar3 = (uVar1 & 0xff) * uVar3 + 0x7f >> 8;
    }
                    /* WARNING: Could not recover jumptable at 0x003b16e5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar4 + 0x70))
              (plVar4,param_3,
               uVar3 & 0xff | (uVar5 & 0xff) << 8 | (uVar6 & 0xff) << 0x10 | uVar1 & 0xff000000);
    return;
  }
  local_48 = param_1;
  local_38 = param_2;
  local_28 = param_1;
  auVar13 = (**(code **)(*plVar4 + 0x60))();
  fVar7 = (float)auVar13._0_4_;
  fVar12 = (float)local_48;
  if ((float)local_48 <= fVar7) {
    fVar12 = fVar7;
  }
  fVar7 = (float)auVar13._8_4_ + fVar7;
  fVar11 = local_38._4_4_ + local_28._4_4_;
  fVar8 = (float)local_38 + (float)local_28;
  if (fVar7 <= (float)local_38 + (float)local_28) {
    fVar8 = fVar7;
  }
  local_38._0_4_ = 0.0;
  local_38._4_4_ = 0.0;
  fStack_30 = 0.0;
  if (0.0 <= fVar8 - fVar12) {
    fVar9 = (float)auVar13._4_4_;
    fVar7 = local_28._4_4_;
    if (local_28._4_4_ <= fVar9) {
      fVar7 = fVar9;
    }
    fVar9 = (float)auVar13._12_4_ + fVar9;
    fVar10 = fVar11;
    if (fVar9 <= fVar11) {
      fVar10 = fVar9;
    }
    local_48._0_4_ = 0.0;
    fVar9 = 0.0;
    uStack_40 = 0;
    fStack_3c = 0.0;
    if (0.0 <= fVar10 - fVar7) {
      local_48._0_4_ = fVar12;
      fVar9 = fVar7;
      uStack_40 = local_48._4_4_;
      fStack_3c = local_28._4_4_;
      local_38._0_4_ = fVar8 - fVar12;
      local_38._4_4_ = fVar10 - fVar7;
      fStack_30 = fVar11;
    }
  }
  else {
    local_48._0_4_ = 0.0;
    fVar9 = 0.0;
    uStack_40 = 0;
    fStack_3c = 0.0;
  }
  if ((0.0 < (float)local_38) && (0.0 < local_38._4_4_)) {
    local_48._4_4_ = fVar9;
    fStack_2c = fStack_30;
    plVar4 = operator_new(0x40);
    *(undefined4 *)(plVar4 + 1) = 0;
    *plVar4 = (long)&PTR__EdgeTableRegion_00711be0;
    EdgeTable::EdgeTable
              (CONCAT44(local_48._4_4_,(float)local_48),CONCAT44(local_38._4_4_,(float)local_38),
               (EdgeTable *)(plVar4 + 2));
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
                    /* try { // try from 003b166b to 003b1677 has its CatchHandler @ 003b16f5 */
    local_50 = plVar4;
    fillShape(param_3,(long *)&local_50);
    if (local_50 != (long *)0x0) {
      plVar4 = local_50 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      if ((int)*plVar4 == 0) {
        (**(code **)(*local_50 + 8))();
        return;
      }
    }
  }
  return;
}


