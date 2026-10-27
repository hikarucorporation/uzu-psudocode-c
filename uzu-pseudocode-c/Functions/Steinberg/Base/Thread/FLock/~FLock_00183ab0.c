// Function : ~FLock
// Namespace: Steinberg:Base:Thread:FLock
// Entry    : 00183ab0
// Prototype: undefined ~FLock(FLock * this)
// Body     : 00183ab0 - 00183acf


/* Steinberg::Base::Thread::FLock::~FLock() */

void __thiscall Steinberg::Base::Thread::FLock::~FLock(FLock *this)

{
  *(undefined ***)this = &PTR__FLock_00702c68;
  pthread_mutex_destroy((pthread_mutex_t *)(this + 8));
  operator_delete(this);
  return;
}


