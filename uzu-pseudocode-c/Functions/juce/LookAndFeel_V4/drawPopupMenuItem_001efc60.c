// Function : drawPopupMenuItem
// Namespace: juce:LookAndFeel_V4
// Entry    : 001efc60
// Prototype: undefined drawPopupMenuItem(LookAndFeel_V4 * this, Graphics * param_1, int * param_2, int param_3, uint * param_4, ulong param_6_00, char param_6, char param_7, long * param_8, ulong * param_9, Component * param_10, uint * param_11)
// Body     : 001efc60 - 001f09d0


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* juce::LookAndFeel_V4::drawPopupMenuItem(juce::Graphics&, juce::Rectangle<int> const&, bool, bool,
   bool, bool, bool, juce::String const&, juce::String const&, juce::Drawable const*, juce::Colour
   const*) */

void __thiscall
juce::LookAndFeel_V4::drawPopupMenuItem
          (LookAndFeel_V4 *this,Graphics *param_1,int *param_2,int param_3,uint *param_4,
          ulong param_6_00,char param_6,char param_7,long *param_8,ulong *param_9,
          Component *param_10,uint *param_11)

{
  long *plVar1;
  pthread_mutex_t *__mutex;
  long lVar2;
  long *plVar3;
  undefined1 auVar4 [8];
  char cVar5;
  int iVar6;
  ulong uVar7;
  SharedFontInternal *pSVar8;
  SharedFontInternal *pSVar9;
  uint uVar10;
  ulong uVar11;
  uint uVar12;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 extraout_RDX_01;
  undefined8 extraout_RDX_02;
  Graphics *pGVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint *puVar18;
  undefined8 *puVar19;
  int iVar20;
  uint uVar21;
  int iVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined8 uVar26;
  undefined8 extraout_XMM0_Qb;
  undefined8 extraout_XMM1_Qb;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar30 [16];
  undefined1 auVar29 [16];
  undefined1 auVar32 [16];
  undefined1 auVar31 [16];
  undefined1 auVar33 [16];
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  undefined1 auVar38 [16];
  undefined8 local_138;
  undefined8 uStack_130;
  float local_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  undefined1 local_118;
  Graphics *local_110;
  SharedFontInternal *local_108;
  SharedFontInternal *local_100;
  undefined1 local_f8 [8];
  float fStack_f0;
  float fStack_ec;
  undefined8 local_e8;
  undefined1 local_d8 [16];
  undefined1 local_c8 [16];
  ulong local_b0;
  undefined1 local_a8 [24];
  ulong local_90;
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  ulong local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined1 local_48 [16];
  
  local_110 = param_1;
  if (param_3 != 0) {
    iVar20 = *param_2;
    iVar22 = 10;
    if (10 < param_2[2]) {
      iVar22 = param_2[2];
    }
    uVar21 = param_2[3];
    if (param_2[3] < 0) {
      uVar21 = 0;
    }
    uVar10 = SUB84((double)((float)(int)uVar21 * DAT_005d9044 + DAT_005d98c8) + DAT_005d9098,0);
    if ((int)uVar21 < (int)uVar10) {
      uVar10 = uVar21;
    }
    iVar6 = param_2[1];
    uVar12 = *(uint *)(this + 0xf4);
    if (0 < (int)uVar12) {
      lVar2 = *(long *)(this + 0xe8);
      uVar17 = 0;
      uVar15 = uVar12;
      do {
        while( true ) {
          if (*(int *)(lVar2 + (long)(int)uVar17 * 8) == 0x1000600) {
            if (-1 < (int)uVar17) {
              uVar15 = 0;
              if (uVar17 < uVar12) {
                uVar15 = *(uint *)(lVar2 + 4 + (ulong)uVar17 * 8);
              }
              goto LAB_001efdde;
            }
            goto LAB_001efdd8;
          }
          uVar16 = (int)(uVar17 + uVar15) / 2;
          if (uVar16 == uVar17) goto LAB_001efdd8;
          if (*(int *)(lVar2 + (long)(int)uVar16 * 8) < 0x1000601) break;
          uVar15 = uVar16;
          if ((int)uVar16 <= (int)uVar17) goto LAB_001efdd8;
        }
        uVar17 = uVar16;
      } while ((int)uVar16 < (int)uVar15);
    }
LAB_001efdd8:
    uVar15 = _ZN4juce7ColoursL5blackE_14;
LAB_001efdde:
    Graphics::setColour(param_1,uVar15 & 0xffffff | 0x4c000000);
    uVar7 = 1;
    if ((int)(uVar21 - uVar10) < 1) {
      uVar7 = (ulong)(uVar21 - uVar10);
    }
    local_138 = (SharedFontInternal *)CONCAT44(uVar10 + iVar6,iVar20 + 5);
    uStack_130 = (ulong)(iVar22 - 10) | uVar7 << 0x20;
    (**(code **)(**(long **)(param_1 + 8) + 0xb0))(*(long **)(param_1 + 8),&local_138,0);
    return;
  }
  if (param_11 == (uint *)0x0) {
    uVar21 = *(uint *)(this + 0xf4);
    if (0 < (int)uVar21) {
      lVar2 = *(long *)(this + 0xe8);
      uVar7 = 0;
      uVar10 = uVar21;
      do {
        while( true ) {
          uVar12 = (uint)uVar7;
          if (*(int *)(lVar2 + (long)(int)uVar12 * 8) == 0x1000600) {
            if (-1 < (int)uVar12) {
              uVar10 = 0;
              if (uVar12 < uVar21) {
                uVar10 = *(uint *)(lVar2 + 4 + uVar7 * 8);
              }
              goto LAB_001efe4b;
            }
            goto LAB_001efe45;
          }
          uVar17 = (int)(uVar12 + uVar10) / 2;
          if (uVar17 == uVar12) goto LAB_001efe45;
          if (*(int *)(lVar2 + (long)(int)uVar17 * 8) < 0x1000601) break;
          uVar10 = uVar17;
          if ((int)uVar17 <= (int)uVar12) goto LAB_001efe45;
        }
        uVar7 = (ulong)uVar17;
      } while ((int)uVar17 < (int)uVar10);
    }
LAB_001efe45:
    uVar10 = _ZN4juce7ColoursL5blackE_14;
  }
  else {
    uVar10 = *param_11;
  }
LAB_001efe4b:
  iVar20 = 2;
  if (2 < param_2[2]) {
    iVar20 = param_2[2];
  }
  local_b0 = 0;
  if (2 < param_2[3]) {
    local_b0 = (ulong)(param_2[3] - 2);
  }
  iVar22 = *param_2;
  local_90 = CONCAT44(0,param_2[1] + 1);
  local_88._0_8_ = local_90;
  local_90 = local_90 << 0x20;
  local_60 = local_b0 << 0x20;
  if (((char)param_4 == '\0') || ((char)param_6_00 == '\0')) {
    if ((char)param_4 == '\0') {
      fVar23 = DAT_005d9044;
    }
    else {
      fVar23 = DAT_005d9038;
    }
    iVar14 = SUB84((double)((float)(uVar10 >> 0x18) * fVar23) + DAT_005d9098,0);
    iVar6 = 0xff;
    if (iVar14 < 0xff) {
      iVar6 = iVar14;
    }
    uVar21 = uVar10 & 0xffffff | iVar6 << 0x18;
  }
  else {
    uVar7 = local_60 + (iVar20 - 2U);
    uVar21 = *(uint *)(this + 0xf4);
    if (0 < (int)uVar21) {
      lVar2 = *(long *)(this + 0xe8);
      uVar10 = uVar21;
      uVar12 = 0;
      do {
        while( true ) {
          if (*(int *)(lVar2 + (long)(int)uVar12 * 8) == 0x1000900) {
            if (-1 < (int)uVar12) {
              uVar10 = 0;
              if (uVar12 < uVar21) {
                uVar10 = *(uint *)(lVar2 + 4 + (ulong)uVar12 * 8);
              }
              goto LAB_001eff87;
            }
            goto LAB_001eff81;
          }
          uVar17 = (int)(uVar12 + uVar10) / 2;
          if (uVar17 == uVar12) goto LAB_001eff81;
          if (*(int *)(lVar2 + (long)(int)uVar17 * 8) < 0x1000901) break;
          uVar10 = uVar17;
          if ((int)uVar17 <= (int)uVar12) goto LAB_001eff81;
        }
        uVar12 = uVar17;
      } while ((int)uVar17 < (int)uVar10);
    }
LAB_001eff81:
    uVar10 = _ZN4juce7ColoursL5blackE_14;
LAB_001eff87:
    Graphics::setColour(param_1,uVar10);
    local_138 = (SharedFontInternal *)(iVar22 + 1U | local_90);
    uStack_130 = uVar7;
    (**(code **)(**(long **)(param_1 + 8) + 0xb0))(*(long **)(param_1 + 8),&local_138,0);
    uVar10 = *(uint *)(this + 0xf4);
    if (0 < (int)uVar10) {
      lVar2 = *(long *)(this + 0xe8);
      uVar21 = uVar10;
      uVar12 = 0;
      do {
        while( true ) {
          if (*(int *)(lVar2 + (long)(int)uVar12 * 8) == 0x1000800) {
            if (-1 < (int)uVar12) {
              uVar21 = 0;
              if (uVar12 < uVar10) {
                uVar21 = *(uint *)(lVar2 + 4 + (ulong)uVar12 * 8);
              }
              goto LAB_001f002e;
            }
            goto LAB_001f0028;
          }
          uVar17 = (int)(uVar12 + uVar21) / 2;
          if (uVar17 == uVar12) goto LAB_001f0028;
          if (*(int *)(lVar2 + (long)(int)uVar17 * 8) < 0x1000801) break;
          uVar21 = uVar17;
          if ((int)uVar17 <= (int)uVar12) goto LAB_001f0028;
        }
        uVar12 = uVar17;
      } while ((int)uVar17 < (int)uVar21);
    }
LAB_001f0028:
    uVar21 = _ZN4juce7ColoursL5blackE_14;
  }
LAB_001f002e:
  pGVar13 = local_110;
  Graphics::setColour(local_110,uVar21);
  iVar6 = param_2[2] / 0x14;
  uVar21 = param_2[2] >> 0x1f;
  iVar14 = 5;
  if (iVar6 < 5) {
    iVar14 = iVar6;
  }
  uVar10 = -uVar21 ^ uVar21 >> 0x1f;
  uVar7 = (ulong)uVar10;
  uVar21 = (iVar20 - 2U) + iVar14 * -2;
  if ((int)uVar21 < 0) {
    uVar21 = uVar10;
  }
  (**(code **)(*(long *)this + 0x1d8))(&local_100,this);
  uVar11 = local_b0;
  fVar23 = *(float *)(local_100 + 100);
  if (fVar23 <= 0.0) {
    local_108 = (SharedFontInternal *)CONCAT44(local_108._4_4_,*(undefined4 *)(local_100 + 0x68));
                    /* try { // try from 001f00a4 to 001f00ad has its CatchHandler @ 001f09f0 */
    uVar26 = Font::SharedFontInternal::getAscentDescent
                       (local_100,(long *)&local_100,extraout_RDX,uVar7,param_4,param_6_00);
    fVar23 = local_108._0_4_ * ((float)((ulong)uVar26 >> 0x20) + (float)uVar26);
  }
  iVar20 = (int)uVar11;
  fVar24 = (float)iVar20;
  local_78 = ZEXT416((uint)fVar24);
  fVar24 = fVar24 / DAT_005de3e8;
  local_d8 = ZEXT416((uint)fVar24);
  if (fVar24 < fVar23) {
                    /* try { // try from 001f00e8 to 001f011c has its CatchHandler @ 001f0a0e */
    Font::setHeight(fVar24,(Font *)&local_100);
  }
  if (pGVar13[0x10] != (Graphics)0x0) {
    pGVar13[0x10] = (Graphics)0x0;
    (**(code **)(**(long **)(pGVar13 + 8) + 0x70))();
  }
  (**(code **)(**(long **)(pGVar13 + 8) + 0xf8))(*(long **)(pGVar13 + 8),&local_100);
  iVar14 = iVar14 + iVar22 + 1U;
  uVar10 = SUB84((double)(float)local_d8._0_4_ + DAT_005d9098,0);
  if ((int)uVar21 < (int)uVar10) {
    uVar10 = uVar21;
  }
  pSVar8 = (SharedFontInternal *)(ulong)(uVar10 + iVar14);
  iVar22 = uVar21 - uVar10;
  uVar21 = local_88._0_4_;
  local_48 = ZEXT416(uVar21);
  auVar38._0_4_ = (float)iVar14;
  auVar38._4_4_ = (float)(int)uVar21;
  auVar38._8_8_ = 0;
  local_108 = pSVar8;
  if (param_10 != (Component *)0x0) {
                    /* try { // try from 001f0191 to 001f0199 has its CatchHandler @ 001f0a10 */
    local_c8 = ZEXT416((uint)(float)(int)uVar10);
    local_a8._0_16_ = auVar38;
    auVar38 = (**(code **)(*(long *)param_10 + 0x1a8))(param_10);
    auVar27._0_8_ = auVar38._8_8_;
    auVar27._8_8_ = extraout_XMM1_Qb;
    fVar24 = 0.0;
    fVar23 = _DAT_005dcc70;
    local_128 = _UNK_005dcc74;
    if (auVar38._8_4_ <= 0.0) {
      fVar34 = 0.0;
      fStack_124 = 0.0;
    }
    else {
      fVar34 = 0.0;
      fStack_124 = 0.0;
      if (0.0 < auVar38._12_4_) {
        auVar32._8_4_ = local_c8._4_4_;
        auVar32._0_8_ = local_c8._0_8_;
        auVar32._12_4_ = local_78._4_4_;
        auVar31._8_8_ = auVar32._8_8_;
        auVar31._4_4_ = local_78._0_4_;
        auVar31._0_4_ = local_c8._0_4_;
        auVar33 = divps(auVar31,auVar27);
        fVar24 = auVar33._4_4_;
        if (auVar33._0_4_ <= auVar33._4_4_) {
          fVar24 = auVar33._0_4_;
        }
        fVar23 = DAT_005d9038;
        if (fVar24 <= DAT_005d9038) {
          fVar23 = fVar24;
        }
        fVar24 = fVar23 * 0.0;
        fVar34 = ((local_c8._0_4_ - auVar38._8_4_ * fVar23) * DAT_005d9044 + (float)local_a8._0_4_)
                 - fVar23 * auVar38._0_4_;
        fStack_124 = ((local_78._0_4_ - auVar38._12_4_ * fVar23) * DAT_005d9044 +
                     (float)local_a8._4_4_) - auVar38._4_4_ * fVar23;
        local_128 = fVar23;
      }
    }
    local_138 = (SharedFontInternal *)CONCAT44(fVar24,fVar23);
    uStack_130 = CONCAT44(fVar24,fVar34);
                    /* try { // try from 001f03a6 to 001f03b5 has its CatchHandler @ 001f0a10 */
    Drawable::nonConstDraw(param_10,(long)local_110,(float *)&local_138);
    iVar6 = SUB84((double)((float)local_d8._0_4_ * DAT_005d9044) + DAT_005d9098,0);
    if (iVar22 < iVar6) {
      iVar6 = iVar22;
    }
    pSVar8 = (SharedFontInternal *)(ulong)(uint)((int)local_108 + iVar6);
    iVar22 = iVar22 - iVar6;
    pGVar13 = local_110;
    local_108 = pSVar8;
    goto joined_r0x001f07db;
  }
  pGVar13 = local_110;
  if (param_6 == '\0') goto joined_r0x001f07db;
                    /* try { // try from 001f0289 to 001f0299 has its CatchHandler @ 001f09d1 */
  local_c8 = ZEXT416((uint)(float)(int)uVar10);
  local_a8._0_16_ = auVar38;
  (**(code **)(*(long *)this + 0x60))(&local_138,this);
  pGVar13 = local_110;
  fVar24 = local_c8._0_4_ / DAT_00652628;
  fVar23 = local_c8._0_4_ - (fVar24 + fVar24);
  if (fVar23 <= 0.0) {
    fVar23 = 0.0;
  }
  local_f8._0_4_ = DAT_005d9038;
  fVar34 = DAT_005d9038;
  if (fVar23 <= 0.0) {
LAB_001f069f:
    fStack_f0 = 0.0;
    fStack_ec = 0.0;
    local_f8._4_4_ = 0.0;
    fVar35 = 0.0;
  }
  else {
    fVar37 = (float)local_78._0_4_;
    if ((float)local_78._0_4_ <= 0.0) {
      fVar37 = 0.0;
    }
    local_f8._4_4_ = 0.0;
    if ((fVar37 <= 0.0) || (fVar25 = fStack_124 - local_128, fVar25 <= 0.0)) goto LAB_001f069f;
    fVar36 = fStack_11c - fStack_120;
    fStack_f0 = 0.0;
    fStack_ec = 0.0;
    fVar35 = 0.0;
    if (0.0 < fVar36) {
      auVar30._4_8_ = 0;
      auVar30._0_4_ = fVar36;
      auVar30._12_4_ = local_78._4_4_;
      auVar29._8_8_ = auVar30._8_8_;
      auVar29._4_4_ = fVar37;
      auVar29._0_4_ = fVar36;
      auVar33._4_8_ = 0;
      auVar33._0_4_ = fVar25;
      auVar33._12_4_ = local_c8._4_4_;
      auVar28._8_8_ = auVar33._8_8_;
      auVar28._4_4_ = fVar23;
      auVar28._0_4_ = fVar25;
      auVar38 = divps(auVar29,auVar28);
      fVar34 = auVar38._0_4_;
      if (fVar34 <= auVar38._4_4_) {
        fVar34 = fVar34 * fVar23;
        local_f8._0_4_ = fVar23;
      }
      else {
        local_f8._0_4_ = fVar37 / fVar34;
        fVar34 = fVar37;
      }
      local_f8._0_4_ = (float)local_f8._0_4_ / fVar25;
      fVar34 = fVar34 / fVar36;
      local_f8._4_4_ = (float)local_f8._0_4_ * 0.0;
      fStack_f0 = (fVar25 * DAT_005d98c8 - local_128) * (float)local_f8._0_4_ +
                  fVar23 * DAT_005d9044 + fVar24 + (float)local_a8._0_4_;
      fStack_ec = fVar34 * 0.0;
      fVar35 = (DAT_005d98c8 * fVar36 - fStack_120) * fVar34 +
               fVar37 * DAT_005d9044 + (float)local_a8._4_4_;
    }
  }
  local_e8 = CONCAT44(fVar35,fVar34);
                    /* try { // try from 001f073f to 001f07c1 has its CatchHandler @ 001f09d3 */
  cVar5 = (**(code **)(**(long **)(local_110 + 8) + 0x68))();
  if (cVar5 == '\0') {
    pSVar8 = (SharedFontInternal *)0x0;
    if ((long)uStack_130._4_4_ != 0) {
      pSVar8 = local_138 + (long)uStack_130._4_4_ * 4;
      pSVar9 = local_138;
      do {
        fVar23 = *(float *)pSVar9;
        if ((fVar23 != DAT_005de3d0) || (NAN(fVar23) || NAN(DAT_005de3d0))) {
          if ((fVar23 != DAT_005de3d4) || (NAN(fVar23) || NAN(DAT_005de3d4))) {
            if (((fVar23 != DAT_005de3d8) || (NAN(fVar23) || NAN(DAT_005de3d8))) &&
               ((fVar23 != DAT_005de3dc || (NAN(fVar23) || NAN(DAT_005de3dc))))) goto LAB_001f0784;
          }
          (**(code **)(**(long **)(pGVar13 + 8) + 200))(*(long **)(pGVar13 + 8),&local_138,local_f8)
          ;
          break;
        }
        pSVar9 = pSVar9 + 8;
LAB_001f0784:
        pSVar9 = pSVar9 + 4;
      } while (pSVar9 != pSVar8);
    }
  }
  uStack_130 = uStack_130 & 0xffffffff;
  free(local_138);
  pGVar13 = local_110;
joined_r0x001f07db:
  local_110 = pGVar13;
  if (param_7 != '\0') {
                    /* try { // try from 001f03fc to 001f0407 has its CatchHandler @ 001f09ee */
    (**(code **)(*(long *)this + 0x1d8))(&local_138,this);
                    /* try { // try from 001f040c to 001f0413 has its CatchHandler @ 001f09e5 */
    uVar26 = Font::SharedFontInternal::getAscentDescent
                       (local_138,&local_138,extraout_RDX_00,pSVar8,param_4,param_6_00);
    fVar23 = *(float *)(local_138 + 100);
    if (fVar23 <= 0.0) {
      local_d8._8_8_ = extraout_XMM0_Qb;
      local_d8._0_8_ = uVar26;
      local_c8._0_4_ = *(undefined4 *)(local_138 + 0x68);
                    /* try { // try from 001f0435 to 001f043c has its CatchHandler @ 001f09d5 */
      uVar26 = Font::SharedFontInternal::getAscentDescent
                         (local_138,&local_138,extraout_RDX_01,pSVar8,param_4,param_6_00);
      fVar23 = (float)local_c8._0_4_ * ((float)((ulong)uVar26 >> 0x20) + (float)uVar26);
      uVar26 = local_d8._0_8_;
    }
    fVar23 = (DAT_005d9038 / ((float)((ulong)uVar26 >> 0x20) + (float)uVar26)) * (float)uVar26 *
             fVar23 * DAT_005d98e8;
    local_a8._0_4_ = fVar23;
    if (local_138 != (SharedFontInternal *)0x0) {
      LOCK();
      pSVar8 = local_138 + 8;
      *(int *)pSVar8 = *(int *)pSVar8 + -1;
      UNLOCK();
      if (*(int *)pSVar8 == 0) {
        (**(code **)(*(long *)local_138 + 8))();
        fVar23 = (float)local_a8._0_4_;
      }
    }
    iVar6 = (int)fVar23;
    if (iVar22 < (int)fVar23) {
      iVar6 = iVar22;
    }
    local_128 = (float)(((int)local_108 + iVar22) - iVar6);
    local_c8 = ZEXT416((uint)local_128);
    fStack_120 = (float)(int)(((int)(((uint)(uVar11 >> 0x1f) & 1) + iVar20) >> 1) + uVar21);
    local_d8._0_4_ = fStack_120;
    local_138 = (SharedFontInternal *)0x0;
    uStack_130 = 0;
    local_118 = 1;
    local_b0 = CONCAT44(local_b0._4_4_,DAT_005d9044 * fVar23);
    fStack_120 = fStack_120 - DAT_005d9044 * fVar23;
    local_88 = ZEXT416((uint)fStack_120);
    fStack_124 = local_128;
    fStack_11c = fStack_120;
    local_138 = malloc(0x20);
    *(float *)local_138 = 100002.0;
    *(undefined4 *)(local_138 + 4) = local_c8._0_4_;
    uStack_130 = 0x300000008;
    *(undefined4 *)(local_138 + 8) = local_88._0_4_;
    Path::lineTo((float)local_a8._0_4_ * DAT_005d98e8 + (float)local_c8._0_4_,(float)local_d8._0_4_,
                 (Path *)&local_138);
    Path::lineTo((float)local_c8._0_4_,(float)local_b0 + (float)local_d8._0_4_,(Path *)&local_138);
    pGVar13 = local_110;
    local_58 = 0x40000000;
    local_50 = 0;
    _local_f8 = ZEXT416((uint)DAT_005d9038);
    local_e8 = 0x3f800000;
                    /* try { // try from 001f05d3 to 001f0669 has its CatchHandler @ 001f09f8 */
    cVar5 = (**(code **)(**(long **)(local_110 + 8) + 0x68))();
    if (cVar5 == '\0') {
      if ((long)uStack_130._4_4_ != 0) {
        pSVar8 = local_138;
        do {
          fVar23 = *(float *)pSVar8;
          if ((fVar23 != DAT_005de3d0) || (NAN(fVar23) || NAN(DAT_005de3d0))) {
            if ((fVar23 != DAT_005de3d4) || (NAN(fVar23) || NAN(DAT_005de3d4))) {
              if (((fVar23 != DAT_005de3d8) || (NAN(fVar23) || NAN(DAT_005de3d8))) &&
                 ((fVar23 != DAT_005de3dc || (NAN(fVar23) || NAN(DAT_005de3dc)))))
              goto LAB_001f0624;
            }
            (**(code **)(**(long **)(pGVar13 + 8) + 0xd8))
                      (*(long **)(pGVar13 + 8),&local_138,&local_58,local_f8);
            break;
          }
          pSVar8 = pSVar8 + 8;
LAB_001f0624:
          pSVar8 = pSVar8 + 4;
        } while (pSVar8 != local_138 + (long)uStack_130._4_4_ * 4);
      }
    }
    iVar22 = iVar22 - iVar6;
    uStack_130 = uStack_130 & 0xffffffff;
    free(local_138);
  }
  uVar7 = 0;
  if (2 < iVar22) {
    uVar7 = (ulong)(iVar22 - 3);
  }
  uVar11 = local_60 | uVar7;
                    /* try { // try from 001f0817 to 001f0834 has its CatchHandler @ 001f0a10 */
  puVar18 = (uint *)0x21;
  puVar19 = (undefined8 *)0x1;
  Graphics::drawFittedText
            (0,DAT_005d9960,(long)pGVar13,param_8,local_90 | (ulong)local_108 & 0xffffffff,uVar11,
             (uint *)0x21,1);
  if (*(char *)*param_9 != '\0') {
    local_f8 = (undefined1  [8])local_100;
    LOCK();
    *(int *)(local_100 + 8) = *(int *)(local_100 + 8) + 1;
    UNLOCK();
    fVar23 = *(float *)(local_100 + 100);
    if (fVar23 <= 0.0) {
      local_d8._0_4_ = *(undefined4 *)(local_100 + 0x68);
                    /* try { // try from 001f0875 to 001f087e has its CatchHandler @ 001f09dd */
      uVar26 = Font::SharedFontInternal::getAscentDescent
                         (local_100,(long *)local_f8,extraout_RDX_02,uVar11,puVar18,(ulong)puVar19);
      fVar23 = (float)local_d8._0_4_ * ((float)((ulong)uVar26 >> 0x20) + (float)uVar26);
    }
                    /* try { // try from 001f089c to 001f08bf has its CatchHandler @ 001f0a15 */
    Font::setHeight(fVar23 * DAT_0065b218,(Font *)local_f8);
    if (1 < *(int *)((long)local_f8 + 8)) {
      Font::SharedFontInternal::copy(&local_138,(long)local_f8);
      auVar4 = local_f8;
      local_f8 = (undefined1  [8])local_138;
      local_138 = (SharedFontInternal *)auVar4;
      if (auVar4 != (undefined1  [8])0x0) {
        LOCK();
        pSVar8 = (SharedFontInternal *)((long)auVar4 + 8);
        *(int *)pSVar8 = (int)*(float *)pSVar8 + -1;
        UNLOCK();
        if (*(float *)pSVar8 == 0.0) {
          (**(code **)(*(long *)auVar4 + 8))();
        }
      }
    }
                    /* try { // try from 001f08e9 to 001f08f5 has its CatchHandler @ 001f0a15 */
    Font::SharedFontInternal::setHorizontalScale(DAT_005de420,(SharedFontInternal *)local_f8);
    auVar4 = local_f8;
    __mutex = (pthread_mutex_t *)((long)local_f8 + 0x80);
    pthread_mutex_lock(__mutex);
    plVar3 = *(long **)((long)auVar4 + 0x10);
    *(undefined8 *)((long)auVar4 + 0x10) = 0;
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
    pGVar13 = local_110;
    if (local_110[0x10] != (Graphics)0x0) {
      local_110[0x10] = (Graphics)0x0;
                    /* try { // try from 001f0946 to 001f0990 has its CatchHandler @ 001f0a15 */
      (**(code **)(**(long **)(local_110 + 8) + 0x70))();
    }
    plVar3 = *(long **)(pGVar13 + 8);
    (**(code **)(*plVar3 + 0xf8))(plVar3,local_f8);
    Graphics::drawText(CONCAT44((float)(int)local_48._0_4_,(float)(int)local_108._0_4_),
                       CONCAT44(local_78._0_4_,(float)(int)uVar7),(long)pGVar13,param_9,0x22,1,
                       puVar18,puVar19);
    if (local_f8 != (undefined1  [8])0x0) {
      LOCK();
      plVar3 = (long *)((long)local_f8 + 8);
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)(*(long *)local_f8 + 8))();
      }
    }
  }
  if (local_100 != (SharedFontInternal *)0x0) {
    LOCK();
    pSVar8 = local_100 + 8;
    *(int *)pSVar8 = *(int *)pSVar8 + -1;
    UNLOCK();
    if (*(int *)pSVar8 == 0) {
      (**(code **)(*(long *)local_100 + 8))();
    }
  }
  return;
}


