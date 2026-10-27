// Function : getCurrentState
// Namespace: juce:PopupMenu:HelperClasses:ItemComponent:ItemAccessibilityHandler
// Entry    : 0027f1a0
// Prototype: uint getCurrentState(ItemAccessibilityHandler * this)
// Body     : 0027f1a0 - 0027f2e8


/* juce::PopupMenu::HelperClasses::ItemComponent::ItemAccessibilityHandler::getCurrentState() const
    */

uint __thiscall
juce::PopupMenu::HelperClasses::ItemComponent::ItemAccessibilityHandler::getCurrentState
          (ItemAccessibilityHandler *this)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  uint uVar4;
  ulong uVar5;
  long *plVar6;
  uint uVar7;
  long lVar8;
  
  plVar6 = *(long **)(this + 8);
  if ((ModalComponentManager::singletonHolder != 0) &&
     (0 < (int)*(uint *)(ModalComponentManager::singletonHolder + 0x24))) {
    uVar5 = (ulong)*(uint *)(ModalComponentManager::singletonHolder + 0x24) + 1;
    do {
      lVar8 = *(long *)(*(long *)(ModalComponentManager::singletonHolder + 0x18) +
                       (ulong)((int)uVar5 - 2) * 8);
      if (*(char *)(lVar8 + 0x5c) != '\0') {
        plVar1 = *(long **)(lVar8 + 0x40);
        if ((plVar1 != (long *)0x0) && (plVar1 != plVar6)) goto LAB_0027f200;
        break;
      }
      uVar5 = uVar5 - 1;
    } while (1 < uVar5);
  }
LAB_0027f265:
  uVar4 = 0xa20;
  if (AccessibilityHandler::currentlyFocusedHandler != (ItemAccessibilityHandler *)0x0) {
    uVar4 = (uint)(AccessibilityHandler::currentlyFocusedHandler == this) << 6 | 0xa20;
  }
LAB_0027f288:
  lVar8 = *(long *)(this + 0x78);
  if (((*(char *)(lVar8 + 0x154) != '\0') && (*(long *)(lVar8 + 0x120) != 0)) &&
     (0 < *(int *)(*(long *)(lVar8 + 0x120) + 0xc))) {
    lVar2 = *(long *)(*(long *)(lVar8 + 0x160) + 400);
    if ((lVar2 == 0) || ((*(ushort *)(lVar2 + 0xe8) & 2) == 0)) {
      uVar4 = uVar4 | 0xc;
    }
    else {
      uVar4 = uVar4 | 0x18;
    }
  }
  uVar7 = uVar4 | 3;
  if (*(char *)(lVar8 + 0x155) == '\0') {
    uVar7 = uVar4;
  }
  return (uVar7 & 0x40) << 4 | uVar7;
LAB_0027f200:
  if (plVar6 != (long *)0x0) goto code_r0x0027f205;
  cVar3 = (**(code **)(*plVar1 + 0x170))();
  if (cVar3 == '\0') {
    lVar8 = *(long *)(*(long *)(ModalComponentManager::singletonHolder + 0x18) + -8 +
                     (ulong)*(uint *)(ModalComponentManager::singletonHolder + 0x24) * 8);
    if (*(char *)(lVar8 + 0x5c) == '\0') {
      uVar5 = (ulong)*(uint *)(ModalComponentManager::singletonHolder + 0x24) - 2;
      do {
        lVar8 = *(long *)(*(long *)(ModalComponentManager::singletonHolder + 0x18) +
                         (uVar5 & 0xffffffff) * 8);
        uVar5 = uVar5 - 1;
      } while (*(char *)(lVar8 + 0x5c) == '\0');
    }
    uVar4 = 0xa00;
    if ((*(ushort *)(*(long *)(lVar8 + 0x40) + 0xe8) & 2) != 0) goto LAB_0027f288;
  }
  goto LAB_0027f265;
code_r0x0027f205:
  plVar6 = (long *)plVar6[6];
  if (plVar6 == plVar1) goto LAB_0027f265;
  goto LAB_0027f200;
}


