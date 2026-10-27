// Function : juce_getCurrentFocusWindow
// Namespace: juce
// Entry    : 004d4ea0
// Prototype: undefined8 juce_getCurrentFocusWindow(juce * this)
// Body     : 004d4ea0 - 004d51a0


/* juce::juce_getCurrentFocusWindow(juce::ComponentPeer*) */

undefined8 __thiscall juce::juce_getCurrentFocusWindow(juce *this)

{
  long lVar1;
  long *plVar2;
  Desktop *this_00;
  int iVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  juce *pjVar7;
  
  if (this == (juce *)0x0) {
    if ((XEmbedComponent::Pimpl::SharedKeyWindow::getKeyWindows()::keyWindows == '\0') &&
       (iVar3 = __cxa_guard_acquire(&XEmbedComponent::Pimpl::SharedKeyWindow::getKeyWindows()::
                                     keyWindows), iVar3 != 0)) {
      XEmbedComponent::Pimpl::SharedKeyWindow::getKeyWindows()::keyWindows._24_4_ = 0;
      XEmbedComponent::Pimpl::SharedKeyWindow::getKeyWindows()::keyWindows._8_8_ = malloc(0x4c0);
      XEmbedComponent::Pimpl::SharedKeyWindow::getKeyWindows()::keyWindows._16_4_ = 0x98;
      memset((void *)XEmbedComponent::Pimpl::SharedKeyWindow::getKeyWindows()::keyWindows._8_8_,0,
             0x328);
      XEmbedComponent::Pimpl::SharedKeyWindow::getKeyWindows()::keyWindows._20_4_ = 0x65;
      __cxa_atexit(HashMap<juce::ComponentPeer*,juce::XEmbedComponent::Pimpl::SharedKeyWindow*,juce::DefaultHashFunctions,juce::DummyCriticalSection>
                   ::~HashMap,XEmbedComponent::Pimpl::SharedKeyWindow::getKeyWindows()::keyWindows,
                   &__dso_handle);
      __cxa_guard_release(&XEmbedComponent::Pimpl::SharedKeyWindow::getKeyWindows()::keyWindows);
    }
  }
  else {
    if ((XEmbedComponent::Pimpl::getWidgets()::i == '\0') &&
       (iVar3 = __cxa_guard_acquire(&XEmbedComponent::Pimpl::getWidgets()::i), iVar3 != 0)) {
      __cxa_atexit(Array<juce::XEmbedComponent::Pimpl*,juce::DummyCriticalSection,0>::~Array,
                   &XEmbedComponent::Pimpl::getWidgets()::i,&__dso_handle);
      __cxa_guard_release(&XEmbedComponent::Pimpl::getWidgets()::i);
    }
    if ((long)DAT_0071dab4 != 0) {
      plVar2 = XEmbedComponent::Pimpl::getWidgets()::i + DAT_0071dab4;
      plVar5 = XEmbedComponent::Pimpl::getWidgets()::i;
LAB_004d4efd:
      lVar1 = *plVar5;
      lVar6 = *(long *)(lVar1 + 8);
      do {
        if ((*(ushort *)(lVar6 + 0xe8) & 1) != 0) {
          if (Desktop::instance == (Desktop *)0x0) {
                    /* try { // try from 004d4f4b to 004d4f54 has its CatchHandler @ 004d51b4 */
            this_00 = operator_new(0x1d0);
                    /* try { // try from 004d4f58 to 004d4f5f has its CatchHandler @ 004d51a1 */
            Desktop::Desktop(this_00);
            iVar3 = *(int *)(this_00 + 0xdc);
            Desktop::instance = this_00;
          }
          else {
            iVar3 = *(int *)(Desktop::instance + 0xdc);
          }
          if ((long)iVar3 != 0) {
            lVar4 = 0;
            goto LAB_004d4f90;
          }
          break;
        }
        lVar6 = *(long *)(lVar6 + 0x30);
      } while (lVar6 != 0);
      goto LAB_004d4fb0;
    }
LAB_004d4fd2:
    if ((XEmbedComponent::Pimpl::SharedKeyWindow::getKeyWindows()::keyWindows == '\0') &&
       (iVar3 = __cxa_guard_acquire(&XEmbedComponent::Pimpl::SharedKeyWindow::getKeyWindows()::
                                     keyWindows), iVar3 != 0)) {
      XEmbedComponent::Pimpl::SharedKeyWindow::getKeyWindows()::keyWindows._24_4_ = 0;
      XEmbedComponent::Pimpl::SharedKeyWindow::getKeyWindows()::keyWindows._8_8_ = malloc(0x4c0);
      XEmbedComponent::Pimpl::SharedKeyWindow::getKeyWindows()::keyWindows._16_4_ = 0x98;
      memset((void *)XEmbedComponent::Pimpl::SharedKeyWindow::getKeyWindows()::keyWindows._8_8_,0,
             0x328);
      XEmbedComponent::Pimpl::SharedKeyWindow::getKeyWindows()::keyWindows._20_4_ = 0x65;
      __cxa_atexit(HashMap<juce::ComponentPeer*,juce::XEmbedComponent::Pimpl::SharedKeyWindow*,juce::DefaultHashFunctions,juce::DummyCriticalSection>
                   ::~HashMap,XEmbedComponent::Pimpl::SharedKeyWindow::getKeyWindows()::keyWindows,
                   &__dso_handle);
      __cxa_guard_release(&XEmbedComponent::Pimpl::SharedKeyWindow::getKeyWindows()::keyWindows);
    }
    if (((ulong)this |
        (long)(int)XEmbedComponent::Pimpl::SharedKeyWindow::getKeyWindows()::keyWindows._20_4_) >>
        0x20 == 0) {
      iVar3 = (int)(((ulong)this & 0xffffffff) %
                   (ulong)(uint)XEmbedComponent::Pimpl::SharedKeyWindow::getKeyWindows()::keyWindows
                                ._20_4_);
    }
    else {
      iVar3 = (int)((ulong)this %
                   (ulong)(long)(int)XEmbedComponent::Pimpl::SharedKeyWindow::getKeyWindows()::
                                     keyWindows._20_4_);
    }
    for (plVar2 = *(long **)(XEmbedComponent::Pimpl::SharedKeyWindow::getKeyWindows()::keyWindows.
                             _8_8_ + (long)iVar3 * 8); plVar2 != (long *)0x0;
        plVar2 = (long *)plVar2[2]) {
      if ((juce *)*plVar2 == this) {
        if (plVar2[1] == 0) {
          return 0;
        }
        return *(undefined8 *)(plVar2[1] + 0x18);
      }
    }
  }
  return 0;
  while (lVar4 = lVar4 + 8, (long)iVar3 * 8 != lVar4) {
LAB_004d4f90:
    pjVar7 = *(juce **)(*(long *)(Desktop::instance + 0xd0) + lVar4);
    if (*(long *)(pjVar7 + 8) == lVar6) goto LAB_004d4fb2;
  }
LAB_004d4fb0:
  pjVar7 = (juce *)0x0;
LAB_004d4fb2:
  if ((pjVar7 == this) && (Component::currentlyFocusedComponent == *(long *)(lVar1 + 8))) {
    return *(undefined8 *)(lVar1 + 0x70);
  }
  plVar5 = plVar5 + 1;
  if (plVar5 == plVar2) goto LAB_004d4fd2;
  goto LAB_004d4efd;
}


