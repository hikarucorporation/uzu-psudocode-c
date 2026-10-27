// Function : trylock
// Namespace: Steinberg:Base:Thread:FLock
// Entry    : 00183af0
// Prototype: bool trylock(FLock * this)
// Body     : 00183af0 - 00183b00


/* Steinberg::Base::Thread::FLock::trylock() */

bool __thiscall Steinberg::Base::Thread::FLock::trylock(FLock *this)

{
  int iVar1;
  
  iVar1 = pthread_mutex_trylock((pthread_mutex_t *)(this + 8));
  return iVar1 == 0;
}


