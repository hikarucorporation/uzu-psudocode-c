// Function : FLock
// Namespace: Steinberg:Base:Thread:FLock
// Entry    : 00183a40
// Prototype: undefined FLock(FLock * this)
// Body     : 00183a40 - 00183a87


/* Steinberg::Base::Thread::FLock::FLock(char const*) */

void __thiscall Steinberg::Base::Thread::FLock::FLock(FLock *this)

{
  pthread_mutexattr_t apStack_18 [2];
  
  *(undefined ***)this = &PTR__FLock_00702c68;
  pthread_mutexattr_init(apStack_18);
  pthread_mutexattr_settype(apStack_18,1);
  pthread_mutex_init((pthread_mutex_t *)(this + 8),apStack_18);
  pthread_mutexattr_destroy(apStack_18);
  return;
}


