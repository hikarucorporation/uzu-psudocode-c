// Function : isShortcutPressed
// Namespace: juce:Button
// Entry    : 00233040
// Prototype: undefined8 isShortcutPressed(Button * this)
// Body     : 00233040 - 00233151


/* juce::Button::isShortcutPressed() const */

undefined8 __thiscall juce::Button::isShortcutPressed(Button *this)

{
  int iVar1;
  long lVar2;
  Button *pBVar3;
  bool bVar4;
  char cVar5;
  uint uVar6;
  ulong uVar7;
  XWindowSystem *this_00;
  Button *pBVar8;
  long lVar9;
  
  uVar6 = Component::isShowing((Component *)this);
  if ((char)uVar6 == '\0') {
    return 0;
  }
  if ((ModalComponentManager::singletonHolder != 0) &&
     (0 < (int)*(uint *)(ModalComponentManager::singletonHolder + 0x24))) {
    uVar7 = (ulong)*(uint *)(ModalComponentManager::singletonHolder + 0x24) + 1;
    do {
      lVar2 = *(long *)(*(long *)(ModalComponentManager::singletonHolder + 0x18) +
                       (ulong)((int)uVar7 - 2) * 8);
      if (*(char *)(lVar2 + 0x5c) != '\0') {
        pBVar3 = *(Button **)(lVar2 + 0x40);
        if ((pBVar3 != (Button *)0x0) && (pBVar3 != this)) {
          pBVar8 = this;
          goto LAB_00233120;
        }
        break;
      }
      uVar7 = uVar7 - 1;
    } while (1 < uVar7);
  }
  goto LAB_00233097;
  while (pBVar8 = *(Button **)(pBVar8 + 0x30), pBVar8 != pBVar3) {
LAB_00233120:
    if (pBVar8 == (Button *)0x0) {
      cVar5 = (**(code **)(*(long *)pBVar3 + 0x170))(pBVar3,this);
      if (cVar5 == '\0') {
        return 0;
      }
      break;
    }
  }
LAB_00233097:
  iVar1 = *(int *)(this + 0x14c);
  if ((long)iVar1 != 0) {
    lVar2 = *(long *)(this + 0x140);
    lVar9 = 0;
    do {
      uVar6 = *(uint *)(lVar2 + lVar9);
      this_00 = SingletonHolder<juce::XWindowSystem,juce::CriticalSection,false>::get
                          ((SingletonHolder<juce::XWindowSystem,juce::CriticalSection,false> *)
                           XWindowSystem::singletonHolder);
      bVar4 = XWindowSystem::isKeyCurrentlyDown(this_00,uVar6);
      if ((bVar4) &&
         (uVar6 = *(uint *)(lVar2 + 4 + lVar9) ^ ModifierKeys::currentModifiers, (uVar6 & 7) == 0))
      {
        return CONCAT71((uint7)(uint3)(uVar6 >> 8),1);
      }
      lVar9 = lVar9 + 0xc;
    } while ((long)iVar1 * 0xc != lVar9);
  }
  return 0;
}


