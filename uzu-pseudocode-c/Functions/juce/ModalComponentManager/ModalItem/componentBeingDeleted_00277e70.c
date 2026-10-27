// Function : componentBeingDeleted
// Namespace: juce:ModalComponentManager:ModalItem
// Entry    : 00277e70
// Prototype: ulong componentBeingDeleted(ModalItem * this, ulong param_1)
// Body     : 00277e70 - 00277f21


/* juce::ModalComponentManager::ModalItem::componentBeingDeleted(juce::Component&) */

ulong __thiscall
juce::ModalComponentManager::ModalItem::componentBeingDeleted(ModalItem *this,ulong param_1)

{
  uint *puVar1;
  long *plVar2;
  uint uVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  
  ComponentMovementWatcher::componentBeingDeleted((ComponentMovementWatcher *)this,param_1);
  for (uVar6 = *(ulong *)(this + 0x40); uVar6 != param_1; uVar6 = *(ulong *)(uVar6 + 0x30)) {
    if (uVar6 == 0) {
      return 0;
    }
  }
  this[0x5d] = (ModalItem)0x0;
  if ((this[0x5c] != (ModalItem)0x0) &&
     (this[0x5c] = (ModalItem)0x0, lVar5 = ModalComponentManager::singletonHolder,
     ModalComponentManager::singletonHolder != 0)) {
    uVar6 = 0;
    puVar1 = (uint *)(*(long *)(ModalComponentManager::singletonHolder + 8) + 0x18);
    LOCK();
    uVar3 = *puVar1;
    if (uVar3 == 0) {
      *puVar1 = 1;
    }
    else {
      uVar6 = (ulong)uVar3;
    }
    UNLOCK();
    if (uVar3 == 0) {
      plVar4 = *(long **)(lVar5 + 8);
      if (((MessageManager::instance != 0) && (*(int *)(MessageManager::instance + 8) == 0)) &&
         (InternalMessageQueue::singletonHolder._40_8_ != 0)) {
        uVar6 = InternalMessageQueue::postMessage
                          ((InternalMessageQueue *)InternalMessageQueue::singletonHolder._40_8_,
                           (long)plVar4);
        return uVar6;
      }
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
      LOCK();
      plVar2 = plVar4 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)(*plVar4 + 8))(plVar4);
      }
      uVar6 = *(ulong *)(lVar5 + 8);
      LOCK();
      *(undefined4 *)(uVar6 + 0x18) = 0;
      UNLOCK();
    }
  }
  return uVar6;
}


