// Function : dismissAllActiveMenus
// Namespace: juce:PopupMenu
// Entry    : 002d8170
// Prototype: bool dismissAllActiveMenus(void)
// Body     : 002d8170 - 002d8276


/* juce::PopupMenu::dismissAllActiveMenus() */

bool juce::PopupMenu::dismissAllActiveMenus(void)

{
  long *plVar1;
  Component *this;
  long *plVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  MenuWindow *this_00;
  ulong uVar7;
  ulong uVar8;
  
  if (HelperClasses::MenuWindow::getActiveWindows()::activeMenuWindows == '\0') {
    iVar6 = __cxa_guard_acquire(&HelperClasses::MenuWindow::getActiveWindows()::activeMenuWindows);
    if (iVar6 != 0) {
      __cxa_atexit(Array<juce::PopupMenu::HelperClasses::MenuWindow*,juce::DummyCriticalSection,0>::
                   ~Array,&HelperClasses::MenuWindow::getActiveWindows()::activeMenuWindows,
                   &__dso_handle);
      __cxa_guard_release(&HelperClasses::MenuWindow::getActiveWindows()::activeMenuWindows);
    }
  }
  uVar4 = DAT_0071c8d4;
  if (0 < (int)DAT_0071c8d4) {
    uVar7 = (ulong)DAT_0071c8d4;
    uVar5 = DAT_0071c8d4;
    do {
      uVar8 = uVar7 - 1;
      if ((uint)uVar8 < uVar5) {
        this = *(Component **)
                (HelperClasses::MenuWindow::getActiveWindows()::activeMenuWindows +
                (uVar8 & 0xffffffff) * 8);
        if (this != (Component *)0x0) {
          plVar2 = *(long **)(this + 0x68);
          if ((plVar2 != (long *)0x0) && (plVar2[2] != 0)) {
            *(undefined8 *)(this + 0x68) = 0;
            LOCK();
            plVar1 = plVar2 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)(*plVar2 + 8))();
            }
            Component::sendLookAndFeelChange(this);
          }
          do {
            this_00 = (MenuWindow *)this;
            this = *(Component **)(this_00 + 0xf0);
          } while (this != (Component *)0x0);
          HelperClasses::MenuWindow::hide(this_00,0,'\x01');
          uVar5 = DAT_0071c8d4;
        }
      }
      bVar3 = 1 < (long)uVar7;
      uVar7 = uVar8;
    } while (bVar3);
  }
  return 0 < (int)uVar4;
}


