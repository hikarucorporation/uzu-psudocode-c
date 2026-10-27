// Function : drawPopupMenuItem
// Namespace: juce:LookAndFeel_V2
// Entry    : 00210ba0
// Prototype: undefined drawPopupMenuItem(LookAndFeel_V2 * this, Graphics * param_2, ulong * param_3, int param_4, float param_5, ulong param_6_00, char param_7, char param_8, long * param_9, ulong * param_10, Component * param_11, uint * param_12)
// Body     : 00210ba0 - 002117ae


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* juce::LookAndFeel_V2::drawPopupMenuItem(juce::Graphics&, juce::Rectangle<int> const&, bool, bool,
   bool, bool, bool, juce::String const&, juce::String const&, juce::Drawable const*, juce::Colour
   const*) */

void __thiscall
juce::LookAndFeel_V2::drawPopupMenuItem
          (LookAndFeel_V2 *this,Graphics *param_2,ulong *param_3,int param_4,float param_5,
          ulong param_6_00,char param_7,char param_8,long *param_9,ulong *param_10,
          Component *param_11,uint *param_12)

{
  long *plVar1;
  pthread_mutex_t *__mutex;
  long lVar2;
  long *plVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [8];
  char cVar7;
  SharedFontInternal *pSVar8;
  uint uVar9;
  SharedFontInternal *pSVar10;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 extraout_RDX_01;
  undefined8 extraout_RDX_02;
  uint uVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  uint *puVar15;
  undefined8 *puVar16;
  uint uVar17;
  int iVar18;
  int iVar19;
  ulong uVar20;
  int iVar21;
  int iVar22;
  float fVar23;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar24 [16];
  undefined8 extraout_XMM1_Qb;
  undefined1 auVar25 [16];
  float fVar26;
  float fVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  float fVar30;
  float fVar31;
  undefined1 auVar32 [16];
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined1 local_c8;
  SharedFontInternal *local_c0;
  undefined1 local_b8 [8];
  float fStack_b0;
  float fStack_ac;
  undefined8 local_a8;
  undefined1 local_98 [16];
  float local_88;
  float fStack_84;
  undefined8 uStack_80;
  ulong local_70;
  ulong local_68;
  float local_5c;
  undefined1 local_58 [8];
  int iStack_50;
  int iStack_4c;
  ulong local_48;
  ulong local_40;
  ulong local_38;
  
  if (param_4 != 0) {
    iVar19 = 10;
    if (10 < (int)param_3[1]) {
      iVar19 = (int)param_3[1];
    }
    uVar17 = *(uint *)((long)param_3 + 0xc);
    if ((int)*(uint *)((long)param_3 + 0xc) < 0) {
      uVar17 = 0;
    }
    iVar21 = (int)*param_3 + 5;
    uVar11 = (uVar17 >> 1) - 1;
    if ((int)uVar17 < (int)uVar11) {
      uVar11 = uVar17;
    }
    iVar18 = uVar17 - uVar11;
    iVar12 = uVar11 + *(int *)((long)param_3 + 4);
    Graphics::setColour(param_2,0x33000000);
    iVar22 = 1;
    if (iVar18 < 1) {
      iVar22 = iVar18;
    }
    local_e8 = (SharedFontInternal *)CONCAT44(iVar12,iVar21);
    uStack_e0 = CONCAT44(iVar22,iVar19 - 10U);
    (**(code **)(**(long **)(param_2 + 8) + 0xb0))(*(long **)(param_2 + 8),&local_e8,0);
    Graphics::setColour(param_2,0x66ffffff);
    uVar20 = (ulong)(uint)(iVar18 - iVar22);
    if (0 < iVar18 - iVar22) {
      uVar20 = 1;
    }
    local_e8 = (SharedFontInternal *)CONCAT44(iVar22 + iVar12,iVar21);
    uStack_e0 = uVar20 << 0x20 | (ulong)(iVar19 - 10U);
    (**(code **)(**(long **)(param_2 + 8) + 0xb0))(*(long **)(param_2 + 8),&local_e8,0);
    return;
  }
  uVar17 = *(uint *)(this + 0xf4);
  if (0 < (int)uVar17) {
    lVar2 = *(long *)(this + 0xe8);
    uVar11 = uVar17;
    uVar9 = 0;
    do {
      while( true ) {
        if (*(int *)(lVar2 + (long)(int)uVar9 * 8) == 0x1000600) {
          if (-1 < (int)uVar9) {
            uVar11 = 0;
            if (uVar9 < uVar17) {
              uVar11 = *(uint *)(lVar2 + 4 + (ulong)uVar9 * 8);
            }
            goto LAB_00210d0f;
          }
          goto LAB_00210d09;
        }
        uVar13 = (int)(uVar9 + uVar11) / 2;
        if (uVar13 == uVar9) goto LAB_00210d09;
        if (*(int *)(lVar2 + (long)(int)uVar13 * 8) < 0x1000601) break;
        uVar11 = uVar13;
        if ((int)uVar13 <= (int)uVar9) goto LAB_00210d09;
      }
      uVar9 = uVar13;
    } while ((int)uVar13 < (int)uVar11);
  }
LAB_00210d09:
  uVar11 = _ZN4juce7ColoursL5blackE_14;
LAB_00210d0f:
  if (param_12 != (uint *)0x0) {
    uVar11 = *param_12;
  }
  iVar19 = (int)param_3[1];
  if (iVar19 < 3) {
    iVar19 = 2;
  }
  iVar19 = iVar19 + -2;
  iVar21 = *(int *)((long)param_3 + 0xc);
  iVar22 = 2;
  if (2 < iVar21) {
    iVar22 = iVar21;
  }
  uVar9 = iVar22 - 2;
  local_70 = (ulong)uVar9;
  local_58 = (undefined1  [8])*param_3;
  _iStack_50 = 0;
  local_68 = (ulong)(SUB84(local_58,0) + 1);
  local_48 = (ulong)((int)((ulong)local_58 >> 0x20) + 1);
  local_38 = local_48 << 0x20;
  uVar20 = local_70 << 0x20;
  local_98._0_8_ = this;
  local_88 = param_5;
  local_40 = uVar20;
  if ((char)param_6_00 != '\0') {
    if (0 < (int)uVar17) {
      lVar2 = *(long *)(this + 0xe8);
      uVar11 = uVar17;
      uVar13 = 0;
      do {
        while( true ) {
          if (*(int *)(lVar2 + (long)(int)uVar13 * 8) == 0x1000900) {
            if (-1 < (int)uVar13) {
              uVar11 = 0;
              if (uVar13 < uVar17) {
                uVar11 = *(uint *)(lVar2 + 4 + (ulong)uVar13 * 8);
              }
              goto LAB_00210e15;
            }
            goto LAB_00210e0c;
          }
          uVar14 = (int)(uVar13 + uVar11) / 2;
          if (uVar14 == uVar13) goto LAB_00210e0c;
          if (*(int *)(lVar2 + (long)(int)uVar14 * 8) < 0x1000901) break;
          uVar11 = uVar14;
          if ((int)uVar14 <= (int)uVar13) goto LAB_00210e0c;
        }
        uVar13 = uVar14;
      } while ((int)uVar14 < (int)uVar11);
    }
LAB_00210e0c:
    uVar11 = _ZN4juce7ColoursL5blackE_14;
LAB_00210e15:
    Graphics::setColour(param_2,uVar11);
    local_e8 = (SharedFontInternal *)(local_68 & 0xffffffff | local_38);
    uStack_e0 = CONCAT44(uVar9,iVar19);
    (**(code **)(**(long **)(param_2 + 8) + 0xb0))(*(long **)(param_2 + 8),&local_e8,0);
    uVar17 = *(uint *)(local_98._0_8_ + 0xf4);
    uVar20 = (ulong)uVar17;
    uVar9 = (uint)local_70;
    if (0 < (int)uVar17) {
      lVar2 = *(long *)(local_98._0_8_ + 0xe8);
      uVar11 = uVar17;
      uVar13 = 0;
      do {
        while( true ) {
          if (*(int *)(lVar2 + (long)(int)uVar13 * 8) == 0x1000800) {
            if (-1 < (int)uVar13) {
              uVar11 = 0;
              if (uVar13 < uVar17) {
                uVar20 = (ulong)uVar13;
                uVar11 = *(uint *)(lVar2 + 4 + uVar20 * 8);
              }
              goto LAB_00210ece;
            }
            goto LAB_00210ec8;
          }
          uVar14 = (int)(uVar13 + uVar11) / 2;
          if (uVar14 == uVar13) goto LAB_00210ec8;
          if (*(int *)(lVar2 + (long)(int)uVar14 * 8) < 0x1000801) break;
          uVar11 = uVar14;
          if ((int)uVar14 <= (int)uVar13) goto LAB_00210ec8;
        }
        uVar13 = uVar14;
      } while ((int)uVar14 < (int)uVar11);
    }
LAB_00210ec8:
    uVar11 = _ZN4juce7ColoursL5blackE_14;
  }
LAB_00210ece:
  Graphics::setColour(param_2,uVar11);
  if (local_88._0_1_ == '\0') {
    if (param_2[0x10] != (Graphics)0x0) {
      param_2[0x10] = (Graphics)0x0;
      (**(code **)(**(long **)(param_2 + 8) + 0x70))();
    }
    (**(code **)(**(long **)(param_2 + 8) + 0x98))(DAT_005d9088);
  }
  (**(code **)(*(long *)local_98._0_8_ + 0x1d8))(&local_c0);
  fVar26 = *(float *)(local_c0 + 100);
  fVar23 = (float)*(int *)((long)param_3 + 0xc);
  if (fVar26 <= 0.0) {
    local_5c = *(float *)(local_c0 + 0x68);
                    /* try { // try from 00210f5b to 00210f64 has its CatchHandler @ 002117cf */
    local_88 = (float)*(int *)((long)param_3 + 0xc);
    auVar24._0_8_ =
         Font::SharedFontInternal::getAscentDescent
                   (local_c0,(long *)&local_c0,extraout_RDX,uVar20,param_12,param_6_00);
    fVar26 = local_5c * ((float)((ulong)auVar24._0_8_ >> 0x20) + (float)auVar24._0_8_);
    fVar23 = local_88;
  }
  if (fVar23 / DAT_005de3e8 < fVar26) {
                    /* try { // try from 00210f90 to 00210fce has its CatchHandler @ 002117ee */
    Font::setHeight(fVar23 / DAT_005de3e8,(Font *)&local_c0);
  }
  if (param_2[0x10] != (Graphics)0x0) {
    param_2[0x10] = (Graphics)0x0;
    (**(code **)(**(long **)(param_2 + 8) + 0x70))();
  }
  (**(code **)(**(long **)(param_2 + 8) + 0xf8))(*(long **)(param_2 + 8),&local_c0);
  iVar12 = uVar9 * 5 + 3;
  if (-1 < (int)(uVar9 * 5)) {
    iVar12 = uVar9 * 5;
  }
  iVar18 = iVar12 >> 2;
  if (iVar19 < iVar12 >> 2) {
    iVar18 = iVar19;
  }
  iVar12 = 6;
  if (6 < iVar18) {
    iVar12 = iVar18;
  }
  pSVar10 = (SharedFontInternal *)0x0;
  if (8 < iVar22) {
    pSVar10 = (SharedFontInternal *)(ulong)(iVar21 - 8);
  }
  auVar32._0_4_ = (float)(local_58._0_4_ + _DAT_00651fd0);
  auVar32._4_4_ = (float)(local_58._4_4_ + _UNK_00651fd4);
  auVar32._8_4_ = (float)(iStack_50 + _UNK_00651fd8);
  auVar32._12_4_ = (float)(iStack_4c + _UNK_00651fdc);
  if (param_11 == (Component *)0x0) {
    if (param_7 == '\0') goto LAB_002113a0;
    uStack_80 = 0;
                    /* try { // try from 0021113a to 00211149 has its CatchHandler @ 002117af */
    local_88 = (float)(iVar12 + -6);
    fStack_84 = (float)(int)pSVar10;
    _local_58 = auVar32;
    (**(code **)(*(long *)local_98._0_8_ + 0x60))(&local_e8);
    auVar28._4_4_ = fStack_84;
    auVar28._0_4_ = local_88;
    auVar28._8_8_ = uStack_80;
    local_b8._0_4_ = DAT_005d9038;
    fVar26 = DAT_005d9038;
    if ((local_88 <= 0.0) || (local_b8._4_4_ = 0.0, fStack_84 <= 0.0)) {
LAB_0021125a:
      fStack_b0 = 0.0;
      fStack_ac = 0.0;
      local_b8._4_4_ = 0.0;
      fVar30 = 0.0;
    }
    else {
      fVar23 = local_d8._4_4_ - (float)local_d8;
      if (fVar23 <= 0.0) goto LAB_0021125a;
      fVar27 = uStack_d0._4_4_ - (float)uStack_d0;
      fStack_b0 = 0.0;
      fStack_ac = 0.0;
      fVar30 = 0.0;
      if (0.0 < fVar27) {
        auVar29._4_12_ = auVar28._4_12_;
        auVar29._0_4_ = fVar27;
        auVar4._4_4_ = local_88;
        auVar4._0_4_ = fVar23;
        auVar4._8_4_ = 0;
        auVar4._12_4_ = fStack_84;
        auVar32 = divps(auVar29,auVar4);
        fVar26 = auVar32._0_4_;
        if (fVar26 <= auVar32._4_4_) {
          fVar26 = fVar26 * local_88;
          local_b8._0_4_ = local_88;
        }
        else {
          local_b8._0_4_ = fStack_84 / fVar26;
          fVar26 = fStack_84;
        }
        local_b8._0_4_ = (float)local_b8._0_4_ / fVar23;
        fVar26 = fVar26 / fVar27;
        local_b8._4_4_ = (float)local_b8._0_4_ * 0.0;
        fStack_b0 = (fVar23 * DAT_005d98c8 - (float)local_d8) * (float)local_b8._0_4_ +
                    local_88 * DAT_005d9044 + (float)local_58._0_4_;
        fStack_ac = fVar26 * 0.0;
        fVar30 = (DAT_005d98c8 * fVar27 - (float)uStack_d0) * fVar26 +
                 fStack_84 * DAT_005d9044 + (float)local_58._4_4_;
      }
    }
    local_a8 = CONCAT44(fVar30,fVar26);
                    /* try { // try from 002112fc to 00211388 has its CatchHandler @ 002117b1 */
    cVar7 = (**(code **)(**(long **)(param_2 + 8) + 0x68))();
    if (cVar7 == '\0') {
      pSVar10 = (SharedFontInternal *)0x0;
      if ((long)uStack_e0._4_4_ != 0) {
        pSVar10 = local_e8 + (long)uStack_e0._4_4_ * 4;
        pSVar8 = local_e8;
        do {
          fVar26 = *(float *)pSVar8;
          if ((fVar26 != DAT_005de3d0) || (NAN(fVar26) || NAN(DAT_005de3d0))) {
            if ((fVar26 != DAT_005de3d4) || (NAN(fVar26) || NAN(DAT_005de3d4))) {
              if (((fVar26 != DAT_005de3d8) || (NAN(fVar26) || NAN(DAT_005de3d8))) &&
                 ((fVar26 != DAT_005de3dc || (NAN(fVar26) || NAN(DAT_005de3dc)))))
              goto LAB_00211344;
            }
            (**(code **)(**(long **)(param_2 + 8) + 200))
                      (*(long **)(param_2 + 8),&local_e8,local_b8);
            break;
          }
          pSVar8 = pSVar8 + 8;
LAB_00211344:
          pSVar8 = pSVar8 + 4;
        } while (pSVar8 != pSVar10);
      }
    }
    uStack_e0 = uStack_e0 & 0xffffffff;
    free(local_e8);
  }
  else {
    uStack_80 = 0;
                    /* try { // try from 0021104e to 00211056 has its CatchHandler @ 002117f0 */
    local_88 = (float)(iVar12 + -6);
    fStack_84 = (float)(int)pSVar10;
    _local_58 = auVar32;
    auVar32 = (**(code **)(*(long *)param_11 + 0x1a8))(param_11);
    auVar25._0_8_ = auVar32._8_8_;
    auVar25._8_8_ = extraout_XMM1_Qb;
    fVar30 = 0.0;
    fVar26 = _DAT_005dcc70;
    fVar23 = _UNK_005dcc74;
    if (auVar32._8_4_ <= 0.0) {
      fVar27 = 0.0;
      fVar31 = 0.0;
    }
    else {
      fVar27 = 0.0;
      fVar31 = 0.0;
      if (0.0 < auVar32._12_4_) {
        auVar5._4_4_ = fStack_84;
        auVar5._0_4_ = local_88;
        auVar5._8_8_ = uStack_80;
        auVar28 = divps(auVar5,auVar25);
        fVar23 = auVar28._4_4_;
        if (auVar28._0_4_ <= auVar28._4_4_) {
          fVar23 = auVar28._0_4_;
        }
        fVar26 = DAT_005d9038;
        if (fVar23 <= DAT_005d9038) {
          fVar26 = fVar23;
        }
        fVar30 = fVar26 * 0.0;
        fVar27 = ((local_88 - auVar32._8_4_ * fVar26) * DAT_005d9044 + (float)local_58._0_4_) -
                 fVar26 * auVar32._0_4_;
        fVar31 = ((fStack_84 - auVar32._12_4_ * fVar26) * DAT_005d9044 + (float)local_58._4_4_) -
                 auVar32._4_4_ * fVar26;
        fVar23 = fVar26;
      }
    }
    local_e8 = (SharedFontInternal *)CONCAT44(fVar30,fVar26);
    uStack_e0 = CONCAT44(fVar30,fVar27);
    local_d8 = CONCAT44(fVar31,fVar23);
                    /* try { // try from 00211227 to 00211238 has its CatchHandler @ 002117f0 */
    Drawable::nonConstDraw(param_11,(long)param_2,(float *)&local_e8);
  }
LAB_002113a0:
  iVar21 = iVar19 - iVar18;
  if (param_8 != '\0') {
                    /* try { // try from 002113b7 to 002113c1 has its CatchHandler @ 002117cd */
    (**(code **)(*(long *)local_98._0_8_ + 0x1d8))(&local_e8);
                    /* try { // try from 002113c7 to 002113d0 has its CatchHandler @ 002117c3 */
    auVar24._0_8_ =
         Font::SharedFontInternal::getAscentDescent
                   (local_e8,&local_e8,extraout_RDX_00,pSVar10,param_12,param_6_00);
    auVar24._8_8_ = extraout_XMM0_Qb;
    fVar26 = *(float *)(local_e8 + 100);
    if (fVar26 <= 0.0) {
      local_88 = *(float *)(local_e8 + 0x68);
                    /* try { // try from 002113f3 to 002113fc has its CatchHandler @ 002117b3 */
      local_98 = auVar24;
      auVar24._0_8_ =
           Font::SharedFontInternal::getAscentDescent
                     (local_e8,&local_e8,extraout_RDX_01,pSVar10,param_12,param_6_00);
      fVar26 = local_88 * ((float)((ulong)auVar24._0_8_ >> 0x20) + (float)auVar24._0_8_);
      auVar24._0_8_ = local_98._0_8_;
    }
    fVar26 = (DAT_005d9038 / ((float)((ulong)auVar24._0_8_ >> 0x20) + (float)auVar24._0_8_)) *
             (float)auVar24._0_8_ * fVar26 * DAT_005d98e8;
    if (local_e8 != (SharedFontInternal *)0x0) {
      LOCK();
      pSVar10 = local_e8 + 8;
      *(int *)pSVar10 = *(int *)pSVar10 + -1;
      UNLOCK();
      if (*(int *)pSVar10 == 0) {
        local_98._0_4_ = fVar26;
        (**(code **)(*(long *)local_e8 + 8))();
        fVar26 = (float)local_98._0_4_;
      }
    }
    iVar22 = (int)fVar26;
    if (iVar21 < (int)fVar26) {
      iVar22 = iVar21;
    }
    fVar23 = (float)((iVar19 + (int)local_68) - iVar22);
    fVar30 = (float)(((int)(((uint)(local_70 >> 0x1f) & 1) + (int)local_70) >> 1) + (int)local_48);
    local_d8 = 0;
    uStack_d0 = 0;
    local_e8 = (SharedFontInternal *)0x0;
    uStack_e0 = 0;
    local_c8 = 1;
    Path::addTriangle(fVar23,fVar30 - DAT_005d9044 * fVar26,fVar23,DAT_005d9044 * fVar26 + fVar30,
                      fVar26 * DAT_005d98e8 + fVar23,fVar30,(Path *)&local_e8);
                    /* try { // try from 002114ea to 0021158e has its CatchHandler @ 002117d7 */
    cVar7 = (**(code **)(**(long **)(param_2 + 8) + 0x68))();
    if (cVar7 == '\0') {
      if ((long)uStack_e0._4_4_ != 0) {
        pSVar10 = local_e8;
        do {
          fVar26 = *(float *)pSVar10;
          if ((fVar26 != DAT_005de3d0) || (NAN(fVar26) || NAN(DAT_005de3d0))) {
            if ((fVar26 != DAT_005de3d4) || (NAN(fVar26) || NAN(DAT_005de3d4))) {
              if (((fVar26 != DAT_005de3d8) || (NAN(fVar26) || NAN(DAT_005de3d8))) &&
                 ((fVar26 != DAT_005de3dc || (NAN(fVar26) || NAN(DAT_005de3dc)))))
              goto LAB_00211534;
            }
            _local_b8 = ZEXT416((uint)DAT_005d9038);
            local_a8 = 0x3f800000;
            (**(code **)(**(long **)(param_2 + 8) + 200))
                      (*(long **)(param_2 + 8),&local_e8,local_b8);
            break;
          }
          pSVar10 = pSVar10 + 8;
LAB_00211534:
          pSVar10 = pSVar10 + 4;
        } while (pSVar10 != local_e8 + (long)uStack_e0._4_4_ * 4);
      }
    }
    iVar21 = iVar21 - iVar22;
    uStack_e0 = uStack_e0 & 0xffffffff;
    free(local_e8);
  }
  uVar11 = iVar18 + (int)local_68;
  uVar17 = 0;
  if (2 < iVar21) {
    uVar17 = iVar21 - 3;
  }
  uVar20 = local_40 | uVar17;
                    /* try { // try from 002115d9 to 002115f8 has its CatchHandler @ 002117f0 */
  puVar15 = (uint *)0x21;
  puVar16 = (undefined8 *)0x1;
  Graphics::drawFittedText
            (0,DAT_005d9960,(long)param_2,param_9,local_38 | uVar11,uVar20,(uint *)0x21,1);
  if (*(char *)*param_10 != '\0') {
    local_b8 = (undefined1  [8])local_c0;
    LOCK();
    *(int *)(local_c0 + 8) = *(int *)(local_c0 + 8) + 1;
    UNLOCK();
    fVar26 = *(float *)(local_c0 + 100);
    if (fVar26 <= 0.0) {
      local_98._0_4_ = *(undefined4 *)(local_c0 + 0x68);
                    /* try { // try from 0021163a to 00211643 has its CatchHandler @ 002117bb */
      auVar24._0_8_ =
           Font::SharedFontInternal::getAscentDescent
                     (local_c0,(long *)local_b8,extraout_RDX_02,uVar20,puVar15,(ulong)puVar16);
      fVar26 = (float)local_98._0_4_ *
               ((float)((ulong)auVar24._0_8_ >> 0x20) + (float)auVar24._0_8_);
    }
                    /* try { // try from 00211661 to 00211686 has its CatchHandler @ 002117f5 */
    Font::setHeight(fVar26 * DAT_0065b218,(Font *)local_b8);
    if (1 < *(int *)((long)local_b8 + 8)) {
      Font::SharedFontInternal::copy(&local_e8,(long)local_b8);
      auVar6 = local_b8;
      local_b8 = (undefined1  [8])local_e8;
      local_e8 = (SharedFontInternal *)auVar6;
      if (auVar6 != (undefined1  [8])0x0) {
        LOCK();
        pSVar10 = (SharedFontInternal *)((long)auVar6 + 8);
        *(int *)pSVar10 = (int)*(float *)pSVar10 + -1;
        UNLOCK();
        if (*(float *)pSVar10 == 0.0) {
          (**(code **)(*(long *)auVar6 + 8))();
        }
      }
    }
                    /* try { // try from 002116b2 to 002116be has its CatchHandler @ 002117f5 */
    Font::SharedFontInternal::setHorizontalScale(DAT_005de420,(SharedFontInternal *)local_b8);
    auVar6 = local_b8;
    __mutex = (pthread_mutex_t *)((long)local_b8 + 0x80);
    pthread_mutex_lock(__mutex);
    plVar3 = *(long **)((long)auVar6 + 0x10);
    *(undefined8 *)((long)auVar6 + 0x10) = 0;
    if (plVar3 != (long *)0x0) {
      LOCK();
      plVar1 = plVar3 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)(*plVar3 + 8))();
      }
    }
    pthread_mutex_unlock(__mutex);
    if (param_2[0x10] != (Graphics)0x0) {
      param_2[0x10] = (Graphics)0x0;
                    /* try { // try from 00211714 to 0021176e has its CatchHandler @ 002117f5 */
      (**(code **)(**(long **)(param_2 + 8) + 0x70))();
    }
    (**(code **)(**(long **)(param_2 + 8) + 0xf8))(*(long **)(param_2 + 8),local_b8);
    Graphics::drawText(CONCAT44((float)(int)local_48,(float)(int)uVar11),
                       CONCAT44((float)(int)local_70,(float)(int)uVar17),(long)param_2,param_10,0x22
                       ,1,puVar15,puVar16);
    if (local_b8 != (undefined1  [8])0x0) {
      LOCK();
      plVar3 = (long *)((long)local_b8 + 8);
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)(*(long *)local_b8 + 8))();
      }
    }
  }
  if (local_c0 != (SharedFontInternal *)0x0) {
    LOCK();
    pSVar10 = local_c0 + 8;
    *(int *)pSVar10 = *(int *)pSVar10 + -1;
    UNLOCK();
    if (*(int *)pSVar10 == 0) {
      (**(code **)(*(long *)local_c0 + 8))();
    }
  }
  return;
}


