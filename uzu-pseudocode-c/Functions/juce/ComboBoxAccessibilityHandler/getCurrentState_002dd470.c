// Function : getCurrentState
// Namespace: juce:ComboBoxAccessibilityHandler
// Entry    : 002dd470
// Prototype: uint getCurrentState(ComboBoxAccessibilityHandler * this)
// Body     : 002dd470 - 002dd56f


/* juce::ComboBoxAccessibilityHandler::getCurrentState() const */

uint __thiscall
juce::ComboBoxAccessibilityHandler::getCurrentState(ComboBoxAccessibilityHandler *this)

{
  long *plVar1;
  char cVar2;
  uint uVar3;
  ulong uVar4;
  long *plVar5;
  uint uVar6;
  long lVar7;
  
  plVar5 = *(long **)(this + 8);
  if ((ModalComponentManager::singletonHolder != 0) &&
     (0 < (int)*(uint *)(ModalComponentManager::singletonHolder + 0x24))) {
    uVar4 = (ulong)*(uint *)(ModalComponentManager::singletonHolder + 0x24) + 1;
    do {
      lVar7 = *(long *)(*(long *)(ModalComponentManager::singletonHolder + 0x18) +
                       (ulong)((int)uVar4 - 2) * 8);
      if (*(char *)(lVar7 + 0x5c) != '\0') {
        plVar1 = *(long **)(lVar7 + 0x40);
        if ((plVar1 != (long *)0x0) && (plVar1 != plVar5)) goto LAB_002dd4d0;
        break;
      }
      uVar4 = uVar4 - 1;
    } while (1 < uVar4);
  }
LAB_002dd534:
  uVar6 = 0x28;
  if (AccessibilityHandler::currentlyFocusedHandler != (ComboBoxAccessibilityHandler *)0x0) {
    uVar6 = (uint)(AccessibilityHandler::currentlyFocusedHandler == this) << 6 | 0x28;
  }
LAB_002dd554:
  uVar3 = 0x10;
  if (*(char *)(*(long *)(this + 0x78) + 0x185) == '\0') {
    uVar3 = 4;
  }
  return uVar3 | uVar6;
LAB_002dd4d0:
  if (plVar5 != (long *)0x0) goto code_r0x002dd4d5;
  cVar2 = (**(code **)(*plVar1 + 0x170))();
  if (cVar2 == '\0') {
    lVar7 = *(long *)(*(long *)(ModalComponentManager::singletonHolder + 0x18) + -8 +
                     (ulong)*(uint *)(ModalComponentManager::singletonHolder + 0x24) * 8);
    if (*(char *)(lVar7 + 0x5c) == '\0') {
      uVar4 = (ulong)*(uint *)(ModalComponentManager::singletonHolder + 0x24) - 2;
      do {
        lVar7 = *(long *)(*(long *)(ModalComponentManager::singletonHolder + 0x18) +
                         (uVar4 & 0xffffffff) * 8);
        uVar4 = uVar4 - 1;
      } while (*(char *)(lVar7 + 0x5c) == '\0');
    }
    uVar6 = 8;
    if ((*(ushort *)(*(long *)(lVar7 + 0x40) + 0xe8) & 2) != 0) goto LAB_002dd554;
  }
  goto LAB_002dd534;
code_r0x002dd4d5:
  plVar5 = (long *)plVar5[6];
  if (plVar5 == plVar1) goto LAB_002dd534;
  goto LAB_002dd4d0;
}


