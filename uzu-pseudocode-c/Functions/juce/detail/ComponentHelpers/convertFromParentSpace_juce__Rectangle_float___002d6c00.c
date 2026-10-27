// Function : convertFromParentSpace<juce::Rectangle<float>>
// Namespace: juce:detail:ComponentHelpers
// Entry    : 002d6c00
// Prototype: undefined8 convertFromParentSpace<juce::Rectangle<float>>(undefined8 param_1, undefined8 param_2, ComponentHelpers * this)
// Body     : 002d6c00 - 002d716c


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* juce::Rectangle<float>
   juce::detail::ComponentHelpers::convertFromParentSpace<juce::Rectangle<float> >(juce::Component
   const&, juce::Rectangle<float>) */

undefined8 __thiscall
juce::detail::ComponentHelpers::convertFromParentSpace<juce::Rectangle<float>>
          (undefined8 param_1,undefined8 param_2,ComponentHelpers *this)

{
  ushort uVar1;
  int iVar2;
  float *pfVar3;
  long *plVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined4 uVar11;
  Desktop *pDVar12;
  long lVar13;
  float fVar14;
  undefined4 in_XMM0_Dc;
  undefined4 extraout_XMM0_Dc;
  undefined4 in_XMM0_Dd;
  float fVar15;
  undefined4 extraout_XMM0_Dd;
  undefined8 in_XMM1_Qb;
  undefined1 auVar16 [16];
  float fVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  double dVar33;
  undefined1 auVar34 [16];
  double dVar35;
  float fVar36;
  undefined1 local_58 [8];
  float fStack_50;
  float fStack_4c;
  undefined1 local_48 [8];
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  
  fVar14 = (float)((ulong)param_1 >> 0x20);
  fVar15 = (float)param_1;
  pfVar3 = *(float **)(this + 0x50);
  if (pfVar3 == (float *)0x0) {
    fStack_50 = (float)in_XMM0_Dc;
    local_58 = (undefined1  [8])param_1;
    fStack_4c = (float)in_XMM0_Dd;
    uStack_40 = in_XMM1_Qb;
    local_48 = (undefined1  [8])param_2;
    uVar1 = *(ushort *)(this + 0xe8);
  }
  else {
    fVar17 = *pfVar3 * pfVar3[4] - pfVar3[3] * pfVar3[1];
    dVar33 = (double)fVar17;
    dVar35 = (double)CONCAT44(_UNK_005d91b4 & (uint)((ulong)dVar33 >> 0x20),
                              _DAT_005d91b0 & SUB84(dVar33,0));
    if (dVar35 == DAT_005d94e0) {
      if ((fVar17 != 0.0) || (NAN(fVar17))) goto LAB_002d6c87;
LAB_002d6d7c:
      local_28 = *(undefined8 *)(pfVar3 + 4);
      local_38 = *(undefined8 *)pfVar3;
      uStack_30 = *(undefined8 *)(pfVar3 + 2);
    }
    else {
      if ((dVar35 <= DAT_005db368) || (dVar35 <= DAT_005db370 * dVar35)) goto LAB_002d6d7c;
LAB_002d6c87:
      dVar33 = _DAT_005d9000 / dVar33;
      fVar36 = (float)((double)pfVar3[4] * dVar33);
      fVar25 = (float)((double)(float)((uint)pfVar3[3] ^ _DAT_006524b0) * dVar33);
      fVar20 = (float)((double)(float)((uint)pfVar3[1] ^ _DAT_006524b0) * dVar33);
      fVar17 = (float)((double)*pfVar3 * dVar33);
      local_38 = CONCAT44(fVar20,fVar36);
      uStack_30 = CONCAT44(fVar25,(float)((uint)pfVar3[2] ^ _DAT_006524b0) * fVar36 -
                                  fVar20 * pfVar3[5]);
      local_28 = CONCAT44((float)((uint)pfVar3[2] ^ _DAT_006524b0) * fVar25 - pfVar3[5] * fVar17,
                          fVar17);
    }
    fVar25 = (float)param_2 + fVar15;
    fVar36 = (float)((ulong)param_2 >> 0x20) + fVar14;
    fVar21 = fVar15 * (float)local_38 + fVar14 * local_38._4_4_ + (float)uStack_30;
    fVar22 = fVar15 * uStack_30._4_4_ + fVar14 * (float)local_28 + local_28._4_4_;
    fVar23 = fVar15 * (float)uStack_30 + fVar14 * uStack_30._4_4_ + (float)local_28;
    fVar24 = fVar15 * uStack_30._4_4_ + fVar14 * (float)local_28 + local_28._4_4_;
    auVar18._0_4_ = fVar14 * local_38._4_4_ + fVar25 * (float)local_38 + (float)uStack_30;
    auVar18._4_4_ = fVar14 * (float)local_28 + fVar25 * uStack_30._4_4_ + local_28._4_4_;
    auVar18._8_4_ = fVar14 * uStack_30._4_4_ + fVar25 * (float)uStack_30 + (float)local_28;
    auVar18._12_4_ = fVar14 * (float)local_28 + fVar25 * uStack_30._4_4_ + local_28._4_4_;
    fVar14 = fVar15 * (float)local_38 + fVar36 * local_38._4_4_ + (float)uStack_30;
    fVar17 = fVar15 * uStack_30._4_4_ + fVar36 * (float)local_28 + local_28._4_4_;
    fVar20 = fVar15 * (float)uStack_30 + fVar36 * uStack_30._4_4_ + (float)local_28;
    fVar15 = fVar15 * uStack_30._4_4_ + fVar36 * (float)local_28 + local_28._4_4_;
    auVar16._0_8_ =
         CONCAT44(fVar36 * (float)local_28 + fVar25 * uStack_30._4_4_ + local_28._4_4_,
                  fVar36 * local_38._4_4_ + fVar25 * (float)local_38 + (float)uStack_30);
    auVar16._8_4_ = fVar36 * uStack_30._4_4_ + fVar25 * (float)uStack_30 + (float)local_28;
    auVar16._12_4_ = fVar36 * (float)local_28 + fVar25 * uStack_30._4_4_ + local_28._4_4_;
    auVar26._8_4_ = auVar16._8_4_;
    auVar26._0_8_ = auVar16._0_8_;
    auVar26._12_4_ = auVar16._12_4_;
    auVar27._4_4_ = fVar17;
    auVar27._0_4_ = fVar14;
    auVar27._8_4_ = fVar20;
    auVar27._12_4_ = fVar15;
    auVar27 = minps(auVar26,auVar27);
    auVar31._8_4_ = auVar16._8_4_;
    auVar31._0_8_ = auVar16._0_8_;
    auVar31._12_4_ = auVar16._12_4_;
    auVar32 = minps(auVar31,auVar18);
    auVar28._0_4_ = auVar27._0_4_ & -(uint)(fVar14 < auVar18._0_4_);
    auVar28._4_4_ = auVar27._4_4_ & -(uint)(fVar17 < auVar18._4_4_);
    auVar28._8_4_ = auVar27._8_4_ & -(uint)(fVar20 < auVar18._8_4_);
    auVar28._12_4_ = auVar27._12_4_ & -(uint)(fVar15 < auVar18._12_4_);
    auVar34._0_4_ = ~-(uint)(fVar14 < auVar18._0_4_) & auVar32._0_4_;
    auVar34._4_4_ = ~-(uint)(fVar17 < auVar18._4_4_) & auVar32._4_4_;
    auVar34._8_4_ = ~-(uint)(fVar20 < auVar18._8_4_) & auVar32._8_4_;
    auVar34._12_4_ = ~-(uint)(fVar15 < auVar18._12_4_) & auVar32._12_4_;
    auVar9._4_4_ = fVar22;
    auVar9._0_4_ = fVar21;
    auVar9._8_4_ = fVar23;
    auVar9._12_4_ = fVar24;
    _local_58 = minps(auVar34 | auVar28,auVar9);
    auVar29._8_4_ = auVar16._8_4_;
    auVar29._0_8_ = auVar16._0_8_;
    auVar29._12_4_ = auVar16._12_4_;
    auVar27 = maxps(auVar16,auVar18);
    auVar32._4_4_ = fVar17;
    auVar32._0_4_ = fVar14;
    auVar32._8_4_ = fVar20;
    auVar32._12_4_ = fVar15;
    auVar32 = maxps(auVar29,auVar32);
    auVar30._0_4_ = auVar32._0_4_ & -(uint)(auVar18._0_4_ < fVar14);
    auVar30._4_4_ = auVar32._4_4_ & -(uint)(auVar18._4_4_ < fVar17);
    auVar30._8_4_ = auVar32._8_4_ & -(uint)(auVar18._8_4_ < fVar20);
    auVar30._12_4_ = auVar32._12_4_ & -(uint)(auVar18._12_4_ < fVar15);
    auVar19._0_4_ = ~-(uint)(auVar18._0_4_ < fVar14) & auVar27._0_4_;
    auVar19._4_4_ = ~-(uint)(auVar18._4_4_ < fVar17) & auVar27._4_4_;
    auVar19._8_4_ = ~-(uint)(auVar18._8_4_ < fVar20) & auVar27._8_4_;
    auVar19._12_4_ = ~-(uint)(auVar18._12_4_ < fVar15) & auVar27._12_4_;
    auVar10._4_4_ = fVar22;
    auVar10._0_4_ = fVar21;
    auVar10._8_4_ = fVar23;
    auVar10._12_4_ = fVar24;
    auVar27 = maxps(auVar19 | auVar30,auVar10);
    local_48._4_4_ = auVar27._4_4_ - local_58._4_4_;
    local_48._0_4_ = auVar27._0_4_ - local_58._0_4_;
    uStack_40._0_4_ = auVar27._8_4_ - local_58._8_4_;
    uStack_40._4_4_ = auVar27._12_4_ - local_58._12_4_;
    uVar1 = *(ushort *)(this + 0xe8);
  }
  uVar11 = local_58._0_4_;
  if ((uVar1 & 1) != 0) {
    if (Desktop::instance == (Desktop *)0x0) {
                    /* try { // try from 002d6e66 to 002d6e6f has its CatchHandler @ 002d71af */
      pDVar12 = operator_new(0x1d0);
                    /* try { // try from 002d6e73 to 002d6e7a has its CatchHandler @ 002d719c */
      Desktop::Desktop(pDVar12);
      iVar2 = *(int *)(pDVar12 + 0xdc);
      Desktop::instance = pDVar12;
    }
    else {
      iVar2 = *(int *)(Desktop::instance + 0xdc);
    }
    if ((long)iVar2 != 0) {
      lVar13 = 0;
      do {
        plVar4 = *(long **)(*(long *)(Desktop::instance + 0xd0) + lVar13);
        if ((ComponentHelpers *)plVar4[1] == this) {
          if (Desktop::instance == (Desktop *)0x0) {
                    /* try { // try from 002d6fc5 to 002d6fce has its CatchHandler @ 002d716f */
            pDVar12 = operator_new(0x1d0);
                    /* try { // try from 002d6fd2 to 002d6fd9 has its CatchHandler @ 002d716d */
            Desktop::Desktop(pDVar12);
            Desktop::instance = pDVar12;
          }
          fVar15 = *(float *)(Desktop::instance + 0x130);
          fVar14 = (float)(_DAT_005d91c0 & (uint)fVar15);
          if (fVar14 == DAT_005d94c8) {
            if ((fVar15 == DAT_005d9038) && (!NAN(fVar15) && !NAN(DAT_005d9038))) goto LAB_002d7056;
          }
          else {
            fVar17 = (float)((uint)(DAT_005d9054 + fVar15) & _DAT_005d91c0);
            if (fVar17 <= DAT_005d94cc) goto LAB_002d7056;
            fVar20 = DAT_005d9038;
            if (DAT_005d9038 <= fVar14) {
              fVar20 = fVar14;
            }
            if (fVar17 <= fVar20 * DAT_005d94d0) goto LAB_002d7056;
          }
          local_58._4_4_ = 0;
          local_58._0_4_ = (float)uVar11 * fVar15;
          fStack_50 = fStack_50 * fVar15;
          fStack_4c = fStack_4c * fVar15;
          local_48._4_4_ = (float)local_48._4_4_ * fVar15;
          local_48._0_4_ = (float)local_48._0_4_ * fVar15;
          uStack_40._0_4_ = (float)uStack_40 * fVar15;
          uStack_40._4_4_ = uStack_40._4_4_ * fVar15;
LAB_002d7056:
          local_58 = (undefined1  [8])(**(code **)(*plVar4 + 0x58))(local_58._0_4_,plVar4);
          fStack_50 = (float)extraout_XMM0_Dc;
          fStack_4c = (float)extraout_XMM0_Dd;
                    /* try { // try from 002d706a to 002d7072 has its CatchHandler @ 002d718c */
          fVar15 = (float)(**(code **)(*(long *)this + 0x88))(this);
          fVar14 = (float)(_DAT_005d91c0 & (uint)fVar15);
          if (fVar14 == DAT_005d94c8) {
            if ((fVar15 == DAT_005d9038) && (!NAN(fVar15) && !NAN(DAT_005d9038))) {
              return local_58;
            }
          }
          else {
            fVar17 = (float)((uint)(fVar15 + DAT_005d9054) & _DAT_005d91c0);
            if (fVar17 <= DAT_005d94cc) {
              return local_58;
            }
            fVar20 = DAT_005d9038;
            if (DAT_005d9038 <= fVar14) {
              fVar20 = fVar14;
            }
            if (fVar17 <= fVar20 * DAT_005d94d0) {
              return local_58;
            }
          }
          auVar7._4_4_ = fVar15;
          auVar7._0_4_ = fVar15;
          auVar7._8_4_ = fVar15;
          auVar7._12_4_ = fVar15;
          auVar27 = divps(_local_58,auVar7);
          auVar8._4_4_ = fVar15;
          auVar8._0_4_ = fVar15;
          auVar8._8_4_ = fVar15;
          auVar8._12_4_ = fVar15;
          divps(_local_48,auVar8);
          return auVar27._0_8_;
        }
        lVar13 = lVar13 + 8;
      } while ((long)iVar2 * 8 != lVar13);
    }
    return local_58;
  }
  if (*(long *)(this + 0x30) != 0) goto LAB_002d6e51;
  if (Desktop::instance == (Desktop *)0x0) {
                    /* try { // try from 002d6ec8 to 002d6ed1 has its CatchHandler @ 002d7184 */
    pDVar12 = operator_new(0x1d0);
                    /* try { // try from 002d6ed5 to 002d6edc has its CatchHandler @ 002d7171 */
    Desktop::Desktop(pDVar12);
    Desktop::instance = pDVar12;
  }
  fVar15 = *(float *)(Desktop::instance + 0x130);
  fVar14 = (float)(_DAT_005d91c0 & (uint)fVar15);
  if (fVar14 == DAT_005d94c8) {
    if ((fVar15 != DAT_005d9038) || (NAN(fVar15) || NAN(DAT_005d9038))) {
LAB_002d6f3c:
      local_58._4_4_ = (float)local_58._4_4_ * fVar15;
      local_58._0_4_ = (float)uVar11 * fVar15;
      fStack_50 = fStack_50 * fVar15;
      fStack_4c = fStack_4c * fVar15;
      local_48._4_4_ = (float)local_48._4_4_ * fVar15;
      local_48._0_4_ = (float)local_48._0_4_ * fVar15;
      uStack_40._0_4_ = (float)uStack_40 * fVar15;
      uStack_40._4_4_ = uStack_40._4_4_ * fVar15;
    }
  }
  else {
    fVar17 = (float)((uint)(DAT_005d9054 + fVar15) & _DAT_005d91c0);
    if (DAT_005d94cc < fVar17) {
      fVar20 = DAT_005d9038;
      if (DAT_005d9038 <= fVar14) {
        fVar20 = fVar14;
      }
      if (fVar20 * DAT_005d94d0 < fVar17) goto LAB_002d6f3c;
    }
  }
                    /* try { // try from 002d6f5b to 002d6f63 has its CatchHandler @ 002d7194 */
  fVar15 = (float)(**(code **)(*(long *)this + 0x88))(this);
  fVar14 = (float)(_DAT_005d91c0 & (uint)fVar15);
  if (fVar14 == DAT_005d94c8) {
    if ((fVar15 == DAT_005d9038) && (!NAN(fVar15) && !NAN(DAT_005d9038))) goto LAB_002d6e51;
  }
  else {
    fVar17 = (float)((uint)(fVar15 + DAT_005d9054) & _DAT_005d91c0);
    if (fVar17 <= DAT_005d94cc) goto LAB_002d6e51;
    fVar20 = DAT_005d9038;
    if (DAT_005d9038 <= fVar14) {
      fVar20 = fVar14;
    }
    if (fVar17 <= fVar20 * DAT_005d94d0) goto LAB_002d6e51;
  }
  auVar5._4_4_ = fVar15;
  auVar5._0_4_ = fVar15;
  auVar5._8_4_ = fVar15;
  auVar5._12_4_ = fVar15;
  auVar27 = divps(_local_58,auVar5);
  local_58 = auVar27._0_8_;
  auVar6._4_4_ = fVar15;
  auVar6._0_4_ = fVar15;
  auVar6._8_4_ = fVar15;
  auVar6._12_4_ = fVar15;
  divps(_local_48,auVar6);
LAB_002d6e51:
  return CONCAT44((float)local_58._4_4_ - (float)(int)((ulong)*(undefined8 *)(this + 0x38) >> 0x20),
                  (float)local_58._0_4_ - (float)(int)*(undefined8 *)(this + 0x38));
}


