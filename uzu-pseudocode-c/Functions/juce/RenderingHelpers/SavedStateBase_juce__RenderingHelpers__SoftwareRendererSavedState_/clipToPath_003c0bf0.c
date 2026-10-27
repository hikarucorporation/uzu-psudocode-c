// Function : clipToPath
// Namespace: juce:RenderingHelpers:SavedStateBase_juce__RenderingHelpers__SoftwareRendererSavedState_
// Entry    : 003c0bf0
// Prototype: undefined clipToPath(SavedStateBase<juce::RenderingHelpers::SoftwareRendererSavedState> * this, undefined8 param_1, undefined8 * param_2)
// Body     : 003c0bf0 - 003c0d51


/* juce::RenderingHelpers::SavedStateBase<juce::RenderingHelpers::SoftwareRendererSavedState>::clipToPath(juce::Path
   const&, juce::AffineTransform const&) */

void __thiscall
juce::RenderingHelpers::SavedStateBase<juce::RenderingHelpers::SoftwareRendererSavedState>::
clipToPath(SavedStateBase<juce::RenderingHelpers::SoftwareRendererSavedState> *this,
          undefined8 param_1,undefined8 *param_2)

{
  long *plVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  SavedStateBase<juce::RenderingHelpers::SoftwareRendererSavedState> SVar6;
  long *plVar7;
  SavedStateBase<juce::RenderingHelpers::SoftwareRendererSavedState> *pSVar8;
  long *plVar9;
  undefined8 uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  long *local_38;
  float local_30;
  undefined4 local_2c;
  undefined4 local_28;
  float local_24;
  long *local_20;
  
  plVar9 = *(long **)this;
  if (plVar9 == (long *)0x0) {
    return;
  }
  if (1 < (int)plVar9[1]) {
    (**(code **)(*plVar9 + 0x10))(&local_38);
    plVar7 = *(long **)this;
    *(long **)this = local_38;
    plVar9 = local_38;
    if (plVar7 != (long *)0x0) {
      plVar1 = plVar7 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      if ((int)*plVar1 == 0) {
        local_38 = plVar7;
        (**(code **)(*plVar7 + 8))();
        plVar9 = *(long **)this;
        SVar6 = this[0x28];
        goto joined_r0x003c0c3b;
      }
    }
  }
  SVar6 = this[0x28];
joined_r0x003c0c3b:
  if (SVar6 == (SavedStateBase<juce::RenderingHelpers::SoftwareRendererSavedState>)0x0) {
    fVar2 = *(float *)(this + 8);
    fVar3 = *(float *)(this + 0xc);
    local_30 = fVar2 * *(float *)(param_2 + 1) + fVar3 * *(float *)((long)param_2 + 0x14) +
               *(float *)(this + 0x10);
    fVar4 = *(float *)(this + 0x14);
    fVar5 = *(float *)(this + 0x18);
    fVar13 = (float)*(undefined8 *)((long)param_2 + 0xc);
    fVar14 = (float)((ulong)*(undefined8 *)((long)param_2 + 0xc) >> 0x20);
    fVar11 = (float)*param_2;
    fVar12 = (float)((ulong)*param_2 >> 0x20);
    local_38 = (long *)CONCAT44(fVar2 * fVar12 + fVar3 * fVar14,fVar2 * fVar11 + fVar3 * fVar13);
    uVar10 = CONCAT44(fVar4 * fVar12 + fVar5 * fVar14,fVar4 * fVar11 + fVar5 * fVar13);
    local_24 = fVar4 * *(float *)(param_2 + 1) + *(float *)((long)param_2 + 0x14) * fVar5;
    pSVar8 = this + 0x1c;
  }
  else {
    local_24 = (float)(int)((ulong)*(undefined8 *)(this + 0x20) >> 0x20);
    local_30 = (float)(int)*(undefined8 *)(this + 0x20) + *(float *)(param_2 + 1);
    local_38 = (long *)*param_2;
    uVar10 = *(undefined8 *)((long)param_2 + 0xc);
    pSVar8 = (SavedStateBase<juce::RenderingHelpers::SoftwareRendererSavedState> *)
             ((long)param_2 + 0x14);
  }
  local_24 = local_24 + *(float *)pSVar8;
  local_28 = (undefined4)((ulong)uVar10 >> 0x20);
  local_2c = (undefined4)uVar10;
  (**(code **)(*plVar9 + 0x38))(&local_20,plVar9,param_1,&local_38);
  plVar9 = *(long **)this;
  *(long **)this = local_20;
  if (plVar9 != (long *)0x0) {
    plVar7 = plVar9 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    if ((int)*plVar7 == 0) {
      local_20 = plVar9;
      (**(code **)(*plVar9 + 8))();
    }
  }
  return;
}


