// Function : drawAlertBox
// Namespace: juce:LookAndFeel_V4
// Entry    : 001ec1d0
// Prototype: undefined drawAlertBox(undefined8 param_1_00, undefined8 param_2_00, undefined8 param_3_00, long * param_4, Graphics * param_5, Component * param_6, long param_7, long * param_8, ulong param_9)
// Body     : 001ec1d0 - 001eca3f


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention: __cdecl */
/* juce::LookAndFeel_V4::drawAlertBox(juce::Graphics&, juce::AlertWindow&, juce::Rectangle<int>
   const&, juce::TextLayout&) */

void __cdecl
juce::LookAndFeel_V4::drawAlertBox
          (undefined8 param_1_00,undefined8 param_2_00,undefined8 param_3_00,long *param_4,
          Graphics *param_5,Component *param_6,long param_7,long *param_8,ulong param_9)

{
  long *plVar1;
  int iVar2;
  long *plVar3;
  uint uVar4;
  Graphics *pGVar5;
  Component *pCVar6;
  char cVar7;
  uint uVar9;
  int iVar8;
  undefined4 uVar10;
  ulong uVar11;
  ulong uVar12;
  int *piVar13;
  float *pfVar14;
  int iVar15;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 extraout_RDX_01;
  undefined8 extraout_RDX_02;
  undefined8 extraout_RDX_03;
  undefined8 extraout_RDX_04;
  undefined8 extraout_RDX_05;
  undefined8 extraout_RDX_06;
  undefined8 extraout_RDX_07;
  undefined8 extraout_RDX_08;
  undefined8 extraout_RDX_09;
  undefined8 extraout_RDX_10;
  undefined8 extraout_RDX_11;
  undefined8 uVar16;
  undefined8 extraout_RDX_12;
  undefined8 extraout_RDX_13;
  undefined8 extraout_RDX_14;
  long lVar17;
  PositionedGlyph *this;
  long lVar18;
  uint *puVar19;
  PositionedGlyph *__ptr;
  undefined1 uVar20;
  long *plVar21;
  float fVar22;
  float fVar23;
  undefined4 uVar24;
  undefined4 in_XMM2_Dc;
  undefined4 in_XMM2_Dd;
  PositionedGlyph *local_200;
  undefined8 local_1f8;
  Graphics *local_1f0;
  long *local_1e8;
  long *local_1e0;
  float *local_1d8;
  undefined8 uStack_1d0;
  long *local_1c8;
  long *plStack_1c0;
  undefined1 local_1b8;
  undefined1 local_1a8 [16];
  long *local_198;
  Component *local_190;
  undefined1 local_188 [8];
  undefined8 uStack_180;
  long *local_178;
  long *plStack_170;
  long *local_168;
  undefined8 local_160;
  void *local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined4 local_140;
  undefined4 uStack_13c;
  undefined8 uStack_12a;
  ulong local_120;
  long local_118;
  long lStack_110;
  long *local_108;
  long *local_100;
  long *plStack_f8;
  undefined8 local_f0;
  void *local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 uStack_ba;
  undefined1 local_a8 [16];
  long local_98;
  long local_90;
  long *local_88;
  long *local_80;
  long *local_78;
  void *local_68;
  
  uVar24 = (undefined4)((ulong)param_3_00 >> 0x20);
  local_1e8 = param_8;
  local_198 = param_4;
  uVar11 = Component::findColour(param_6,0x1001820,'\0');
  Graphics::setColour(param_5,(int)uVar11);
  uStack_180 = (undefined1 *)
               CONCAT44((float)(int)((ulong)*(undefined8 *)(param_6 + 0x40) >> 0x20),
                        (float)(int)*(undefined8 *)(param_6 + 0x40));
  local_188 = (undefined1  [8])0x0;
  (**(code **)(**(long **)(param_5 + 8) + 0x118))
            (DAT_005d94d4,DAT_005d9078,*(long **)(param_5 + 8),local_188);
  iVar15 = *(int *)(param_6 + 0x40);
  if (iVar15 < 3) {
    iVar15 = 2;
  }
  uVar11 = 2;
  if (2 < (int)*(uint *)(param_6 + 0x44)) {
    uVar11 = (ulong)*(uint *)(param_6 + 0x44);
  }
  uVar4 = (uint)uVar11;
  uStack_180._4_4_ = uVar4 - 2;
  uStack_180._0_4_ = (float)(iVar15 + -2);
  local_188 = (undefined1  [8])0x100000001;
  local_190 = param_6;
  if (param_5[0x10] != (Graphics)0x0) {
    param_5[0x10] = (Graphics)0x0;
    (**(code **)(**(long **)(param_5 + 8) + 0x70))();
  }
  (**(code **)(**(long **)(param_5 + 8) + 0x30))(*(long **)(param_5 + 8),local_188);
  pCVar6 = local_190;
  uVar12 = Component::findColour(local_190,0x1001800,'\0');
  Graphics::setColour(param_5,(int)uVar12);
  uStack_180._0_4_ = (float)(iVar15 + -2);
  local_a8 = ZEXT416((uint)(float)uStack_180);
  local_188._4_4_ = _UNK_005dcc74;
  local_188._0_4_ = _DAT_005dcc70;
  uStack_180._4_4_ = (float)(int)(uVar4 - 2);
  (**(code **)(**(long **)(param_5 + 8) + 0x120))(DAT_005d94d4,*(long **)(param_5 + 8),local_188);
  uVar9 = 0x70;
  if (uVar4 < 0x70) {
    uVar9 = uVar4;
  }
  iVar8 = uVar9 + 0x12;
  iVar15 = *(int *)(param_7 + 0xc) + 0x32;
  if (iVar8 <= iVar15) {
    iVar15 = iVar8;
  }
  if (2 < *(int *)(pCVar6 + 0x39c)) {
    iVar8 = iVar15;
  }
  iVar2 = *(int *)(pCVar6 + 0x338);
  if (0 < *(int *)(pCVar6 + 0x3fc)) {
    iVar8 = iVar15;
  }
  if (iVar2 == 0) {
    plVar21 = local_1e8;
    uVar4 = DAT_005d9038;
    goto LAB_001ec9ae;
  }
  iVar15 = (int)((ulong)((long)iVar8 * -0x66666667) >> 0x20);
  iVar15 = (iVar15 >> 2) - (iVar15 >> 0x1f);
  local_1c8 = (long *)0x0;
  plStack_1c0 = (long *)0x0;
  local_1d8 = (float *)0x0;
  uStack_1d0 = 0;
  local_1b8 = 1;
  local_120 = uVar11;
  if (iVar2 == 2) {
    fVar22 = (float)iVar15;
    local_1a8._4_4_ = uVar24;
    local_1a8._0_4_ = (float)iVar8;
    local_1a8._8_4_ = in_XMM2_Dc;
    local_1a8._12_4_ = in_XMM2_Dd;
    fVar23 = (float)(iVar8 + iVar15);
    Path::addTriangle(DAT_005d9044 * (float)iVar8 + fVar22,fVar22,fVar23,fVar23,fVar22,fVar23,
                      (Path *)&local_1d8);
    Path::createPathWithRoundedCorners(DAT_00652628,(undefined8 *)local_188,(long *)&local_1d8);
    pfVar14 = local_1d8;
    local_1d8 = (float *)local_188;
    uStack_1d0 = (ulong)uStack_180;
    local_1c8 = local_178;
    plStack_1c0 = plStack_170;
    local_1b8 = local_168._0_1_;
    free(pfVar14);
    uVar20 = 0x21;
    uVar24 = 0x66ff2a00;
  }
  else {
    uVar20 = 0x3f;
    if (iVar2 == 3) {
      uVar20 = 0x69;
    }
    fVar22 = (float)iVar8;
    local_1a8 = ZEXT416((uint)fVar22);
    Path::addEllipse(CONCAT44((float)iVar15,(float)iVar15),CONCAT44(fVar22,fVar22),
                     (Path *)&local_1d8);
    uVar24 = 0x6600b0b9;
  }
  local_1f8 = 200;
  local_200 = malloc(0x1900);
                    /* try { // try from 001ec4a9 to 001ec4ba has its CatchHandler @ 001eca89 */
  FontOptions::FontOptions(DAT_005de3c8 * (float)local_1a8._0_4_,(FontOptions *)&local_98,1);
                    /* try { // try from 001ec4c3 to 001ec4dc has its CatchHandler @ 001eca8b */
  uVar10 = (**(code **)(*local_198 + 0x50))();
  FontOptions::FontOptions((FontOptions *)local_188,&local_98);
  local_118 = (long)local_188;
  lStack_110 = (long)uStack_180;
  local_188 = (undefined1  [8])&DAT_0061ac58;
  uStack_180 = &DAT_0061ac58;
  local_108 = local_178;
  local_178 = (long *)0x0;
  local_100 = plStack_170;
  plStack_f8 = local_168;
  local_f0 = local_160;
  plStack_170 = (long *)0x0;
  local_168 = (long *)0x0;
  local_160 = 0;
  local_e8 = local_158;
  uStack_e0 = uStack_150;
  local_d8 = local_148;
  local_158 = (void *)0x0;
  uStack_150 = 0;
  local_148 = 0;
  uStack_d0 = CONCAT44(uStack_13c,uVar10);
  uStack_ba = uStack_12a;
                    /* try { // try from 001ec5b2 to 001ec5c3 has its CatchHandler @ 001eca77 */
  local_140 = uVar10;
  Font::Font((Font *)&local_1e0,&local_118);
                    /* try { // try from 001ec5c4 to 001ec5cd has its CatchHandler @ 001eca5b */
  piVar13 = operator_new__(0x1b);
  LOCK();
  *piVar13 = 0;
  UNLOCK();
  piVar13[2] = 4;
  piVar13[3] = 0;
  local_188 = (undefined1  [8])(piVar13 + 4);
  *(undefined1 *)(piVar13 + 4) = uVar20;
  *(undefined1 *)((long)piVar13 + 0x11) = 0;
                    /* try { // try from 001ec5fc to 001ec62f has its CatchHandler @ 001eca40 */
  uVar11 = 0x24;
  puVar19 = (uint *)0x0;
  GlyphArrangement::addFittedText
            ((float)iVar15,(float)iVar15,(float)local_1a8._0_4_,(float)local_1a8._0_4_,0,
             DAT_005d9960,(GlyphArrangement *)&local_200,&local_1e0,(String *)local_188,0x24,0);
  LOCK();
  iVar15 = *piVar13;
  *piVar13 = *piVar13 + -1;
  UNLOCK();
  uVar16 = extraout_RDX;
  if (iVar15 == 0) {
    operator_delete__(piVar13);
    uVar16 = extraout_RDX_00;
  }
  if (local_1e0 != (long *)0x0) {
    LOCK();
    plVar21 = local_1e0 + 1;
    *(int *)plVar21 = (int)*plVar21 + -1;
    UNLOCK();
    if ((int)*plVar21 == 0) {
      (**(code **)(*local_1e0 + 8))();
      uVar16 = extraout_RDX_01;
    }
  }
  plVar21 = local_100;
  plVar3 = plStack_f8;
  if (local_e8 != (void *)0x0) {
    operator_delete(local_e8);
    uVar16 = extraout_RDX_02;
    plVar21 = local_100;
    plVar3 = plStack_f8;
  }
  for (; plVar1 = plStack_f8, plVar21 != plStack_f8; plVar21 = plVar21 + 1) {
    piVar13 = (int *)(*plVar21 + -0x10);
    plStack_f8 = plVar3;
    if (piVar13 != &emptyString) {
      LOCK();
      iVar15 = *piVar13;
      *piVar13 = *piVar13 + -1;
      UNLOCK();
      if (iVar15 == 0) {
        operator_delete__(piVar13);
        uVar16 = extraout_RDX_03;
      }
    }
    plVar3 = plStack_f8;
    plStack_f8 = plVar1;
  }
  plStack_f8 = plVar3;
  if (local_100 != (long *)0x0) {
    operator_delete(local_100);
    uVar16 = extraout_RDX_04;
  }
  if (local_108 != (long *)0x0) {
    LOCK();
    plVar21 = local_108 + 1;
    *(int *)plVar21 = (int)*plVar21 + -1;
    UNLOCK();
    if ((int)*plVar21 == 0) {
      (**(code **)(*local_108 + 8))();
      uVar16 = extraout_RDX_05;
    }
  }
  piVar13 = (int *)(lStack_110 + -0x10);
  if (piVar13 != &emptyString) {
    LOCK();
    iVar15 = *piVar13;
    *piVar13 = *piVar13 + -1;
    UNLOCK();
    if (iVar15 == 0) {
      operator_delete__(piVar13);
      uVar16 = extraout_RDX_06;
    }
  }
  piVar13 = (int *)(local_118 + -0x10);
  if (piVar13 != &emptyString) {
    LOCK();
    iVar15 = *piVar13;
    *piVar13 = *piVar13 + -1;
    UNLOCK();
    if (iVar15 == 0) {
      operator_delete__(piVar13);
      uVar16 = extraout_RDX_07;
    }
  }
  plVar21 = local_80;
  if (local_68 != (void *)0x0) {
    operator_delete(local_68);
    uVar16 = extraout_RDX_08;
    plVar21 = local_80;
  }
  for (; plVar21 != local_78; plVar21 = plVar21 + 1) {
    piVar13 = (int *)(*plVar21 + -0x10);
    if (piVar13 != &emptyString) {
      LOCK();
      iVar15 = *piVar13;
      *piVar13 = *piVar13 + -1;
      UNLOCK();
      if (iVar15 == 0) {
        operator_delete__(piVar13);
        uVar16 = extraout_RDX_13;
      }
    }
  }
  if (local_80 != (long *)0x0) {
    operator_delete(local_80);
    uVar16 = extraout_RDX_09;
  }
  if (local_88 != (long *)0x0) {
    LOCK();
    plVar21 = local_88 + 1;
    *(int *)plVar21 = (int)*plVar21 + -1;
    UNLOCK();
    if ((int)*plVar21 == 0) {
      (**(code **)(*local_88 + 8))();
      uVar16 = extraout_RDX_10;
    }
  }
  piVar13 = (int *)(local_90 + -0x10);
  if (piVar13 != &emptyString) {
    LOCK();
    iVar15 = *piVar13;
    *piVar13 = *piVar13 + -1;
    UNLOCK();
    if (iVar15 == 0) {
      operator_delete__(piVar13);
      uVar16 = extraout_RDX_11;
    }
  }
  piVar13 = (int *)(local_98 + -0x10);
  local_1f0 = param_5;
  if (piVar13 == &emptyString) {
LAB_001ec7d2:
    __ptr = local_200;
    iVar15 = local_1f8._4_4_;
  }
  else {
    LOCK();
    iVar15 = *piVar13;
    *piVar13 = *piVar13 + -1;
    UNLOCK();
    if (iVar15 != 0) goto LAB_001ec7d2;
    operator_delete__(piVar13);
    uVar16 = extraout_RDX_14;
    __ptr = local_200;
    iVar15 = local_1f8._4_4_;
  }
  local_200 = __ptr;
  if ((long)iVar15 != 0) {
    lVar17 = (long)iVar15 << 5;
    this = __ptr;
    do {
                    /* try { // try from 001ec7f0 to 001ec7fa has its CatchHandler @ 001eca9f */
      PositionedGlyph::createPath(this,(Path *)&local_1d8,uVar16,uVar11,puVar19,param_9);
      this = this + 0x20;
      lVar17 = lVar17 + -0x20;
      uVar16 = extraout_RDX_12;
    } while (lVar17 != 0);
  }
  pGVar5 = local_1f0;
  local_1b8 = 0;
                    /* try { // try from 001ec80a to 001ec907 has its CatchHandler @ 001eca9d */
  Graphics::setColour(local_1f0,uVar24);
  uVar11 = local_120;
  cVar7 = (**(code **)(**(long **)(pGVar5 + 8) + 0x68))();
  if (cVar7 == '\0') {
    if ((long)uStack_1d0._4_4_ != 0) {
      pfVar14 = local_1d8;
      do {
        fVar22 = *pfVar14;
        if ((fVar22 != DAT_005de3d0) || (NAN(fVar22) || NAN(DAT_005de3d0))) {
          if ((fVar22 != DAT_005de3d4) || (NAN(fVar22) || NAN(DAT_005de3d4))) {
            if (((fVar22 != DAT_005de3d8) || (NAN(fVar22) || NAN(DAT_005de3d8))) &&
               ((fVar22 != DAT_005de3dc || (NAN(fVar22) || NAN(DAT_005de3dc))))) goto LAB_001ec8a4;
          }
          _local_188 = ZEXT416(DAT_005d9038);
          local_178 = (long *)&DAT_3f800000;
          (**(code **)(**(long **)(local_1f0 + 8) + 200))
                    (*(long **)(local_1f0 + 8),&local_1d8,local_188);
          break;
        }
        pfVar14 = pfVar14 + 2;
LAB_001ec8a4:
        pfVar14 = pfVar14 + 1;
      } while (pfVar14 != local_1d8 + uStack_1d0._4_4_);
    }
  }
  plVar21 = local_1e8;
  if (0 < iVar15) {
    lVar17 = 1;
    lVar18 = 0;
    plVar3 = *(long **)__ptr;
    while( true ) {
      if (plVar3 != (long *)0x0) {
        LOCK();
        plVar1 = plVar3 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)(*plVar3 + 8))();
        }
      }
      if (local_1f8._4_4_ <= lVar17) break;
      lVar18 = lVar18 + 0x20;
      lVar17 = lVar17 + 1;
      plVar3 = *(long **)(local_200 + lVar18);
    }
    __ptr = local_200;
  }
  free(__ptr);
  uStack_1d0 = uStack_1d0 & 0xffffffff;
  free(local_1d8);
  param_5 = local_1f0;
  uVar4 = DAT_005de3f0;
LAB_001ec9ae:
  local_1a8 = ZEXT416(uVar4);
  uVar12 = Component::findColour(local_190,0x1001810,'\0');
  Graphics::setColour(param_5,(int)uVar12);
  iVar15 = (**(code **)(*local_198 + 0xf8))();
  TextLayout::draw(CONCAT44(_UNK_005dcdb4,local_1a8._0_4_),
                   CONCAT44((float)(((int)uVar11 - iVar15) + -0x16),local_a8._0_4_),plVar21,
                   *(long **)(param_5 + 8));
  return;
}


