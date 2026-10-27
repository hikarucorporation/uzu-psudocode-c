// Function : windowIsStillValid
// Namespace: juce:PopupMenu:HelperClasses:MenuWindow
// Entry    : 0027c0a0
// Prototype: ulong windowIsStillValid(MenuWindow * this)
// Body     : 0027c0a0 - 0027c1d7


/* juce::PopupMenu::HelperClasses::MenuWindow::windowIsStillValid() */

ulong __thiscall juce::PopupMenu::HelperClasses::MenuWindow::windowIsStillValid(MenuWindow *this)

{
  long lVar1;
  MenuWindow *pMVar2;
  long lVar3;
  ulong uVar4;
  MenuWindow *pMVar5;
  MenuWindow *pMVar6;
  
  if ((*(ushort *)(this + 0xe8) & 2) == 0) {
    return 0;
  }
  if (*(long *)(this + 0x160) == 0) {
    lVar3 = 0;
    lVar1 = *(long *)(this + 0x108);
  }
  else {
    lVar3 = *(long *)(*(long *)(this + 0x160) + 0x10);
    lVar1 = *(long *)(this + 0x108);
  }
  if (lVar1 == 0) {
    if (lVar3 != 0) {
LAB_0027c100:
      do {
        pMVar5 = this;
        this = *(MenuWindow **)(pMVar5 + 0xf0);
      } while (this != (MenuWindow *)0x0);
      hide(pMVar5,0,'\x01');
      return 0;
    }
  }
  else if (lVar3 != *(long *)(lVar1 + 0x10)) goto LAB_0027c100;
  if ((ModalComponentManager::singletonHolder == 0) ||
     ((int)*(uint *)(ModalComponentManager::singletonHolder + 0x24) < 1)) {
LAB_0027c1ca:
    return CONCAT71((int7)((ulong)this >> 8),this[0x1cc] == (MenuWindow)0x0) & 0xffffffff;
  }
  uVar4 = (ulong)*(uint *)(ModalComponentManager::singletonHolder + 0x24) + 1;
  while (lVar3 = *(long *)(*(long *)(ModalComponentManager::singletonHolder + 0x18) +
                          (ulong)((int)uVar4 - 2) * 8), *(char *)(lVar3 + 0x5c) == '\0') {
    uVar4 = uVar4 - 1;
    if (uVar4 < 2) goto LAB_0027c1ca;
  }
  lVar3 = *(long *)(lVar3 + 0x40);
  if ((lVar3 == 0) ||
     (pMVar5 = (MenuWindow *)__dynamic_cast(lVar3,&Component::typeinfo,&typeinfo,0),
     pMVar5 == (MenuWindow *)0x0)) goto LAB_0027c1ca;
  pMVar2 = this;
  do {
    pMVar6 = pMVar2;
    pMVar2 = *(MenuWindow **)(pMVar6 + 0xf0);
  } while (*(MenuWindow **)(pMVar6 + 0xf0) != (MenuWindow *)0x0);
  if (pMVar6 == pMVar5) goto LAB_0027c1ca;
  do {
    pMVar6 = *(MenuWindow **)(pMVar6 + 400);
    if (pMVar6 == (MenuWindow *)0x0) break;
  } while (pMVar6 != pMVar5);
  if (pMVar6 == (MenuWindow *)0x0) {
    return 0;
  }
  goto LAB_0027c1ca;
}


