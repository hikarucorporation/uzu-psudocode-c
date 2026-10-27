// Function : getClipBounds
// Namespace: juce:RenderingHelpers:StackBasedLowLevelGraphicsContext_juce__RenderingHelpers__SoftwareRendererSavedState_
// Entry    : 00331480
// Prototype: undefined1[16] getClipBounds(StackBasedLowLevelGraphicsContext<juce::RenderingHelpers::SoftwareRendererSavedState> * this)
// Body     : 00331480 - 00331719


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* juce::RenderingHelpers::StackBasedLowLevelGraphicsContext<juce::RenderingHelpers::SoftwareRendererSavedState>::getClipBounds()
   const */

undefined1  [16] __thiscall
juce::RenderingHelpers::
StackBasedLowLevelGraphicsContext<juce::RenderingHelpers::SoftwareRendererSavedState>::getClipBounds
          (StackBasedLowLevelGraphicsContext<juce::RenderingHelpers::SoftwareRendererSavedState>
           *this)

{
  long *plVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined8 uVar5;
  int iVar6;
  undefined8 uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  float fVar11;
  float fVar12;
  undefined1 auVar13 [16];
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar23;
  double dVar24;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  float fVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  double dVar40;
  float fVar43;
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  uint uVar44;
  uint uVar45;
  float fVar46;
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  
  plVar1 = *(long **)(this + 8);
  if ((long *)*plVar1 == (long *)0x0) {
    uVar7 = 0;
    uVar5 = 0;
    goto LAB_0033170c;
  }
  auVar47 = (**(code **)(*(long *)*plVar1 + 0x60))();
  fVar25 = (float)auVar47._8_4_;
  fVar14 = (float)auVar47._0_4_;
  fVar15 = (float)auVar47._4_4_;
  fVar11 = (float)auVar47._12_4_;
  if ((char)plVar1[5] == '\0') {
    fVar12 = *(float *)(plVar1 + 1);
    fVar23 = *(float *)((long)plVar1 + 0xc);
    fVar18 = *(float *)(plVar1 + 3);
    fVar46 = *(float *)((long)plVar1 + 0x14);
    fVar34 = fVar12 * fVar18 - fVar46 * fVar23;
    dVar40 = (double)fVar34;
    uVar44 = _DAT_005d91b0 & SUB84(dVar40,0);
    uVar45 = _UNK_005d91b4 & (uint)((ulong)dVar40 >> 0x20);
    if ((double)CONCAT44(uVar45,uVar44) == DAT_005d94e0) {
      if ((fVar34 == 0.0) && (!NAN(fVar34))) goto LAB_003315b4;
LAB_00331545:
      dVar40 = _DAT_005d9000 / dVar40;
      dVar24 = (double)fVar18;
      fVar46 = (float)((double)(float)((uint)fVar46 ^ _DAT_006524b0) * dVar40);
      fVar18 = (float)((double)fVar12 * dVar40);
      fVar23 = (float)((double)(float)((uint)fVar23 ^ _DAT_006524b0) * dVar40);
      fVar12 = *(float *)((long)plVar1 + 0x1c);
      fVar29 = (float)(*(uint *)(plVar1 + 2) ^ _DAT_006524b0);
      fVar39 = fVar29 * fVar46 - fVar12 * fVar18;
      fVar34 = fVar29 * (float)(dVar24 * dVar40) - fVar12 * fVar23;
      fVar43 = fVar29 * 0.0 - fVar12 * 0.0;
      fVar29 = fVar29 * 0.0 - fVar12 * 0.0;
      fVar12 = (float)(dVar24 * dVar40);
    }
    else {
      if ((DAT_005db368 < (double)CONCAT44(uVar45,uVar44)) &&
         (DAT_005db370 * (double)CONCAT44(uVar45,uVar44) < (double)CONCAT44(uVar45,uVar44)))
      goto LAB_00331545;
LAB_003315b4:
      fVar34 = *(float *)(plVar1 + 2);
      fVar39 = *(float *)((long)plVar1 + 0x1c);
      fVar43 = 0.0;
      fVar29 = 0.0;
    }
    fVar25 = fVar25 + fVar14;
    fVar11 = fVar11 + fVar15;
    fVar35 = fVar14 * fVar46 + fVar15 * fVar18 + fVar39;
    fVar36 = fVar14 * fVar12 + fVar15 * fVar23 + fVar34;
    fVar37 = fVar14 * 0.0 + fVar15 * 0.0 + fVar43;
    fVar38 = fVar14 * 0.0 + fVar15 * 0.0 + fVar29;
    fVar30 = fVar15 * fVar18 + fVar25 * fVar46 + fVar39;
    fVar31 = fVar15 * fVar23 + fVar25 * fVar12 + fVar34;
    fVar32 = fVar15 * 0.0 + fVar25 * 0.0 + fVar43;
    fVar33 = fVar15 * 0.0 + fVar25 * 0.0 + fVar29;
    fVar15 = fVar14 * fVar46 + fVar11 * fVar18 + fVar39;
    fVar16 = fVar14 * fVar12 + fVar11 * fVar23 + fVar34;
    fVar17 = fVar14 * 0.0 + fVar11 * 0.0 + fVar43;
    fVar14 = fVar14 * 0.0 + fVar11 * 0.0 + fVar29;
    auVar13._0_8_ =
         CONCAT44(fVar11 * fVar23 + fVar25 * fVar12 + fVar34,
                  fVar11 * fVar18 + fVar25 * fVar46 + fVar39);
    auVar13._8_4_ = fVar11 * 0.0 + fVar25 * 0.0 + fVar43;
    auVar13._12_4_ = fVar11 * 0.0 + fVar25 * 0.0 + fVar29;
    auVar19._8_4_ = auVar13._8_4_;
    auVar19._0_8_ = auVar13._0_8_;
    auVar19._12_4_ = auVar13._12_4_;
    auVar47._4_4_ = fVar16;
    auVar47._0_4_ = fVar15;
    auVar47._8_4_ = fVar17;
    auVar47._12_4_ = fVar14;
    auVar47 = minps(auVar19,auVar47);
    auVar26._8_4_ = auVar13._8_4_;
    auVar26._0_8_ = auVar13._0_8_;
    auVar26._12_4_ = auVar13._12_4_;
    auVar42._4_4_ = fVar31;
    auVar42._0_4_ = fVar30;
    auVar42._8_4_ = fVar32;
    auVar42._12_4_ = fVar33;
    auVar27 = minps(auVar26,auVar42);
    auVar20._0_4_ = auVar47._0_4_ & -(uint)(fVar15 < fVar30);
    auVar20._4_4_ = auVar47._4_4_ & -(uint)(fVar16 < fVar31);
    auVar20._8_4_ = auVar47._8_4_ & -(uint)(fVar17 < fVar32);
    auVar20._12_4_ = auVar47._12_4_ & -(uint)(fVar14 < fVar33);
    auVar41._0_4_ = ~-(uint)(fVar15 < fVar30) & auVar27._0_4_;
    auVar41._4_4_ = ~-(uint)(fVar16 < fVar31) & auVar27._4_4_;
    auVar41._8_4_ = ~-(uint)(fVar17 < fVar32) & auVar27._8_4_;
    auVar41._12_4_ = ~-(uint)(fVar14 < fVar33) & auVar27._12_4_;
    auVar3._4_4_ = fVar36;
    auVar3._0_4_ = fVar35;
    auVar3._8_4_ = fVar37;
    auVar3._12_4_ = fVar38;
    auVar42 = minps(auVar41 | auVar20,auVar3);
    auVar21._8_4_ = auVar13._8_4_;
    auVar21._0_8_ = auVar13._0_8_;
    auVar21._12_4_ = auVar13._12_4_;
    auVar27._4_4_ = fVar16;
    auVar27._0_4_ = fVar15;
    auVar27._8_4_ = fVar17;
    auVar27._12_4_ = fVar14;
    auVar27 = maxps(auVar21,auVar27);
    auVar2._4_4_ = fVar31;
    auVar2._0_4_ = fVar30;
    auVar2._8_4_ = fVar32;
    auVar2._12_4_ = fVar33;
    auVar47 = maxps(auVar13,auVar2);
    auVar22._0_4_ = auVar27._0_4_ & -(uint)(fVar30 < fVar15);
    auVar22._4_4_ = auVar27._4_4_ & -(uint)(fVar31 < fVar16);
    auVar22._8_4_ = auVar27._8_4_ & -(uint)(fVar32 < fVar17);
    auVar22._12_4_ = auVar27._12_4_ & -(uint)(fVar33 < fVar14);
    auVar28._0_4_ = ~-(uint)(fVar30 < fVar15) & auVar47._0_4_;
    auVar28._4_4_ = ~-(uint)(fVar31 < fVar16) & auVar47._4_4_;
    auVar28._8_4_ = ~-(uint)(fVar32 < fVar17) & auVar47._8_4_;
    auVar28._12_4_ = ~-(uint)(fVar33 < fVar14) & auVar47._12_4_;
    auVar4._4_4_ = fVar36;
    auVar4._0_4_ = fVar35;
    auVar4._8_4_ = fVar37;
    auVar4._12_4_ = fVar38;
    auVar47 = maxps(auVar28 | auVar22,auVar4);
    fVar15 = auVar42._0_4_;
    fVar11 = auVar47._0_4_ - fVar15;
    fVar14 = auVar42._4_4_;
    fVar25 = auVar47._4_4_ - fVar14;
  }
  else {
    fVar14 = fVar14 - (float)(int)plVar1[4];
    fVar15 = fVar15 - (float)(int)((ulong)plVar1[4] >> 0x20);
  }
  iVar9 = -0x80000000;
  iVar10 = -0x80000000;
  if (DAT_00653430 < fVar14) {
    fVar12 = floorf(fVar14);
    iVar10 = (int)fVar12;
  }
  if (DAT_00653430 < fVar15) {
    fVar12 = floorf(fVar15);
    iVar9 = (int)fVar12;
  }
  iVar8 = 0x7fffffff;
  iVar6 = 0x7fffffff;
  if (fVar14 + fVar25 < DAT_00653434) {
    fVar14 = ceilf(fVar14 + fVar25);
    iVar6 = (int)fVar14;
  }
  if (fVar15 + fVar11 < DAT_00653434) {
    fVar11 = ceilf(fVar15 + fVar11);
    iVar8 = (int)fVar11;
  }
  uVar5 = CONCAT44(iVar9,iVar10);
  uVar7 = CONCAT44(iVar8 - iVar9,iVar6 - iVar10);
LAB_0033170c:
  auVar48._8_8_ = uVar7;
  auVar48._0_8_ = uVar5;
  return auVar48;
}


