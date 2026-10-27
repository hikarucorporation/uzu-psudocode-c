// Function : handleFocusLoss
// Namespace: juce:ComponentPeer
// Entry    : 002c9050
// Prototype: undefined handleFocusLoss(ComponentPeer * this)
// Body     : 002c9050 - 002c91f3


/* juce::ComponentPeer::handleFocusLoss() */

void __thiscall juce::ComponentPeer::handleFocusLoss(ComponentPeer *this)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  undefined8 *puVar4;
  Desktop *pDVar5;
  long lVar6;
  bool bVar7;
  
  lVar3 = Component::currentlyFocusedComponent;
  if (Component::currentlyFocusedComponent != *(long *)(this + 8)) {
    lVar6 = Component::currentlyFocusedComponent;
    do {
      if (lVar6 == 0) {
        return;
      }
      lVar6 = *(long *)(lVar6 + 0x30);
    } while (lVar6 != *(long *)(this + 8));
  }
  if (Component::currentlyFocusedComponent == 0) {
LAB_002c910d:
    puVar4 = (undefined8 *)0x0;
    plVar2 = *(long **)(this + 0x88);
    *(undefined8 *)(this + 0x88) = 0;
  }
  else {
    puVar4 = *(undefined8 **)(Component::currentlyFocusedComponent + 0xd8);
    if (puVar4 == (undefined8 *)0x0) {
      puVar4 = operator_new(0x18);
      *(undefined4 *)(puVar4 + 1) = 0;
      *puVar4 = &PTR__ReferenceCountedObject_00714b80;
      puVar4[2] = lVar3;
      LOCK();
      *(int *)(puVar4 + 1) = *(int *)(puVar4 + 1) + 1;
      UNLOCK();
      plVar2 = *(long **)(lVar3 + 0xd8);
      *(undefined8 **)(lVar3 + 0xd8) = puVar4;
      if (plVar2 != (long *)0x0) {
        LOCK();
        plVar1 = plVar2 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)(*plVar2 + 8))();
        }
        puVar4 = *(undefined8 **)(lVar3 + 0xd8);
        if (puVar4 == (undefined8 *)0x0) goto LAB_002c910d;
      }
    }
    LOCK();
    *(int *)(puVar4 + 1) = *(int *)(puVar4 + 1) + 1;
    UNLOCK();
    plVar2 = *(long **)(this + 0x88);
    *(undefined8 **)(this + 0x88) = puVar4;
  }
  if (plVar2 != (long *)0x0) {
    LOCK();
    plVar1 = plVar2 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)(*plVar2 + 8))();
    }
    puVar4 = *(undefined8 **)(this + 0x88);
  }
  if ((puVar4 == (undefined8 *)0x0) || (puVar4[2] == 0)) {
    return;
  }
  Component::currentlyFocusedComponent = 0;
  if (Desktop::instance == (Desktop *)0x0) {
    pDVar5 = operator_new(0x1d0);
                    /* try { // try from 002c916e to 002c9175 has its CatchHandler @ 002c91f4 */
    Desktop::Desktop(pDVar5);
    Desktop::instance = pDVar5;
  }
  pDVar5 = Desktop::instance;
  LOCK();
  bVar7 = *(int *)(*(long *)(Desktop::instance + 0x38) + 0x18) == 0;
  if (bVar7) {
    *(int *)(*(long *)(Desktop::instance + 0x38) + 0x18) = 1;
  }
  UNLOCK();
  if (bVar7) {
    plVar2 = *(long **)(pDVar5 + 0x38);
    if (((MessageManager::instance == 0) || (*(int *)(MessageManager::instance + 8) != 0)) ||
       (InternalMessageQueue::singletonHolder._40_8_ == 0)) {
      LOCK();
      *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
      UNLOCK();
      LOCK();
      plVar1 = plVar2 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)(*plVar2 + 8))(plVar2);
      }
      LOCK();
      *(undefined4 *)(*(long *)(pDVar5 + 0x38) + 0x18) = 0;
      UNLOCK();
    }
    else {
      InternalMessageQueue::postMessage
                ((InternalMessageQueue *)InternalMessageQueue::singletonHolder._40_8_,(long)plVar2);
    }
  }
  Component::internalKeyboardFocusLoss(*(Component **)(*(long *)(this + 0x88) + 0x10),0);
  return;
}


