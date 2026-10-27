// Function : handleFocusGain
// Namespace: juce:ComponentPeer
// Entry    : 002c8cb0
// Prototype: undefined handleFocusGain(ComponentPeer * this)
// Body     : 002c8cb0 - 002c9013


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* juce::ComponentPeer::handleFocusGain() */

void __thiscall juce::ComponentPeer::handleFocusGain(ComponentPeer *this)

{
  long lVar1;
  Component *pCVar2;
  long *plVar3;
  char cVar4;
  uint uVar5;
  Desktop *pDVar6;
  AccessibilityHandler *this_00;
  ulong uVar7;
  long *plVar8;
  AsyncUpdater *this_01;
  long lVar9;
  bool bVar10;
  long *local_18;
  
  lVar1 = *(long *)(this + 0x88);
  if (lVar1 == 0) {
    lVar9 = 0;
  }
  else {
    lVar9 = *(long *)(lVar1 + 0x10);
  }
  do {
    if (lVar9 == 0) goto LAB_002c8e83;
    lVar9 = *(long *)(lVar9 + 0x30);
  } while (lVar9 != *(long *)(this + 8));
  uVar5 = Component::isShowing(*(Component **)(lVar1 + 0x10));
  if ((char)uVar5 == '\0') {
LAB_002c8e83:
    plVar8 = *(long **)(this + 8);
    if ((ModalComponentManager::singletonHolder != (ModalComponentManager *)0x0) &&
       (0 < (int)*(uint *)(ModalComponentManager::singletonHolder + 0x24))) {
      uVar7 = (ulong)*(uint *)(ModalComponentManager::singletonHolder + 0x24) + 1;
      do {
        lVar1 = *(long *)(*(long *)(ModalComponentManager::singletonHolder + 0x18) +
                         (ulong)((int)uVar7 - 2) * 8);
        if (*(char *)(lVar1 + 0x5c) != '\0') {
          plVar3 = *(long **)(lVar1 + 0x40);
          if ((plVar3 != (long *)0x0) && (plVar3 != plVar8)) goto LAB_002c8ef0;
          break;
        }
        uVar7 = uVar7 - 1;
      } while (1 < uVar7);
    }
LAB_002c8f76:
    Component::grabKeyboardFocusInternal(*(Component **)(this + 8),2,'\x01',0);
    return;
  }
  if (*(long *)(this + 0x88) == 0) {
    if ((_DAT_000000e8 & 0x8020) != 0x20) goto LAB_002c8e83;
    Component::currentlyFocusedComponent = (Component *)0x0;
    pCVar2 = Component::currentlyFocusedComponent;
  }
  else {
    pCVar2 = *(Component **)(*(long *)(this + 0x88) + 0x10);
    if ((*(ushort *)(pCVar2 + 0xe8) & 0x8020) != 0x20) goto LAB_002c8e83;
  }
  Component::currentlyFocusedComponent = pCVar2;
  if (Desktop::instance == (Desktop *)0x0) {
    pDVar6 = operator_new(0x1d0);
                    /* try { // try from 002c8d66 to 002c8d6d has its CatchHandler @ 002c9016 */
    Desktop::Desktop(pDVar6);
    Desktop::instance = pDVar6;
  }
  pDVar6 = Desktop::instance;
  LOCK();
  bVar10 = *(int *)(*(long *)(Desktop::instance + 0x38) + 0x18) == 0;
  if (bVar10) {
    *(int *)(*(long *)(Desktop::instance + 0x38) + 0x18) = 1;
  }
  UNLOCK();
  if (bVar10) {
    plVar8 = *(long **)(pDVar6 + 0x38);
    if (((MessageManager::instance == 0) || (*(int *)(MessageManager::instance + 8) != 0)) ||
       (InternalMessageQueue::singletonHolder._40_8_ == 0)) {
      LOCK();
      *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
      UNLOCK();
      LOCK();
      plVar3 = plVar8 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)(*plVar8 + 8))(plVar8);
      }
      LOCK();
      *(undefined4 *)(*(long *)(pDVar6 + 0x38) + 0x18) = 0;
      UNLOCK();
    }
    else {
      InternalMessageQueue::postMessage
                ((InternalMessageQueue *)InternalMessageQueue::singletonHolder._40_8_,(long)plVar8);
    }
  }
  pCVar2 = *(Component **)(*(long *)(this + 0x88) + 0x10);
  local_18 = *(long **)(pCVar2 + 0xd8);
  if (local_18 == (long *)0x0) {
    local_18 = operator_new(0x18);
    *(undefined4 *)(local_18 + 1) = 0;
    *local_18 = (long)&PTR__ReferenceCountedObject_00714b80;
    local_18[2] = (long)pCVar2;
    LOCK();
    *(int *)(local_18 + 1) = (int)local_18[1] + 1;
    UNLOCK();
    plVar8 = *(long **)(pCVar2 + 0xd8);
    *(long **)(pCVar2 + 0xd8) = local_18;
    if (plVar8 == (long *)0x0) goto LAB_002c8ddf;
    LOCK();
    plVar3 = plVar8 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)(*plVar8 + 8))();
    }
    local_18 = *(long **)(pCVar2 + 0xd8);
    if (local_18 != (long *)0x0) goto LAB_002c8ddf;
  }
  else {
LAB_002c8ddf:
    LOCK();
    *(int *)(local_18 + 1) = (int)local_18[1] + 1;
    UNLOCK();
  }
                    /* try { // try from 002c8de7 to 002c8e66 has its CatchHandler @ 002c9029 */
  (**(code **)(*(long *)pCVar2 + 0x128))(pCVar2,2,0);
  (**(code **)(*(long *)pCVar2 + 0x120))(pCVar2,2);
  plVar8 = local_18;
  if (local_18 == (long *)0x0) {
    return;
  }
  if (local_18[2] != 0) {
    if (Component::currentlyFocusedComponent == pCVar2) {
      this_00 = (AccessibilityHandler *)Component::getAccessibilityHandler(pCVar2);
      if ((this_00 != (AccessibilityHandler *)0x0) &&
         ((AccessibilityHandler::currentlyFocusedHandler == (AccessibilityHandler *)0x0 ||
          (AccessibilityHandler::currentlyFocusedHandler != this_00)))) {
        AccessibilityHandler::grabFocusInternal(this_00,'\x01');
      }
      if (plVar8[2] == 0) goto LAB_002c8e67;
    }
    Component::internalChildKeyboardFocusChange(pCVar2,2,(long *)&local_18);
  }
