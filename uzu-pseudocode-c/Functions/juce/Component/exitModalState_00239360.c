// Function : exitModalState
// Namespace: juce:Component
// Entry    : 00239360
// Prototype: undefined exitModalState(Component * this, undefined4 param_1)
// Body     : 00239360 - 00239721


/* juce::Component::exitModalState(int) */

void __thiscall juce::Component::exitModalState(Component *this,undefined4 param_1)

{
  long *plVar1;
  int *piVar2;
  pthread_t pVar3;
  void *pvVar4;
  long lVar5;
  ModalComponentManager *pMVar6;
  char cVar7;
  int iVar8;
  code *in_RAX;
  undefined8 uVar9;
  undefined8 *puVar10;
  pthread_t pVar11;
  long *plVar12;
  long *plVar13;
  ModalComponentManager *pMVar14;
  ulong uVar15;
  bool bVar16;
  code *local_38;
  
  plVar13 = *(long **)(this + 0xd8);
  local_38 = in_RAX;
  if (plVar13 == (long *)0x0) {
    plVar13 = operator_new(0x18);
    *(undefined4 *)(plVar13 + 1) = 0;
    *plVar13 = (long)&PTR__ReferenceCountedObject_00714b80;
    plVar13[2] = (long)this;
    LOCK();
    *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
    UNLOCK();
    plVar12 = *(long **)(this + 0xd8);
    *(long **)(this + 0xd8) = plVar13;
    if (plVar12 == (long *)0x0) goto LAB_00239381;
    LOCK();
    plVar13 = plVar12 + 1;
    *(int *)plVar13 = (int)*plVar13 + -1;
    UNLOCK();
    if ((int)*plVar13 == 0) {
      (**(code **)(*plVar12 + 8))();
    }
    plVar13 = *(long **)(this + 0xd8);
    if (plVar13 != (long *)0x0) goto LAB_00239381;
    plVar13 = (long *)0x0;
    uVar9 = isCurrentlyModal((long)this);
    cVar7 = (char)uVar9;
  }
  else {
LAB_00239381:
    LOCK();
    *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
    UNLOCK();
    uVar9 = isCurrentlyModal((long)this);
    cVar7 = (char)uVar9;
  }
  if (cVar7 != '\0') {
                    /* try { // try from 00239397 to 0023939b has its CatchHandler @ 0023975a */
    puVar10 = MessageManager::getInstance();
    iVar8 = pthread_mutex_lock((pthread_mutex_t *)(puVar10 + 4));
    if (iVar8 != 0) {
                    /* try { // try from 0023971b to 00239721 has its CatchHandler @ 00239752 */
                    /* WARNING: Subroutine does not return */
      std::__throw_system_error(iVar8);
    }
    pVar11 = pthread_self();
    pVar3 = puVar10[2];
    pthread_mutex_unlock((pthread_mutex_t *)(puVar10 + 4));
    if (pVar3 == pVar11) {
      if (ModalComponentManager::singletonHolder == (ModalComponentManager *)0x0) {
                    /* try { // try from 002394f5 to 002394fe has its CatchHandler @ 00239736 */
        pMVar14 = operator_new(0x28);
        *(undefined ***)pMVar14 = &PTR__AsyncUpdater_00712b58;
        *(undefined8 *)(pMVar14 + 8) = 0;
                    /* try { // try from 00239514 to 0023951d has its CatchHandler @ 00239722 */
        puVar10 = operator_new(0x20);
        *(undefined4 *)(puVar10 + 1) = 0;
        *puVar10 = &PTR__AsyncUpdaterMessage_00712cc0;
        puVar10[2] = pMVar14;
        *(undefined4 *)(puVar10 + 3) = 0;
        LOCK();
        *(int *)(puVar10 + 1) = *(int *)(puVar10 + 1) + 1;
        UNLOCK();
        pvVar4 = *(void **)(pMVar14 + 8);
        *(undefined8 **)(pMVar14 + 8) = puVar10;
        if (pvVar4 != (void *)0x0) {
          LOCK();
          piVar2 = (int *)((long)pvVar4 + 8);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            operator_delete(pvVar4);
          }
        }
        DeletedAtShutdown::DeletedAtShutdown((DeletedAtShutdown *)(pMVar14 + 0x10));
        *(undefined ***)pMVar14 = &PTR__ModalComponentManager_00707a60;
        *(undefined ***)(pMVar14 + 0x10) = &PTR__ModalComponentManager_00707a88;
        *(undefined8 *)(pMVar14 + 0x18) = 0;
        *(undefined8 *)(pMVar14 + 0x20) = 0;
        LOCK();
        UNLOCK();
        ModalComponentManager::singletonHolder = pMVar14;
      }
      pMVar14 = ModalComponentManager::singletonHolder;
      if (0 < (int)*(uint *)(ModalComponentManager::singletonHolder + 0x24)) {
        uVar15 = (ulong)*(uint *)(ModalComponentManager::singletonHolder + 0x24) + 1;
        do {
          lVar5 = *(long *)(*(long *)(pMVar14 + 0x18) + (ulong)((int)uVar15 - 2) * 8);
          if (((*(Component **)(lVar5 + 0x40) == this) &&
              (*(undefined4 *)(lVar5 + 0x58) = param_1, *(char *)(lVar5 + 0x5c) != '\0')) &&
             (*(undefined1 *)(lVar5 + 0x5c) = 0, pMVar6 = ModalComponentManager::singletonHolder,
             ModalComponentManager::singletonHolder != (ModalComponentManager *)0x0)) {
            LOCK();
            bVar16 = *(int *)(*(long *)(ModalComponentManager::singletonHolder + 8) + 0x18) == 0;
            if (bVar16) {
              *(int *)(*(long *)(ModalComponentManager::singletonHolder + 8) + 0x18) = 1;
            }
            UNLOCK();
            if (bVar16) {
              plVar12 = *(long **)(pMVar6 + 8);
              if (((MessageManager::instance == 0) || (*(int *)(MessageManager::instance + 8) != 0))
                 || (InternalMessageQueue::singletonHolder._40_8_ == 0)) {
                LOCK();
                *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
                UNLOCK();
                LOCK();
                plVar1 = plVar12 + 1;
                *(int *)plVar1 = (int)*plVar1 + -1;
                UNLOCK();
                if ((int)*plVar1 == 0) {
                  (**(code **)(*plVar12 + 8))(plVar12);
                }
                LOCK();
                *(undefined4 *)(*(long *)(pMVar6 + 8) + 0x18) = 0;
                UNLOCK();
              }
              else {
                InternalMessageQueue::postMessage
                          ((InternalMessageQueue *)InternalMessageQueue::singletonHolder._40_8_,
                           (long)plVar12);
              }
            }
          }
          uVar15 = uVar15 - 1;
        } while (1 < uVar15);
      }
                    /* try { // try from 0023964b to 00239657 has its CatchHandler @ 00239736 */
      ModalComponentManager::bringModalComponentsToFront(pMVar14,'\x01');
      if (plVar13 == (long *)0x0) {
        return;
      }
      if ((long *)plVar13[2] != (long *)0x0) {
        local_38 = internalMouseEnter;
                    /* try { // try from 00239679 to 00239680 has its CatchHandler @ 0023972f */
        detail::ComponentHelpers::
        sendMouseEventToComponentsThatAreBlockedByModal<void(*)(juce::Component::SafePointer<juce::Component>,juce::MouseInputSource,juce::Point<float>,juce::Time)>
                  ((long *)plVar13[2],&local_38);
      }
      goto LAB_002394c2;
    }
    puVar10 = *(undefined8 **)(this + 0xd8);
    if (puVar10 == (undefined8 *)0x0) {
                    /* try { // try from 00239686 to 0023968f has its CatchHandler @ 00239734 */
      puVar10 = operator_new(0x18);
      *(undefined4 *)(puVar10 + 1) = 0;
      *puVar10 = &PTR__ReferenceCountedObject_00714b80;
      puVar10[2] = this;
      LOCK();
      *(int *)(puVar10 + 1) = *(int *)(puVar10 + 1) + 1;
      UNLOCK();
      plVar12 = *(long **)(this + 0xd8);
      *(undefined8 **)(this + 0xd8) = puVar10;
      if (plVar12 == (long *)0x0) goto LAB_002393e1;
      LOCK();
      plVar1 = plVar12 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)(*plVar12 + 8))();
      }
      puVar10 = *(undefined8 **)(this + 0xd8);
      if (puVar10 != (undefined8 *)0x0) goto LAB_002393e1;
      puVar10 = (undefined8 *)0x0;
    }
    else {
LAB_002393e1:
      LOCK();
      *(int *)(puVar10 + 1) = *(int *)(puVar10 + 1) + 1;
      UNLOCK();
    }
                    /* try { // try from 002393e6 to 002393ef has its CatchHandler @ 00239738 */
    plVar12 = operator_new(0x20);
    *(undefined4 *)(plVar12 + 1) = 0;
    *plVar12 = (long)&PTR__AsyncCallInvoker_00710fb8;
    plVar12[2] = (long)puVar10;
    *(undefined4 *)(plVar12 + 3) = param_1;
    if (((MessageManager::instance == 0) || (*(int *)(MessageManager::instance + 8) != 0)) ||
       (InternalMessageQueue::singletonHolder._40_8_ == 0)) {
      LOCK();
      *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
      UNLOCK();
      LOCK();
      plVar1 = plVar12 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)(*plVar12 + 8))(plVar12);
      }
    }
    else {
      InternalMessageQueue::postMessage
                ((InternalMessageQueue *)InternalMessageQueue::singletonHolder._40_8_,(long)plVar12)
      ;
    }
  }
  if (plVar13 == (long *)0x0) {
    return;
  }
LAB_002394c2:
  LOCK();
  plVar12 = plVar13 + 1;
  *(int *)plVar12 = (int)*plVar12 + -1;
  UNLOCK();
  if ((int)*plVar12 == 0) {
                    /* WARNING: Could not recover jumptable at 0x002394e2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar13 + 8))(plVar13);
    return;
  }
  return;
}


