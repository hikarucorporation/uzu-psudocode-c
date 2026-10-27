// Function : exitSignalSent
// Namespace: juce:MessageManagerLock
// Entry    : 00482350
// Prototype: undefined exitSignalSent(MessageManagerLock * this)
// Body     : 00482350 - 00482391


/* juce::MessageManagerLock::exitSignalSent() */

void __thiscall juce::MessageManagerLock::exitSignalSent(MessageManagerLock *this)

{
  int iVar1;
  
  iVar1 = pthread_mutex_lock((pthread_mutex_t *)(this + 0x30));
  if (iVar1 != 0) {
                    /* try { // try from 0048238b to 00482391 has its CatchHandler @ 00482392 */
                    /* WARNING: Subroutine does not return */
    std::__throw_system_error(iVar1);
  }
  *(undefined2 *)(this + 0x90) = 1;
  pthread_mutex_unlock((pthread_mutex_t *)(this + 0x30));
  std::condition_variable::notify_one();
  return;
}


