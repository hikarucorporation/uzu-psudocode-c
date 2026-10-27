// Function : ~ModalComponentManager
// Namespace: juce:ModalComponentManager
// Entry    : 00224510
// Prototype: undefined ~ModalComponentManager(ModalComponentManager * this)
// Body     : 00224510 - 00224683


/* juce::ModalComponentManager::~ModalComponentManager() */

void __thiscall juce::ModalComponentManager::~ModalComponentManager(ModalComponentManager *this)

{
  int *piVar1;
  uint uVar2;
  long lVar3;
  ComponentMovementWatcher *pCVar4;
  void *pvVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  int iVar9;
  
  *(undefined ***)this = &PTR__ModalComponentManager_00707a60;
  *(undefined ***)(this + 0x10) = &PTR__ModalComponentManager_00707a88;
  uVar2 = *(uint *)(this + 0x24);
  uVar6 = (ulong)uVar2;
  if (0 < (int)uVar2) {
    iVar9 = -uVar2;
    uVar8 = uVar6;
    while( true ) {
      uVar7 = (ulong)((int)uVar8 - 1);
      lVar3 = *(long *)(this + 0x18);
      pCVar4 = *(ComponentMovementWatcher **)(lVar3 + uVar7 * 8);
      memmove((void *)(lVar3 + uVar7 * 8),(void *)(lVar3 + uVar7 * 8 + 8),
              (long)((int)uVar6 + iVar9) << 3);
      *(int *)(this + 0x24) = *(int *)(this + 0x24) + -1;
      ContainerDeletePolicy<juce::ModalComponentManager::ModalItem>::destroy(pCVar4);
      if ((long)uVar8 < 2) break;
      uVar6 = (ulong)*(uint *)(this + 0x24);
      iVar9 = iVar9 + 1;
      uVar8 = uVar8 - 1;
    }
  }
  if (*(int *)(this + 0x20) != 0) {
    free(*(void **)(this + 0x18));
    *(undefined8 *)(this + 0x18) = 0;
  }
  *(undefined4 *)(this + 0x20) = 0;
  LOCK();
  if (this == singletonHolder) {
    singletonHolder = (ModalComponentManager *)0x0;
  }
  UNLOCK();
  uVar2 = *(uint *)(this + 0x24);
  uVar6 = (ulong)uVar2;
  if (0 < (int)uVar2) {
    iVar9 = -uVar2;
    uVar8 = uVar6;
    while( true ) {
      uVar7 = (ulong)((int)uVar8 - 1);
      lVar3 = *(long *)(this + 0x18);
      pCVar4 = *(ComponentMovementWatcher **)(lVar3 + uVar7 * 8);
      memmove((void *)(lVar3 + uVar7 * 8),(void *)(lVar3 + uVar7 * 8 + 8),
              (long)((int)uVar6 + iVar9) << 3);
      *(int *)(this + 0x24) = *(int *)(this + 0x24) + -1;
      ContainerDeletePolicy<juce::ModalComponentManager::ModalItem>::destroy(pCVar4);
      if ((long)uVar8 < 2) break;
      uVar6 = (ulong)*(uint *)(this + 0x24);
      iVar9 = iVar9 + 1;
      uVar8 = uVar8 - 1;
    }
  }
  *(undefined4 *)(this + 0x24) = 0;
  free(*(void **)(this + 0x18));
  DeletedAtShutdown::~DeletedAtShutdown((DeletedAtShutdown *)(this + 0x10));
  *(undefined ***)this = &PTR__AsyncUpdater_00712b58;
  LOCK();
  *(undefined4 *)(*(long *)(this + 8) + 0x18) = 0;
  UNLOCK();
  pvVar5 = *(void **)(this + 8);
  if (pvVar5 != (void *)0x0) {
    LOCK();
    piVar1 = (int *)((long)pvVar5 + 8);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      operator_delete(pvVar5);
      return;
    }
  }
  return;
}


