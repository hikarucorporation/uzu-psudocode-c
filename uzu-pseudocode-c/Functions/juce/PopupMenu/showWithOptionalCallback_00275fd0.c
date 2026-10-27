// Function : showWithOptionalCallback
// Namespace: juce:PopupMenu
// Entry    : 00275fd0
// Prototype: undefined showWithOptionalCallback(long * param_1, undefined8 * param_2, long * param_3)
// Body     : 00275fd0 - 002762e3


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::PopupMenu::showWithOptionalCallback(juce::PopupMenu::Options const&,
   juce::ModalComponentManager::Callback*, bool) */

void __cdecl
juce::PopupMenu::showWithOptionalCallback(long *param_1,undefined8 *param_2,long *param_3)

{
  int *piVar1;
  long *plVar2;
  long lVar3;
  int iVar4;
  long *plVar5;
  MenuWindow *this;
  undefined8 *puVar6;
  undefined8 *puVar7;
  ulong uVar8;
  void *pvVar9;
  uint uVar10;
  undefined8 local_88;
  undefined8 uStack_80;
  long *local_78;
  long *local_70;
  long *local_68;
  long *local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  
                    /* try { // try from 00275fe7 to 00275ff0 has its CatchHandler @ 0027630b */
  plVar5 = operator_new(0x18);
  *plVar5 = (long)&PTR__PopupMenuCompletionCallback_0070fa60;
  plVar5[1] = 0;
  plVar5[2] = 0;
  if (*(int *)((long)param_1 + 0xc) == 0) {
    operator_delete(plVar5);
    if (param_3 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00276293. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_3 + 8))(param_3);
      return;
    }
  }
  else {
                    /* try { // try from 00276019 to 00276022 has its CatchHandler @ 00276310 */
    this = operator_new(0x1d0);
    local_88 = *param_2;
    uStack_80 = param_2[1];
    local_78 = (long *)param_2[2];
    if (local_78 != (long *)0x0) {
      LOCK();
      *(int *)(local_78 + 1) = (int)local_78[1] + 1;
      UNLOCK();
    }
    local_70 = (long *)param_2[3];
    if (local_70 != (long *)0x0) {
      LOCK();
      *(int *)(local_70 + 1) = (int)local_70[1] + 1;
      UNLOCK();
    }
    local_68 = (long *)param_2[4];
    if (local_68 != (long *)0x0) {
      LOCK();
      *(int *)(local_68 + 1) = (int)local_68[1] + 1;
      UNLOCK();
    }
    local_60 = (long *)param_2[5];
    if (local_60 != (long *)0x0) {
      LOCK();
      *(int *)(local_60 + 1) = (int)local_60[1] + 1;
      UNLOCK();
    }
    local_58 = param_2[6];
    uStack_50 = param_2[7];
    local_48 = param_2[8];
    uStack_40 = param_2[9];
                    /* try { // try from 002760a9 to 002760c5 has its CatchHandler @ 002762f4 */
    HelperClasses::MenuWindow::MenuWindow
              (DAT_005d9038,this,param_1,0,&local_88,
               (uint)(0 < (int)((ulong)param_2[1] >> 0x20) && 0 < (int)param_2[1]),plVar5 + 1);
    if (local_60 != (long *)0x0) {
      LOCK();
      plVar2 = local_60 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)(*local_60 + 8))();
      }
    }
    if (local_68 != (long *)0x0) {
      LOCK();
      plVar2 = local_68 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)(*local_68 + 8))();
      }
    }
    if (local_70 != (long *)0x0) {
      LOCK();
      plVar2 = local_70 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)(*local_70 + 8))();
      }
    }
    if (local_78 != (long *)0x0) {
      LOCK();
      plVar2 = local_78 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)(*local_78 + 8))();
      }
    }
    plVar2 = (long *)plVar5[2];
    plVar5[2] = (long)this;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
    PopupMenuSettings::menuWasHiddenBecauseOfAppChange = 0;
                    /* try { // try from 0027613f to 00276174 has its CatchHandler @ 00276310 */
    (**(code **)(*(long *)this + 0x60))(this,1);
    Component::enterModalState((Component *)this,param_3);
    if (ModalComponentManager::singletonHolder == (undefined8 *)0x0) {
      puVar6 = operator_new(0x28);
      *puVar6 = &PTR__AsyncUpdater_00712b58;
      puVar6[1] = 0;
                    /* try { // try from 0027618a to 00276193 has its CatchHandler @ 002762e4 */
      puVar7 = operator_new(0x20);
      *(undefined4 *)(puVar7 + 1) = 0;
      *puVar7 = &PTR__AsyncUpdaterMessage_00712cc0;
      puVar7[2] = puVar6;
      *(undefined4 *)(puVar7 + 3) = 0;
      LOCK();
      *(int *)(puVar7 + 1) = *(int *)(puVar7 + 1) + 1;
      UNLOCK();
      pvVar9 = (void *)puVar6[1];
      puVar6[1] = puVar7;
      if (pvVar9 != (void *)0x0) {
        LOCK();
        piVar1 = (int *)((long)pvVar9 + 8);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          operator_delete(pvVar9);
        }
      }
      DeletedAtShutdown::DeletedAtShutdown((DeletedAtShutdown *)(puVar6 + 2));
      *puVar6 = &PTR__ModalComponentManager_00707a60;
      puVar6[2] = &PTR__ModalComponentManager_00707a88;
      puVar6[3] = 0;
      puVar6[4] = 0;
      LOCK();
      UNLOCK();
      ModalComponentManager::singletonHolder = puVar6;
    }
    if (plVar5 != (long *)0x0) {
      uVar8 = (ulong)*(uint *)((long)ModalComponentManager::singletonHolder + 0x24);
      do {
        if ((int)uVar8 < 1) {
          (**(code **)(*plVar5 + 8))(plVar5);
          goto LAB_002762c8;
        }
        lVar3 = *(long *)(ModalComponentManager::singletonHolder[3] + -8 + uVar8 * 8);
        uVar8 = uVar8 - 1;
      } while (*(MenuWindow **)(lVar3 + 0x40) != this);
      iVar4 = *(int *)(lVar3 + 0x54);
      if ((int)*(uint *)(lVar3 + 0x50) <= iVar4) {
        uVar10 = iVar4 + ((iVar4 - (iVar4 + 1 >> 0x1f)) + 1 >> 1) + 9U & 0xfffffff8;
        if (*(uint *)(lVar3 + 0x50) != uVar10) {
          if ((int)uVar10 < 1) {
            free(*(void **)(lVar3 + 0x48));
            *(undefined8 *)(lVar3 + 0x48) = 0;
          }
          else {
            pvVar9 = realloc(*(void **)(lVar3 + 0x48),(ulong)uVar10 << 3);
            *(void **)(lVar3 + 0x48) = pvVar9;
          }
        }
        *(uint *)(lVar3 + 0x50) = uVar10;
        iVar4 = *(int *)(lVar3 + 0x54);
      }
      *(int *)(lVar3 + 0x54) = iVar4 + 1;
      *(long **)(*(long *)(lVar3 + 0x48) + (long)iVar4 * 8) = plVar5;
    }
LAB_002762c8:
                    /* try { // try from 002762cb to 002762d4 has its CatchHandler @ 00276310 */
    Component::toFront((Component *)this,'\0');
  }
  return;
}


