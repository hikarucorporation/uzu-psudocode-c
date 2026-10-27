// Function : lock
// Namespace: Steinberg:Base:Thread:FLock
// Entry    : 00183ad0
// Prototype: undefined lock(FLock * this)
// Body     : 00183ad0 - 00183ad8


/* Steinberg::Base::Thread::FLock::lock() */

void __thiscall Steinberg::Base::Thread::FLock::lock(FLock *this)

{
  pthread_mutex_lock((pthread_mutex_t *)(this + 8));
  return;
}


