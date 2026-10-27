// Function : getCurrentState
// Namespace: juce:detail:ButtonAccessibilityHandler
// Entry    : 00230240
// Prototype: uint getCurrentState(ButtonAccessibilityHandler * this)
// Body     : 00230240 - 00230384


/* juce::detail::ButtonAccessibilityHandler::getCurrentState() const */

uint __thiscall
juce::detail::ButtonAccessibilityHandler::getCurrentState(ButtonAccessibilityHandler *this)

{
  long *plVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  long local_28;
  undefined1 local_20 [8];
  
  plVar6 = *(long **)(this + 8);
  if ((ModalComponentManager::singletonHolder != 0) &&
     (0 < (int)*(uint *)(ModalComponentManager::singletonHolder + 0x24))) {
    uVar5 = (ulong)*(uint *)(ModalComponentManager::singletonHolder + 0x24) + 1;
    do {
      lVar7 = *(long *)(*(long *)(ModalComponentManager::singletonHolder + 0x18) +
                       (ulong)((int)uVar5 - 2) * 8);
      if (*(char *)(lVar7 + 0x5c) != '\0') {
        plVar1 = *(long **)(lVar7 + 0x40);
        if ((plVar1 != (long *)0x0) && (plVar1 != plVar6)) goto LAB_002302b0;
        break;
      }
      uVar5 = uVar5 - 1;
    } while (1 < uVar5);
  }
LAB_00230311:
  uVar4 = 0x20;
  if (AccessibilityHandler::currentlyFocusedHandler != (ButtonAccessibilityHandler *)0x0) {
    uVar4 = (uint)(AccessibilityHandler::currentlyFocusedHandler == this) << 6 | 0x20;
  }
LAB_00230331:
  lVar7 = *(long *)(this + 0x78);
  if (*(char *)(lVar7 + 0x1f0) != '\0' || *(char *)(lVar7 + 0x1f2) != '\0') {
                    /* try { // try from 0023034d to 00230352 has its CatchHandler @ 00230395 */
    (**(code **)(**(long **)(lVar7 + 0x1c0) + 0x10))(&local_28);
                    /* try { // try from 0023035c to 00230361 has its CatchHandler @ 0023038d */
    uVar3 = (**(code **)(local_28 + 0x30))(local_20);
                    /* try { // try from 00230368 to 0023036d has its CatchHandler @ 00230385 */
    (**(code **)(local_28 + 0x58))(local_20);
    uVar4 = (uVar3 & 0xff) * 2 | uVar4 | 1;
  }
  return uVar4;
LAB_002302b0:
  if (plVar6 != (long *)0x0) goto code_r0x002302b5;
  cVar2 = (**(code **)(*plVar1 + 0x170))();
  if (cVar2 == '\0') {
    lVar7 = *(long *)(*(long *)(ModalComponentManager::singletonHolder + 0x18) + -8 +
                     (ulong)*(uint *)(ModalComponentManager::singletonHolder + 0x24) * 8);
    if (*(char *)(lVar7 + 0x5c) == '\0') {
      uVar5 = (ulong)*(uint *)(ModalComponentManager::singletonHolder + 0x24) - 2;
      do {
        lVar7 = *(long *)(*(long *)(ModalComponentManager::singletonHolder + 0x18) +
                         (uVar5 & 0xffffffff) * 8);
        uVar5 = uVar5 - 1;
      } while (*(char *)(lVar7 + 0x5c) == '\0');
    }
    uVar4 = 0;
    if ((*(ushort *)(*(long *)(lVar7 + 0x40) + 0xe8) & 2) != 0) goto LAB_00230331;
  }
  goto LAB_00230311;
code_r0x002302b5:
  plVar6 = (long *)plVar6[6];
  if (plVar6 == plVar1) goto LAB_00230311;
  goto LAB_002302b0;
}


