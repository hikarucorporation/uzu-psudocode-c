// Function : clipToImageAlpha
// Namespace: juce:RenderingHelpers:StackBasedLowLevelGraphicsContext_juce__RenderingHelpers__SoftwareRendererSavedState_
// Entry    : 00330f60
// Prototype: undefined clipToImageAlpha(StackBasedLowLevelGraphicsContext<juce::RenderingHelpers::SoftwareRendererSavedState> * this, long * param_1, undefined8 * param_2)
// Body     : 00330f60 - 00331124


/* juce::RenderingHelpers::StackBasedLowLevelGraphicsContext<juce::RenderingHelpers::SoftwareRendererSavedState>::clipToImageAlpha(juce::Image
   const&, juce::AffineTransform const&) */

void __thiscall
juce::RenderingHelpers::
StackBasedLowLevelGraphicsContext<juce::RenderingHelpers::SoftwareRendererSavedState>::
clipToImageAlpha(StackBasedLowLevelGraphicsContext<juce::RenderingHelpers::SoftwareRendererSavedState>
                 *this,long *param_1,undefined8 *param_2)

{
  long *plVar1;
  float fVar2;
  SavedStateBase<juce::RenderingHelpers::SoftwareRendererSavedState> SVar3;
  SavedStateBase<juce::RenderingHelpers::SoftwareRendererSavedState> *this_00;
  long lVar4;
  long *plVar5;
  long *plVar6;
  SavedStateBase<juce::RenderingHelpers::SoftwareRendererSavedState> *pSVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined1 local_28;
  long *local_20;
  
  this_00 = *(SavedStateBase<juce::RenderingHelpers::SoftwareRendererSavedState> **)(this + 8);
  plVar6 = *(long **)this_00;
  if (plVar6 == (long *)0x0) {
    return;
  }
  lVar4 = *param_1;
  if ((lVar4 != 0) && (*(int *)(lVar4 + 0xc) == 1)) {
    local_38 = 0;
    uStack_30 = 0;
    local_48 = (void *)0x0;
    uStack_40 = 0;
    local_28 = 1;
    Path::addRectangle(0.0,0.0,(float)*(int *)(lVar4 + 0x10),(float)*(int *)(lVar4 + 0x14),
                       (Path *)&local_48);
                    /* try { // try from 00330fb9 to 00330fc6 has its CatchHandler @ 00331125 */
    SavedStateBase<juce::RenderingHelpers::SoftwareRendererSavedState>::clipToPath
              (this_00,&local_48,param_2);
    uStack_40 = uStack_40 & 0xffffffff;
    free(local_48);
    return;
  }
  if (1 < (int)plVar6[1]) {
    (**(code **)(*plVar6 + 0x10))(&local_48);
    plVar5 = *(long **)this_00;
    *(long **)this_00 = local_48;
    plVar6 = local_48;
    if (plVar5 != (long *)0x0) {
      plVar1 = plVar5 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      if ((int)*plVar1 == 0) {
        local_48 = plVar5;
        (**(code **)(*plVar5 + 8))();
        plVar6 = *(long **)this_00;
        SVar3 = this_00[0x28];
        goto joined_r0x00331009;
      }
    }
  }
  SVar3 = this_00[0x28];
joined_r0x00331009:
  if (SVar3 == (SavedStateBase<juce::RenderingHelpers::SoftwareRendererSavedState>)0x0) {
    fVar9 = *(float *)(this_00 + 8);
    fVar10 = *(float *)(this_00 + 0xc);
    fVar13 = fVar9 * *(float *)(param_2 + 1) + fVar10 * *(float *)((long)param_2 + 0x14) +
             *(float *)(this_00 + 0x10);
    fVar12 = *(float *)(this_00 + 0x14);
    fVar2 = *(float *)(this_00 + 0x18);
    fVar15 = (float)*(undefined8 *)((long)param_2 + 0xc);
    fVar16 = (float)((ulong)*(undefined8 *)((long)param_2 + 0xc) >> 0x20);
    fVar11 = (float)*param_2;
    fVar14 = (float)((ulong)*param_2 >> 0x20);
    fVar8 = fVar9 * fVar11 + fVar10 * fVar15;
    fVar9 = fVar9 * fVar14 + fVar10 * fVar16;
    fVar10 = fVar12 * fVar11 + fVar2 * fVar15;
    fVar11 = fVar12 * fVar14 + fVar2 * fVar16;
    fVar12 = fVar12 * *(float *)(param_2 + 1) + *(float *)((long)param_2 + 0x14) * fVar2;
    pSVar7 = this_00 + 0x1c;
  }
  else {
    fVar12 = (float)(int)((ulong)*(undefined8 *)(this_00 + 0x20) >> 0x20);
    fVar13 = (float)(int)*(undefined8 *)(this_00 + 0x20) + *(float *)(param_2 + 1);
    fVar8 = (float)*param_2;
    fVar9 = (float)((ulong)*param_2 >> 0x20);
    fVar10 = (float)*(undefined8 *)((long)param_2 + 0xc);
    fVar11 = (float)((ulong)*(undefined8 *)((long)param_2 + 0xc) >> 0x20);
    pSVar7 = (SavedStateBase<juce::RenderingHelpers::SoftwareRendererSavedState> *)
             ((long)param_2 + 0x14);
  }
  local_48 = (long *)CONCAT44(fVar9,fVar8);
  uStack_40 = CONCAT44(fVar10,fVar13);
  local_38 = CONCAT44(fVar12 + *(float *)pSVar7,fVar11);
  (**(code **)(*plVar6 + 0x48))(&local_20,plVar6,param_1,&local_48,*(undefined4 *)(this_00 + 0x60));
  plVar6 = *(long **)this_00;
  *(long **)this_00 = local_20;
  if (plVar6 != (long *)0x0) {
    plVar5 = plVar6 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    if ((int)*plVar5 == 0) {
      local_20 = plVar6;
      (**(code **)(*plVar6 + 8))();
    }
  }
  return;
}


