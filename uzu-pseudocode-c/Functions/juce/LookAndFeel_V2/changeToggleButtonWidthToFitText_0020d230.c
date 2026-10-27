// Function : changeToggleButtonWidthToFitText
// Namespace: juce:LookAndFeel_V2
// Entry    : 0020d230
// Prototype: undefined changeToggleButtonWidthToFitText(LookAndFeel_V2 * this, Component * param_1, undefined8 param_2, undefined8 param_3, uint * param_4, ulong param_5)
// Body     : 0020d230 - 0020d58e


/* juce::LookAndFeel_V2::changeToggleButtonWidthToFitText(juce::ToggleButton&) */

void __thiscall
juce::LookAndFeel_V2::changeToggleButtonWidthToFitText
          (LookAndFeel_V2 *this,Component *param_1,undefined8 param_2,undefined8 param_3,
          uint *param_4,ulong param_5)

{
  long *plVar1;
  int iVar2;
  long *plVar3;
  long *plVar4;
  undefined4 uVar5;
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
  undefined8 uVar6;
  undefined8 extraout_RDX_11;
  int *piVar7;
  float fVar8;
  float fVar9;
  long *local_170;
  long local_168;
  long lStack_160;
  long *local_158;
  long *local_150;
  long *plStack_148;
  undefined8 local_140;
  void *local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined4 uStack_10e;
  undefined4 uStack_10a;
  undefined4 uStack_106;
  undefined1 *local_f8;
  undefined1 *puStack_f0;
  long *local_e8;
  long *local_e0;
  long *plStack_d8;
  undefined8 local_d0;
  void *local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined2 uStack_a2;
  undefined2 uStack_a0;
  undefined4 uStack_9e;
  undefined4 uStack_9a;
  undefined4 uStack_96;
  long local_88;
  long local_80;
  long *local_78;
  long *local_70;
  long *local_68;
  void *local_58;
  
  fVar8 = (float)*(int *)(param_1 + 0x44) * DAT_0065b218;
  if (DAT_005d906c <= (float)*(int *)(param_1 + 0x44) * DAT_0065b218) {
    fVar8 = DAT_005d906c;
  }
  FontOptions::FontOptions(fVar8,(FontOptions *)&local_88,0);
                    /* try { // try from 0020d271 to 0020d28d has its CatchHandler @ 0020d5c0 */
  uVar5 = (**(code **)(*(long *)this + 0x50))(this);
  FontOptions::FontOptions((FontOptions *)&local_f8,&local_88);
  local_168 = (long)local_f8;
  local_f8 = &DAT_0061ac58;
  lStack_160 = (long)puStack_f0;
  puStack_f0 = &DAT_0061ac58;
  local_158 = local_e8;
  local_e8 = (long *)0x0;
  local_150 = local_e0;
  plStack_148 = plStack_d8;
  local_140 = local_d0;
  local_e0 = (long *)0x0;
  plStack_d8 = (long *)0x0;
  local_d0 = 0;
  local_138 = local_c8;
  uStack_130 = uStack_c0;
  local_128 = local_b8;
  local_c8 = (void *)0x0;
  uStack_c0 = 0;
  local_b8 = 0;
  uStack_120 = CONCAT44(uStack_ac,uVar5);
  fVar9 = (float)CONCAT22(uStack_a0,uStack_a2);
  uStack_10e = uStack_9e;
  uStack_10a = uStack_9a;
  uStack_106 = uStack_96;
                    /* try { // try from 0020d34b to 0020d359 has its CatchHandler @ 0020d58f */
  local_b0 = uVar5;
  Font::Font((Font *)&local_170,&local_168);
  uVar6 = extraout_RDX;
  plVar1 = local_150;
  plVar3 = plStack_148;
  if (local_138 != (void *)0x0) {
    operator_delete(local_138);
    uVar6 = extraout_RDX_00;
    plVar1 = local_150;
    plVar3 = plStack_148;
  }
  for (; plVar4 = plStack_148, plVar1 != plStack_148; plVar1 = plVar1 + 1) {
    piVar7 = (int *)(*plVar1 + -0x10);
    plStack_148 = plVar3;
    if (piVar7 != &emptyString) {
      LOCK();
      iVar2 = *piVar7;
      *piVar7 = *piVar7 + -1;
      UNLOCK();
      if (iVar2 == 0) {
        operator_delete__(piVar7);
        uVar6 = extraout_RDX_01;
      }
    }
    plVar3 = plStack_148;
    plStack_148 = plVar4;
  }
  plStack_148 = plVar3;
  if (local_150 != (long *)0x0) {
    operator_delete(local_150);
    uVar6 = extraout_RDX_02;
  }
  if (local_158 != (long *)0x0) {
    LOCK();
    plVar1 = local_158 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)(*local_158 + 8))();
      uVar6 = extraout_RDX_03;
    }
  }
  piVar7 = (int *)(lStack_160 + -0x10);
  if (piVar7 != &emptyString) {
    LOCK();
    iVar2 = *piVar7;
    *piVar7 = *piVar7 + -1;
    UNLOCK();
    if (iVar2 == 0) {
      operator_delete__(piVar7);
      uVar6 = extraout_RDX_04;
    }
  }
  piVar7 = (int *)(local_168 + -0x10);
  if (piVar7 != &emptyString) {
    LOCK();
    iVar2 = *piVar7;
    *piVar7 = *piVar7 + -1;
    UNLOCK();
    if (iVar2 == 0) {
      operator_delete__(piVar7);
      uVar6 = extraout_RDX_05;
    }
  }
  plVar1 = local_70;
  if (local_58 != (void *)0x0) {
    operator_delete(local_58);
    uVar6 = extraout_RDX_06;
    plVar1 = local_70;
  }
  for (; plVar1 != local_68; plVar1 = plVar1 + 1) {
    piVar7 = (int *)(*plVar1 + -0x10);
    if (piVar7 != &emptyString) {
      LOCK();
      iVar2 = *piVar7;
      *piVar7 = *piVar7 + -1;
      UNLOCK();
      if (iVar2 == 0) {
        operator_delete__(piVar7);
        uVar6 = extraout_RDX_11;
      }
    }
  }
  if (local_70 != (long *)0x0) {
    operator_delete(local_70);
    uVar6 = extraout_RDX_07;
  }
  if (local_78 != (long *)0x0) {
    LOCK();
    plVar1 = local_78 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)(*local_78 + 8))();
      uVar6 = extraout_RDX_08;
    }
  }
  piVar7 = (int *)(local_80 + -0x10);
  if (piVar7 != &emptyString) {
    LOCK();
    iVar2 = *piVar7;
    *piVar7 = *piVar7 + -1;
    UNLOCK();
    if (iVar2 == 0) {
      operator_delete__(piVar7);
      uVar6 = extraout_RDX_09;
    }
  }
  piVar7 = (int *)(local_88 + -0x10);
  if (piVar7 != &emptyString) {
    LOCK();
    iVar2 = *piVar7;
    *piVar7 = *piVar7 + -1;
    UNLOCK();
    if (iVar2 == 0) {
      operator_delete__(piVar7);
      uVar6 = extraout_RDX_10;
    }
  }
                    /* try { // try from 0020d4c8 to 0020d4d1 has its CatchHandler @ 0020d59e */
  GlyphArrangement::getStringBounds
            (&local_170,*(byte **)(param_1 + 0x158),uVar6,param_3,param_4,param_5);
  fVar8 = fVar8 * DAT_005de3ec;
  fVar9 = ceilf(fVar9);
                    /* try { // try from 0020d519 to 0020d520 has its CatchHandler @ 0020d59e */
  Component::setBounds
            (param_1,*(int *)(param_1 + 0x38),*(int *)(param_1 + 0x3c),
             SUB84((double)fVar8 + DAT_005d9098,0) + 9 + (int)fVar9,*(int *)(param_1 + 0x44));
  if (local_170 != (long *)0x0) {
    LOCK();
    plVar1 = local_170 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)(*local_170 + 8))();
    }
  }
  return;
}


