// Function : restoreMouseIfHidden
// Namespace: juce:Slider:Pimpl
// Entry    : 002e5450
// Prototype: undefined restoreMouseIfHidden(undefined8 param_1, undefined8 param_2, undefined8 param_3, Pimpl * this)
// Body     : 002e5450 - 002e5d15


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* juce::Slider::Pimpl::restoreMouseIfHidden() */

void __thiscall
juce::Slider::Pimpl::restoreMouseIfHidden
          (undefined8 param_1,undefined8 param_2,double param_3,Pimpl *this)

{
  float *pfVar1;
  long *plVar2;
  undefined1 auVar3 [16];
  double dVar4;
  long *plVar5;
  Desktop *pDVar6;
  long *plVar7;
  long lVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  float fVar13;
  float fVar14;
  undefined8 uVar15;
  long lVar17;
  undefined1 auVar18 [16];
  double dVar16;
  undefined1 auVar19 [16];
  undefined8 extraout_XMM0_Qb;
  float fVar20;
  double dVar21;
  double dVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  float fVar25;
  uint uVar26;
  undefined4 uVar27;
  float fVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 local_138 [16];
  undefined1 local_128 [8];
  float fStack_120;
  float fStack_11c;
  undefined1 local_118 [16];
  double local_100;
  float local_f8;
  float local_f4;
  long *local_f0;
  undefined8 local_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined1 local_d8 [8];
  float fStack_d0;
  float fStack_cc;
  float local_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  float local_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  undefined1 local_a8 [16];
  undefined8 local_98;
  float fStack_90;
  float fStack_8c;
  Pimpl *local_88;
  long *local_80;
  long local_78;
  undefined1 *local_70;
  float local_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float local_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float local_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  
  auVar30._8_8_ = param_2;
  auVar30._0_8_ = param_1;
  if (Desktop::instance == (Desktop *)0x0) {
    pDVar6 = operator_new(0x1d0);
                    /* try { // try from 002e548f to 002e5496 has its CatchHandler @ 002e5d16 */
    auVar30 = Desktop::Desktop(pDVar6);
    lVar8 = *(long *)(pDVar6 + 0x40);
    iVar9 = *(int *)(lVar8 + 0x44);
    Desktop::instance = pDVar6;
  }
  else {
    lVar8 = *(long *)(Desktop::instance + 0x40);
    iVar9 = *(int *)(lVar8 + 0x44);
  }
  if ((long)iVar9 != 0) {
    local_f0 = *(long **)(lVar8 + 0x38);
    local_80 = local_f0 + iVar9;
    local_88 = this;
    do {
      if (((MouseInputSourceImpl *)*local_f0)[0x40] != (MouseInputSourceImpl)0x0) {
        detail::MouseInputSourceImpl::enableUnboundedMouseMovement
                  (auVar30._0_8_,auVar30._8_8_,param_3,(MouseInputSourceImpl *)*local_f0,0);
        if (*(int *)(this + 0x1e0) == 1) {
          (**(code **)(**(long **)(this + 0x80) + 0x10))(local_138);
                    /* try { // try from 002e5594 to 002e559f has its CatchHandler @ 002e5d5c */
          uVar15 = (**(code **)(local_138._0_8_ + 0x20))(local_138 + 8);
          local_128 = (undefined1  [8])uVar15;
                    /* try { // try from 002e55a4 to 002e55a9 has its CatchHandler @ 002e5d54 */
          (**(code **)(local_138._0_8_ + 0x58))(local_138 + 8);
        }
        else if (*(int *)(this + 0x1e0) == 2) {
          (**(code **)(**(long **)(this + 0xb0) + 0x10))(local_138);
                    /* try { // try from 002e555d to 002e556d has its CatchHandler @ 002e5d6c */
          uVar15 = (**(code **)(local_138._0_8_ + 0x20))(local_138 + 8);
          local_128 = (undefined1  [8])uVar15;
                    /* try { // try from 002e5572 to 002e5577 has its CatchHandler @ 002e5d64 */
          (**(code **)(local_138._0_8_ + 0x58))(local_138 + 8);
        }
        else {
          (**(code **)(**(long **)(this + 0x50) + 0x10))(local_138);
                    /* try { // try from 002e55c1 to 002e55d1 has its CatchHandler @ 002e5d4c */
          uVar15 = (**(code **)(local_138._0_8_ + 0x20))(local_138 + 8);
          local_128 = (undefined1  [8])uVar15;
                    /* try { // try from 002e55d6 to 002e55db has its CatchHandler @ 002e5d44 */
          (**(code **)(local_138._0_8_ + 0x58))(local_138 + 8);
        }
        uVar26 = *(uint *)(this + 0x20);
        if ((uVar26 & 0xfffffffc) == 4) {
          local_118._8_8_ = 0;
          local_118._0_8_ = *(ulong *)(*local_f0 + 0x70);
          if (Desktop::instance == (Desktop *)0x0) {
                    /* try { // try from 002e560c to 002e5615 has its CatchHandler @ 002e5d3c */
            pDVar6 = operator_new(0x1d0);
                    /* try { // try from 002e5619 to 002e5620 has its CatchHandler @ 002e5d29 */
            Desktop::Desktop(pDVar6);
            Desktop::instance = pDVar6;
          }
          fVar13 = *(float *)(Desktop::instance + 0x130);
          fVar20 = (float)((uint)fVar13 & _DAT_005d91c0);
          if (fVar20 == DAT_005d94c8) {
            if ((fVar13 != DAT_005d9038) || (NAN(fVar13) || NAN(DAT_005d9038))) {
LAB_002e567e:
              auVar18._4_4_ = fVar13;
              auVar18._0_4_ = fVar13;
              auVar18._8_4_ = fVar13;
              auVar18._12_4_ = fVar13;
              local_118 = divps(local_118,auVar18);
            }
          }
          else {
            fVar25 = (float)((uint)(fVar13 + DAT_005d9054) & _DAT_005d91c0);
            if (DAT_005d94cc < fVar25) {
              fVar14 = DAT_005d9038;
              if (DAT_005d9038 <= fVar20) {
                fVar14 = fVar20;
              }
              if (fVar14 * DAT_005d94d0 < fVar25) goto LAB_002e567e;
            }
          }
          local_98 = (double)*(int *)(this + 0x1e4);
          local_100 = (double)(**(code **)(**(long **)(this + 0x18) + 0x1c8))
                                        (*(undefined8 *)(this + 400));
          dVar16 = (double)(**(code **)(**(long **)(this + 0x18) + 0x1c8))(local_128);
          local_f8 = (float)((local_100 - dVar16) * local_98);
          uVar27 = local_118._4_4_;
          if (*(int *)(this + 0x20) == 6) {
            fVar13 = (float)local_118._0_4_ + DAT_005d9058;
          }
          else if (*(int *)(this + 0x20) == 5) {
            fVar13 = (float)local_118._0_4_ - local_f8;
            local_f8 = 0.0;
          }
          else {
            fVar13 = local_f8 * DAT_005d98c8;
            local_f8 = local_f8 * DAT_005d9044;
            fVar13 = fVar13 + (float)local_118._0_4_;
            local_118._8_4_ = 0;
            local_118._12_4_ = 0;
            uVar27 = 0;
          }
          local_e8 = CONCAT44(uVar27,fVar13);
          auVar23._4_4_ = local_118._4_4_;
          auVar23._0_4_ = local_118._4_4_;
          auVar23._8_4_ = local_118._4_4_;
          auVar23._12_4_ = local_118._4_4_;
          lVar8 = *(long *)(this + 0x18);
          auVar3._8_8_ = 0;
          auVar3._0_8_ = *(ulong *)(lVar8 + 0x40);
          auVar29 = auVar3 << 0x40;
          uStack_e0 = local_118._8_4_;
          uStack_dc = local_118._12_4_;
          do {
            local_118 = auVar23;
            local_138 = auVar29;
            local_78 = lVar8;
            local_70 = local_138;
            auVar29 = detail::ComponentHelpers::
                      convertToParentSpace<juce::Rectangle<int>>(juce::Component_const&,juce::Rectangle<int>)
                      ::{lambda()#1}::operator()((_lambda___1_ *)&local_78);
            pfVar1 = *(float **)(lVar8 + 0x50);
            if (pfVar1 != (float *)0x0) {
              local_b8 = (float)auVar29._0_4_;
              fVar20 = (float)(auVar29._0_4_ + auVar29._8_4_);
              local_c8 = (float)auVar29._4_4_;
              fStack_c4 = (float)(auVar29._12_4_ + auVar29._4_4_);
              fStack_c0 = 0.0;
              fStack_bc = 0.0;
              fVar13 = pfVar1[1];
              fStack_90 = fVar13 * fStack_c4;
              fVar25 = *pfVar1 * local_b8;
              fStack_3c = pfVar1[2];
              fVar28 = fVar25 + fVar13 * local_c8 + fStack_3c;
              local_d8._0_4_ = pfVar1[4];
              local_128._0_4_ = pfVar1[5];
              fVar25 = fStack_90 + fVar25 + fStack_3c;
              fVar14 = *pfVar1 * fVar20;
              local_48 = fStack_3c + fVar14 + fVar13 * local_c8;
              fStack_64 = fStack_3c + fVar14 + fStack_90;
              fStack_40 = fStack_3c + fVar14 + fVar13 * 0.0;
              fStack_3c = fStack_3c + fVar14 + fVar13 * 0.0;
              local_98 = (double)CONCAT44(fStack_90,fVar25);
              if (local_48 <= fVar25) {
                fVar25 = local_48;
              }
              local_68 = fStack_64;
              if (fVar25 <= fStack_64) {
                local_68 = fVar25;
              }
              local_100 = (double)CONCAT44(local_100._4_4_,fVar28);
              if (fVar28 <= local_68) {
                local_68 = fVar28;
              }
              iVar9 = -0x80000000;
              iVar12 = -0x80000000;
              fVar13 = pfVar1[3];
              fStack_8c = fStack_90;
              fStack_60 = fStack_64;
              fStack_5c = fStack_64;
              local_58 = fStack_64;
              fStack_54 = fStack_64;
              fStack_50 = fStack_64;
              fStack_4c = fStack_64;
              fStack_44 = fStack_64;
              if (DAT_00653430 < local_68) {
                _local_128 = ZEXT416((uint)local_128._0_4_);
                local_a8 = ZEXT416((uint)fVar20);
                fStack_c0 = 0.0;
                fStack_bc = 0.0;
                _local_d8 = ZEXT416((uint)local_d8._0_4_);
                local_f4 = pfVar1[3];
                fVar13 = floorf(local_68);
                iVar12 = (int)fVar13;
                fVar20 = (float)local_a8._0_4_;
                fVar13 = local_f4;
              }
              fStack_b4 = (float)local_d8._0_4_ * fStack_c4;
              fVar25 = local_b8 * fVar13 + (float)local_d8._0_4_ * local_c8 + (float)local_128._0_4_
              ;
              local_b8 = fStack_b4 + local_b8 * fVar13 + (float)local_128._0_4_;
              fVar20 = fVar20 * fVar13;
              fVar13 = (float)local_128._0_4_ + fVar20 + (float)local_d8._0_4_ * local_c8;
              local_c8 = (float)local_128._0_4_ + fVar20 + fStack_b4;
              fStack_120 = (float)local_128._0_4_ + fVar20 + (float)local_d8._0_4_ * fStack_c0;
              fStack_11c = (float)local_128._0_4_ + fVar20 + (float)local_d8._0_4_ * fStack_bc;
              fVar20 = local_b8;
              if (fVar13 <= local_b8) {
                fVar20 = fVar13;
              }
              local_d8._0_4_ = local_c8;
              if (fVar20 <= local_c8) {
                local_d8._0_4_ = fVar20;
              }
              local_a8._0_4_ = fVar25;
              if (fVar25 <= (float)local_d8._0_4_) {
                local_d8._0_4_ = fVar25;
              }
              local_128._4_4_ = local_c8;
              local_128._0_4_ = fVar13;
              local_d8._4_4_ = local_c8;
              fStack_d0 = local_c8;
              fStack_cc = local_c8;
              fVar20 = (float)local_d8._0_4_;
              fStack_c4 = local_c8;
              fStack_c0 = local_c8;
              fStack_bc = local_c8;
              fStack_b0 = fStack_b4;
              fStack_ac = fStack_b4;
              if (DAT_00653430 < (float)local_d8._0_4_) {
                fVar13 = floorf((float)local_d8._0_4_);
                iVar9 = (int)fVar13;
                fVar13 = (float)local_128._0_4_;
                fVar20 = (float)local_d8._0_4_;
              }
              fVar25 = (float)local_98;
              if ((float)local_98 <= local_48) {
                fVar25 = local_48;
              }
              fVar14 = local_58;
              if (local_58 <= fVar25) {
                fVar14 = fVar25;
              }
              if (fVar14 <= local_100._0_4_) {
                fVar14 = local_100._0_4_;
              }
              fVar25 = (fVar14 - local_68) + local_68;
              iVar10 = 0x7fffffff;
              iVar11 = 0x7fffffff;
              if (fVar25 < DAT_00653434) {
                fVar13 = ceilf(fVar25);
                iVar11 = (int)fVar13;
                fVar13 = (float)local_128._0_4_;
                fVar20 = (float)local_d8._0_4_;
              }
              fVar25 = local_b8;
              if (local_b8 <= fVar13) {
                fVar25 = fVar13;
              }
              auVar24._4_4_ = fStack_c4;
              auVar24._0_4_ = local_c8;
              auVar24._8_4_ = fStack_c0;
              auVar24._12_4_ = fStack_bc;
              if (local_c8 <= fVar25) {
                auVar24._0_4_ = fVar25;
              }
              if (auVar24._0_4_ <= (float)local_a8._0_4_) {
                auVar24._0_4_ = local_a8._0_4_;
              }
              fVar20 = (auVar24._0_4_ - fVar20) + fVar20;
              if (fVar20 < DAT_00653434) {
                fVar13 = ceilf(fVar20);
                iVar10 = (int)fVar13;
              }
              auVar29._4_4_ = iVar9;
              auVar29._0_4_ = iVar12;
              auVar29._12_4_ = iVar10 - iVar9;
              auVar29._8_4_ = iVar11 - iVar12;
            }
            this = local_88;
            lVar8 = *(long *)(lVar8 + 0x30);
            auVar23 = local_118;
          } while (lVar8 != 0);
          iVar9 = auVar29._12_4_;
          if (iVar9 < 9) {
            iVar9 = 8;
          }
          fVar13 = (float)(auVar29._0_4_ + 4);
          fVar20 = (float)(auVar29._4_4_ + 4);
          iVar12 = auVar29._8_4_ + -8;
          if (auVar29._8_4_ < 9) {
            iVar12 = 0;
          }
          fVar14 = (float)local_118._0_4_ + local_f8;
          fVar25 = (float)iVar12 + fVar13;
          if ((float)local_e8 <= (float)iVar12 + fVar13) {
            fVar25 = (float)local_e8;
          }
          fVar28 = (float)(iVar9 + -8) + fVar20;
          if (fVar14 <= fVar28) {
            fVar28 = fVar14;
          }
          plVar2 = *(long **)(local_88 + 0x18);
          plVar5 = plVar2;
          do {
            plVar7 = plVar5;
            plVar5 = (long *)plVar7[6];
          } while ((long *)plVar7[6] != (long *)0x0);
          uVar26 = (uint)fVar13 & -(uint)((float)local_e8 < fVar13);
          uVar27 = 0;
          local_e8 = CONCAT44(~-(uint)(fVar14 < fVar20) & (uint)fVar28 |
                              (uint)fVar20 & -(uint)(fVar14 < fVar20),
                              ~-(uint)((float)local_e8 < fVar13) & (uint)fVar25 | uVar26);
          uStack_e0 = 0;
          uStack_dc = 0;
          uVar15 = detail::ComponentHelpers::convertFromParentSpace<juce::Point<float>>
                             (local_e8,plVar7);
          if (plVar7 != plVar2) {
            uVar15 = detail::ComponentHelpers::convertFromDistantParentSpace<juce::Point<float>>
                               (uVar15,(long)plVar7,plVar2);
          }
          param_3 = (double)CONCAT44(uVar27,uVar26);
          *(undefined8 *)(this + 0x1c8) = uVar15;
          *(undefined8 *)(this + 0x1d0) = uVar15;
          *(undefined8 *)(this + 400) = *(undefined8 *)(this + 0x188);
          lVar17 = local_e8;
        }
        else {
          if (*(double *)(this + 0x100) <= *(double *)(this + 0xf8)) {
            dVar16 = DAT_005db338;
          }
          else {
            dVar16 = 0.0;
            if ((*(double *)(this + 0xf8) <= (double)local_128) &&
               (dVar16 = _DAT_005d9000, (double)local_128 <= *(double *)(this + 0x100))) {
              dVar16 = (double)(**(code **)(**(long **)(this + 0x18) + 0x1c8))(local_128);
              uVar26 = *(uint *)(this + 0x20);
            }
          }
          dVar21 = _DAT_005d9000 - dVar16;
          dVar22 = dVar21;
          dVar4 = dVar21;
          if ((uVar26 != 8) &&
             (dVar22 = dVar16, dVar4 = dVar16, (0xa05U >> (uVar26 - 1 & 0x1f) & 1) != 0)) {
            dVar22 = dVar21;
          }
          if (0xb < uVar26 - 1) {
            dVar22 = dVar4;
          }
          param_3 = (double)*(int *)(this + 0x1dc) * dVar22 + (double)*(int *)(this + 0x1d8);
          fVar13 = (float)param_3;
          lVar8 = *(long *)(this + 0x18);
          if ((uVar26 < 0xc) && ((0xa05U >> (uVar26 & 0x1f) & 1) != 0)) {
            fVar20 = fVar13;
            if (0xc < uVar26) goto LAB_002e5800;
LAB_002e57f6:
            if ((0x140aU >> (uVar26 & 0x1f) & 1) == 0) goto LAB_002e5800;
          }
          else {
            fVar20 = (float)*(int *)(lVar8 + 0x40) * DAT_005d9044;
            if (uVar26 < 0xd) goto LAB_002e57f6;
LAB_002e5800:
            fVar13 = (float)*(int *)(lVar8 + 0x44) * DAT_005d9044;
          }
          auVar19._4_4_ = fVar13;
          auVar19._0_4_ = fVar20;
          auVar19._8_8_ = 0;
          do {
            lVar17 = auVar19._0_8_;
            if (lVar8 == 0) break;
            local_138._8_8_ = (_lambda___1_ *)&local_78;
            local_138._0_8_ = lVar8;
            local_78 = lVar17;
            auVar19._0_8_ =
                 detail::ComponentHelpers::
                 convertToParentSpace<juce::Point<float>>(juce::Component_const&,juce::Point<float>)
                 ::{lambda()#1}::operator()((_lambda___1_ *)local_138);
            auVar19._8_8_ = extraout_XMM0_Qb;
            pfVar1 = *(float **)(lVar8 + 0x50);
            if (pfVar1 != (float *)0x0) {
              fVar13 = (float)auVar19._0_8_;
              fVar20 = (float)(auVar19._0_8_ >> 0x20);
              param_3 = (double)CONCAT44(pfVar1[3],*pfVar1);
              auVar19._0_4_ = fVar13 * *pfVar1 + pfVar1[1] * fVar20 + pfVar1[2];
              auVar19._4_4_ = fVar13 * pfVar1[3] + pfVar1[4] * fVar20 + pfVar1[5];
              auVar19._8_4_ = fVar13 * 0.0 + fVar20 * 0.0 + 0.0;
              auVar19._12_4_ = fVar13 * 0.0 + fVar20 * 0.0 + 0.0;
            }
            lVar17 = auVar19._0_8_;
            lVar8 = *(long *)(lVar8 + 0x30);
          } while (lVar8 != 0);
        }
        auVar30 = detail::MouseInputSourceImpl::setScreenPosition(lVar17);
      }
      local_f0 = local_f0 + 1;
    } while (local_f0 != local_80);
  }
  return;
}


