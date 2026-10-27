// Function : setCurrentThreadAsMessageThread
// Namespace: juce:MessageManager
// Entry    : 00481810
// Prototype: undefined setCurrentThreadAsMessageThread(MessageManager * this)
// Body     : 00481810 - 00481845


/* juce::MessageManager::setCurrentThreadAsMessageThread() */

void __thiscall juce::MessageManager::setCurrentThreadAsMessageThread(MessageManager *this)

{
  int iVar1;
  pthread_t pVar2;
  
  iVar1 = pthread_mutex_lock((pthread_mutex_t *)(this + 0x20));
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    std::__throw_system_error(iVar1);
  }
  pVar2 = pthread_self();
  *(pthread_t *)(this + 0x10) = pVar2;
  pthread_mutex_unlock((pthread_mutex_t *)(this + 0x20));
  return;
}


