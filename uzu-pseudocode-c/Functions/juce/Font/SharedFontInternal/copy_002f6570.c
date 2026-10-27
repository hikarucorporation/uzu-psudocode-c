// Function : copy
// Namespace: juce:Font:SharedFontInternal
// Entry    : 002f6570
// Prototype: undefined copy(undefined8 * param_1, long param_2)
// Body     : 002f6570 - 002f67a7


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::Font::SharedFontInternal::copy() const */

void __cdecl juce::Font::SharedFontInternal::copy(undefined8 *param_1,long param_2)

{
  long *plVar1;
  int iVar2;
  long *plVar3;
  long *plVar4;
  undefined1 *puVar5;
  long *plVar6;
  undefined8 *puVar7;
  int *piVar8;
  pthread_mutexattr_t local_a0 [2];
  undefined1 *local_98;
  undefined1 *puStack_90;
  long *local_88;
  long *local_80;
  long *plStack_78;
  undefined8 local_70;
  void *local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined6 uStack_48;
  undefined2 uStack_42;
  undefined6 uStack_40;
  undefined8 uStack_3a;
  
  pthread_mutex_lock((pthread_mutex_t *)(param_2 + 0x80));
                    /* try { // try from 002f6595 to 002f659e has its CatchHandler @ 002f67cb */
  puVar7 = operator_new(0xa8);
  plVar3 = *(long **)(param_2 + 0x10);
  if (plVar3 != (long *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
  }
                    /* try { // try from 002f65b5 to 002f65c1 has its CatchHandler @ 002f67a8 */
  FontOptions::FontOptions((FontOptions *)&local_98,(long *)(param_2 + 0x18));
  puVar5 = local_98;
  *(undefined4 *)(puVar7 + 1) = 0;
  *puVar7 = &PTR__SharedFontInternal_00712058;
  puVar7[2] = plVar3;
  if (plVar3 != (long *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
  }
  local_98 = &DAT_0061ac58;
  puVar7[3] = puVar5;
  puVar7[4] = puStack_90;
  puStack_90 = &DAT_0061ac58;
  puVar7[5] = local_88;
  local_88 = (long *)0x0;
  puVar7[6] = local_80;
  puVar7[7] = plStack_78;
  puVar7[8] = local_70;
  local_80 = (long *)0x0;
  plStack_78 = (long *)0x0;
  local_70 = 0;
  puVar7[9] = local_68;
  puVar7[10] = uStack_60;
  puVar7[0xb] = local_58;
  local_68 = (void *)0x0;
  uStack_60 = 0;
  local_58 = 0;
  *(ulong *)((long)puVar7 + 0x6e) = CONCAT62(uStack_40,uStack_42);
  *(undefined8 *)((long)puVar7 + 0x76) = uStack_3a;
  puVar7[0xc] = local_50;
  puVar7[0xd] = CONCAT26(uStack_42,uStack_48);
  pthread_mutexattr_init(local_a0);
  pthread_mutexattr_settype(local_a0,1);
  pthread_mutexattr_setprotocol(local_a0,1);
  pthread_mutex_init((pthread_mutex_t *)(puVar7 + 0x10),local_a0);
  pthread_mutexattr_destroy(local_a0);
  *param_1 = puVar7;
  LOCK();
  *(int *)(puVar7 + 1) = *(int *)(puVar7 + 1) + 1;
  UNLOCK();
  plVar1 = local_80;
  plVar4 = plStack_78;
  if (local_68 != (void *)0x0) {
    operator_delete(local_68);
    plVar1 = local_80;
    plVar4 = plStack_78;
  }
  for (; plVar6 = plStack_78, plVar1 != plStack_78; plVar1 = plVar1 + 1) {
    piVar8 = (int *)(*plVar1 + -0x10);
    plStack_78 = plVar4;
    if (piVar8 != &emptyString) {
      LOCK();
      iVar2 = *piVar8;
      *piVar8 = *piVar8 + -1;
      UNLOCK();
      if (iVar2 == 0) {
        operator_delete__(piVar8);
      }
    }
    plVar4 = plStack_78;
    plStack_78 = plVar6;
  }
  plStack_78 = plVar4;
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
  piVar8 = (int *)(puStack_90 + -0x10);
  if (piVar8 != &emptyString) {
    LOCK();
    iVar2 = *piVar8;
    *piVar8 = *piVar8 + -1;
    UNLOCK();
    if (iVar2 == 0) {
      operator_delete__(piVar8);
    }
  }
  piVar8 = (int *)(local_98 + -0x10);
  if (piVar8 != &emptyString) {
    LOCK();
    iVar2 = *piVar8;
    *piVar8 = *piVar8 + -1;
    UNLOCK();
    if (iVar2 == 0) {
      operator_delete__(piVar8);
    }
  }
  if (plVar3 != (long *)0x0) {
    LOCK();
    plVar1 = plVar3 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)(*plVar3 + 8))(plVar3);
    }
  }
  pthread_mutex_unlock((pthread_mutex_t *)(param_2 + 0x80));
  return;
}


