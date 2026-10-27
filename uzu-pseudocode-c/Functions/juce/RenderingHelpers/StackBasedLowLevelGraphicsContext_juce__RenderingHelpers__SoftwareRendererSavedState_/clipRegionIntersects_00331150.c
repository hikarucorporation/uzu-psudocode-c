// Function : clipRegionIntersects
// Namespace: juce:RenderingHelpers:StackBasedLowLevelGraphicsContext_juce__RenderingHelpers__SoftwareRendererSavedState_
// Entry    : 00331150
// Prototype: ulong clipRegionIntersects(StackBasedLowLevelGraphicsContext<juce::RenderingHelpers::SoftwareRendererSavedState> * this, ulong * param_1)
// Body     : 00331150 - 00331471


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* juce::RenderingHelpers::StackBasedLowLevelGraphicsContext<juce::RenderingHelpers::SoftwareRendererSavedState>::clipRegionIntersects(juce::Rectangle<int>
   const&) */

ulong __thiscall
juce::RenderingHelpers::
StackBasedLowLevelGraphicsContext<juce::RenderingHelpers::SoftwareRendererSavedState>::
clipRegionIntersects
          (StackBasedLowLevelGraphicsContext<juce::RenderingHelpers::SoftwareRendererSavedState>
           *this,ulong *param_1)

