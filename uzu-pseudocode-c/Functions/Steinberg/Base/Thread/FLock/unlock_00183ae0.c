// Function : unlock
// Namespace: Steinberg:Base:Thread:FLock
// Entry    : 00183ae0
// Prototype: undefined unlock(FLock * this)
// Body     : 00183ae0 - 00183ae8


/* Steinberg::Base::Thread::FLock::unlock() */

void __thiscall Steinberg::Base::Thread::FLock::unlock(FLock *this)

{
  pthread_mutex_unlock((pthread_mutex_t *)(this + 8));
  return;
}


