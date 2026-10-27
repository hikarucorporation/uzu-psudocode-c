// Function : ~ScopedRunLoop
// Namespace: juce:ScopedRunLoop
// Entry    : 001a60a0
// Prototype: undefined ~ScopedRunLoop(ScopedRunLoop * this)
// Body     : 001a60a0 - 001a61d5


/* juce::ScopedRunLoop::~ScopedRunLoop() */

void __thiscall juce::ScopedRunLoop::~ScopedRunLoop(ScopedRunLoop *this)

{
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var1;
  int iVar2;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var3;
  EventHandler *local_30;
  long local_28;
  
  if (*(long *)(this + 0x28) != 0) {
    local_30 = *(EventHandler **)(this + 0x18);
                    /* try { // try from 001a60cd to 001a60d6 has its CatchHandler @ 001a61de */
    local_28 = *(long *)(this + 0x28);
    EventHandler::
    refreshAttachedEventLoop<juce::EventHandler::unregisterHandlerForRunLoop(Steinberg::Linux::IRunLoop*)::_lambda()_1_>
              (local_30,(long *)&local_30);
    if (*(long **)(this + 0x28) != (long *)0x0) {
                    /* try { // try from 001a60e2 to 001a60e4 has its CatchHandler @ 001a61d6 */
      (**(code **)(**(long **)(this + 0x28) + 0x10))();
    }
  }
  p_Var3 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(this + 0x20);
  if (p_Var3 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
    if (*(long *)(p_Var3 + 8) == 0x100000001) {
      *(undefined8 *)(p_Var3 + 8) = 0;
      (**(code **)(*(long *)p_Var3 + 0x10))(p_Var3);
      (**(code **)(*(long *)p_Var3 + 0x18))(p_Var3);
      p_Var3 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(this + 0x10);
      goto joined_r0x001a61a5;
    }
    if (*PTR___libc_single_threaded_00715c50 == '\0') {
      LOCK();
      p_Var1 = p_Var3 + 8;
      iVar2 = *(int *)p_Var1;
      *(int *)p_Var1 = *(int *)p_Var1 + -1;
      UNLOCK();
    }
    else {
      iVar2 = (int)*(long *)(p_Var3 + 8);
      *(int *)(p_Var3 + 8) = iVar2 + -1;
    }
    if (iVar2 == 1) {
      std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(p_Var3);
      p_Var3 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(this + 0x10);
      goto joined_r0x001a61a5;
    }
  }
  p_Var3 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(this + 0x10);
joined_r0x001a61a5:
  if (p_Var3 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
    if (*(long *)(p_Var3 + 8) == 0x100000001) {
      *(undefined8 *)(p_Var3 + 8) = 0;
      (**(code **)(*(long *)p_Var3 + 0x10))(p_Var3);
      (**(code **)(*(long *)p_Var3 + 0x18))(p_Var3);
    }
    else {
      if (*PTR___libc_single_threaded_00715c50 == '\0') {
        LOCK();
        p_Var1 = p_Var3 + 8;
        iVar2 = *(int *)p_Var1;
        *(int *)p_Var1 = *(int *)p_Var1 + -1;
        UNLOCK();
      }
      else {
        iVar2 = (int)*(long *)(p_Var3 + 8);
        *(int *)(p_Var3 + 8) = iVar2 + -1;
      }
      if (iVar2 == 1) {
        std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(p_Var3);
      }
    }
  }
  ScopedJuceInitialiser_GUI::~ScopedJuceInitialiser_GUI();
  return;
}


