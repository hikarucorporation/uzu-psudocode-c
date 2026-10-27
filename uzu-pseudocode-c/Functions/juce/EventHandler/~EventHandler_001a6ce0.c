// Function : ~EventHandler
// Namespace: juce:EventHandler
// Entry    : 001a6ce0
// Prototype: undefined ~EventHandler(EventHandler * this)
// Body     : 001a6ce0 - 001a6dea


/* juce::EventHandler::~EventHandler() */

void __thiscall juce::EventHandler::~EventHandler(EventHandler *this)

{
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var1;
  Thread *this_00;
  long *plVar2;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *this_01;
  int iVar3;
  undefined8 uVar4;
  
                    /* try { // try from 001a6cec to 001a6cf0 has its CatchHandler @ 001a6e16 */
  LinuxEventLoopInternal::deregisterLinuxEventLoopListener((long)(this + 8));
                    /* try { // try from 001a6cf5 to 001a6cf9 has its CatchHandler @ 001a6e0e */
  uVar4 = Thread::isThreadRunning(*(Thread **)(this + 0x10));
  if ((char)uVar4 == '\0') {
    iVar3 = pthread_mutex_lock((pthread_mutex_t *)(hostMessageThreadState + 8));
    if (iVar3 != 0) {
                    /* try { // try from 001a6de4 to 001a6dea has its CatchHandler @ 001a6deb */
                    /* WARNING: Subroutine does not return */
      std::__throw_system_error(iVar3);
    }
    hostMessageThreadState._0_4_ = 0;
    this_00 = *(Thread **)(this + 0x10);
                    /* try { // try from 001a6d20 to 001a6d43 has its CatchHandler @ 001a6dfd */
    Thread::startThread(this_00,1);
    WaitableEvent::wait(DAT_005db348,(WaitableEvent *)(this_00 + 0x198));
    pthread_mutex_unlock((pthread_mutex_t *)(hostMessageThreadState + 8));
  }
  plVar2 = *(long **)(this + 0x58);
  if (plVar2 != (long *)0x0) {
                    /* try { // try from 001a6d60 to 001a6d62 has its CatchHandler @ 001a6ded */
    (**(code **)(*plVar2 + 0x20))(plVar2,*(undefined8 *)(this + 0x60));
  }
                    /* try { // try from 001a6d6b to 001a6d6f has its CatchHandler @ 001a6df5 */
  std::
  _Rb_tree<Steinberg::Linux::IRunLoop*,Steinberg::Linux::IRunLoop*,std::_Identity<Steinberg::Linux::IRunLoop*>,std::less<Steinberg::Linux::IRunLoop*>,std::allocator<Steinberg::Linux::IRunLoop*>>
  ::_M_erase((_Rb_tree<Steinberg::Linux::IRunLoop*,Steinberg::Linux::IRunLoop*,std::_Identity<Steinberg::Linux::IRunLoop*>,std::less<Steinberg::Linux::IRunLoop*>,std::allocator<Steinberg::Linux::IRunLoop*>>
              *)(this + 0x28),*(void **)(this + 0x38));
  this_01 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(this + 0x18);
  if (this_01 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
    if (*(long *)(this_01 + 8) == 0x100000001) {
      *(undefined8 *)(this_01 + 8) = 0;
      (**(code **)(*(long *)this_01 + 0x10))(this_01);
                    /* WARNING: Could not recover jumptable at 0x001a6da8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)this_01 + 0x18))(this_01);
      return;
    }
    if (*PTR___libc_single_threaded_00715c50 == '\0') {
      LOCK();
      p_Var1 = this_01 + 8;
      iVar3 = *(int *)p_Var1;
      *(int *)p_Var1 = *(int *)p_Var1 + -1;
      UNLOCK();
    }
    else {
      iVar3 = (int)*(long *)(this_01 + 8);
      *(int *)(this_01 + 8) = iVar3 + -1;
    }
    if (iVar3 == 1) {
      std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(this_01);
      return;
    }
  }
  return;
}


