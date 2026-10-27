// Function : isThisTheMessageThread
// Namespace: juce:MessageManager
// Entry    : 004817c0
// Prototype: ulong isThisTheMessageThread(MessageManager * this)
// Body     : 004817c0 - 004817fb


/* juce::MessageManager::isThisTheMessageThread() const */

ulong __thiscall juce::MessageManager::isThisTheMessageThread(MessageManager *this)

{
  pthread_t pVar1;
  int iVar2;
  pthread_t pVar3;
  
  iVar2 = pthread_mutex_lock((pthread_mutex_t *)(this + 0x20));
  if (iVar2 != 0) {
                    /* try { // try from 004817f5 to 004817fb has its CatchHandler @ 004817fc */
                    /* WARNING: Subroutine does not return */
    std::__throw_system_error(iVar2);
  }
  pVar3 = pthread_self();
  pVar1 = *(pthread_t *)(this + 0x10);
  pthread_mutex_unlock((pthread_mutex_t *)(this + 0x20));
  return CONCAT71((int7)((ulong)this >> 8),pVar1 == pVar3) & 0xffffffff;
}


