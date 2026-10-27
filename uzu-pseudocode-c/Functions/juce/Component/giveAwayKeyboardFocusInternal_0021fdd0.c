// Function : giveAwayKeyboardFocusInternal
// Namespace: juce:Component
// Entry    : 0021fdd0
// Prototype: undefined giveAwayKeyboardFocusInternal(Component * this, char param_1)
// Body     : 0021fdd0 - 0021ff5a


/* juce::Component::giveAwayKeyboardFocusInternal(bool) */

void __thiscall juce::Component::giveAwayKeyboardFocusInternal(Component *this,char param_1)

{
  long *plVar1;
  long *plVar2;
  Component *this_00;
  Component *pCVar3;
  Desktop *pDVar4;
  long lVar5;
  bool bVar6;
  
  this_00 = currentlyFocusedComponent;
  if (currentlyFocusedComponent != this) {
    pCVar3 = currentlyFocusedComponent;
    do {
      if (pCVar3 == (Component *)0x0) {
        return;
      }
      pCVar3 = *(Component **)(pCVar3 + 0x30);
    } while (pCVar3 != this);
  }
  if (currentlyFocusedComponent == (Component *)0x0) {
    return;
  }
  pCVar3 = currentlyFocusedComponent;
  do {
    if ((*(ushort *)(pCVar3 + 0xe8) & 1) != 0) {
      if (Desktop::instance == (Desktop *)0x0) {
                    /* try { // try from 0021fe32 to 0021fe3b has its CatchHandler @ 0021ff6e */
        pDVar4 = operator_new(0x1d0);
                    /* try { // try from 0021fe3f to 0021fe46 has its CatchHandler @ 0021ff5b */
        Desktop::Desktop(pDVar4);
        Desktop::instance = pDVar4;
      }
      if ((long)*(int *)(Desktop::instance + 0xdc) != 0) {
        lVar5 = 0;
        goto LAB_0021fe70;
      }
      break;
    }
    pCVar3 = *(Component **)(pCVar3 + 0x30);
  } while (pCVar3 != (Component *)0x0);
  goto joined_r0x0021ff35;
  while (lVar5 = lVar5 + 8, (long)*(int *)(Desktop::instance + 0xdc) * 8 != lVar5) {
LAB_0021fe70:
    if ((Component *)(*(long **)(*(long *)(Desktop::instance + 0xd0) + lVar5))[1] == pCVar3) {
      (**(code **)(**(long **)(*(long *)(Desktop::instance + 0xd0) + lVar5) + 0xf8))();
      break;
    }
  }
joined_r0x0021ff35:
  currentlyFocusedComponent = (Component *)0x0;
  if (param_1 != '\0') {
    currentlyFocusedComponent = (Component *)0x0;
    internalKeyboardFocusLoss(this_00,2);
  }
  if (Desktop::instance == (Desktop *)0x0) {
    pDVar4 = operator_new(0x1d0);
                    /* try { // try from 0021febd to 0021fec4 has its CatchHandler @ 0021ff76 */
    Desktop::Desktop(pDVar4);
    Desktop::instance = pDVar4;
  }
  pDVar4 = Desktop::instance;
  LOCK();
  bVar6 = *(int *)(*(long *)(Desktop::instance + 0x38) + 0x18) == 0;
  if (bVar6) {
    *(int *)(*(long *)(Desktop::instance + 0x38) + 0x18) = 1;
  }
  UNLOCK();
  if (bVar6) {
    plVar2 = *(long **)(pDVar4 + 0x38);
    if (((MessageManager::instance != 0) && (*(int *)(MessageManager::instance + 8) == 0)) &&
       (InternalMessageQueue::singletonHolder._40_8_ != 0)) {
      InternalMessageQueue::postMessage
                ((InternalMessageQueue *)InternalMessageQueue::singletonHolder._40_8_,(long)plVar2);
      return;
    }
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
    *(undefined4 *)(*(long *)(pDVar4 + 0x38) + 0x18) = 0;
    UNLOCK();
  }
  return;
}


