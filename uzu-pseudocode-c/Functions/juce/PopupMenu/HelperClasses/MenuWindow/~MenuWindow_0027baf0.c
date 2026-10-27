// Function : ~MenuWindow
// Namespace: juce:PopupMenu:HelperClasses:MenuWindow
// Entry    : 0027baf0
// Prototype: undefined ~MenuWindow(MenuWindow * this)
// Body     : 0027baf0 - 0027bf0f


/* juce::PopupMenu::HelperClasses::MenuWindow::~MenuWindow() */

void __thiscall juce::PopupMenu::HelperClasses::MenuWindow::~MenuWindow(MenuWindow *this)

{
  long *plVar1;
  uint uVar2;
  MenuWindow *pMVar3;
  long lVar4;
  ItemComponent *pIVar5;
  Timer *this_00;
  long *plVar6;
  Desktop *pDVar7;
  ulong uVar8;
  int iVar9;
  ulong uVar10;
  uint uVar11;
  ulong uVar12;
  int iVar13;
  
  if ((getActiveWindows()::activeMenuWindows == '\0') &&
     (iVar13 = __cxa_guard_acquire(&getActiveWindows()::activeMenuWindows), iVar13 != 0)) {
    __cxa_atexit(Array<juce::PopupMenu::HelperClasses::MenuWindow*,juce::DummyCriticalSection,0>::
                 ~Array,&getActiveWindows()::activeMenuWindows,&__dso_handle);
    __cxa_guard_release(&getActiveWindows()::activeMenuWindows);
  }
  if (0 < (int)DAT_0071c8d4) {
    uVar10 = 0;
    do {
      if (*(MenuWindow **)((long)getActiveWindows()::activeMenuWindows + uVar10 * 8) == this) {
        memmove((void *)((long)getActiveWindows()::activeMenuWindows + uVar10 * 8),
                (void *)((long)getActiveWindows()::activeMenuWindows + uVar10 * 8 + 8),
                (long)(int)(~(uint)uVar10 + DAT_0071c8d4) << 3);
        uVar2 = DAT_0071c8d4 - 1;
        iVar9 = DAT_0071c8d4 * 2 + -2;
        iVar13 = 0;
        if (-1 < iVar9) {
          iVar13 = iVar9;
        }
        DAT_0071c8d4 = uVar2;
        if (iVar13 < (int)DAT_0071c8d0) {
          uVar11 = 8;
          if (8 < (int)uVar2) {
            uVar11 = uVar2;
          }
          if ((int)uVar11 < (int)DAT_0071c8d0) {
            getActiveWindows()::activeMenuWindows =
                 realloc(getActiveWindows()::activeMenuWindows,(ulong)uVar11 << 3);
            DAT_0071c8d0 = uVar11;
          }
        }
        break;
      }
      uVar10 = uVar10 + 1;
    } while (DAT_0071c8d4 != uVar10);
  }
  if (Desktop::instance == (Desktop *)0x0) {
                    /* try { // try from 0027bbae to 0027bbb7 has its CatchHandler @ 0027bf1d */
    pDVar7 = operator_new(0x1d0);
                    /* try { // try from 0027bbbb to 0027bbc2 has its CatchHandler @ 0027bf10 */
    Desktop::Desktop(pDVar7);
    Desktop::instance = pDVar7;
  }
  pDVar7 = Desktop::instance;
  ListenerList<juce::MouseListener,juce::Array<juce::MouseListener*,juce::DummyCriticalSection,0>>::
  remove((ListenerList<juce::MouseListener,juce::Array<juce::MouseListener*,juce::DummyCriticalSection,0>>
          *)(Desktop::instance + 0x48),(long)this);
                    /* try { // try from 0027bbd6 to 0027bbdd has its CatchHandler @ 0027bf1d */
  Desktop::resetTimer(pDVar7);
  pMVar3 = *(MenuWindow **)(this + 400);
  *(undefined8 *)(this + 400) = 0;
  if (pMVar3 != (MenuWindow *)0x0) {
    ~MenuWindow(pMVar3);
    operator_delete(pMVar3);
  }
  uVar2 = *(uint *)(this + 0x154);
  uVar10 = (ulong)uVar2;
  if (0 < (int)uVar2) {
    iVar13 = -uVar2;
    uVar12 = uVar10;
    while( true ) {
      uVar8 = (ulong)((int)uVar12 - 1);
      lVar4 = *(long *)(this + 0x148);
      pIVar5 = *(ItemComponent **)(lVar4 + uVar8 * 8);
      memmove((void *)(lVar4 + uVar8 * 8),(void *)(lVar4 + uVar8 * 8 + 8),
              (long)((int)uVar10 + iVar13) << 3);
      *(int *)(this + 0x154) = *(int *)(this + 0x154) + -1;
      if (pIVar5 != (ItemComponent *)0x0) {
        ItemComponent::~ItemComponent(pIVar5);
        operator_delete(pIVar5);
      }
      if (uVar12 < 2) break;
      uVar10 = (ulong)*(uint *)(this + 0x154);
      iVar13 = iVar13 + 1;
      uVar12 = uVar12 - 1;
    }
  }
  if (*(int *)(this + 0x150) != 0) {
    free(*(void **)(this + 0x148));
    *(undefined8 *)(this + 0x148) = 0;
  }
  *(undefined4 *)(this + 0x150) = 0;
  uVar2 = *(uint *)(this + 0x1c4);
  uVar10 = (ulong)uVar2;
  if (0 < (int)uVar2) {
    iVar13 = -uVar2;
    uVar12 = uVar10;
    while( true ) {
      uVar8 = (ulong)((int)uVar12 - 1);
      lVar4 = *(long *)(this + 0x1b8);
      this_00 = *(Timer **)(lVar4 + uVar8 * 8);
      memmove((void *)(lVar4 + uVar8 * 8),(void *)(lVar4 + uVar8 * 8 + 8),
              (long)((int)uVar10 + iVar13) << 3);
      *(int *)(this + 0x1c4) = *(int *)(this + 0x1c4) + -1;
      if (this_00 != (Timer *)0x0) {
        Timer::stopTimer(this_00);
        Timer::~Timer(this_00);
        operator_delete(this_00);
      }
      if (uVar12 < 2) break;
      uVar10 = (ulong)*(uint *)(this + 0x1c4);
      iVar13 = iVar13 + 1;
      uVar12 = uVar12 - 1;
    }
  }
  *(undefined4 *)(this + 0x1c4) = 0;
  free(*(void **)(this + 0x1b8));
  *(undefined4 *)(this + 0x1a4) = 0;
  free(*(void **)(this + 0x198));
  pMVar3 = *(MenuWindow **)(this + 400);
  if (pMVar3 != (MenuWindow *)0x0) {
    ~MenuWindow(pMVar3);
    operator_delete(pMVar3);
  }
  *(undefined8 *)(this + 400) = 0;
  plVar6 = *(long **)(this + 0x188);
  if (plVar6 != (long *)0x0) {
    LOCK();
    plVar1 = plVar6 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)(*plVar6 + 8))();
    }
  }
  plVar6 = *(long **)(this + 0x160);
  if (plVar6 != (long *)0x0) {
    LOCK();
    plVar1 = plVar6 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)(*plVar6 + 8))();
    }
  }
  uVar2 = *(uint *)(this + 0x154);
  uVar10 = (ulong)uVar2;
  if (0 < (int)uVar2) {
    iVar13 = -uVar2;
    uVar12 = uVar10;
    while( true ) {
      uVar8 = (ulong)((int)uVar12 - 1);
      lVar4 = *(long *)(this + 0x148);
      pIVar5 = *(ItemComponent **)(lVar4 + uVar8 * 8);
      memmove((void *)(lVar4 + uVar8 * 8),(void *)(lVar4 + uVar8 * 8 + 8),
              (long)((int)uVar10 + iVar13) << 3);
      *(int *)(this + 0x154) = *(int *)(this + 0x154) + -1;
      if (pIVar5 != (ItemComponent *)0x0) {
        ItemComponent::~ItemComponent(pIVar5);
        operator_delete(pIVar5);
      }
      if (uVar12 < 2) break;
      uVar10 = (ulong)*(uint *)(this + 0x154);
      iVar13 = iVar13 + 1;
      uVar12 = uVar12 - 1;
    }
  }
  *(undefined4 *)(this + 0x154) = 0;
  free(*(void **)(this + 0x148));
  plVar6 = *(long **)(this + 0x120);
  if (plVar6 != (long *)0x0) {
    LOCK();
    plVar1 = plVar6 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)(*plVar6 + 8))();
    }
  }
  plVar6 = *(long **)(this + 0x118);
  if (plVar6 != (long *)0x0) {
    LOCK();
    plVar1 = plVar6 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)(*plVar6 + 8))();
    }
  }
  plVar6 = *(long **)(this + 0x110);
  if (plVar6 != (long *)0x0) {
    LOCK();
    plVar1 = plVar6 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)(*plVar6 + 8))();
    }
  }
  plVar6 = *(long **)(this + 0x108);
  if (plVar6 != (long *)0x0) {
    LOCK();
    plVar1 = plVar6 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)(*plVar6 + 8))();
    }
  }
  Component::~Component((Component *)this);
  return;
}