LAB_002c8e67:
  LOCK();
  plVar3 = plVar8 + 1;
  *(int *)plVar3 = (int)*plVar3 + -1;
  UNLOCK();
  if ((int)*plVar3 == 0) {
                    /* WARNING: Could not recover jumptable at 0x002c8e80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar8 + 8))(plVar8);
    return;
  }
  return;
  while (plVar8 = (long *)plVar8[6], plVar8 != plVar3) {
LAB_002c8ef0:
    if (plVar8 == (long *)0x0) {
      cVar4 = (**(code **)(*plVar3 + 0x170))();
      if (cVar4 == '\0') {
        if (ModalComponentManager::singletonHolder == (ModalComponentManager *)0x0) {
          this_01 = operator_new(0x28);
                    /* try { // try from 002c8fab to 002c8fb2 has its CatchHandler @ 002c9014 */
          AsyncUpdater::AsyncUpdater(this_01);
          DeletedAtShutdown::DeletedAtShutdown((DeletedAtShutdown *)(this_01 + 0x10));
          *(undefined ***)this_01 = &PTR__ModalComponentManager_00707a60;
          *(undefined ***)(this_01 + 0x10) = &PTR__ModalComponentManager_00707a88;
          *(undefined8 *)(this_01 + 0x18) = 0;
          *(undefined8 *)(this_01 + 0x20) = 0;
          LOCK();
          UNLOCK();
          ModalComponentManager::singletonHolder = (ModalComponentManager *)this_01;
        }
        ModalComponentManager::bringModalComponentsToFront
                  (ModalComponentManager::singletonHolder,'\x01');
        return;
      }
      break;
    }
  }
  goto LAB_002c8f76;
}


