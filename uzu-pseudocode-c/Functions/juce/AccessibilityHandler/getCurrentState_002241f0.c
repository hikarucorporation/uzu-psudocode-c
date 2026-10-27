// Function : getCurrentState
// Namespace: juce:AccessibilityHandler
// Entry    : 002241f0
// Prototype: uint getCurrentState(AccessibilityHandler * this)
// Body     : 002241f0 - 002242d3


/* juce::AccessibilityHandler::getCurrentState() const */

uint __thiscall juce::AccessibilityHandler::getCurrentState(AccessibilityHandler *this)

{
  long *plVar1;
  char cVar2;
  uint uVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  
  plVar5 = *(long **)(this + 8);
  if ((ModalComponentManager::singletonHolder != 0) &&
     (0 < (int)*(uint *)(ModalComponentManager::singletonHolder + 0x24))) {
    uVar4 = (ulong)*(uint *)(ModalComponentManager::singletonHolder + 0x24) + 1;
    do {
      lVar6 = *(long *)(*(long *)(ModalComponentManager::singletonHolder + 0x18) +
                       (ulong)((int)uVar4 - 2) * 8);
      if (*(char *)(lVar6 + 0x5c) != '\0') {
        plVar1 = *(long **)(lVar6 + 0x40);
        if ((plVar1 != (long *)0x0) && (plVar1 != plVar5)) goto LAB_00224250;
        break;
      }
      uVar4 = uVar4 - 1;
    } while (1 < uVar4);
  }
  goto LAB_002242b2;
  while (plVar5 = (long *)plVar5[6], plVar5 != plVar1) {
LAB_00224250:
    if (plVar5 == (long *)0x0) {
      cVar2 = (**(code **)(*plVar1 + 0x170))();
      if (cVar2 == '\0') {
        lVar6 = *(long *)(*(long *)(ModalComponentManager::singletonHolder + 0x18) +
                         (ulong)(*(int *)(ModalComponentManager::singletonHolder + 0x24) - 1) * 8);
        if (*(char *)(lVar6 + 0x5c) == '\0') {
          uVar3 = *(int *)(ModalComponentManager::singletonHolder + 0x24) - 2;
          do {
            lVar6 = *(long *)(*(long *)(ModalComponentManager::singletonHolder + 0x18) +
                             (ulong)uVar3 * 8);
            uVar3 = uVar3 - 1;
          } while (*(char *)(lVar6 + 0x5c) == '\0');
        }
        if ((*(ushort *)(*(long *)(lVar6 + 0x40) + 0xe8) & 2) != 0) {
          return 0;
        }
      }
      break;
    }
  }
LAB_002242b2:
  uVar3 = 0x20;
  if (currentlyFocusedHandler != (AccessibilityHandler *)0x0) {
    uVar3 = (uint)(currentlyFocusedHandler == this) << 6 | 0x20;
  }
  return uVar3;
}


