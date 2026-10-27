// Function : checkSizeConstraint
// Namespace: juce:JuceVST3EditController:JuceVST3Editor
// Entry    : 001b6280
// Prototype: undefined8 checkSizeConstraint(JuceVST3Editor * this, ulong * param_1, undefined8 param_2, undefined8 param_3, uint * param_4, undefined8 param_5)
// Body     : 001b6280 - 001b6992


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* juce::JuceVST3EditController::JuceVST3Editor::checkSizeConstraint(Steinberg::ViewRect*) */

undefined8 __thiscall
juce::JuceVST3EditController::JuceVST3Editor::checkSizeConstraint
          (JuceVST3Editor *this,ulong *param_1,undefined8 param_2,undefined8 param_3,uint *param_4,
          undefined8 param_5)

{
  ulong uVar1;
  Component *this_00;
  ComponentBoundsConstrainer *this_01;
  bool bVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  int iVar5;
  int iVar6;
  Desktop *pDVar7;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  ComponentHelpers *pCVar8;
  undefined1 *puVar9;
  float fVar10;
  double dVar11;
  double dVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  float fVar15;
  float fVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar21 [16];
  undefined1 auVar20 [16];
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  uint in_XMM6_Db;
  uint in_XMM6_Dc;
  uint in_XMM6_Dd;
  float fVar30;
  float fVar31;
  undefined8 local_a8;
  undefined8 local_98;
  float local_88;
  uint uStack_84;
  
  if (param_1 == (ulong *)0x0) {
    return 1;
  }
  pCVar8 = *(ComponentHelpers **)(this + 0xd8);
  if (pCVar8 == (ComponentHelpers *)0x0) {
    return 1;
  }
  this_00 = *(Component **)(pCVar8 + 0xf0);
  if (this_00 == (Component *)0x0) {
    return 0;
  }
  if (this_00[0x108] == (Component)0x0) {
    auVar14 = Component::getLocalBounds(this_00);
    Component::getLocalArea(pCVar8,(ComponentHelpers *)this_00,auVar14._0_8_,auVar14._8_8_);
    auVar14._0_8_ = *param_1;
    pDVar7 = Desktop::getInstance();
    fVar10 = *(float *)(pDVar7 + 0x130);
    local_98._0_4_ = (float)auVar14._0_8_;
    local_98._4_4_ = (float)(auVar14._0_8_ >> 0x20);
    auVar14._0_8_ = CONCAT44((float)(int)local_98._4_4_,(float)(int)(float)local_98);
    auVar14._8_8_ = 0;
    fVar22 = (float)(_DAT_005d91c0 & (uint)fVar10);
    if (fVar22 == DAT_005d94c8) {
      if ((fVar10 != DAT_005d9038) || (NAN(fVar10) || NAN(DAT_005d9038))) {
LAB_001b6579:
        auVar19._4_4_ = fVar10;
        auVar19._0_4_ = fVar10;
        auVar19._8_4_ = fVar10;
        auVar19._12_4_ = fVar10;
        auVar14 = divps(auVar14,auVar19);
      }
    }
    else {
      fVar24 = (float)((uint)(DAT_005d9054 + fVar10) & _DAT_005d91c0);
      if (DAT_005d94cc < fVar24) {
        fVar15 = DAT_005d9038;
        if (DAT_005d9038 <= fVar22) {
          fVar15 = fVar22;
        }
        if (fVar15 * DAT_005d94d0 < fVar24) goto LAB_001b6579;
      }
    }
    dVar11 = (double)(float)auVar14._0_8_ + _DAT_005d9a90;
    dVar12 = (double)(float)(auVar14._0_8_ >> 0x20) + _UNK_005d9a98;
    *param_1 = (ulong)dVar11 & 0xffffffff | (long)dVar12 << 0x20;
    iVar6 = SUB84(dVar11,0);
    *(int *)(param_1 + 1) = (int)extraout_RDX + iVar6;
    iVar5 = SUB84(dVar12,0);
    *(int *)((long)param_1 + 0xc) = iVar5 + (int)((ulong)extraout_RDX >> 0x20);
    local_98._0_4_ = (float)iVar6;
    local_98._4_4_ = (float)iVar5;
    local_a8 = CONCAT44((float)(int)(param_1[1] >> 0x20) - local_98._4_4_,
                        (float)(int)param_1[1] - (float)local_98);
    pDVar7 = Desktop::getInstance();
    fVar10 = *(float *)(pDVar7 + 0x130);
    fVar22 = (float)(_DAT_005d91c0 & (uint)fVar10);
    if (fVar22 == DAT_005d94c8) goto LAB_001b66f6;
    fVar24 = (float)((uint)(DAT_005d9054 + fVar10) & _DAT_005d91c0);
    if (fVar24 <= DAT_005d94cc) goto LAB_001b6737;
    fVar15 = DAT_005d9038;
    if (DAT_005d9038 <= fVar22) {
      fVar15 = fVar22;
    }
    if (fVar24 <= fVar15 * DAT_005d94d0) goto LAB_001b6737;
  }
  else {
    this_01 = *(ComponentBoundsConstrainer **)(this_00 + 0x140);
    if (this_01 == (ComponentBoundsConstrainer *)0x0) {
      return 0;
    }
    auVar14._0_8_ = *param_1;
    uVar1 = param_1[1];
    pDVar7 = Desktop::getInstance();
    fVar10 = *(float *)(pDVar7 + 0x130);
    local_98._0_4_ = (float)auVar14._0_8_;
    local_98._4_4_ = (float)(auVar14._0_8_ >> 0x20);
    auVar13._0_8_ = CONCAT44((float)(int)local_98._4_4_,(float)(int)(float)local_98);
    auVar13._8_8_ = 0;
    local_a8._0_4_ = (float)uVar1;
    local_a8._4_4_ = (float)(uVar1 >> 0x20);
    auVar17._0_4_ = (float)(int)(float)local_a8 - (float)(int)(float)local_98;
    auVar17._4_4_ = (float)(int)local_a8._4_4_ - (float)(int)local_98._4_4_;
    auVar17._8_8_ = 0;
    fVar22 = (float)(_DAT_005d91c0 & (uint)fVar10);
    local_98 = auVar13._0_8_;
    if (fVar22 == DAT_005d94c8) {
      if ((fVar10 != DAT_005d9038) || (NAN(fVar10) || NAN(DAT_005d9038))) {
LAB_001b6360:
        auVar3._4_4_ = fVar10;
        auVar3._0_4_ = fVar10;
        auVar3._8_4_ = fVar10;
        auVar3._12_4_ = fVar10;
        auVar14 = divps(auVar13,auVar3);
        local_98 = auVar14._0_8_;
        auVar4._4_4_ = fVar10;
        auVar4._0_4_ = fVar10;
        auVar4._8_4_ = fVar10;
        auVar4._12_4_ = fVar10;
        auVar17 = divps(auVar17,auVar4);
      }
    }
    else {
      fVar24 = (float)((uint)(DAT_005d9054 + fVar10) & _DAT_005d91c0);
      if (DAT_005d94cc < fVar24) {
        fVar15 = DAT_005d9038;
        if (DAT_005d9038 <= fVar22) {
          fVar15 = fVar22;
        }
        if (fVar15 * DAT_005d94d0 < fVar24) goto LAB_001b6360;
      }
    }
    pCVar8 = *(ComponentHelpers **)(this + 0xd8);
    Component::getLocalArea(local_98,this_00,pCVar8);
    fVar25 = (float)*(int *)(this_01 + 8);
    fVar10 = (float)*(int *)(this_01 + 0xc);
    fVar28 = (float)*(int *)(this_01 + 0x10);
    fVar22 = (float)*(int *)(this_01 + 0x14);
    fVar15 = auVar17._0_4_;
    fVar24 = fVar10;
    if (fVar15 <= fVar10) {
      fVar24 = fVar15;
    }
    fVar16 = auVar17._4_4_;
    fVar15 = (float)(-(uint)(fVar15 < fVar25) & (uint)fVar25 |
                    ~-(uint)(fVar15 < fVar25) & (uint)fVar24);
    local_a8 = (ulong)(uint)fVar15;
    auVar14._0_8_ = local_a8;
    fVar24 = fVar22;
    if (fVar16 <= fVar22) {
      fVar24 = fVar16;
    }
    auVar18._0_4_ = ~-(uint)(fVar16 < fVar28) & (uint)fVar24;
    auVar18._4_4_ = ~(uint)fVar16 & in_XMM6_Db;
    auVar18._8_4_ = ~(uint)fVar16 & in_XMM6_Dc;
    auVar18._12_4_ = ~(uint)fVar16 & in_XMM6_Dd;
    auVar18 = ZEXT416(-(uint)(fVar16 < fVar28) & (uint)fVar28) | auVar18;
    dVar11 = (double)ComponentBoundsConstrainer::getFixedAspectRatio(this_01);
    fVar16 = (float)dVar11;
    fVar24 = (float)(_DAT_005d91c0 & (uint)fVar16);
    local_88 = auVar18._0_4_;
    uStack_84 = auVar18._4_4_;
    if (fVar24 == DAT_005d94c8) {
      if ((fVar16 != 0.0) || (NAN(fVar16))) goto LAB_001b643e;
LAB_001b666c:
      local_a8 = auVar14._0_8_;
    }
    else {
      if ((fVar24 <= DAT_005d94cc) || (fVar24 <= DAT_005d94d0 * fVar24)) goto LAB_001b666c;
LAB_001b643e:
      if (detail::PluginUtilities::getHostType()::hostType == '\0') {
        puVar9 = &detail::PluginUtilities::getHostType()::hostType;
        iVar6 = __cxa_guard_acquire();
        if (iVar6 != 0) {
                    /* try { // try from 001b6977 to 001b697b has its CatchHandler @ 001b6993 */
          detail::PluginUtilities::getHostType()::hostType =
               PluginHostType::getHostType(puVar9,pCVar8,extraout_RDX_00,param_3,param_4,param_5);
          __cxa_guard_release(&detail::PluginUtilities::getHostType()::hostType);
        }
      }
      if (detail::PluginUtilities::getHostType()::hostType == 0x2c) {
        fVar31 = (float)(int)*(undefined8 *)(this_00 + 0x40);
        fVar23 = (float)(int)((ulong)*(undefined8 *)(this_00 + 0x40) >> 0x20);
        fVar30 = (float)((uint)fVar31 & _DAT_005d91c0);
        fVar24 = (float)((uint)fVar15 & _DAT_005d91c0);
        if (fVar24 == DAT_005d94c8 || fVar30 == DAT_005d94c8) {
          if ((fVar15 == fVar31) && (!NAN(fVar15) && !NAN(fVar31))) goto LAB_001b67be;
LAB_001b6821:
          fVar26 = (float)((uint)fVar23 & _DAT_005d91c0);
          if ((fVar26 == DAT_005d94c8) ||
             (fVar29 = (float)(_DAT_005d91c0 & (uint)local_88), fVar29 == DAT_005d94c8)) {
            if ((local_88 != fVar23) || (NAN(local_88) || NAN(fVar23))) goto LAB_001b68be;
          }
          else {
            fVar23 = (float)((uint)(fVar23 - local_88) & _DAT_005d91c0);
            if (DAT_005d94cc < fVar23) {
              if (fVar29 <= fVar26) {
                fVar29 = fVar26;
              }
              if (fVar29 * DAT_005d94d0 < fVar23) goto LAB_001b68be;
            }
          }
          if (fVar24 == DAT_005d94c8 || fVar30 == DAT_005d94c8) {
            bVar2 = fVar31 == fVar15;
          }
          else {
            fVar23 = (float)((uint)(fVar31 - fVar15) & _DAT_005d91c0);
            bVar2 = true;
            if (DAT_005d94cc < fVar23) {
              if (fVar24 <= fVar30) {
                fVar24 = fVar30;
              }
              bVar2 = fVar23 <= fVar24 * DAT_005d94d0;
            }
          }
          if (bVar2) goto LAB_001b68be;
          goto LAB_001b68f0;
        }
        fVar26 = (float)((uint)(fVar31 - fVar15) & _DAT_005d91c0);
        if (DAT_005d94cc < fVar26) {
          fVar29 = fVar24;
          if (fVar24 <= fVar30) {
            fVar29 = fVar30;
          }
          if (fVar29 * DAT_005d94d0 < fVar26) goto LAB_001b6821;
        }
LAB_001b67be:
        fVar26 = (float)((uint)fVar23 & _DAT_005d91c0);
        if ((fVar26 != DAT_005d94c8) &&
           (fVar29 = (float)((uint)local_88 & _DAT_005d91c0), fVar29 != DAT_005d94c8)) {
          fVar27 = (float)((uint)(fVar23 - local_88) & _DAT_005d91c0);
          if (DAT_005d94cc < fVar27) {
            if (fVar29 <= fVar26) {
              fVar29 = fVar26;
            }
            if (fVar29 * DAT_005d94d0 < fVar27) goto LAB_001b68c5;
          }
          goto LAB_001b6821;
        }
        if ((local_88 == fVar23) && (!NAN(local_88) && !NAN(fVar23))) goto LAB_001b6821;
LAB_001b68c5:
        fVar22 = local_88 * fVar16;
        if ((fVar10 < fVar22) || (fVar22 < fVar25)) {
          if (fVar22 <= fVar10) {
            fVar10 = fVar22;
          }
          local_88 = (float)(-(uint)(fVar22 < fVar25) & (uint)fVar25 |
                            ~-(uint)(fVar22 < fVar25) & (uint)fVar10);
          uStack_84 = 0;
          local_a8 = (ulong)(uint)local_88;
          local_88 = local_88 / fVar16;
        }
        else {
          local_a8 = CONCAT44(uStack_84,fVar22);
        }
      }
      else {
LAB_001b68be:
        if (fVar16 < fVar15 / local_88) goto LAB_001b68c5;
LAB_001b68f0:
        local_a8._4_4_ = 0.0;
        local_88 = fVar15 / fVar16;
        if (fVar22 < local_88) {
LAB_001b6912:
          if (local_88 <= fVar22) {
            fVar22 = local_88;
          }
          local_88 = (float)(-(uint)(local_88 < fVar28) & (uint)fVar28 |
                            ~-(uint)(local_88 < fVar28) & (uint)fVar22);
          local_a8 = CONCAT44(in_XMM6_Db,local_88 * fVar16);
          uStack_84 = in_XMM6_Db;
        }
        else {
          uStack_84 = (uint)local_a8._4_4_;
          local_a8 = auVar14._0_8_;
          if (local_88 < fVar28) goto LAB_001b6912;
        }
      }
    }
    auVar21._8_4_ = (int)(local_a8 >> 0x20);
    auVar21._0_8_ = local_a8;
    auVar21._12_4_ = uStack_84;
    auVar20._8_8_ = auVar21._8_8_;
    auVar20._0_4_ = (undefined4)local_a8;
    auVar20._4_4_ = local_88;
    Component::getLocalArea(0,*(Component **)(this + 0xd8),(ComponentHelpers *)this_00);
    auVar14 = maxps(auVar20,_DAT_005d9480);
    local_a8 = auVar14._0_8_;
    pDVar7 = Desktop::getInstance();
    fVar10 = *(float *)(pDVar7 + 0x130);
    fVar22 = (float)(_DAT_005d91c0 & (uint)fVar10);
    if (fVar22 == DAT_005d94c8) {
LAB_001b66f6:
      if ((fVar10 == DAT_005d9038) && (!(NAN(fVar10) || NAN(DAT_005d9038)))) goto LAB_001b6737;
    }
    else {
      fVar24 = (float)((uint)(DAT_005d9054 + fVar10) & _DAT_005d91c0);
      local_98._4_4_ = (float)(local_98 >> 0x20);
      if (fVar24 <= DAT_005d94cc) goto LAB_001b6737;
      fVar15 = DAT_005d9038;
      if (DAT_005d9038 <= fVar22) {
        fVar15 = fVar22;
      }
      if (fVar24 <= fVar15 * DAT_005d94d0) goto LAB_001b6737;
    }
  }
  local_98._0_4_ = (float)local_98 * fVar10;
  local_98._4_4_ = local_98._4_4_ * fVar10;
  local_a8 = CONCAT44(local_a8._4_4_ * fVar10,(float)local_a8 * fVar10);
LAB_001b6737:
  dVar11 = (double)((float)local_a8 + (float)local_98) + DAT_005d9098;
  dVar12 = (double)((float)(local_a8 >> 0x20) + local_98._4_4_) + DAT_005d9098;
  *param_1 = (ulong)((double)(float)local_98 + DAT_005d9098) & 0xffffffff |
             (long)((double)local_98._4_4_ + DAT_005d9098) << 0x20;
  param_1[1] = (ulong)dVar11 & 0xffffffff | (long)dVar12 << 0x20;
  return 0;
}


