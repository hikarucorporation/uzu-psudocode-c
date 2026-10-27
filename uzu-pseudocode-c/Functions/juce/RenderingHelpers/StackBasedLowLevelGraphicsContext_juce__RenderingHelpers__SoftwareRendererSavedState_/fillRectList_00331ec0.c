// Function : fillRectList
// Namespace: juce:RenderingHelpers:StackBasedLowLevelGraphicsContext_juce__RenderingHelpers__SoftwareRendererSavedState_
// Entry    : 00331ec0
// Prototype: undefined fillRectList(StackBasedLowLevelGraphicsContext<juce::RenderingHelpers::SoftwareRendererSavedState> * this, undefined8 * param_1)
// Body     : 00331ec0 - 00332252


/* juce::RenderingHelpers::StackBasedLowLevelGraphicsContext<juce::RenderingHelpers::SoftwareRendererSavedState>::fillRectList(juce::RectangleList<float>
   const&) */

void __thiscall
juce::RenderingHelpers::
StackBasedLowLevelGraphicsContext<juce::RenderingHelpers::SoftwareRendererSavedState>::fillRectList
          (StackBasedLowLevelGraphicsContext<juce::RenderingHelpers::SoftwareRendererSavedState>
           *this,undefined8 *param_1)

{
  float fVar1;
  SavedStateBase<juce::RenderingHelpers::SoftwareRendererSavedState> SVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  SavedStateBase<juce::RenderingHelpers::SoftwareRendererSavedState> *this_00;
  void *__src;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  float *__dest;
  undefined8 *puVar10;
  uint uVar11;
  long lVar12;
  undefined8 *puVar13;
  float *pfVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  float fVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  float fVar30;
  float fVar31;
  float fVar32;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined1 local_58;
  undefined1 local_48 [16];
  undefined8 local_38;
  
  this_00 = *(SavedStateBase<juce::RenderingHelpers::SoftwareRendererSavedState> **)(this + 8);
  if (*(long *)this_00 == 0) {
    return;
  }
  uVar3 = *(uint *)((long)param_1 + 0xc);
  lVar12 = (long)(int)uVar3;
  if (lVar12 == 1) {
    SavedStateBase<juce::RenderingHelpers::SoftwareRendererSavedState>::fillRect
              (*(undefined8 *)*param_1,this_00);
    return;
  }
  SVar2 = this_00[0x28];
  if ((SVar2 != (SavedStateBase<juce::RenderingHelpers::SoftwareRendererSavedState>)0x0) &&
     (*(int *)(this_00 + 0x20) == 0 && *(int *)(this_00 + 0x24) == 0)) {
    plVar9 = operator_new(0x40);
    *(undefined4 *)(plVar9 + 1) = 0;
    *plVar9 = (long)&PTR__EdgeTableRegion_00711be0;
    EdgeTable::EdgeTable((EdgeTable *)(plVar9 + 2),param_1);
    *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
    local_78 = plVar9;
                    /* try { // try from 00331f51 to 00331f5b has its CatchHandler @ 00332282 */
    SavedStateBase<juce::RenderingHelpers::SoftwareRendererSavedState>::fillShape(this_00,&local_78)
    ;
    if (local_78 == (long *)0x0) {
      return;
    }
    plVar9 = local_78 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    if ((int)*plVar9 == 0) {
      (**(code **)(*local_78 + 8))();
      return;
    }
    return;
  }
  if (this_00[0x29] != (SavedStateBase<juce::RenderingHelpers::SoftwareRendererSavedState>)0x0) {
    local_68 = 0;
    uStack_60 = 0;
    local_78 = (long *)0x0;
    uStack_70 = 0;
    local_58 = 1;
    if (uVar3 != 0) {
      puVar10 = (undefined8 *)*param_1;
      puVar13 = puVar10 + lVar12 * 2;
      do {
        Path::addRectangle((float)*puVar10,(float)((ulong)*puVar10 >> 0x20),(float)puVar10[1],
                           (float)((ulong)puVar10[1] >> 0x20),(Path *)&local_78);
        puVar10 = puVar10 + 2;
      } while (puVar10 != puVar13);
    }
    local_48 = ZEXT416(DAT_005d9038);
    local_38 = 0x3f800000;
                    /* try { // try from 00331fef to 00331ffe has its CatchHandler @ 003322a2 */
    SavedStateBase<juce::RenderingHelpers::SoftwareRendererSavedState>::fillPath
              (this_00,&local_78,(undefined8 *)local_48);
    uStack_70 = uStack_70 & 0xffffffff;
    plVar9 = local_78;
    goto LAB_0033223f;
  }
  local_48 = ZEXT816(0);
  if ((int)uVar3 < 1) {
    __dest = (float *)0x0;
    local_48._0_12_ = ZEXT812(0);
    local_48._12_4_ = uVar3;
    if (SVar2 == (SavedStateBase<juce::RenderingHelpers::SoftwareRendererSavedState>)0x0)
    goto LAB_0033206d;
LAB_0033219f:
    lVar7 = (long)local_78;
    uVar8 = uStack_70;
    uVar6 = local_68;
    if (uVar3 != 0) {
      iVar4 = *(int *)(this_00 + 0x20);
      iVar5 = *(int *)(this_00 + 0x24);
      pfVar14 = __dest + lVar12 * 4;
      do {
        *__dest = *__dest + (float)iVar4;
        __dest[1] = __dest[1] + (float)iVar5;
        __dest = __dest + 4;
      } while (__dest != pfVar14);
    }
  }
  else {
    __src = (void *)*param_1;
    uVar11 = uVar3 + (uVar3 >> 1) + 8 & 0xfffffff8;
    if ((int)uVar11 < 1) {
      __dest = (float *)0x0;
    }
    else {
      __dest = malloc((ulong)uVar11 << 4);
      local_48._0_8_ = __dest;
    }
    local_48._8_4_ = uVar11;
    memcpy(__dest,__src,(ulong)uVar3 << 4);
    local_48._12_4_ = uVar3;
    if (SVar2 != (SavedStateBase<juce::RenderingHelpers::SoftwareRendererSavedState>)0x0)
    goto LAB_0033219f;
LAB_0033206d:
    uVar6 = *(undefined8 *)(this_00 + 0x18);
    lVar7 = *(long *)(this_00 + 8);
    uVar8 = *(ulong *)(this_00 + 0x10);
    if (uVar3 != 0) {
      pfVar14 = __dest + lVar12 * 4;
      local_78._0_4_ = (float)lVar7;
      uStack_70._0_4_ = (float)uVar8;
      uStack_70._4_4_ = (float)(uVar8 >> 0x20);
      local_78._4_4_ = (float)((ulong)lVar7 >> 0x20);
      local_68._0_4_ = (float)uVar6;
      local_68._4_4_ = (float)((ulong)uVar6 >> 0x20);
      do {
        fVar31 = *__dest;
        fVar1 = __dest[1];
        fVar32 = __dest[2] + fVar31;
        fVar25 = __dest[3] + fVar1;
        fVar17 = fVar1 * local_78._4_4_ + fVar32 * (float)local_78 + (float)uStack_70;
        fVar18 = fVar1 * (float)local_68 + fVar32 * uStack_70._4_4_ + local_68._4_4_;
        fVar19 = fVar1 * uStack_70._4_4_ + fVar32 * (float)uStack_70 + (float)local_68;
        fVar20 = fVar1 * (float)local_68 + fVar32 * uStack_70._4_4_ + local_68._4_4_;
        auVar27._0_4_ = fVar31 * (float)local_78 + fVar25 * local_78._4_4_ + (float)uStack_70;
        auVar27._4_4_ = fVar31 * uStack_70._4_4_ + fVar25 * (float)local_68 + local_68._4_4_;
        auVar27._8_4_ = fVar31 * (float)uStack_70 + fVar25 * uStack_70._4_4_ + (float)local_68;
        auVar27._12_4_ = fVar31 * uStack_70._4_4_ + fVar25 * (float)local_68 + local_68._4_4_;
        auVar26._0_8_ =
             CONCAT44(fVar25 * (float)local_68 + fVar32 * uStack_70._4_4_ + local_68._4_4_,
                      fVar25 * local_78._4_4_ + fVar32 * (float)local_78 + (float)uStack_70);
        auVar26._8_4_ = fVar25 * uStack_70._4_4_ + fVar32 * (float)uStack_70 + (float)local_68;
        auVar26._12_4_ = fVar25 * (float)local_68 + fVar32 * uStack_70._4_4_ + local_68._4_4_;
        auVar33._8_4_ = auVar26._8_4_;
        auVar33._0_8_ = auVar26._0_8_;
        auVar33._12_4_ = auVar26._12_4_;
        auVar34 = minps(auVar33,auVar27);
        auVar21._8_4_ = auVar26._8_4_;
        auVar21._0_8_ = auVar26._0_8_;
        auVar21._12_4_ = auVar26._12_4_;
        auVar22 = maxps(auVar21,auVar27);
        auVar15._8_4_ = auVar26._8_4_;
        auVar15._0_8_ = auVar26._0_8_;
        auVar15._12_4_ = auVar26._12_4_;
        auVar16._4_4_ = fVar18;
        auVar16._0_4_ = fVar17;
        auVar16._8_4_ = fVar19;
        auVar16._12_4_ = fVar20;
        auVar16 = minps(auVar15,auVar16);
        auVar35._0_4_ = auVar34._0_4_ & -(uint)(auVar27._0_4_ < fVar17);
        auVar35._4_4_ = auVar34._4_4_ & -(uint)(auVar27._4_4_ < fVar18);
        auVar35._8_4_ = auVar34._8_4_ & -(uint)(auVar27._8_4_ < fVar19);
        auVar35._12_4_ = auVar34._12_4_ & -(uint)(auVar27._12_4_ < fVar20);
        auVar28._0_4_ = ~-(uint)(auVar27._0_4_ < fVar17) & auVar16._0_4_;
        auVar28._4_4_ = ~-(uint)(auVar27._4_4_ < fVar18) & auVar16._4_4_;
        auVar28._8_4_ = ~-(uint)(auVar27._8_4_ < fVar19) & auVar16._8_4_;
        auVar28._12_4_ = ~-(uint)(auVar27._12_4_ < fVar20) & auVar16._12_4_;
        fVar25 = fVar31 * (float)local_78 + fVar1 * local_78._4_4_ + (float)uStack_70;
        fVar32 = fVar31 * uStack_70._4_4_ + fVar1 * (float)local_68 + local_68._4_4_;
        fVar30 = fVar31 * (float)uStack_70 + fVar1 * uStack_70._4_4_ + (float)local_68;
        fVar31 = fVar31 * uStack_70._4_4_ + fVar1 * (float)local_68 + local_68._4_4_;
        auVar29._4_4_ = fVar32;
        auVar29._0_4_ = fVar25;
        auVar29._8_4_ = fVar30;
        auVar29._12_4_ = fVar31;
        auVar29 = minps(auVar28 | auVar35,auVar29);
        auVar34._4_4_ = fVar18;
        auVar34._0_4_ = fVar17;
        auVar34._8_4_ = fVar19;
        auVar34._12_4_ = fVar20;
        auVar16 = maxps(auVar26,auVar34);
        auVar23._0_4_ = auVar22._0_4_ & -(uint)(fVar17 < auVar27._0_4_);
        auVar23._4_4_ = auVar22._4_4_ & -(uint)(fVar18 < auVar27._4_4_);
        auVar23._8_4_ = auVar22._8_4_ & -(uint)(fVar19 < auVar27._8_4_);
        auVar23._12_4_ = auVar22._12_4_ & -(uint)(fVar20 < auVar27._12_4_);
        auVar24._0_4_ = ~-(uint)(fVar17 < auVar27._0_4_) & auVar16._0_4_;
        auVar24._4_4_ = ~-(uint)(fVar18 < auVar27._4_4_) & auVar16._4_4_;
        auVar24._8_4_ = ~-(uint)(fVar19 < auVar27._8_4_) & auVar16._8_4_;
        auVar24._12_4_ = ~-(uint)(fVar20 < auVar27._12_4_) & auVar16._12_4_;
        auVar22._4_4_ = fVar32;
        auVar22._0_4_ = fVar25;
        auVar22._8_4_ = fVar30;
        auVar22._12_4_ = fVar31;
        auVar16 = maxps(auVar24 | auVar23,auVar22);
        *(long *)__dest = auVar29._0_8_;
        *(ulong *)(__dest + 2) =
             CONCAT44(auVar16._4_4_ - auVar29._4_4_,auVar16._0_4_ - auVar29._0_4_);
        __dest = __dest + 4;
      } while (__dest != pfVar14);
    }
  }
                    /* try { // try from 003321e3 to 003321ec has its CatchHandler @ 0033226d */
  local_68 = uVar6;
  uStack_70 = uVar8;
  local_78 = (long *)lVar7;
  plVar9 = operator_new(0x40);
  *(undefined4 *)(plVar9 + 1) = 0;
  *plVar9 = (long)&PTR__EdgeTableRegion_00711be0;
  EdgeTable::EdgeTable((EdgeTable *)(plVar9 + 2),(undefined8 *)local_48);
  *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
  local_78 = plVar9;
                    /* try { // try from 0033221a to 00332224 has its CatchHandler @ 00332253 */
  SavedStateBase<juce::RenderingHelpers::SoftwareRendererSavedState>::fillShape(this_00,&local_78);
  if (local_78 != (long *)0x0) {
    plVar9 = local_78 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    if ((int)*plVar9 == 0) {
      (**(code **)(*local_78 + 8))();
    }
  }
  plVar9 = (long *)local_48._0_8_;
LAB_0033223f:
  free(plVar9);
  return;
}


