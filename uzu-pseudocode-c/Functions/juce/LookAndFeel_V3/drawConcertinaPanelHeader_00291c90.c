// Function : drawConcertinaPanelHeader
// Namespace: juce:LookAndFeel_V3
// Entry    : 00291c90
// Prototype: undefined drawConcertinaPanelHeader(LookAndFeel_V3 * this, Graphics * param_1, long * param_2, int param_3, undefined8 param_4, undefined8 param_6_00, long param_6)
// Body     : 00291c90 - 0029229e


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* juce::LookAndFeel_V3::drawConcertinaPanelHeader(juce::Graphics&, juce::Rectangle<int> const&,
   bool, bool, juce::ConcertinaPanel&, juce::Component&) */

void __thiscall
juce::LookAndFeel_V3::drawConcertinaPanelHeader
          (LookAndFeel_V3 *this,Graphics *param_1,long *param_2,int param_3,undefined8 param_4,
          undefined8 param_6_00,long param_6)

{
  long *plVar1;
  int iVar2;
  undefined1 auVar3 [16];
  long *plVar4;
  long *plVar5;
  undefined4 uVar6;
  uint uVar7;
  uint *puVar8;
  uint uVar9;
  uint uVar10;
  uint *puVar11;
  uint uVar12;
  int *piVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  long *local_190;
  long *local_188;
  float local_17c;
  undefined1 local_178 [16];
  long *local_168;
  long *local_160;
  long *plStack_158;
  undefined8 local_150;
  void *local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined4 local_130;
  undefined4 uStack_12c;
  undefined8 uStack_11a;
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
  
  uVar7 = _ZN4juce7ColoursL4greyE_57;
  uVar9 = 0x33000000;
  if (param_3 != 0) {
    uVar9 = 0x66000000;
  }
  uVar10 = _ZN4juce7ColoursL5whiteE_144 & 0xffffff;
  uVar12 = _ZN4juce7ColoursL8darkgreyE_31 & 0xffffff;
  auVar3._4_4_ = 0;
  auVar3._0_4_ = (float)*(int *)((long)param_2 + 4);
  auVar3._8_4_ = (float)(*(int *)((long)param_2 + 4) + *(int *)((long)param_2 + 0xc));
  auVar3._12_4_ = 0;
  local_178 = auVar3 << 0x20;
  local_168 = (long *)((ulong)local_168 & 0xffffffffffffff00);
  local_160 = malloc(0x80);
  *local_160 = 0;
  *(uint *)(local_160 + 1) = uVar10 | uVar9;
  plStack_158 = (long *)0x200000008;
  local_160[2] = 0x3ff0000000000000;
  *(uint *)(local_160 + 3) = uVar12 | 0x1a000000;
                    /* try { // try from 00291d3c to 00291d48 has its CatchHandler @ 002922d1 */
  Graphics::setGradientFill(param_1,(undefined8 *)local_178);
  plStack_158 = (long *)((ulong)plStack_158 & 0xffffffff);
  free(local_160);
  (**(code **)(**(long **)(param_1 + 8) + 0xa8))();
  fVar14 = (float)(uVar7 >> 0x10 & 0xff) / DAT_005de3b0;
  fVar15 = (float)(uVar7 >> 8 & 0xff) / DAT_005de3b0;
  fVar16 = (float)(uVar7 & 0xff) / DAT_005de3b0;
  fVar15 = fVar16 * fVar16 * _DAT_005de3bc +
           fVar14 * fVar14 * _DAT_005de3b8 + fVar15 * fVar15 * _DAT_005de3b4;
  fVar14 = SQRT(fVar15);
  local_17c = fVar14;
  if (fVar15 < 0.0) {
    fVar14 = sqrtf(fVar15);
  }
  puVar11 = &_ZN4juce7ColoursL5whiteE_474;
  puVar8 = &_ZN4juce7ColoursL5whiteE_474;
  if (DAT_005d9044 <= fVar14) {
    puVar8 = &_ZN4juce7ColoursL5blackE_344;
  }
  Graphics::setColour(param_1,*puVar8 & 0xffffff | 0x1a000000);
  local_178._0_8_ = *param_2;
  local_178._8_8_ = (ulong)*(uint *)(param_2 + 1) | 0x100000000;
  (**(code **)(**(long **)(param_1 + 8) + 0xb0))(*(long **)(param_1 + 8),local_178,0);
  local_178._4_4_ = *(int *)((long)param_2 + 4) + *(int *)((long)param_2 + 0xc) + -1;
  local_178._12_4_ = (*(int *)((long)param_2 + 4) - local_178._4_4_) + *(int *)((long)param_2 + 0xc)
  ;
  if ((int)local_178._12_4_ < 0) {
    local_178._12_4_ = 0;
  }
  local_178._0_4_ = (int)*param_2;
  local_178._8_4_ = (int)param_2[1];
  (**(code **)(**(long **)(param_1 + 8) + 0xb0))(*(long **)(param_1 + 8),local_178,0);
  fVar14 = local_17c;
  if (fVar15 < DAT_005d9058) {
    fVar14 = sqrtf(fVar15);
  }
  if (DAT_005d9044 <= fVar14) {
    puVar11 = &_ZN4juce7ColoursL5blackE_344;
  }
  Graphics::setColour(param_1,*puVar11 | 0xff000000);
  FontOptions::FontOptions
            ((float)*(int *)((long)param_2 + 0xc) * DAT_005d98e8,(FontOptions *)&local_98,0);
                    /* try { // try from 00291f06 to 00291f1f has its CatchHandler @ 00292326 */
  uVar6 = (**(code **)(*(long *)this + 0x50))(this);
  FontOptions::FontOptions((FontOptions *)local_178,&local_98);
  local_108 = local_178._0_8_;
  lStack_100 = local_178._8_8_;
  local_178._8_8_ = &DAT_0061ac58;
  local_178._0_8_ = &DAT_0061ac58;
  local_f8 = local_168;
  local_168 = (long *)0x0;
  local_f0 = local_160;
  plStack_e8 = plStack_158;
  local_e0 = local_150;
  local_160 = (long *)0x0;
  plStack_158 = (long *)0x0;
  local_150 = 0;
  local_d8 = local_148;
  uStack_d0 = uStack_140;
  local_c8 = local_138;
  local_148 = (void *)0x0;
  uStack_140 = 0;
  local_138 = 0;
  uStack_c0 = CONCAT44(uStack_12c,uVar6);
  uStack_aa = uStack_11a;
                    /* try { // try from 00291fc5 to 00291fd6 has its CatchHandler @ 002922cc */
  local_130 = uVar6;
  Font::Font((Font *)&local_188,&local_108);
  uVar7 = Font::getStyleFlags((Font *)&local_188);
  local_190 = local_188;
  if (local_188 != (long *)0x0) {
    LOCK();
    *(int *)(local_188 + 1) = (int)local_188[1] + 1;
    UNLOCK();
  }
                    /* try { // try from 00291ff8 to 00292003 has its CatchHandler @ 002922ca */
  Font::setStyleFlags((Font *)&local_190,uVar7 | 1);
  if (param_1[0x10] != (Graphics)0x0) {
    param_1[0x10] = (Graphics)0x0;
                    /* try { // try from 00292017 to 0029202b has its CatchHandler @ 002922e6 */
    (**(code **)(**(long **)(param_1 + 8) + 0x70))();
  }
  (**(code **)(**(long **)(param_1 + 8) + 0xf8))(*(long **)(param_1 + 8),&local_190);
  if (local_190 != (long *)0x0) {
    LOCK();
    plVar1 = local_190 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)(*local_190 + 8))();
    }
  }
  if (local_188 != (long *)0x0) {
    LOCK();
    plVar1 = local_188 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)(*local_188 + 8))();
    }
  }
  plVar1 = local_f0;
  plVar4 = plStack_e8;
  if (local_d8 != (void *)0x0) {
    operator_delete(local_d8);
    plVar1 = local_f0;
    plVar4 = plStack_e8;
  }
  for (; plVar5 = plStack_e8, plVar1 != plStack_e8; plVar1 = plVar1 + 1) {
    piVar13 = (int *)(*plVar1 + -0x10);
    plStack_e8 = plVar4;
    if (piVar13 != &emptyString) {
      LOCK();
      iVar2 = *piVar13;
      *piVar13 = *piVar13 + -1;
      UNLOCK();
      if (iVar2 == 0) {
        operator_delete__(piVar13);
      }
    }
    plVar4 = plStack_e8;
    plStack_e8 = plVar5;
  }
  plStack_e8 = plVar4;
  if (local_f0 != (long *)0x0) {
    operator_delete(local_f0);
  }
  if (local_f8 != (long *)0x0) {
    LOCK();
    plVar1 = local_f8 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)(*local_f8 + 8))();
    }
  }
  piVar13 = (int *)(lStack_100 + -0x10);
  if (piVar13 != &emptyString) {
    LOCK();
    iVar2 = *piVar13;
    *piVar13 = *piVar13 + -1;
    UNLOCK();
    if (iVar2 == 0) {
      operator_delete__(piVar13);
    }
  }
  piVar13 = (int *)(local_108 + -0x10);
  if (piVar13 != &emptyString) {
    LOCK();
    iVar2 = *piVar13;
    *piVar13 = *piVar13 + -1;
    UNLOCK();
    if (iVar2 == 0) {
      operator_delete__(piVar13);
    }
  }
  plVar1 = local_80;
  if (local_68 != (void *)0x0) {
    operator_delete(local_68);
    plVar1 = local_80;
  }
  for (; plVar1 != local_78; plVar1 = plVar1 + 1) {
    piVar13 = (int *)(*plVar1 + -0x10);
    if (piVar13 != &emptyString) {
      LOCK();
      iVar2 = *piVar13;
      *piVar13 = *piVar13 + -1;
      UNLOCK();
      if (iVar2 == 0) {
        operator_delete__(piVar13);
      }
    }
  }
  if (local_80 != (long *)0x0) {
    operator_delete(local_80);
  }
  if (local_88 != (long *)0x0) {
    LOCK();
    plVar1 = local_88 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)(*local_88 + 8))();
    }
  }
  piVar13 = (int *)(local_90 + -0x10);
  if (piVar13 != &emptyString) {
    LOCK();
    iVar2 = *piVar13;
    *piVar13 = *piVar13 + -1;
    UNLOCK();
    if (iVar2 == 0) {
      operator_delete__(piVar13);
    }
  }
  piVar13 = (int *)(local_98 + -0x10);
  if (piVar13 != &emptyString) {
    LOCK();
    iVar2 = *piVar13;
    *piVar13 = *piVar13 + -1;
    UNLOCK();
    if (iVar2 == 0) {
      operator_delete__(piVar13);
    }
  }
  local_178._0_8_ = *(long *)(param_6 + 8);
  piVar13 = (int *)(*(long *)(param_6 + 8) + -0x10);
  if (piVar13 != &emptyString) {
    LOCK();
    *piVar13 = *piVar13 + 1;
    UNLOCK();
  }
                    /* try { // try from 002921ff to 00292226 has its CatchHandler @ 0029229f */
  Graphics::drawFittedText
            (0,DAT_005d9960,(long)param_1,(long *)local_178,4,
             CONCAT44(*(undefined4 *)((long)param_2 + 0xc),(int)param_2[1] + -6),(uint *)0x21,1);
  piVar13 = (int *)(local_178._0_8_ + -0x10);
  if (piVar13 != &emptyString) {
    LOCK();
    iVar2 = *piVar13;
    *piVar13 = *piVar13 + -1;
    UNLOCK();
    if (iVar2 == 0) {
      operator_delete__(piVar13);
    }
  }
  return;
}


