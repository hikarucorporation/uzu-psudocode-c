// Function : drawAlertBox
// Namespace: juce:LookAndFeel_V2
// Entry    : 0020e670
// Prototype: undefined drawAlertBox(LookAndFeel_V2 * this, Graphics * param_1, Component * param_2, int * param_3, long * param_4, ulong param_5)
// Body     : 0020e670 - 0020edd5


/* juce::LookAndFeel_V2::drawAlertBox(juce::Graphics&, juce::AlertWindow&, juce::Rectangle<int>
   const&, juce::TextLayout&) */

void __thiscall
juce::LookAndFeel_V2::drawAlertBox
          (LookAndFeel_V2 *this,Graphics *param_1,Component *param_2,int *param_3,long *param_4,
          ulong param_5)

{
  long *plVar1;
  long *plVar2;
  undefined1 auVar3 [16];
  long *plVar4;
  char cVar5;
  int iVar6;
  undefined4 uVar7;
  ulong uVar8;
  int *piVar9;
  float *pfVar10;
  int iVar11;
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
  undefined8 uVar12;
  undefined8 extraout_RDX_12;
  undefined8 extraout_RDX_13;
  undefined8 extraout_RDX_14;
  int iVar13;
  long lVar14;
  PositionedGlyph *this_00;
  long lVar15;
  uint *puVar16;
  PositionedGlyph *__ptr;
  undefined1 uVar17;
  float fVar18;
  float fVar19;
  undefined4 local_1ec;
  PositionedGlyph *local_1d0;
  undefined8 local_1c8;
  long *local_1c0;
  float *local_1b8;
  undefined8 uStack_1b0;
  long *local_1a8;
  long *plStack_1a0;
  undefined1 local_198;
  undefined1 local_188 [16];
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
  long *local_118;
  int *local_110;
  long local_108;
  long lStack_100;
  long *local_f8;
  long *local_f0;
  long *plStack_e8;
  undefined8 local_e0;
  void *local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 uStack_aa;
  long local_98;
  long local_90;
  long *local_88;
  long *local_80;
  long *local_78;
  void *local_68;
  
  iVar13 = 0;
  uVar8 = Component::findColour(param_2,0x1001800,'\0');
  Graphics::fillAll(param_1,(uint)uVar8);
  iVar6 = 0x6e;
  if (*(int *)(param_2 + 0x44) < 0x6e) {
    iVar6 = *(int *)(param_2 + 0x44);
  }
  iVar6 = iVar6 + 0x14;
  iVar11 = param_3[3] + 0x32;
  if (iVar6 <= param_3[3] + 0x32) {
    iVar11 = iVar6;
  }
  if (2 < *(int *)(param_2 + 0x39c)) {
    iVar6 = iVar11;
  }
  if (0 < *(int *)(param_2 + 0x3fc)) {
    iVar6 = iVar11;
  }
  iVar11 = *(int *)(param_2 + 0x338);
  local_110 = param_3;
  if (iVar11 == 0) goto LAB_0020ed09;
  iVar13 = (int)((ulong)((long)iVar6 * -0x66666667) >> 0x20);
  iVar13 = (iVar13 >> 2) - (iVar13 >> 0x1f);
  local_1a8 = (long *)0x0;
  plStack_1a0 = (long *)0x0;
  local_1b8 = (float *)0x0;
  uStack_1b0 = 0;
  local_198 = 1;
  local_118 = param_4;
  if (iVar11 == 2) {
    fVar18 = (float)iVar13;
    fVar19 = (float)(iVar6 + iVar13);
    Path::addTriangle(DAT_005d9044 * (float)iVar6 + fVar18,fVar18,fVar19,fVar19,fVar18,fVar19,
                      (Path *)&local_1b8);
    Path::createPathWithRoundedCorners(DAT_00652628,(undefined8 *)local_188,(long *)&local_1b8);
    pfVar10 = local_1b8;
    local_1b8 = (float *)local_188._0_8_;
    uStack_1b0 = local_188._8_8_;
    local_1a8 = local_178;
    plStack_1a0 = plStack_170;
    local_198 = local_168._0_1_;
    free(pfVar10);
    local_1ec = 0x55ff5555;
    uVar17 = 0x21;
  }
  else {
    local_1ec = 0x40b69900;
    if (iVar11 == 3) {
      local_1ec = 0x605555ff;
    }
    uVar17 = 0x3f;
    if (iVar11 == 3) {
      uVar17 = 0x69;
    }
    Path::addEllipse(CONCAT44((float)iVar13,(float)iVar13),CONCAT44((float)iVar6,(float)iVar6),
                     (Path *)&local_1b8);
  }
  fVar18 = (float)iVar6;
  local_1c8 = 200;
  local_1d0 = malloc(0x1900);
                    /* try { // try from 0020e828 to 0020e839 has its CatchHandler @ 0020ee1f */
  FontOptions::FontOptions(DAT_005de3c8 * fVar18,(FontOptions *)&local_98,1);
                    /* try { // try from 0020e83e to 0020e857 has its CatchHandler @ 0020ee21 */
  uVar7 = (**(code **)(*(long *)this + 0x50))(this);
  FontOptions::FontOptions((FontOptions *)local_188,&local_98);
  local_108 = local_188._0_8_;
  lStack_100 = local_188._8_8_;
  local_188._0_8_ = &DAT_0061ac58;
  local_188._8_8_ = &DAT_0061ac58;
  local_f8 = local_178;
  local_178 = (long *)0x0;
  local_f0 = plStack_170;
  plStack_e8 = local_168;
  local_e0 = local_160;
  plStack_170 = (long *)0x0;
  local_168 = (long *)0x0;
  local_160 = 0;
  local_d8 = local_158;
  uStack_d0 = uStack_150;
  local_c8 = local_148;
  local_158 = (void *)0x0;
  uStack_150 = 0;
  local_148 = 0;
  uStack_c0 = CONCAT44(uStack_13c,uVar7);
  uStack_aa = uStack_12a;
                    /* try { // try from 0020e924 to 0020e935 has its CatchHandler @ 0020ee0d */
  local_140 = uVar7;
  Font::Font((Font *)&local_1c0,&local_108);
                    /* try { // try from 0020e936 to 0020e93f has its CatchHandler @ 0020edf1 */
  piVar9 = operator_new__(0x1b);
  LOCK();
  *piVar9 = 0;
  UNLOCK();
  piVar9[2] = 4;
  piVar9[3] = 0;
  local_188._0_8_ = piVar9 + 4;
  *(undefined1 *)(piVar9 + 4) = uVar17;
  *(undefined1 *)((long)piVar9 + 0x11) = 0;
                    /* try { // try from 0020e96b to 0020e99b has its CatchHandler @ 0020edd6 */
  uVar8 = 0x24;
  puVar16 = (uint *)0x0;
  GlyphArrangement::addFittedText
            ((float)iVar13,(float)iVar13,fVar18,fVar18,0,DAT_005d9960,(GlyphArrangement *)&local_1d0
             ,&local_1c0,(String *)local_188,0x24,0);
  LOCK();
  iVar6 = *piVar9;
  *piVar9 = *piVar9 + -1;
  UNLOCK();
  uVar12 = extraout_RDX;
  if (iVar6 == 0) {
    operator_delete__(piVar9);
    uVar12 = extraout_RDX_00;
  }
  if (local_1c0 != (long *)0x0) {
    LOCK();
    plVar2 = local_1c0 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)(*local_1c0 + 8))();
      uVar12 = extraout_RDX_01;
    }
  }
  plVar2 = local_f0;
  plVar1 = plStack_e8;
  if (local_d8 != (void *)0x0) {
    operator_delete(local_d8);
    uVar12 = extraout_RDX_02;
    plVar2 = local_f0;
    plVar1 = plStack_e8;
  }
  for (; plVar4 = plStack_e8, plVar2 != plStack_e8; plVar2 = plVar2 + 1) {
    piVar9 = (int *)(*plVar2 + -0x10);
    plStack_e8 = plVar1;
    if (piVar9 != &emptyString) {
      LOCK();
      iVar6 = *piVar9;
      *piVar9 = *piVar9 + -1;
      UNLOCK();
      if (iVar6 == 0) {
        operator_delete__(piVar9);
        uVar12 = extraout_RDX_03;
      }
    }
    plVar1 = plStack_e8;
    plStack_e8 = plVar4;
  }
  plStack_e8 = plVar1;
  if (local_f0 != (long *)0x0) {
    operator_delete(local_f0);
    uVar12 = extraout_RDX_04;
  }
  if (local_f8 != (long *)0x0) {
    LOCK();
    plVar2 = local_f8 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)(*local_f8 + 8))();
      uVar12 = extraout_RDX_05;
    }
  }
  piVar9 = (int *)(lStack_100 + -0x10);
  if (piVar9 != &emptyString) {
    LOCK();
    iVar6 = *piVar9;
    *piVar9 = *piVar9 + -1;
    UNLOCK();
    if (iVar6 == 0) {
      operator_delete__(piVar9);
      uVar12 = extraout_RDX_06;
    }
  }
  piVar9 = (int *)(local_108 + -0x10);
  if (piVar9 != &emptyString) {
    LOCK();
    iVar6 = *piVar9;
    *piVar9 = *piVar9 + -1;
    UNLOCK();
    if (iVar6 == 0) {
      operator_delete__(piVar9);
      uVar12 = extraout_RDX_07;
    }
  }
  plVar2 = local_80;
  if (local_68 != (void *)0x0) {
    operator_delete(local_68);
    uVar12 = extraout_RDX_08;
    plVar2 = local_80;
  }
  for (; plVar2 != local_78; plVar2 = plVar2 + 1) {
    piVar9 = (int *)(*plVar2 + -0x10);
    if (piVar9 != &emptyString) {
      LOCK();
      iVar6 = *piVar9;
      *piVar9 = *piVar9 + -1;
      UNLOCK();
      if (iVar6 == 0) {
        operator_delete__(piVar9);
        uVar12 = extraout_RDX_13;
      }
    }
  }
  if (local_80 != (long *)0x0) {
    operator_delete(local_80);
    uVar12 = extraout_RDX_09;
  }
  if (local_88 != (long *)0x0) {
    LOCK();
    plVar2 = local_88 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)(*local_88 + 8))();
      uVar12 = extraout_RDX_10;
    }
  }
  piVar9 = (int *)(local_90 + -0x10);
  if (piVar9 != &emptyString) {
    LOCK();
    iVar6 = *piVar9;
    *piVar9 = *piVar9 + -1;
    UNLOCK();
    if (iVar6 == 0) {
      operator_delete__(piVar9);
      uVar12 = extraout_RDX_11;
    }
  }
  piVar9 = (int *)(local_98 + -0x10);
  if (piVar9 == &emptyString) {
LAB_0020eb42:
    __ptr = local_1d0;
    iVar6 = local_1c8._4_4_;
  }
  else {
    LOCK();
    iVar6 = *piVar9;
    *piVar9 = *piVar9 + -1;
    UNLOCK();
    if (iVar6 != 0) goto LAB_0020eb42;
    operator_delete__(piVar9);
    uVar12 = extraout_RDX_14;
    __ptr = local_1d0;
    iVar6 = local_1c8._4_4_;
  }
  local_1d0 = __ptr;
  if ((long)iVar6 != 0) {
    lVar14 = (long)iVar6 << 5;
    this_00 = __ptr;
    do {
                    /* try { // try from 0020eb60 to 0020eb6a has its CatchHandler @ 0020ee35 */
      PositionedGlyph::createPath(this_00,(Path *)&local_1b8,uVar12,uVar8,puVar16,param_5);
      this_00 = this_00 + 0x20;
      lVar14 = lVar14 + -0x20;
      uVar12 = extraout_RDX_12;
    } while (lVar14 != 0);
  }
  local_198 = 0;
                    /* try { // try from 0020eb7a to 0020ec71 has its CatchHandler @ 0020ee33 */
  Graphics::setColour(param_1,local_1ec);
  cVar5 = (**(code **)(**(long **)(param_1 + 8) + 0x68))();
  if (cVar5 == '\0') {
    if ((long)uStack_1b0._4_4_ != 0) {
      pfVar10 = local_1b8;
      do {
        fVar18 = *pfVar10;
        if ((fVar18 != DAT_005de3d0) || (NAN(fVar18) || NAN(DAT_005de3d0))) {
          if ((fVar18 != DAT_005de3d4) || (NAN(fVar18) || NAN(DAT_005de3d4))) {
            if (((fVar18 != DAT_005de3d8) || (NAN(fVar18) || NAN(DAT_005de3d8))) &&
               ((fVar18 != DAT_005de3dc || (NAN(fVar18) || NAN(DAT_005de3dc))))) goto LAB_0020ec14;
          }
          local_188 = ZEXT416(DAT_005d9038);
          local_178 = (long *)&DAT_3f800000;
          (**(code **)(**(long **)(param_1 + 8) + 200))
                    (*(long **)(param_1 + 8),&local_1b8,local_188);
          break;
        }
        pfVar10 = pfVar10 + 2;
LAB_0020ec14:
        pfVar10 = pfVar10 + 1;
      } while (pfVar10 != local_1b8 + uStack_1b0._4_4_);
    }
  }
  if (0 < iVar6) {
    lVar14 = 1;
    lVar15 = 0;
    plVar2 = *(long **)__ptr;
    while( true ) {
      if (plVar2 != (long *)0x0) {
        LOCK();
        plVar1 = plVar2 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)(*plVar2 + 8))();
        }
      }
      if (local_1c8._4_4_ <= lVar14) break;
      lVar15 = lVar15 + 0x20;
      lVar14 = lVar14 + 1;
      plVar2 = *(long **)(local_1d0 + lVar15);
    }
    __ptr = local_1d0;
  }
  free(__ptr);
  uStack_1b0 = uStack_1b0 & 0xffffffff;
  free(local_1b8);
  iVar13 = 0x50;
  param_4 = local_118;
LAB_0020ed09:
  uVar8 = Component::findColour(param_2,0x1001810,'\0');
  Graphics::setColour(param_1,(int)uVar8);
  TextLayout::draw(CONCAT44((float)local_110[1],(float)(*local_110 + iVar13)),
                   CONCAT44((float)local_110[3],(float)(local_110[2] - iVar13)),param_4,
                   *(long **)(param_1 + 8));
  uVar8 = Component::findColour(param_2,0x1001820,'\0');
  Graphics::setColour(param_1,(int)uVar8);
  auVar3._4_4_ = (float)(int)((ulong)*(undefined8 *)(param_2 + 0x40) >> 0x20);
  auVar3._0_4_ = (float)(int)*(undefined8 *)(param_2 + 0x40);
  auVar3._8_8_ = 0;
  local_188 = auVar3 << 0x40;
  (**(code **)(**(long **)(param_1 + 8) + 0xd0))(*(long **)(param_1 + 8),local_188);
  return;
}


