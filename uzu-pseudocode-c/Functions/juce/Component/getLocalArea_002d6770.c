// Function : getLocalArea
// Namespace: juce:Component
// Entry    : 002d6770
// Prototype: undefined8 getLocalArea(undefined8 param_1_00, Component * this, ComponentHelpers * param_3)
// Body     : 002d6770 - 002d6ba1


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* juce::Component::getLocalArea(juce::Component const*, juce::Rectangle<float>) const */

undefined8 __thiscall
juce::Component::getLocalArea(undefined8 param_1_00,Component *this,ComponentHelpers *param_3)

{
  int iVar1;
  long *plVar2;
  float *pfVar3;
  undefined1 auVar4 [16];
  Component *pCVar5;
  undefined1 auVar6 [8];
  ComponentHelpers *pCVar7;
  Desktop *pDVar8;
  long lVar9;
  float fVar10;
  float fVar12;
  undefined8 uVar11;
  undefined4 in_XMM0_Dc;
  undefined4 extraout_XMM0_Dc;
  float fVar13;
  undefined4 in_XMM0_Dd;
  undefined4 extraout_XMM0_Dd;
  float fVar14;
  float fVar15;
  undefined1 in_XMM1 [16];
  undefined1 auVar16 [16];
  float fVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  float fVar25;
  float fVar27;
  undefined1 auVar26 [16];
  float fVar28;
  float fVar32;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  float fVar33;
  float fVar34;
  undefined1 auVar35 [12];
  float fVar37;
  float fVar38;
  undefined1 auVar36 [16];
  undefined1 local_38 [8];
  float fStack_30;
  float fStack_2c;
  undefined1 local_28 [8];
  float fStack_20;
  float fStack_1c;
  
  local_28 = in_XMM1._0_8_;
  fStack_30 = (float)in_XMM0_Dc;
  local_38 = (undefined1  [8])param_1_00;
  fStack_2c = (float)in_XMM0_Dd;
  auVar6 = (undefined1  [8])param_1_00;
  if (param_3 != (ComponentHelpers *)0x0) {
    _local_28 = in_XMM1;
    do {
      uVar11 = local_38;
      if (param_3 == (ComponentHelpers *)this) {
        return uVar11;
      }
      pCVar7 = (ComponentHelpers *)this;
      while (pCVar7 != (ComponentHelpers *)0x0) {
        pCVar7 = *(ComponentHelpers **)(pCVar7 + 0x30);
        if (pCVar7 == param_3) {
          goto LAB_002d6b88;
        }
      }
      if ((*(ushort *)(param_3 + 0xe8) & 1) == 0) {
        local_38._0_4_ = (float)local_38._0_4_ + (float)(int)*(long *)(param_3 + 0x38);
        local_38._4_4_ =
             (float)local_38._4_4_ + (float)(int)((ulong)*(long *)(param_3 + 0x38) >> 0x20);
        fStack_30 = fStack_30 + 0.0;
        fStack_2c = fStack_2c + 0.0;
        if (*(long *)(param_3 + 0x30) == 0) {
                    /* try { // try from 002d67f2 to 002d67fa has its CatchHandler @ 002d6bcd */
          fVar10 = (float)(**(code **)(*(long *)param_3 + 0x88))(param_3);
          fVar15 = (float)((uint)fVar10 & _DAT_005d91c0);
          if (fVar15 == DAT_005d94c8) {
            if ((fVar10 != DAT_005d9038) || (NAN(fVar10) || NAN(DAT_005d9038))) {
LAB_002d6849:
              local_38._4_4_ = (float)local_38._4_4_ * fVar10;
              local_38._0_4_ = (float)local_38._0_4_ * fVar10;
              fStack_30 = fStack_30 * fVar10;
              fStack_2c = fStack_2c * fVar10;
              local_28._4_4_ = (float)local_28._4_4_ * fVar10;
              local_28._0_4_ = (float)local_28._0_4_ * fVar10;
              fStack_20 = fStack_20 * fVar10;
              fStack_1c = fStack_1c * fVar10;
            }
          }
          else {
            fVar17 = (float)((uint)(fVar10 + DAT_005d9054) & _DAT_005d91c0);
            if (DAT_005d94cc < fVar17) {
              fVar12 = DAT_005d9038;
              if (DAT_005d9038 <= fVar15) {
                fVar12 = fVar15;
              }
              if (fVar12 * DAT_005d94d0 < fVar17) goto LAB_002d6849;
            }
          }
          if (Desktop::instance == (Desktop *)0x0) {
                    /* try { // try from 002d6875 to 002d687e has its CatchHandler @ 002d6ba8 */
            pDVar8 = operator_new(0x1d0);
                    /* try { // try from 002d6882 to 002d6889 has its CatchHandler @ 002d6ba6 */
            Desktop::Desktop(pDVar8);
LAB_002d69b0:
            Desktop::instance = pDVar8;
          }
LAB_002d69b7:
          fVar10 = *(float *)(Desktop::instance + 0x130);
          fVar15 = (float)((uint)fVar10 & _DAT_005d91c0);
          if (fVar15 == DAT_005d94c8) {
            if ((fVar10 != DAT_005d9038) || (NAN(fVar10) || NAN(DAT_005d9038))) {
LAB_002d6a0d:
              auVar19._4_4_ = fVar10;
              auVar19._0_4_ = fVar10;
              auVar19._8_4_ = fVar10;
              auVar19._12_4_ = fVar10;
              _local_38 = divps(_local_38,auVar19);
              auVar23._4_4_ = fVar10;
              auVar23._0_4_ = fVar10;
              auVar23._8_4_ = fVar10;
              auVar23._12_4_ = fVar10;
              _local_28 = divps(_local_28,auVar23);
            }
          }
          else {
            fVar17 = (float)((uint)(fVar10 + DAT_005d9054) & _DAT_005d91c0);
            if (DAT_005d94cc < fVar17) {
              fVar12 = DAT_005d9038;
              if (DAT_005d9038 <= fVar15) {
                fVar12 = fVar15;
              }
              if (fVar12 * DAT_005d94d0 < fVar17) goto LAB_002d6a0d;
            }
          }
        }
      }
      else {
        if (Desktop::instance == (Desktop *)0x0) {
                    /* try { // try from 002d68ad to 002d68b6 has its CatchHandler @ 002d6bc5 */
          pDVar8 = operator_new(0x1d0);
                    /* try { // try from 002d68ba to 002d68c1 has its CatchHandler @ 002d6bb2 */
          Desktop::Desktop(pDVar8);
          iVar1 = *(int *)(pDVar8 + 0xdc);
          Desktop::instance = pDVar8;
        }
        else {
          iVar1 = *(int *)(Desktop::instance + 0xdc);
        }
        if ((long)iVar1 != 0) {
          lVar9 = 0;
          do {
            plVar2 = *(long **)(*(long *)(Desktop::instance + 0xd0) + lVar9);
            if ((ComponentHelpers *)plVar2[1] == param_3) {
                    /* try { // try from 002d690b to 002d6913 has its CatchHandler @ 002d6baa */
              fVar10 = (float)(**(code **)(*(long *)param_3 + 0x88))(param_3);
              fVar15 = (float)((uint)fVar10 & _DAT_005d91c0);
              if (fVar15 == DAT_005d94c8) {
                if ((fVar10 != DAT_005d9038) || (NAN(fVar10) || NAN(DAT_005d9038))) {
LAB_002d6962:
                  local_38._4_4_ = 0;
                  local_38._0_4_ = (float)local_38._0_4_ * fVar10;
                  fStack_30 = fStack_30 * fVar10;
                  fStack_2c = fStack_2c * fVar10;
                  local_28._4_4_ = (float)local_28._4_4_ * fVar10;
                  local_28._0_4_ = (float)local_28._0_4_ * fVar10;
                  fStack_20 = fStack_20 * fVar10;
                  fStack_1c = fStack_1c * fVar10;
                }
              }
              else {
                fVar17 = (float)((uint)(fVar10 + DAT_005d9054) & _DAT_005d91c0);
                if (DAT_005d94cc < fVar17) {
                  fVar12 = DAT_005d9038;
                  if (DAT_005d9038 <= fVar15) {
                    fVar12 = fVar15;
                  }
                  if (fVar12 * DAT_005d94d0 < fVar17) goto LAB_002d6962;
                }
              }
              local_38 = (undefined1  [8])(**(code **)(*plVar2 + 0x50))(local_38._0_4_,plVar2);
              fStack_30 = (float)extraout_XMM0_Dc;
              fStack_2c = (float)extraout_XMM0_Dd;
              if (Desktop::instance != (Desktop *)0x0) goto LAB_002d69b7;
                    /* try { // try from 002d699b to 002d69a4 has its CatchHandler @ 002d6ba4 */
              pDVar8 = operator_new(0x1d0);
                    /* try { // try from 002d69a8 to 002d69af has its CatchHandler @ 002d6ba2 */
              Desktop::Desktop(pDVar8);
              goto LAB_002d69b0;
            }
            lVar9 = lVar9 + 8;
          } while ((long)iVar1 * 8 != lVar9);
        }
      }
      pfVar3 = *(float **)(param_3 + 0x50);
      if (pfVar3 != (float *)0x0) {
        fVar33 = (float)local_28._0_4_ + (float)local_38._0_4_;
        fVar37 = (float)local_28._4_4_ + (float)local_38._4_4_;
        fVar10 = pfVar3[2];
        fVar17 = (float)local_38._4_4_ * pfVar3[1];
        fVar12 = (float)local_38._4_4_ * pfVar3[4];
        fVar28 = (float)local_38._0_4_ * *pfVar3;
        fVar32 = (float)local_38._0_4_ * pfVar3[3];
        fVar15 = pfVar3[5];
        auVar16._0_4_ = fVar28 + fVar17 + fVar10;
        auVar16._4_4_ = fVar32 + fVar12 + fVar15;
        auVar16._8_4_ = (float)local_38._0_4_ * 0.0 + (float)local_38._4_4_ * 0.0 + 0.0;
        auVar16._12_4_ = (float)local_38._0_4_ * 0.0 + (float)local_38._4_4_ * 0.0 + 0.0;
        fVar25 = fVar33 * *pfVar3;
        fVar27 = fVar33 * pfVar3[3];
        fVar17 = fVar17 + fVar25 + fVar10;
        fVar12 = fVar12 + fVar27 + fVar15;
        fVar13 = (float)local_38._4_4_ * 0.0 + fVar33 * 0.0 + 0.0;
        fVar14 = (float)local_38._4_4_ * 0.0 + fVar33 * 0.0 + 0.0;
        fVar34 = fVar37 * pfVar3[1];
        fVar38 = fVar37 * pfVar3[4];
        auVar29._0_4_ = fVar28 + fVar34 + fVar10;
        auVar29._4_4_ = fVar32 + fVar38 + fVar15;
        auVar29._8_4_ = (float)local_38._0_4_ * 0.0 + fVar37 * 0.0 + 0.0;
        auVar29._12_4_ = (float)local_38._0_4_ * 0.0 + fVar37 * 0.0 + 0.0;
        auVar35._0_8_ = CONCAT44(fVar38 + fVar27 + fVar15,fVar34 + fVar25 + fVar10);
        auVar35._8_4_ = fVar37 * 0.0 + fVar33 * 0.0 + 0.0;
        auVar36._12_4_ = fVar37 * 0.0 + fVar33 * 0.0 + 0.0;
        auVar36._0_12_ = auVar35;
        auVar18._8_4_ = auVar35._8_4_;
        auVar18._0_8_ = auVar35._0_8_;
        auVar18._12_4_ = auVar36._12_4_;
        auVar19 = minps(auVar18,auVar29);
        auVar22._12_4_ = auVar36._12_4_;
        auVar22._0_12_ = auVar35;
        auVar23 = maxps(auVar22,auVar29);
        auVar30._12_4_ = auVar36._12_4_;
        auVar30._0_12_ = auVar35;
        auVar31._4_4_ = fVar12;
        auVar31._0_4_ = fVar17;
        auVar31._8_4_ = fVar13;
        auVar31._12_4_ = fVar14;
        auVar31 = minps(auVar30,auVar31);
        auVar20._0_4_ = auVar19._0_4_ & -(uint)(auVar29._0_4_ < fVar17);
        auVar20._4_4_ = auVar19._4_4_ & -(uint)(auVar29._4_4_ < fVar12);
        auVar20._8_4_ = auVar19._8_4_ & -(uint)(auVar29._8_4_ < fVar13);
        auVar20._12_4_ = auVar19._12_4_ & -(uint)(auVar29._12_4_ < fVar14);
        auVar26._0_4_ = ~-(uint)(auVar29._0_4_ < fVar17) & auVar31._0_4_;
        auVar26._4_4_ = ~-(uint)(auVar29._4_4_ < fVar12) & auVar31._4_4_;
        auVar26._8_4_ = ~-(uint)(auVar29._8_4_ < fVar13) & auVar31._8_4_;
        auVar26._12_4_ = ~-(uint)(auVar29._12_4_ < fVar14) & auVar31._12_4_;
        _local_38 = minps(auVar26 | auVar20,auVar16);
        auVar4._4_4_ = fVar12;
        auVar4._0_4_ = fVar17;
        auVar4._8_4_ = fVar13;
        auVar4._12_4_ = fVar14;
        auVar19 = maxps(auVar36,auVar4);
        auVar24._0_4_ = auVar23._0_4_ & -(uint)(fVar17 < auVar29._0_4_);
        auVar24._4_4_ = auVar23._4_4_ & -(uint)(fVar12 < auVar29._4_4_);
        auVar24._8_4_ = auVar23._8_4_ & -(uint)(fVar13 < auVar29._8_4_);
        auVar24._12_4_ = auVar23._12_4_ & -(uint)(fVar14 < auVar29._12_4_);
        auVar21._0_4_ = ~-(uint)(fVar17 < auVar29._0_4_) & auVar19._0_4_;
        auVar21._4_4_ = ~-(uint)(fVar12 < auVar29._4_4_) & auVar19._4_4_;
        auVar21._8_4_ = ~-(uint)(fVar13 < auVar29._8_4_) & auVar19._8_4_;
        auVar21._12_4_ = ~-(uint)(fVar14 < auVar29._12_4_) & auVar19._12_4_;
        auVar19 = maxps(auVar21 | auVar24,auVar16);
        local_28._4_4_ = auVar19._4_4_ - local_38._4_4_;
        local_28._0_4_ = auVar19._0_4_ - local_38._0_4_;
        fStack_20 = auVar19._8_4_ - local_38._8_4_;
        fStack_1c = auVar19._12_4_ - local_38._12_4_;
      }
      param_3 = *(ComponentHelpers **)(param_3 + 0x30);
      auVar6 = local_38;
    } while (param_3 != (ComponentHelpers *)0x0);
  }
  local_38 = auVar6;
  pCVar5 = this;
  do {
    param_3 = (ComponentHelpers *)pCVar5;
    pCVar5 = (Component *)*(ComponentHelpers **)(param_3 + 0x30);
  } while (*(ComponentHelpers **)(param_3 + 0x30) != (ComponentHelpers *)0x0);
  uVar11 = detail::ComponentHelpers::convertFromParentSpace<juce::Rectangle<float>>
                     (local_38,local_28,param_3);
  if (param_3 != (ComponentHelpers *)this) {
LAB_002d6b88:
    uVar11 = detail::ComponentHelpers::convertFromDistantParentSpace<juce::Rectangle<float>>
                       (uVar11,local_28,(long)param_3,(ComponentHelpers *)this);
  }
  return uVar11;
}


