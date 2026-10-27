// Function : withFont
// Namespace: juce:detail:ShapedTextOptions
// Entry    : 00308190
// Prototype: undefined withFont(undefined8 * param_1, undefined8 * param_2, long * param_3)
// Body     : 00308190 - 0030844b


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::detail::ShapedTextOptions::withFont(juce::Font) const */

void __cdecl
juce::detail::ShapedTextOptions::withFont(undefined8 *param_1,undefined8 *param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  undefined8 uVar3;
  long *plVar4;
  long *plVar5;
  void *pvVar6;
  int *piVar7;
  long *plVar8;
  bool bVar9;
  long *local_100;
  void *local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  long *plStack_e0;
  long *local_d8;
  undefined8 uStack_d0;
  void *local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  void *local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  long *local_68;
  long *plStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined1 *local_38;
  
  local_d8 = (long *)0x0;
  uStack_d0 = 0;
  local_e8 = 0;
  plStack_e0 = (long *)0x0;
  local_f8 = (void *)0x0;
  uStack_f0 = 0;
  local_c8 = (void *)0x0;
  uStack_c0 = 0;
  local_b8 = 0;
  if (param_3 != (long *)0x0) {
    LOCK();
    *(int *)(param_3 + 1) = (int)param_3[1] + 1;
    UNLOCK();
  }
                    /* try { // try from 003081d5 to 003081f4 has its CatchHandler @ 00308451 */
  local_100 = param_3;
  RangedValues<juce::Font>::set<juce::detail::MergeEqualItemsYes>
            ((RangedValues<juce::Font> *)&local_f8,0,0x7fffffffffffffff,(long *)&local_100,
             (long *)&local_c8);
  if (local_100 != (long *)0x0) {
    LOCK();
    plVar2 = local_100 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)(*local_100 + 8))();
    }
  }
  local_88 = *(undefined4 *)(param_2 + 4);
  local_a8 = *param_2;
  uStack_a0 = param_2[1];
  local_98 = *(undefined4 *)(param_2 + 2);
  uStack_94 = *(undefined4 *)((long)param_2 + 0x14);
  uStack_90 = *(undefined4 *)(param_2 + 3);
  uStack_8c = *(undefined4 *)((long)param_2 + 0x1c);
                    /* try { // try from 00308233 to 0030823a has its CatchHandler @ 0030844c */
  RangedValues<juce::Font>::RangedValues((RangedValues<juce::Font> *)&local_80,param_2 + 5);
  pvVar6 = local_80;
  local_40 = param_2[0xd];
  local_50 = param_2[0xb];
  uStack_48 = param_2[0xc];
  local_38 = (undefined1 *)param_2[0xe];
  piVar7 = (int *)((long)local_38 + -0x10);
  if (piVar7 != &emptyString) {
    LOCK();
    *piVar7 = *piVar7 + 1;
    UNLOCK();
  }
  local_80 = local_f8;
  uStack_78 = uStack_f0;
  local_70 = local_e8;
  local_f8 = (void *)0x0;
  uStack_f0 = 0;
  local_e8 = 0;
  if (pvVar6 != (void *)0x0) {
    operator_delete(pvVar6);
  }
  plVar5 = plStack_60;
  plVar4 = local_68;
  plVar2 = plStack_e0;
  uVar3 = local_d8;
  local_58 = uStack_d0;
  plStack_e0 = (long *)0x0;
  local_d8 = (long *)0x0;
  uStack_d0 = 0;
  bVar9 = local_68 != plStack_60;
  plStack_60 = (long *)uVar3;
  if (bVar9) {
    plVar8 = local_68;
    local_68 = plVar2;
    do {
      plVar2 = (long *)*plVar8;
      if (plVar2 != (long *)0x0) {
        LOCK();
        plVar1 = plVar2 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)(*plVar2 + 8))();
        }
      }
      plVar8 = plVar8 + 1;
      plVar2 = local_68;
    } while (plVar8 != plVar5);
  }
  local_68 = plVar2;
  if (plVar4 != (long *)0x0) {
    operator_delete(plVar4);
  }
  *(undefined4 *)(param_1 + 4) = local_88;
  param_1[2] = CONCAT44(uStack_94,local_98);
  param_1[3] = CONCAT44(uStack_8c,uStack_90);
  *param_1 = local_a8;
  param_1[1] = uStack_a0;
  param_1[5] = local_80;
  param_1[6] = uStack_78;
  param_1[7] = local_70;
  local_80 = (void *)0x0;
  uStack_78 = 0;
  local_70 = 0;
  param_1[8] = local_68;
  param_1[9] = plStack_60;
  param_1[10] = local_58;
  local_68 = (long *)0x0;
  plStack_60 = (long *)0x0;
  local_58 = 0;
  param_1[0xd] = local_40;
  param_1[0xb] = local_50;
  param_1[0xc] = uStack_48;
  param_1[0xe] = local_38;
  local_38 = &DAT_0061ac58;
  plVar2 = plStack_e0;
  plVar4 = local_d8;
  if (local_c8 != (void *)0x0) {
    operator_delete(local_c8);
    plVar2 = plStack_e0;
    plVar4 = local_d8;
  }
  for (; plVar5 = local_d8, plVar2 != local_d8; plVar2 = plVar2 + 1) {
    plVar8 = (long *)*plVar2;
    local_d8 = plVar4;
    if (plVar8 != (long *)0x0) {
      LOCK();
      plVar1 = plVar8 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)(*plVar8 + 8))();
      }
    }
    plVar4 = local_d8;
    local_d8 = plVar5;
  }
  local_d8 = plVar4;
  if (plStack_e0 != (long *)0x0) {
    operator_delete(plStack_e0);
  }
  if (local_f8 != (void *)0x0) {
    operator_delete(local_f8);
  }
  return;
}


