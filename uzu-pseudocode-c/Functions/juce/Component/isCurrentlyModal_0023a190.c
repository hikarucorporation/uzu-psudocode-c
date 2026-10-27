// Function : isCurrentlyModal
// Namespace: juce:Component
// Entry    : 0023a190
// Prototype: undefined8 isCurrentlyModal(long param_1)
// Body     : 0023a190 - 0023a28c


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::Component::isCurrentlyModal(bool) const */

undefined8 __cdecl juce::Component::isCurrentlyModal(long param_1)

{
  int *piVar1;
  int iVar2;
  void *pvVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  
  if (ModalComponentManager::singletonHolder == (undefined8 *)0x0) {
                    /* try { // try from 0023a1b5 to 0023a1be has its CatchHandler @ 0023a2a0 */
    puVar4 = operator_new(0x28);
    *puVar4 = &PTR__AsyncUpdater_00712b58;
    puVar4[1] = 0;
                    /* try { // try from 0023a1d4 to 0023a1dd has its CatchHandler @ 0023a28d */
    puVar5 = operator_new(0x20);
    *(undefined4 *)(puVar5 + 1) = 0;
    *puVar5 = &PTR__AsyncUpdaterMessage_00712cc0;
    puVar5[2] = puVar4;
    *(undefined4 *)(puVar5 + 3) = 0;
    LOCK();
    *(int *)(puVar5 + 1) = *(int *)(puVar5 + 1) + 1;
    UNLOCK();
    pvVar3 = (void *)puVar4[1];
    puVar4[1] = puVar5;
    if (pvVar3 != (void *)0x0) {
      LOCK();
      piVar1 = (int *)((long)pvVar3 + 8);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        operator_delete(pvVar3);
      }
    }
    DeletedAtShutdown::DeletedAtShutdown((DeletedAtShutdown *)(puVar4 + 2));
    *puVar4 = &PTR__ModalComponentManager_00707a60;
    puVar4[2] = &PTR__ModalComponentManager_00707a88;
    puVar4[3] = 0;
    puVar4[4] = 0;
    LOCK();
    UNLOCK();
    iVar2 = *(int *)((long)puVar4 + 0x24);
    ModalComponentManager::singletonHolder = puVar4;
  }
  else {
    iVar2 = *(int *)((long)ModalComponentManager::singletonHolder + 0x24);
  }
  if ((long)iVar2 != 0) {
    lVar6 = (long)iVar2 * 8;
    lVar7 = 0;
    do {
      if ((*(char *)(*(long *)(ModalComponentManager::singletonHolder[3] + lVar7) + 0x5c) != '\0')
         && (*(long *)(*(long *)(ModalComponentManager::singletonHolder[3] + lVar7) + 0x40) ==
             param_1)) {
        return CONCAT71((int7)((ulong)lVar6 >> 8),1);
      }
      lVar7 = lVar7 + 8;
    } while (lVar6 != lVar7);
  }
  return 0;
}


