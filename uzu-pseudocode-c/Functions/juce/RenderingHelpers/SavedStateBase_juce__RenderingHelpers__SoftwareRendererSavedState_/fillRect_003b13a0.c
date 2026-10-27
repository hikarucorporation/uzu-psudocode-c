// Function : fillRect
// Namespace: juce:RenderingHelpers:SavedStateBase_juce__RenderingHelpers__SoftwareRendererSavedState_
// Entry    : 003b13a0
// Prototype: undefined fillRect(undefined8 param_1, SavedStateBase<juce::RenderingHelpers::SoftwareRendererSavedState> * param_2)
// Body     : 003b13a0 - 003b1513


/* WARNING: Unknown calling convention: __cdecl */
/* juce::RenderingHelpers::SavedStateBase<juce::RenderingHelpers::SoftwareRendererSavedState>::fillRect(juce::Rectangle<float>)
    */

void __cdecl
juce::RenderingHelpers::SavedStateBase<juce::RenderingHelpers::SoftwareRendererSavedState>::fillRect
          (undefined8 param_1,
          SavedStateBase<juce::RenderingHelpers::SoftwareRendererSavedState> *param_2)

{
  undefined1 auVar1 [16];
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar13;
  undefined1 in_XMM1 [16];
  float fVar14;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  float fVar15;
  float fVar17;
  undefined1 auVar16 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  float fVar31;
  float fVar32;
  float fVar33;
  void *local_58;
  ulong uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined1 local_38;
  undefined1 local_28 [16];
  undefined8 local_18;
  
  fVar9 = (float)param_1;
  fVar6 = (float)((ulong)param_1 >> 0x20);
  fVar15 = in_XMM1._0_4_;
  fVar17 = in_XMM1._4_4_;
  if (((0.0 < fVar15) && (0.0 < fVar17)) && (*(long *)param_2 != 0)) {
    if (param_2[0x28] != (SavedStateBase<juce::RenderingHelpers::SoftwareRendererSavedState>)0x0) {
      fillTargetRect(CONCAT44((float)(int)((ulong)*(undefined8 *)(param_2 + 0x20) >> 0x20) + fVar6,
                              (float)(int)*(undefined8 *)(param_2 + 0x20) + fVar9),in_XMM1._0_8_,
                     param_2);
      return;
    }
    if (param_2[0x29] == (SavedStateBase<juce::RenderingHelpers::SoftwareRendererSavedState>)0x0) {
      fVar15 = fVar15 + fVar9;
      fVar17 = fVar17 + fVar6;
      fVar2 = *(float *)(param_2 + 0x10);
      fVar3 = *(float *)(param_2 + 0x18);
      fVar4 = *(float *)(param_2 + 0x1c);
      fVar10 = fVar6 * *(float *)(param_2 + 0xc);
      fVar13 = fVar6 * *(float *)(param_2 + 0x14);
      fVar14 = fVar6 * *(float *)(param_2 + 0x18);
      fVar5 = fVar9 * *(float *)(param_2 + 8);
      fVar7 = fVar9 * *(float *)(param_2 + 0x14);
      fVar8 = fVar9 * *(float *)(param_2 + 0x10);
      fVar9 = fVar9 * *(float *)(param_2 + 0x14);
      fVar20 = fVar5 + fVar10 + fVar2;
      fVar21 = fVar7 + fVar6 * fVar3 + fVar4;
      fVar22 = fVar8 + fVar13 + fVar3;
      fVar23 = fVar9 + fVar14 + fVar4;
      fVar31 = fVar15 * *(float *)(param_2 + 8);
      fVar32 = fVar15 * *(float *)(param_2 + 0x14);
      fVar33 = fVar15 * *(float *)(param_2 + 0x10);
      fVar15 = fVar15 * *(float *)(param_2 + 0x14);
      auVar11._0_4_ = fVar10 + fVar31 + fVar2;
      auVar11._4_4_ = fVar6 * fVar3 + fVar32 + fVar4;
      auVar11._8_4_ = fVar13 + fVar33 + fVar3;
      auVar11._12_4_ = fVar14 + fVar15 + fVar4;
      fVar10 = fVar17 * *(float *)(param_2 + 0xc);
      fVar13 = fVar17 * *(float *)(param_2 + 0x14);
      fVar14 = fVar17 * *(float *)(param_2 + 0x18);
      fVar6 = fVar5 + fVar10 + fVar2;
      fVar5 = fVar7 + fVar17 * fVar3 + fVar4;
      fVar7 = fVar8 + fVar13 + fVar3;
      fVar9 = fVar9 + fVar14 + fVar4;
      auVar16._0_8_ = CONCAT44(fVar17 * fVar3 + fVar32 + fVar4,fVar10 + fVar31 + fVar2);
      auVar16._8_4_ = fVar13 + fVar33 + fVar3;
      auVar16._12_4_ = fVar14 + fVar15 + fVar4;
      auVar24._8_4_ = auVar16._8_4_;
      auVar24._0_8_ = auVar16._0_8_;
      auVar24._12_4_ = auVar16._12_4_;
      auVar25._4_4_ = fVar5;
      auVar25._0_4_ = fVar6;
      auVar25._8_4_ = fVar7;
      auVar25._12_4_ = fVar9;
      auVar25 = minps(auVar24,auVar25);
      auVar29._8_4_ = auVar16._8_4_;
      auVar29._0_8_ = auVar16._0_8_;
      auVar29._12_4_ = auVar16._12_4_;
      auVar30 = minps(auVar29,auVar11);
      auVar26._0_4_ = auVar25._0_4_ & -(uint)(fVar6 < auVar11._0_4_);
      auVar26._4_4_ = auVar25._4_4_ & -(uint)(fVar5 < auVar11._4_4_);
      auVar26._8_4_ = auVar25._8_4_ & -(uint)(fVar7 < auVar11._8_4_);
      auVar26._12_4_ = auVar25._12_4_ & -(uint)(fVar9 < auVar11._12_4_);
      auVar18._0_4_ = ~-(uint)(fVar6 < auVar11._0_4_) & auVar30._0_4_;
      auVar18._4_4_ = ~-(uint)(fVar5 < auVar11._4_4_) & auVar30._4_4_;
      auVar18._8_4_ = ~-(uint)(fVar7 < auVar11._8_4_) & auVar30._8_4_;
      auVar18._12_4_ = ~-(uint)(fVar9 < auVar11._12_4_) & auVar30._12_4_;
      auVar19._4_4_ = fVar21;
      auVar19._0_4_ = fVar20;
      auVar19._8_4_ = fVar22;
      auVar19._12_4_ = fVar23;
      auVar19 = minps(auVar18 | auVar26,auVar19);
      auVar27._8_4_ = auVar16._8_4_;
      auVar27._0_8_ = auVar16._0_8_;
      auVar27._12_4_ = auVar16._12_4_;
      auVar25 = maxps(auVar16,auVar11);
      auVar30._4_4_ = fVar5;
      auVar30._0_4_ = fVar6;
      auVar30._8_4_ = fVar7;
      auVar30._12_4_ = fVar9;
      auVar30 = maxps(auVar27,auVar30);
      auVar28._0_4_ = auVar30._0_4_ & -(uint)(auVar11._0_4_ < fVar6);
      auVar28._4_4_ = auVar30._4_4_ & -(uint)(auVar11._4_4_ < fVar5);
      auVar28._8_4_ = auVar30._8_4_ & -(uint)(auVar11._8_4_ < fVar7);
      auVar28._12_4_ = auVar30._12_4_ & -(uint)(auVar11._12_4_ < fVar9);
      auVar12._0_4_ = ~-(uint)(auVar11._0_4_ < fVar6) & auVar25._0_4_;
      auVar12._4_4_ = ~-(uint)(auVar11._4_4_ < fVar5) & auVar25._4_4_;
      auVar12._8_4_ = ~-(uint)(auVar11._8_4_ < fVar7) & auVar25._8_4_;
      auVar12._12_4_ = ~-(uint)(auVar11._12_4_ < fVar9) & auVar25._12_4_;
      auVar1._4_4_ = fVar21;
      auVar1._0_4_ = fVar20;
      auVar1._8_4_ = fVar22;
      auVar1._12_4_ = fVar23;
      auVar25 = maxps(auVar12 | auVar28,auVar1);
      fillTargetRect(auVar19._0_8_,
                     CONCAT44(auVar25._4_4_ - auVar19._4_4_,auVar25._0_4_ - auVar19._0_4_),param_2);
      return;
    }
    local_48 = 0;
    uStack_40 = 0;
    local_58 = (void *)0x0;
    uStack_50 = 0;
    local_38 = 1;
    Path::addRectangle(fVar9,fVar6,fVar15,fVar17,(Path *)&local_58);
    local_28 = ZEXT416(DAT_005d9038);
    local_18 = 0x3f800000;
                    /* try { // try from 003b1438 to 003b1447 has its CatchHandler @ 003b1514 */
    fillPath(param_2,&local_58,(undefined8 *)local_28);
    uStack_50 = uStack_50 & 0xffffffff;
    free(local_58);
  }
  return;
}


