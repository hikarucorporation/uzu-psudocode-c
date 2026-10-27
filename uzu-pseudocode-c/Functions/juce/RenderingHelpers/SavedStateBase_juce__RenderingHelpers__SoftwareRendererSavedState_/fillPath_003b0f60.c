// Function : fillPath
// Namespace: juce:RenderingHelpers:SavedStateBase_juce__RenderingHelpers__SoftwareRendererSavedState_
// Entry    : 003b0f60
// Prototype: undefined fillPath(SavedStateBase<juce::RenderingHelpers::SoftwareRendererSavedState> * this, undefined8 * param_1, undefined8 * param_2)
// Body     : 003b0f60 - 003b1375


/* juce::RenderingHelpers::SavedStateBase<juce::RenderingHelpers::SoftwareRendererSavedState>::fillPath(juce::Path
   const&, juce::AffineTransform const&) */

void __thiscall
juce::RenderingHelpers::SavedStateBase<juce::RenderingHelpers::SoftwareRendererSavedState>::fillPath
          (SavedStateBase<juce::RenderingHelpers::SoftwareRendererSavedState> *this,
          undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  int iVar2;
  long *plVar3;
  SavedStateBase<juce::RenderingHelpers::SoftwareRendererSavedState> *pSVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float in_XMM3_Db;
  float in_XMM3_Dc;
  float in_XMM3_Dd;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined4 in_XMM6_Db;
  undefined4 in_XMM6_Dc;
  undefined4 in_XMM6_Dd;
  float fVar18;
  float fVar19;
  undefined1 auVar20 [16];
  long *local_c0;
  float local_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  float local_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  float local_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  undefined8 local_50;
  float local_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  
  if (*(long **)this == (long *)0x0) {
    return;
  }
  if (this[0x28] == (SavedStateBase<juce::RenderingHelpers::SoftwareRendererSavedState>)0x0) {
    fVar10 = *(float *)(this + 8);
    fVar12 = *(float *)(this + 0xc);
    fVar9 = (float)*param_2;
    fVar19 = (float)((ulong)*param_2 >> 0x20);
    in_XMM3_Db = 0.0;
    in_XMM3_Dc = 0.0;
    in_XMM3_Dd = 0.0;
    local_b8 = fVar10 * *(float *)(param_2 + 1) + fVar12 * *(float *)((long)param_2 + 0x14) +
               *(float *)(this + 0x10);
    fVar14 = *(float *)(this + 0x14);
    in_XMM6_Db = 0;
    in_XMM6_Dc = 0;
    in_XMM6_Dd = 0;
    fVar18 = *(float *)(this + 0x18);
    fVar11 = (float)*(undefined8 *)((long)param_2 + 0xc);
    fVar13 = (float)((ulong)*(undefined8 *)((long)param_2 + 0xc) >> 0x20);
    local_80 = fVar10 * fVar9 + fVar12 * fVar11;
    local_7c = fVar10 * fVar19 + fVar12 * fVar13;
    fVar10 = fVar14 * fVar9 + fVar18 * fVar11;
    local_a8 = fVar14 * fVar19 + fVar18 * fVar13;
    local_98 = fVar14 * *(float *)(param_2 + 1) + *(float *)((long)param_2 + 0x14) * fVar18;
    pSVar4 = this + 0x1c;
  }
  else {
    local_98 = (float)(int)((ulong)*(undefined8 *)(this + 0x20) >> 0x20);
    local_b8 = (float)(int)*(undefined8 *)(this + 0x20) + *(float *)(param_2 + 1);
    local_80 = (float)*param_2;
    local_7c = (float)((ulong)*param_2 >> 0x20);
    fVar10 = (float)*(undefined8 *)((long)param_2 + 0xc);
    local_a8 = (float)((ulong)*(undefined8 *)((long)param_2 + 0xc) >> 0x20);
    pSVar4 = (SavedStateBase<juce::RenderingHelpers::SoftwareRendererSavedState> *)
             ((long)param_2 + 0x14);
  }
  local_98 = local_98 + *(float *)pSVar4;
  fStack_b4 = in_XMM3_Db;
  fStack_b0 = in_XMM3_Dc;
  fStack_ac = in_XMM3_Dd;
  fStack_a4 = local_a8;
  fStack_a0 = local_a8;
  fStack_9c = local_a8;
  fStack_94 = (float)in_XMM6_Db;
  fStack_90 = (float)in_XMM6_Dc;
  fStack_8c = (float)in_XMM6_Dd;
  local_78 = local_b8;
  local_74 = fVar10;
  local_70 = local_a8;
  local_6c = local_98;
  local_68 = local_7c;
  fStack_64 = local_7c;
  fStack_60 = local_7c;
  fStack_5c = local_7c;
  local_48 = local_80;
  fStack_44 = local_7c;
  fStack_40 = fVar10;
  fStack_3c = local_a8;
  auVar20 = (**(code **)(**(long **)this + 0x60))();
  local_50 = auVar20._0_8_;
  fVar12 = *(float *)(param_1 + 2);
  fVar19 = (float)param_1[3];
  fVar9 = (*(float *)((long)param_1 + 0x14) - fVar12) + fVar12;
  fVar11 = ((float)((ulong)param_1[3] >> 0x20) - fVar19) + fVar19;
  fVar13 = fStack_64 * fVar11;
  fVar15 = local_48 * fVar12 + local_68 * fVar19 + local_b8;
  fVar11 = fVar11 * fStack_a4;
  fVar18 = fVar12 * fVar10 + fVar19 * local_a8 + local_98;
  fVar14 = fVar13 + local_48 * fVar12 + local_b8;
  fVar12 = fVar11 + fVar12 * fVar10 + local_98;
  fVar16 = local_48 * fVar9;
  fVar17 = local_b8 + fVar16 + local_68 * fVar19;
  fStack_94 = local_b8 + fVar16 + fVar13;
  fVar9 = fVar9 * fVar10;
  fVar19 = local_98 + fVar9 + fVar19 * local_a8;
  fStack_a4 = local_98 + fVar9 + fVar11;
  fVar10 = fVar14;
  if (fVar17 <= fVar14) {
    fVar10 = fVar17;
  }
  local_98 = fStack_94;
  if (fVar10 <= fStack_94) {
    local_98 = fVar10;
  }
  if (fVar15 <= local_98) {
    local_98 = fVar15;
  }
  if (fVar14 <= fVar17) {
    fVar14 = fVar17;
  }
  fVar10 = fStack_94;
  if (fStack_94 <= fVar14) {
    fVar10 = fVar14;
  }
  if (fVar10 <= fVar15) {
    fVar10 = fVar15;
  }
  fVar14 = fVar12;
  if (fVar19 <= fVar12) {
    fVar14 = fVar19;
  }
  local_a8 = fStack_a4;
  if (fVar14 <= fStack_a4) {
    local_a8 = fVar14;
  }
  if (fVar18 <= local_a8) {
    local_a8 = fVar18;
  }
  if (fVar12 <= fVar19) {
    fVar12 = fVar19;
  }
  fVar14 = fStack_a4;
  if (fStack_a4 <= fVar12) {
    fVar14 = fVar12;
  }
  iVar7 = -0x80000000;
  iVar5 = -0x80000000;
  fVar12 = fStack_94;
  fVar9 = fStack_94;
  fVar19 = fStack_94;
  fStack_a0 = fStack_a4;
  fStack_9c = fStack_a4;
  fStack_90 = fStack_94;
  fStack_8c = fStack_94;
  if (DAT_00653430 < local_98) {
    local_b8 = fVar10;
    fStack_b4 = fStack_94;
    fStack_b0 = fStack_94;
    fStack_ac = fStack_94;
    local_68 = fVar18;
    fVar10 = floorf(local_98);
    iVar5 = (int)fVar10;
    fVar10 = local_b8;
    fVar12 = fStack_b4;
    fVar9 = fStack_b0;
    fVar19 = fStack_ac;
    fVar18 = local_68;
  }
  if (fVar14 <= fVar18) {
    fVar14 = fVar18;
  }
  fVar18 = fVar10 - local_98;
  if (DAT_00653430 < local_a8) {
    local_b8 = fVar10 - local_98;
    fStack_b4 = fVar12;
    fStack_b0 = fVar9;
    fStack_ac = fVar19;
    fVar10 = floorf(local_a8);
    iVar7 = (int)fVar10;
    fVar18 = local_b8;
  }
  fVar14 = fVar14 - local_a8;
  iVar6 = 0x7fffffff;
  iVar8 = 0x7fffffff;
  if (local_98 + fVar18 < DAT_00653434) {
    fVar10 = ceilf(local_98 + fVar18);
    iVar8 = (int)fVar10;
    fVar14 = local_a8 + fVar14;
    if (fVar14 < DAT_00653434) goto LAB_003b129a;
  }
  else {
    fVar14 = local_a8 + fVar14;
    if (fVar14 < DAT_00653434) {
LAB_003b129a:
      fVar10 = ceilf(fVar14);
      iVar6 = (int)fVar10;
      if (iVar8 <= (int)local_50) {
        return;
      }
      goto LAB_003b12b8;
    }
  }
  if (iVar8 <= (int)local_50) {
    return;
  }
LAB_003b12b8:
  uVar1 = local_50;
  iVar2 = (int)((ulong)local_50 >> 0x20);
  if ((((iVar2 < iVar6) && (iVar5 < auVar20._8_4_ + (int)local_50)) &&
      (iVar7 < iVar2 + auVar20._12_4_)) &&
     (((iVar5 < iVar8 && (iVar7 < iVar6)) && ((0 < auVar20._8_4_ && (0 < auVar20._12_4_)))))) {
    plVar3 = operator_new(0x40);
    *(undefined4 *)(plVar3 + 1) = 0;
    *plVar3 = (long)&PTR__EdgeTableRegion_00711be0;
    EdgeTable::EdgeTable((EdgeTable *)(plVar3 + 2),uVar1,auVar20._8_8_,param_1,&local_80);
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
                    /* try { // try from 003b1341 to 003b134d has its CatchHandler @ 003b1376 */
    local_c0 = plVar3;
    fillShape(this,(long *)&local_c0);
    if (local_c0 != (long *)0x0) {
      plVar3 = local_c0 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      if ((int)*plVar3 == 0) {
        (**(code **)(*local_c0 + 8))();
      }
    }
  }
  return;
}


