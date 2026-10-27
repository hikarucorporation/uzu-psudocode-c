// Function : applicationShuttingDown
// Namespace: juce:Timer:TimerThread
// Entry    : 00485aa0
// Prototype: undefined applicationShuttingDown(TimerThread * this)
// Body     : 00485aa0 - 00485af2


/* non-virtual thunk to juce::Timer::TimerThread::applicationShuttingDown() */

void __thiscall juce::Timer::TimerThread::applicationShuttingDown(TimerThread *this)

{
  int iVar1;
  
  Thread::signalThreadShouldExit((Thread *)(this + -0x198));
  iVar1 = pthread_mutex_lock((pthread_mutex_t *)(this + 0x50));
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    std::__throw_system_error(iVar1);
  }
  LOCK();
  this[0xa8] = (TimerThread)0x1;
  UNLOCK();
  std::condition_variable::notify_all();
  pthread_mutex_unlock((pthread_mutex_t *)(this + 0x50));
  return;
}


