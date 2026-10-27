// Function : withDefaultMetrics
// Namespace: juce:Component
// Entry    : 00249b60
// Prototype: undefined withDefaultMetrics(undefined8 * param_1, long param_2, long * param_3)
// Body     : 00249b60 - 00249dfe


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::Component::withDefaultMetrics(juce::FontOptions) const */

void __cdecl juce::Component::withDefaultMetrics(undefined8 *param_1,long param_2,long *param_3)

{
  int iVar1;
  undefined1 *puVar2;
  long *plVar3;
  undefined4 uVar4;
  Desktop *this;
  LookAndFeel_V4 *pLVar5;
  long *plVar6;
  int *piVar7;
  undefined1 *local_128;
  undefined1 *puStack_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined6 uStack_d8;
  undefined2 uStack_d2;
  undefined6 uStack_d0;
  undefined8 uStack_ca;
  long local_b8;
  long lStack_b0;
  long *local_a8;
  long *local_a0;
  long *plStack_98;
  long local_90;
  void *local_88;
  long lStack_80;
  long local_78;
  long lStack_70;
  undefined6 uStack_68;
  undefined2 local_62;
  undefined2 uStack_60;
  undefined4 uStack_5e;
  undefined4 uStack_5a;
  undefined4 uStack_56;
  void *local_48;
  long lStack_40;
  long *local_38;
  long *plStack_30;
  
  do {
    if ((*(long *)(param_2 + 0x68) != 0) &&
       (pLVar5 = *(LookAndFeel_V4 **)(*(long *)(param_2 + 0x68) + 0x10),
       pLVar5 != (LookAndFeel_V4 *)0x0)) goto LAB_00249bd0;
    param_2 = *(long *)(param_2 + 0x30);
  } while (param_2 != 0);
  if (Desktop::instance == (Desktop *)0x0) {
                    /* try { // try from 00249ba9 to 00249bb2 has its CatchHandler @ 00249e12 */
    this = operator_new(0x1d0);
                    /* try { // try from 00249bb6 to 00249bbd has its CatchHandler @ 00249dff */
    Desktop::Desktop(this);
    Desktop::instance = this;
  }
  pLVar5 = Desktop::getDefaultLookAndFeel(Desktop::instance);
LAB_00249bd0:
  local_b8 = *param_3;
  lStack_b0 = param_3[1];
  *param_3 = (long)&DAT_0061ac58;
  param_3[1] = (long)&DAT_0061ac58;
  local_a8 = (long *)param_3[2];
  param_3[2] = 0;
  local_a0 = (long *)param_3[3];
  plStack_98 = (long *)param_3[4];
  local_90 = param_3[5];
  param_3[3] = 0;
  param_3[4] = 0;
  param_3[5] = 0;
  local_88 = (void *)param_3[6];
  lStack_80 = param_3[7];
  local_78 = param_3[8];
  param_3[6] = 0;
  param_3[7] = 0;
  param_3[8] = 0;
  lStack_70 = param_3[9];
  uStack_5e = *(undefined4 *)((long)param_3 + 0x5a);
  uStack_5a = *(undefined4 *)((long)param_3 + 0x5e);
  uStack_56 = *(undefined4 *)((long)param_3 + 0x62);
  uStack_60 = (undefined2)((uint)*(undefined4 *)((long)param_3 + 0x56) >> 0x10);
  uStack_68 = (undefined6)param_3[10];
  local_62 = (undefined2)((ulong)param_3[10] >> 0x30);
                    /* try { // try from 00249c70 to 00249c82 has its CatchHandler @ 00249e1a */
  local_48 = local_88;
  lStack_40 = lStack_80;
  local_38 = local_a0;
  plStack_30 = plStack_98;
  uVar4 = (**(code **)(*(long *)pLVar5 + 0x50))();
  FontOptions::FontOptions((FontOptions *)&local_128,&local_b8);
  plVar3 = plStack_30;
  plVar6 = local_38;
  puVar2 = local_128;
  local_128 = &DAT_0061ac58;
  *param_1 = puVar2;
  param_1[1] = puStack_120;
  puStack_120 = &DAT_0061ac58;
  param_1[2] = local_118;
  local_118 = 0;
  param_1[3] = local_110;
  param_1[4] = uStack_108;
  param_1[5] = local_100;
  local_110 = 0;
  uStack_108 = 0;
  local_100 = 0;
  param_1[6] = local_f8;
  param_1[7] = uStack_f0;
  param_1[8] = local_e8;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  *(ulong *)((long)param_1 + 0x56) = CONCAT62(uStack_d0,uStack_d2);
  *(undefined8 *)((long)param_1 + 0x5e) = uStack_ca;
  param_1[9] = CONCAT44(uStack_dc,uVar4);
  param_1[10] = CONCAT26(uStack_d2,uStack_d8);
  local_e0 = uVar4;
  if (local_48 != (void *)0x0) {
    operator_delete(local_48);
  }
  if (plVar6 != plVar3) {
    do {
      piVar7 = (int *)(*plVar6 + -0x10);
      if (piVar7 != &emptyString) {
        LOCK();
        iVar1 = *piVar7;
        *piVar7 = *piVar7 + -1;
        UNLOCK();
        if (iVar1 == 0) {
          operator_delete__(piVar7);
        }
      }
      plVar6 = plVar6 + 1;
    } while (plVar6 != plVar3);
    plVar6 = local_a0;
  }
  if (plVar6 != (long *)0x0) {
    operator_delete(plVar6);
  }
  if (local_a8 != (long *)0x0) {
    LOCK();
    plVar6 = local_a8 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
      (**(code **)(*local_a8 + 8))();
    }
  }
  piVar7 = (int *)(lStack_b0 + -0x10);
  if (piVar7 != &emptyString) {
    LOCK();
    iVar1 = *piVar7;
    *piVar7 = *piVar7 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      operator_delete__(piVar7);
    }
  }
  piVar7 = (int *)(local_b8 + -0x10);
  if (piVar7 != &emptyString) {
    LOCK();
    iVar1 = *piVar7;
    *piVar7 = *piVar7 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      operator_delete__(piVar7);
    }
  }
  return;
}


