// Function : getCurrentState
// Namespace: juce:LabelAccessibilityHandler
// Entry    : 00283370
// Prototype: uint getCurrentState(LabelAccessibilityHandler * this)
// Body     : 00283370 - 00283472


/* juce::LabelAccessibilityHandler::getCurrentState() const */

uint __thiscall juce::LabelAccessibilityHandler::getCurrentState(LabelAccessibilityHandler *this)

{
  long *plVar1;
  char cVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  uint uVar6;
  
  if (*(long *)(*(long *)(this + 0x78) + 0x1c0) != 0) {
    return 0;
  }
  plVar4 = *(long **)(this + 8);
  if ((ModalComponentManager::singletonHolder != 0) &&
     (0 < (int)*(uint *)(ModalComponentManager::singletonHolder + 0x24))) {
    uVar3 = (ulong)*(uint *)(ModalComponentManager::singletonHolder + 0x24) + 1;
    do {
      lVar5 = *(long *)(*(long *)(ModalComponentManager::singletonHolder + 0x18) +
                       (ulong)((int)uVar3 - 2) * 8);
      if (*(char *)(lVar5 + 0x5c) != '\0') {
        plVar1 = *(long **)(lVar5 + 0x40);
        if ((plVar1 != (long *)0x0) && (plVar1 != plVar4)) goto LAB_002833f0;
        break;
      }
      uVar3 = uVar3 - 1;
    } while (1 < uVar3);
  }
  goto LAB_00283449;
  while (plVar4 = (long *)plVar4[6], plVar4 != plVar1) {
LAB_002833f0:
    if (plVar4 == (long *)0x0) {
      cVar2 = (**(code **)(*plVar1 + 0x170))();
      if (cVar2 == '\0') {
        lVar5 = *(long *)(*(long *)(ModalComponentManager::singletonHolder + 0x18) + -8 +
                         (ulong)*(uint *)(ModalComponentManager::singletonHolder + 0x24) * 8);
        if (*(char *)(lVar5 + 0x5c) == '\0') {
          uVar3 = (ulong)*(uint *)(ModalComponentManager::singletonHolder + 0x24) - 2;
          do {
            lVar5 = *(long *)(*(long *)(ModalComponentManager::singletonHolder + 0x18) +
                             (uVar3 & 0xffffffff) * 8);
            uVar3 = uVar3 - 1;
          } while (*(char *)(lVar5 + 0x5c) == '\0');
        }
        if ((*(ushort *)(*(long *)(lVar5 + 0x40) + 0xe8) & 2) != 0) {
          return 0;
        }
      }
      break;
    }
  }
LAB_00283449:
  uVar6 = 0x20;
  if (AccessibilityHandler::currentlyFocusedHandler != (LabelAccessibilityHandler *)0x0) {
    uVar6 = (uint)(AccessibilityHandler::currentlyFocusedHandler == this) << 6 | 0x20;
  }
  return uVar6;
}


