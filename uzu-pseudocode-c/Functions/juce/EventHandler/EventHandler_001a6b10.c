// Function : EventHandler
// Namespace: juce:EventHandler
// Entry    : 001a6b10
// Prototype: undefined EventHandler(EventHandler * this)
// Body     : 001a6b10 - 001a6bec


/* juce::EventHandler::EventHandler() */

void __thiscall juce::EventHandler::EventHandler(EventHandler *this)

{
  int iVar1;
  
  *(undefined ***)this = &PTR_queryInterface_00705370;
  *(undefined ***)(this + 8) = &PTR__EventHandler_007053b8;
  if (SharedResourcePointer<juce::detail::MessageThread>::weak()::weak == '\0') {
    iVar1 = __cxa_guard_acquire(&SharedResourcePointer<juce::detail::MessageThread>::weak()::weak);
    if (iVar1 != 0) {
      SharedResourcePointer<juce::detail::MessageThread>::weak()::weak._0_4_ = 0;
      SharedResourcePointer<juce::detail::MessageThread>::weak()::weak._8_8_ = 0;
      SharedResourcePointer<juce::detail::MessageThread>::weak()::weak._16_8_ = 0;
      __cxa_atexit(SharedResourcePointer<juce::detail::MessageThread>::Weak::~Weak,
                   SharedResourcePointer<juce::detail::MessageThread>::weak()::weak,&__dso_handle);
      __cxa_guard_release(&SharedResourcePointer<juce::detail::MessageThread>::weak()::weak);
    }
  }
  SharedResourcePointer<juce::detail::MessageThread>::Weak::lockOrCreate
            ((long *)(this + 0x10),
             (SpinLock *)SharedResourcePointer<juce::detail::MessageThread>::weak()::weak);
  *(undefined4 *)(this + 0x20) = 1;
  *(undefined4 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(EventHandler **)(this + 0x40) = this + 0x30;
  *(EventHandler **)(this + 0x48) = this + 0x30;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x60) = 0;
                    /* try { // try from 001a6b8a to 001a6b91 has its CatchHandler @ 001a6bed */
  LinuxEventLoopInternal::registerLinuxEventLoopListener((long)(this + 8));
  return;
}


