// Function : componentVisibilityChanged
// Namespace: juce:ModalComponentManager:ModalItem
// Entry    : 00277fd0
// Prototype: ulong componentVisibilityChanged(ModalItem * this)
// Body     : 00277fd0 - 00278051


/* juce::ModalComponentManager::ModalItem::componentVisibilityChanged() */

ulong __thiscall juce::ModalComponentManager::ModalItem::componentVisibilityChanged(ModalItem *this)

{
  uint *puVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  uint uVar5;
  undefined4 extraout_var;
  ulong uVar6;
  
  uVar5 = Component::isShowing(*(Component **)(this + 0x40));
  uVar6 = CONCAT44(extraout_var,uVar5);
  if (((char)uVar5 == '\0') && (this[0x5c] != (ModalItem)0x0)) {
    this[0x5c] = (ModalItem)0x0;
    lVar4 = ModalComponentManager::singletonHolder;
    if (ModalComponentManager::singletonHolder != 0) {
      uVar6 = 0;
      puVar1 = (uint *)(*(long *)(ModalComponentManager::singletonHolder + 8) + 0x18);
      LOCK();
      uVar5 = *puVar1;
      if (uVar5 == 0) {
        *puVar1 = 1;
      }
      else {
        uVar6 = (ulong)uVar5;
      }
      UNLOCK();
      if (uVar5 == 0) {
        plVar3 = *(long **)(lVar4 + 8);
        if (((MessageManager::instance != 0) && (*(int *)(MessageManager::instance + 8) == 0)) &&
           (InternalMessageQueue::singletonHolder._40_8_ != 0)) {
          uVar6 = InternalMessageQueue::postMessage
                            ((InternalMessageQueue *)InternalMessageQueue::singletonHolder._40_8_,
                             (long)plVar3);
          return uVar6;
        }
        LOCK();
        *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
        UNLOCK();
        LOCK();
        plVar2 = plVar3 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)(*plVar3 + 8))(plVar3);
        }
        uVar6 = *(ulong *)(lVar4 + 8);
        LOCK();
        *(undefined4 *)(uVar6 + 0x18) = 0;
        UNLOCK();
      }
    }
  }
  return uVar6;
}


