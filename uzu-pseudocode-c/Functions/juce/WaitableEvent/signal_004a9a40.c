// Function : signal
// Namespace: juce:WaitableEvent
// Entry    : 004a9a40
// Prototype: undefined signal(WaitableEvent * this)
// Body     : 004a9a40 - 004a9a7d


/* juce::WaitableEvent::signal() const */

void __thiscall juce::WaitableEvent::signal(WaitableEvent *this)

{
  int iVar1;
  
  iVar1 = pthread_mutex_lock((pthread_mutex_t *)(this + 8));
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    std::__throw_system_error(iVar1);
  }
  LOCK();
  this[0x60] = (WaitableEvent)0x1;
  UNLOCK();
  std::condition_variable::notify_all();
  pthread_mutex_unlock((pthread_mutex_t *)(this + 8));
  return;
}


