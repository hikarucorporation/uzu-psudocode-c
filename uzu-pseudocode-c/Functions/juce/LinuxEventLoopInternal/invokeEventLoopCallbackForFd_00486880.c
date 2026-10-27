// Function : invokeEventLoopCallbackForFd
// Namespace: juce:LinuxEventLoopInternal
// Entry    : 00486880
// Prototype: undefined invokeEventLoopCallbackForFd(int param_1)
// Body     : 00486880 - 004869b9


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::LinuxEventLoopInternal::invokeEventLoopCallbackForFd(int) */

void __cdecl juce::LinuxEventLoopInternal::invokeEventLoopCallbackForFd(int param_1)

{
  long lVar1;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var2;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *this;
  undefined8 __mutex;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  
  __mutex = InternalRunLoop::singletonHolder._40_8_;
  if (InternalRunLoop::singletonHolder._40_8_ == 0) {
    return;
  }
  pthread_mutex_lock((pthread_mutex_t *)InternalRunLoop::singletonHolder._40_8_);
  lVar5 = *(long *)(__mutex + 0x38);
  if (lVar5 == 0) {
LAB_0048695e:
    pthread_mutex_unlock((pthread_mutex_t *)__mutex);
    return;
  }
  lVar1 = __mutex + 0x30;
  lVar3 = lVar1;
  do {
    plVar6 = (long *)(lVar5 + 0x18);
    if (param_1 <= *(int *)(lVar5 + 0x20)) {
      plVar6 = (long *)(lVar5 + 0x10);
      lVar3 = lVar5;
    }
    lVar5 = *plVar6;
  } while (lVar5 != 0);
  if (lVar3 == lVar1) goto LAB_0048695e;
  if (param_1 < *(int *)(lVar3 + 0x20)) {
    lVar3 = lVar1;
  }
  if (lVar3 == lVar1) goto LAB_0048695e;
  lVar5 = *(long *)(lVar3 + 0x28);
  this = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(lVar3 + 0x30);
  if (this != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
    if (*PTR___libc_single_threaded_00715c50 == '\0') {
      LOCK();
      *(int *)(this + 8) = *(int *)(this + 8) + 1;
      UNLOCK();
      pthread_mutex_unlock((pthread_mutex_t *)__mutex);
      goto joined_r0x00486915;
    }
    *(int *)(this + 8) = *(int *)(this + 8) + 1;
  }
  pthread_mutex_unlock((pthread_mutex_t *)__mutex);
joined_r0x00486915:
  if (lVar5 != 0) {
    if (*(long *)(lVar5 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 004869b5 to 004869b9 has its CatchHandler @ 004869ba */
      std::__throw_bad_function_call();
    }
                    /* try { // try from 00486922 to 00486927 has its CatchHandler @ 004869ba */
    (**(code **)(lVar5 + 0x18))(lVar5);
  }
  if (this != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
    uVar4 = *(ulong *)(this + 8);
    if (uVar4 == 0x100000001) {
      *(undefined8 *)(this + 8) = 0;
      (**(code **)(*(long *)this + 0x10))(this);
                    /* WARNING: Could not recover jumptable at 0x0048695b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)this + 0x18))(this);
      return;
    }
    if (*PTR___libc_single_threaded_00715c50 == '\0') {
      LOCK();
      p_Var2 = this + 8;
      uVar4 = (ulong)*(uint *)p_Var2;
      *(uint *)p_Var2 = *(uint *)p_Var2 - 1;
      UNLOCK();
    }
    else {
      *(int *)(this + 8) = (int)uVar4 + -1;
    }
    if ((int)uVar4 == 1) {
      std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(this);
      return;
    }
  }
  return;
}


