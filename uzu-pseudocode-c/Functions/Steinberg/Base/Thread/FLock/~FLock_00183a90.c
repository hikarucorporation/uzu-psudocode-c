// Function : ~FLock
// Namespace: Steinberg:Base:Thread:FLock
// Entry    : 00183a90
// Prototype: undefined ~FLock(FLock * this)
// Body     : 00183a90 - 00183aa2


/* Steinberg::Base::Thread::FLock::~FLock() */

void __thiscall Steinberg::Base::Thread::FLock::~FLock(FLock *this)

{
  *(undefined ***)this = &PTR__FLock_00702c68;
  pthread_mutex_destroy((pthread_mutex_t *)(this + 8));
  return;
}


