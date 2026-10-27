// Function : visibilityChanged
// Namespace: juce:TopLevelWindow
// Entry    : 0028af50
// Prototype: undefined visibilityChanged(TopLevelWindow * this)
// Body     : 0028af50 - 0028b017


/* juce::TopLevelWindow::visibilityChanged() */

void __thiscall juce::TopLevelWindow::visibilityChanged(TopLevelWindow *this)

{
  int iVar1;
  uint uVar2;
  Desktop *this_00;
  TopLevelWindow *pTVar3;
  long lVar4;
  
  uVar2 = Component::isShowing((Component *)this);
  if ((char)uVar2 == '\0') {
    return;
  }
  pTVar3 = this;
  while ((*(ushort *)(pTVar3 + 0xe8) & 1) == 0) {
    pTVar3 = *(TopLevelWindow **)(pTVar3 + 0x30);
    if (pTVar3 == (TopLevelWindow *)0x0) {
      return;
    }
  }
  if (Desktop::instance == (Desktop *)0x0) {
                    /* try { // try from 0028afa0 to 0028afa9 has its CatchHandler @ 0028b02b */
    this_00 = operator_new(0x1d0);
                    /* try { // try from 0028afad to 0028afb4 has its CatchHandler @ 0028b018 */
    Desktop::Desktop(this_00);
    iVar1 = *(int *)(this_00 + 0xdc);
    Desktop::instance = this_00;
  }
  else {
    iVar1 = *(int *)(Desktop::instance + 0xdc);
  }
  if ((long)iVar1 == 0) {
    return;
  }
  lVar4 = 0;
  do {
    if (*(TopLevelWindow **)(*(long *)(*(long *)(Desktop::instance + 0xd0) + lVar4) + 8) == pTVar3)
    {
      if ((*(ushort *)(*(long *)(*(long *)(Desktop::instance + 0xd0) + lVar4) + 0x10) & 0x402) == 0)
      {
        Component::toFront((Component *)this,'\x01');
        return;
      }
      return;
    }
    lVar4 = lVar4 + 8;
  } while ((long)iVar1 * 8 != lVar4);
  return;
}


