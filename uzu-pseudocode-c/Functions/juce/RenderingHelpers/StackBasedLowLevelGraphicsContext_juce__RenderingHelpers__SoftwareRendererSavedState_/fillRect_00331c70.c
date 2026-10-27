// Function : fillRect
// Namespace: juce:RenderingHelpers:StackBasedLowLevelGraphicsContext_juce__RenderingHelpers__SoftwareRendererSavedState_
// Entry    : 00331c70
// Prototype: undefined fillRect(StackBasedLowLevelGraphicsContext<juce::RenderingHelpers::SoftwareRendererSavedState> * this, ulong * param_1, char param_2)
// Body     : 00331c70 - 00331e79


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* juce::RenderingHelpers::StackBasedLowLevelGraphicsContext<juce::RenderingHelpers::SoftwareRendererSavedState>::fillRect(juce::Rectangle<int>
   const&, bool) */

void __thiscall
juce::RenderingHelpers::
StackBasedLowLevelGraphicsContext<juce::RenderingHelpers::SoftwareRendererSavedState>::fillRect
          (StackBasedLowLevelGraphicsContext<juce::RenderingHelpers::SoftwareRendererSavedState>
           *this,ulong *param_1,char param_2)

{
  ulong uVar1;
  SavedStateBase<juce::RenderingHelpers::SoftwareRendererSavedState> *this_00;
  ulong uVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  float fVar8;
  float fVar9;
  float fVar12;
  float fVar13;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar19;
  float fVar20;
  undefined1 auVar18 [16];
  float fVar21;
  float fVar23;
  undefined1 auVar22 [16];
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  float fVar34;
  float fVar37;
  float fVar38;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  void *local_58;
  ulong uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined1 local_38;
  undefined1 local_28 [16];
  undefined8 local_18;
  
  uVar1 = param_1[1];
  iVar4 = (int)uVar1;
  if (((0 < iVar4) && (iVar5 = (int)(uVar1 >> 0x20), 0 < iVar5)) &&
     (this_00 = *(SavedStateBase<juce::RenderingHelpers::SoftwareRendererSavedState> **)(this + 8),
     *(long *)this_00 != 0)) {
    uVar2 = *param_1;
    iVar6 = (int)uVar2;
    if (this_00[0x28] != (SavedStateBase<juce::RenderingHelpers::SoftwareRendererSavedState>)0x0) {
      SavedStateBase<juce::RenderingHelpers::SoftwareRendererSavedState>::fillTargetRect
                (this_00,(ulong)(uint)(iVar6 + (int)*(long *)(this_00 + 0x20)) |
                         (uVar2 & 0xffffffff00000000) + *(long *)(this_00 + 0x20) &
                         0xffffffff00000000,uVar1,param_2);
      return;
    }
    iVar7 = (int)(uVar2 >> 0x20);
    if (this_00[0x29] == (SavedStateBase<juce::RenderingHelpers::SoftwareRendererSavedState>)0x0) {
      fVar8 = (float)iVar6;
      fVar16 = (float)iVar7;
      fVar21 = fVar8 + (float)iVar4;
      fVar23 = fVar16 + (float)iVar5;
      fVar14 = *(float *)(this_00 + 0x10);
      fVar15 = *(float *)(this_00 + 0x18);
      fVar3 = *(float *)(this_00 + 0x1c);
      fVar17 = fVar16 * *(float *)(this_00 + 0xc);
      fVar19 = fVar16 * *(float *)(this_00 + 0x14);
      fVar20 = fVar16 * *(float *)(this_00 + 0x18);
      fVar9 = fVar8 * *(float *)(this_00 + 8);
      fVar12 = fVar8 * *(float *)(this_00 + 0x14);
      fVar13 = fVar8 * *(float *)(this_00 + 0x10);
      fVar8 = fVar8 * *(float *)(this_00 + 0x14);
      fVar24 = fVar9 + fVar17 + fVar14;
      fVar25 = fVar12 + fVar16 * fVar15 + fVar3;
      fVar26 = fVar13 + fVar19 + fVar15;
      fVar27 = fVar8 + fVar20 + fVar3;
      fVar34 = fVar21 * *(float *)(this_00 + 8);
      fVar37 = fVar21 * *(float *)(this_00 + 0x14);
      fVar38 = fVar21 * *(float *)(this_00 + 0x10);
      fVar21 = fVar21 * *(float *)(this_00 + 0x14);
      auVar18._0_4_ = fVar17 + fVar34 + fVar14;
      auVar18._4_4_ = fVar16 * fVar15 + fVar37 + fVar3;
      auVar18._8_4_ = fVar19 + fVar38 + fVar15;
      auVar18._12_4_ = fVar20 + fVar21 + fVar3;
      fVar16 = fVar23 * *(float *)(this_00 + 0xc);
      fVar17 = fVar23 * *(float *)(this_00 + 0x14);
      fVar19 = fVar23 * *(float *)(this_00 + 0x18);
      auVar10._0_4_ = fVar9 + fVar16 + fVar14;
      auVar10._4_4_ = fVar12 + fVar23 * fVar15 + fVar3;
      auVar10._8_4_ = fVar13 + fVar17 + fVar15;
      auVar10._12_4_ = fVar8 + fVar19 + fVar3;
      auVar22._0_8_ = CONCAT44(fVar23 * fVar15 + fVar37 + fVar3,fVar16 + fVar34 + fVar14);
      auVar22._8_4_ = fVar17 + fVar38 + fVar15;
      auVar22._12_4_ = fVar19 + fVar21 + fVar3;
      auVar28._8_4_ = auVar22._8_4_;
      auVar28._0_8_ = auVar22._0_8_;
      auVar28._12_4_ = auVar22._12_4_;
      auVar29 = minps(auVar28,auVar10);
      auVar31._8_4_ = auVar22._8_4_;
      auVar31._0_8_ = auVar22._0_8_;
      auVar31._12_4_ = auVar22._12_4_;
      auVar32 = maxps(auVar31,auVar10);
      auVar35._8_4_ = auVar22._8_4_;
      auVar35._0_8_ = auVar22._0_8_;
      auVar35._12_4_ = auVar22._12_4_;
      auVar36 = minps(auVar35,auVar18);
      auVar30._0_4_ = auVar29._0_4_ & -(uint)(auVar10._0_4_ < auVar18._0_4_);
      auVar30._4_4_ = auVar29._4_4_ & -(uint)(auVar10._4_4_ < auVar18._4_4_);
      auVar30._8_4_ = auVar29._8_4_ & -(uint)(auVar10._8_4_ < auVar18._8_4_);
      auVar30._12_4_ = auVar29._12_4_ & -(uint)(auVar10._12_4_ < auVar18._12_4_);
      auVar11._0_4_ = ~-(uint)(auVar10._0_4_ < auVar18._0_4_) & auVar36._0_4_;
      auVar11._4_4_ = ~-(uint)(auVar10._4_4_ < auVar18._4_4_) & auVar36._4_4_;
      auVar11._8_4_ = ~-(uint)(auVar10._8_4_ < auVar18._8_4_) & auVar36._8_4_;
      auVar11._12_4_ = ~-(uint)(auVar10._12_4_ < auVar18._12_4_) & auVar36._12_4_;
      auVar29._4_4_ = fVar25;
      auVar29._0_4_ = fVar24;
      auVar29._8_4_ = fVar26;
      auVar29._12_4_ = fVar27;
      auVar29 = minps(auVar11 | auVar30,auVar29);
      auVar36 = maxps(auVar22,auVar18);
      auVar33._0_4_ = auVar32._0_4_ & -(uint)(auVar18._0_4_ < auVar10._0_4_);
      auVar33._4_4_ = auVar32._4_4_ & -(uint)(auVar18._4_4_ < auVar10._4_4_);
      auVar33._8_4_ = auVar32._8_4_ & -(uint)(auVar18._8_4_ < auVar10._8_4_);
      auVar33._12_4_ = auVar32._12_4_ & -(uint)(auVar18._12_4_ < auVar10._12_4_);
      auVar32._0_4_ = ~-(uint)(auVar18._0_4_ < auVar10._0_4_) & auVar36._0_4_;
      auVar32._4_4_ = ~-(uint)(auVar18._4_4_ < auVar10._4_4_) & auVar36._4_4_;
      auVar32._8_4_ = ~-(uint)(auVar18._8_4_ < auVar10._8_4_) & auVar36._8_4_;
      auVar32._12_4_ = ~-(uint)(auVar18._12_4_ < auVar10._12_4_) & auVar36._12_4_;
      auVar36._4_4_ = fVar25;
      auVar36._0_4_ = fVar24;
      auVar36._8_4_ = fVar26;
      auVar36._12_4_ = fVar27;
      auVar36 = maxps(auVar32 | auVar33,auVar36);
      fVar14 = auVar36._0_4_ - auVar29._0_4_;
      fVar15 = auVar36._4_4_ - auVar29._4_4_;
      if (param_2 == '\0') {
        SavedStateBase<juce::RenderingHelpers::SoftwareRendererSavedState>::fillTargetRect
                  (auVar29._0_8_,CONCAT44(fVar15,fVar14),this_00);
        return;
      }
      SavedStateBase<juce::RenderingHelpers::SoftwareRendererSavedState>::fillTargetRect
                (this_00,(ulong)((double)auVar29._0_4_ + _DAT_005d9a90) & _DAT_005d9aa0 |
                         (long)((double)auVar29._4_4_ + _DAT_005d9a90) << 0x20,
                 (ulong)((double)fVar14 + _UNK_005d9a98) & _UNK_005d9aa8 |
                 (long)((double)fVar15 + _UNK_005d9a98) << 0x20,1);
      return;
    }
    local_48 = 0;
    uStack_40 = 0;
    local_58 = (void *)0x0;
    uStack_50 = 0;
    local_38 = 1;
    Path::addRectangle((float)iVar6,(float)iVar7,(float)iVar4,(float)iVar5,(Path *)&local_58);
    local_28 = ZEXT416(DAT_005d9038);
    local_18 = 0x3f800000;
                    /* try { // try from 00331d2f to 00331d3e has its CatchHandler @ 00331e7a */
    SavedStateBase<juce::RenderingHelpers::SoftwareRendererSavedState>::fillPath
              (this_00,&local_58,(undefined8 *)local_28);
    uStack_50 = uStack_50 & 0xffffffff;
    free(local_58);
  }
  return;
}


