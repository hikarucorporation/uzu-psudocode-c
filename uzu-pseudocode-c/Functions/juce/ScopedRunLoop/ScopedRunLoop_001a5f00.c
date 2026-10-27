// Function : ScopedRunLoop
// Namespace: juce:ScopedRunLoop
// Entry    : 001a5f00
// Prototype: undefined ScopedRunLoop(ScopedRunLoop * this, long * param_1)
// Body     : 001a5f00 - 001a6045


/* juce::ScopedRunLoop::ScopedRunLoop(juce::VSTComSmartPtr<Steinberg::Linux::IRunLoop> const&) */

void __thiscall juce::ScopedRunLoop::ScopedRunLoop(ScopedRunLoop *this,long *param_1)

{
  long *plVar1;
  EventHandler *this_00;
  int iVar2;
  EventHandler *local_38;
  long local_30;
  
  ScopedJuceInitialiser_GUI::ScopedJuceInitialiser_GUI();
  if (SharedResourcePointer<juce::detail::MessageThread>::weak()::weak == '\0') {
    iVar2 = __cxa_guard_acquire(&SharedResourcePointer<juce::detail::MessageThread>::weak()::weak);
    if (iVar2 != 0) {
      SharedResourcePointer<juce::detail::MessageThread>::weak()::weak._0_4_ = 0;
      SharedResourcePointer<juce::detail::MessageThread>::weak()::weak._8_8_ = 0;
      SharedResourcePointer<juce::detail::MessageThread>::weak()::weak._16_8_ = 0;
      __cxa_atexit(SharedResourcePointer<juce::detail::MessageThread>::Weak::~Weak,
                   SharedResourcePointer<juce::detail::MessageThread>::weak()::weak,&__dso_handle);
      __cxa_guard_release(&SharedResourcePointer<juce::detail::MessageThread>::weak()::weak);
    }
  }
                    /* try { // try from 001a5f26 to 001a5f34 has its CatchHandler @ 001a607f */
  SharedResourcePointer<juce::detail::MessageThread>::Weak::lockOrCreate
            ((long *)(this + 8),
             (SpinLock *)SharedResourcePointer<juce::detail::MessageThread>::weak()::weak);
  if (SharedResourcePointer<juce::EventHandler>::weak()::weak == '\0') {
    iVar2 = __cxa_guard_acquire(&SharedResourcePointer<juce::EventHandler>::weak()::weak);
    if (iVar2 != 0) {
      SharedResourcePointer<juce::EventHandler>::weak()::weak._0_4_ = 0;
      SharedResourcePointer<juce::EventHandler>::weak()::weak._8_8_ = 0;
      SharedResourcePointer<juce::EventHandler>::weak()::weak._16_8_ = 0;
      __cxa_atexit(SharedResourcePointer<juce::EventHandler>::Weak::~Weak,
                   SharedResourcePointer<juce::EventHandler>::weak()::weak,&__dso_handle);
      __cxa_guard_release(&SharedResourcePointer<juce::EventHandler>::weak()::weak);
    }
  }
                    /* try { // try from 001a5f47 to 001a5f55 has its CatchHandler @ 001a6072 */
  SharedResourcePointer<juce::EventHandler>::Weak::lockOrCreate
            ((long *)(this + 0x18),
             (SpinLock *)SharedResourcePointer<juce::EventHandler>::weak()::weak);
  plVar1 = (long *)*param_1;
  *(long **)(this + 0x28) = plVar1;
  if (plVar1 != (long *)0x0) {
                    /* try { // try from 001a5f66 to 001a5f68 has its CatchHandler @ 001a6046 */
    (**(code **)(*plVar1 + 8))();
    local_30 = *(long *)(this + 0x28);
    if (local_30 != 0) {
      this_00 = *(EventHandler **)(this + 0x18);
      local_38 = this_00;
                    /* try { // try from 001a5f7f to 001a5f91 has its CatchHandler @ 001a604e */
      EventHandler::
      refreshAttachedEventLoop<juce::EventHandler::registerHandlerForRunLoop(Steinberg::Linux::IRunLoop*)::_lambda()_1_>
                (this_00,(long *)&local_38);
      EventHandler::updateCurrentMessageThread(this_00);
    }
  }
  return;
}


