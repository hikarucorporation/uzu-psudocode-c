// Function : getAlertWindowFont
// Namespace: juce:LookAndFeel_V2
// Entry    : 0020f2a0
// Prototype: Font * getAlertWindowFont(Font * param_1, long * param_2)
// Body     : 0020f2a0 - 0020f55e


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::LookAndFeel_V2::getAlertWindowFont() */

Font * __cdecl juce::LookAndFeel_V2::getAlertWindowFont(Font *param_1,long *param_2)

{
  long *plVar1;
  int iVar2;
  long *plVar3;
  long *plVar4;
  undefined4 uVar5;
  int *piVar6;
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
  undefined8 uStack_10a;
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
  undefined8 uStack_9a;
  long local_88;
  long local_80;
  long *local_78;
  long *local_70;
  long *local_68;
  void *local_58;
  
  FontOptions::FontOptions(DAT_005d9074,(FontOptions *)&local_88,0);
                    /* try { // try from 0020f2ce to 0020f2e7 has its CatchHandler @ 0020f56c */
  uVar5 = (**(code **)(*param_2 + 0x50))(param_2);
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
  uStack_10a = uStack_9a;
  local_b0 = uVar5;
                    /* try { // try from 0020f39b to 0020f3a5 has its CatchHandler @ 0020f55f */
  Font::Font(param_1,&local_168);
  plVar1 = local_150;
  plVar3 = plStack_148;
  if (local_138 != (void *)0x0) {
    operator_delete(local_138);
    plVar1 = local_150;
    plVar3 = plStack_148;
  }
  for (; plVar4 = plStack_148, plVar1 != plStack_148; plVar1 = plVar1 + 1) {
    piVar6 = (int *)(*plVar1 + -0x10);
    plStack_148 = plVar3;
    if (piVar6 != &emptyString) {
      LOCK();
      iVar2 = *piVar6;
      *piVar6 = *piVar6 + -1;
      UNLOCK();
      if (iVar2 == 0) {
        operator_delete__(piVar6);
      }
    }
    plVar3 = plStack_148;
    plStack_148 = plVar4;
  }
  plStack_148 = plVar3;
  if (local_150 != (long *)0x0) {
    operator_delete(local_150);
  }
  if (local_158 != (long *)0x0) {
    LOCK();
    plVar1 = local_158 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)(*local_158 + 8))();
    }
  }
  piVar6 = (int *)(lStack_160 + -0x10);
  if (piVar6 != &emptyString) {
    LOCK();
    iVar2 = *piVar6;
    *piVar6 = *piVar6 + -1;
    UNLOCK();
    if (iVar2 == 0) {
      operator_delete__(piVar6);
    }
  }
  piVar6 = (int *)(local_168 + -0x10);
  if (piVar6 != &emptyString) {
    LOCK();
    iVar2 = *piVar6;
    *piVar6 = *piVar6 + -1;
    UNLOCK();
    if (iVar2 == 0) {
      operator_delete__(piVar6);
    }
  }
  plVar1 = local_70;
  if (local_58 != (void *)0x0) {
    operator_delete(local_58);
    plVar1 = local_70;
  }
  for (; plVar1 != local_68; plVar1 = plVar1 + 1) {
    piVar6 = (int *)(*plVar1 + -0x10);
    if (piVar6 != &emptyString) {
      LOCK();
      iVar2 = *piVar6;
      *piVar6 = *piVar6 + -1;
      UNLOCK();
      if (iVar2 == 0) {
        operator_delete__(piVar6);
      }
    }
  }
  if (local_70 != (long *)0x0) {
    operator_delete(local_70);
  }
  if (local_78 != (long *)0x0) {
    LOCK();
    plVar1 = local_78 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)(*local_78 + 8))();
    }
  }
  piVar6 = (int *)(local_80 + -0x10);
  if (piVar6 != &emptyString) {
    LOCK();
    iVar2 = *piVar6;
    *piVar6 = *piVar6 + -1;
    UNLOCK();
    if (iVar2 == 0) {
      operator_delete__(piVar6);
    }
  }
  piVar6 = (int *)(local_88 + -0x10);
  if (piVar6 != &emptyString) {
    LOCK();
    iVar2 = *piVar6;
    *piVar6 = *piVar6 + -1;
    UNLOCK();
    if (iVar2 == 0) {
      operator_delete__(piVar6);
    }
  }
  return param_1;
}