{
  long *plVar1;
  long *plVar2;
  ulong uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  ulong uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  float fVar14;
  float fVar15;
  undefined1 auVar16 [16];
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar26;
  double dVar27;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  float fVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  double dVar43;
  float fVar46;
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  uint uVar47;
  uint uVar48;
  float fVar49;
  undefined1 auVar50 [16];
  
  plVar1 = *(long **)(this + 8);
  plVar2 = (long *)*plVar1;
  if (plVar2 == (long *)0x0) {
    return 0;
  }
  uVar7 = *param_1;
  uVar3 = param_1[1];
  iVar9 = (int)uVar7;
  if ((char)plVar1[5] != '\0') {
                    /* WARNING: Could not recover jumptable at 0x003311b6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar7 = (**(code **)(*plVar2 + 0x58))
                      (plVar2,(ulong)(uint)(iVar9 + (int)plVar1[4]) |
                              (uVar7 & 0xffffffff00000000) + plVar1[4] & 0xffffffff00000000,uVar3);
    return uVar7;
  }
  auVar50 = (**(code **)(*plVar2 + 0x60))();
  fVar28 = (float)auVar50._8_4_;
  fVar17 = (float)auVar50._0_4_;
  fVar18 = (float)auVar50._4_4_;
  fVar14 = (float)auVar50._12_4_;
  if ((char)plVar1[5] != '\0') {
    fVar17 = fVar17 - (float)(int)plVar1[4];
    fVar18 = fVar18 - (float)(int)((ulong)plVar1[4] >> 0x20);
    goto LAB_0033136c;
  }
  fVar15 = *(float *)(plVar1 + 1);
  fVar26 = *(float *)((long)plVar1 + 0xc);
  fVar21 = *(float *)(plVar1 + 3);
  fVar49 = *(float *)((long)plVar1 + 0x14);
  fVar37 = fVar15 * fVar21 - fVar49 * fVar26;
  dVar43 = (double)fVar37;
  uVar47 = _DAT_005d91b0 & SUB84(dVar43,0);
  uVar48 = _UNK_005d91b4 & (uint)((ulong)dVar43 >> 0x20);
  if ((double)CONCAT44(uVar48,uVar47) == DAT_005d94e0) {
    if ((fVar37 == 0.0) && (!NAN(fVar37))) goto LAB_003312cd;
LAB_0033125e:
    dVar43 = _DAT_005d9000 / dVar43;
    dVar27 = (double)fVar21;
    fVar49 = (float)((double)(float)((uint)fVar49 ^ _DAT_006524b0) * dVar43);
    fVar21 = (float)((double)fVar15 * dVar43);
    fVar26 = (float)((double)(float)((uint)fVar26 ^ _DAT_006524b0) * dVar43);
    fVar15 = *(float *)((long)plVar1 + 0x1c);
    fVar32 = (float)(*(uint *)(plVar1 + 2) ^ _DAT_006524b0);
    fVar42 = fVar32 * fVar49 - fVar15 * fVar21;
    fVar37 = fVar32 * (float)(dVar27 * dVar43) - fVar15 * fVar26;
    fVar46 = fVar32 * 0.0 - fVar15 * 0.0;
    fVar32 = fVar32 * 0.0 - fVar15 * 0.0;
    fVar15 = (float)(dVar27 * dVar43);
  }
  else {
    if ((DAT_005db368 < (double)CONCAT44(uVar48,uVar47)) &&
       (DAT_005db370 * (double)CONCAT44(uVar48,uVar47) < (double)CONCAT44(uVar48,uVar47)))
    goto LAB_0033125e;
LAB_003312cd:
    fVar37 = *(float *)(plVar1 + 2);
    fVar42 = *(float *)((long)plVar1 + 0x1c);
    fVar46 = 0.0;
    fVar32 = 0.0;
  }
  fVar28 = fVar28 + fVar17;
  fVar14 = fVar14 + fVar18;
  fVar38 = fVar17 * fVar49 + fVar18 * fVar21 + fVar42;
  fVar39 = fVar17 * fVar15 + fVar18 * fVar26 + fVar37;
  fVar40 = fVar17 * 0.0 + fVar18 * 0.0 + fVar46;
  fVar41 = fVar17 * 0.0 + fVar18 * 0.0 + fVar32;
  fVar33 = fVar18 * fVar21 + fVar28 * fVar49 + fVar42;
  fVar34 = fVar18 * fVar26 + fVar28 * fVar15 + fVar37;
  fVar35 = fVar18 * 0.0 + fVar28 * 0.0 + fVar46;
  fVar36 = fVar18 * 0.0 + fVar28 * 0.0 + fVar32;
  fVar18 = fVar17 * fVar49 + fVar14 * fVar21 + fVar42;
  fVar19 = fVar17 * fVar15 + fVar14 * fVar26 + fVar37;
  fVar20 = fVar17 * 0.0 + fVar14 * 0.0 + fVar46;
  fVar17 = fVar17 * 0.0 + fVar14 * 0.0 + fVar32;
  auVar16._0_8_ =
       CONCAT44(fVar14 * fVar26 + fVar28 * fVar15 + fVar37,
                fVar14 * fVar21 + fVar28 * fVar49 + fVar42);
  auVar16._8_4_ = fVar14 * 0.0 + fVar28 * 0.0 + fVar46;
  auVar16._12_4_ = fVar14 * 0.0 + fVar28 * 0.0 + fVar32;
  auVar22._8_4_ = auVar16._8_4_;
  auVar22._0_8_ = auVar16._0_8_;
  auVar22._12_4_ = auVar16._12_4_;
  auVar50._4_4_ = fVar19;
  auVar50._0_4_ = fVar18;
  auVar50._8_4_ = fVar20;
  auVar50._12_4_ = fVar17;
  auVar50 = minps(auVar22,auVar50);
  auVar29._8_4_ = auVar16._8_4_;
  auVar29._0_8_ = auVar16._0_8_;
  auVar29._12_4_ = auVar16._12_4_;
  auVar45._4_4_ = fVar34;
  auVar45._0_4_ = fVar33;
  auVar45._8_4_ = fVar35;
  auVar45._12_4_ = fVar36;
  auVar30 = minps(auVar29,auVar45);
  auVar23._0_4_ = auVar50._0_4_ & -(uint)(fVar18 < fVar33);
  auVar23._4_4_ = auVar50._4_4_ & -(uint)(fVar19 < fVar34);
  auVar23._8_4_ = auVar50._8_4_ & -(uint)(fVar20 < fVar35);
  auVar23._12_4_ = auVar50._12_4_ & -(uint)(fVar17 < fVar36);
  auVar44._0_4_ = ~-(uint)(fVar18 < fVar33) & auVar30._0_4_;
  auVar44._4_4_ = ~-(uint)(fVar19 < fVar34) & auVar30._4_4_;
  auVar44._8_4_ = ~-(uint)(fVar20 < fVar35) & auVar30._8_4_;
  auVar44._12_4_ = ~-(uint)(fVar17 < fVar36) & auVar30._12_4_;
  auVar5._4_4_ = fVar39;
  auVar5._0_4_ = fVar38;
  auVar5._8_4_ = fVar40;
  auVar5._12_4_ = fVar41;
  auVar45 = minps(auVar44 | auVar23,auVar5);
  auVar24._8_4_ = auVar16._8_4_;
  auVar24._0_8_ = auVar16._0_8_;
  auVar24._12_4_ = auVar16._12_4_;
  auVar30._4_4_ = fVar19;
  auVar30._0_4_ = fVar18;
  auVar30._8_4_ = fVar20;
  auVar30._12_4_ = fVar17;
  auVar30 = maxps(auVar24,auVar30);
  auVar4._4_4_ = fVar34;
  auVar4._0_4_ = fVar33;
  auVar4._8_4_ = fVar35;
  auVar4._12_4_ = fVar36;
  auVar50 = maxps(auVar16,auVar4);
  auVar25._0_4_ = auVar30._0_4_ & -(uint)(fVar33 < fVar18);
  auVar25._4_4_ = auVar30._4_4_ & -(uint)(fVar34 < fVar19);
  auVar25._8_4_ = auVar30._8_4_ & -(uint)(fVar35 < fVar20);
  auVar25._12_4_ = auVar30._12_4_ & -(uint)(fVar36 < fVar17);
  auVar31._0_4_ = ~-(uint)(fVar33 < fVar18) & auVar50._0_4_;
  auVar31._4_4_ = ~-(uint)(fVar34 < fVar19) & auVar50._4_4_;
  auVar31._8_4_ = ~-(uint)(fVar35 < fVar20) & auVar50._8_4_;
  auVar31._12_4_ = ~-(uint)(fVar36 < fVar17) & auVar50._12_4_;
  auVar6._4_4_ = fVar39;
  auVar6._0_4_ = fVar38;
  auVar6._8_4_ = fVar40;
  auVar6._12_4_ = fVar41;
  auVar50 = maxps(auVar31 | auVar25,auVar6);
  fVar18 = auVar45._0_4_;
  fVar14 = auVar50._0_4_ - fVar18;
  fVar17 = auVar45._4_4_;
  fVar28 = auVar50._4_4_ - fVar17;
LAB_0033136c:
  iVar12 = -0x80000000;
  iVar13 = -0x80000000;
  if (DAT_00653430 < fVar17) {
    fVar15 = floorf(fVar17);
    iVar13 = (int)fVar15;
  }
  if (DAT_00653430 < fVar18) {
    fVar15 = floorf(fVar18);
    iVar12 = (int)fVar15;
  }
  iVar10 = 0x7fffffff;
  iVar11 = 0x7fffffff;
  if (fVar17 + fVar28 < DAT_00653434) {
    fVar17 = ceilf(fVar17 + fVar28);
    iVar11 = (int)fVar17;
  }
  if (fVar18 + fVar14 < DAT_00653434) {
    fVar14 = ceilf(fVar18 + fVar14);
    iVar10 = (int)fVar14;
  }
  if (iVar11 <= iVar9) {
    return 0;
  }
  iVar8 = (int)(uVar7 >> 0x20);
  if (iVar10 <= iVar8) {
    return 0;
  }
  if ((int)uVar3 + iVar9 <= iVar13) {
    return 0;
  }
  iVar9 = (int)(uVar3 >> 0x20);
  if (iVar8 + iVar9 <= iVar12) {
    return 0;
  }
  if (iVar13 < iVar11) {
    return (ulong)(0 < iVar9 && (0 < (int)uVar3 && iVar12 < iVar10));
  }
  return 0;
}


