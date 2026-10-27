// Function : ~Thread
// Namespace: juce:Thread
// Entry    : 004aa180
// Prototype: undefined ~Thread(Thread * this)
// Body     : 004aa180 - 004aa208


/* juce::Thread::~Thread() */

void __thiscall juce::Thread::~Thread(Thread *this)

{
  int iVar1;
  int *piVar2;
  
  *(undefined ***)this = &PTR__Thread_00713508;
  if (this[0x164] == (Thread)0x0) {
                    /* try { // try from 004aa19a to 004aa1a6 has its CatchHandler @ 004aa209 */
    stopThread(this,-1);
  }
  ListenerList<juce::Thread::Listener,juce::Array<juce::Thread::Listener*,juce::CriticalSection,0>>
  ::~ListenerList((ListenerList<juce::Thread::Listener,juce::Array<juce::Thread::Listener*,juce::CriticalSection,0>>
                   *)(this + 0x168));
  std::condition_variable::~condition_variable((condition_variable *)(this + 0x120));
  std::condition_variable::~condition_variable((condition_variable *)(this + 0xb8));
  pthread_mutex_destroy((pthread_mutex_t *)(this + 0x60));
  piVar2 = (int *)(*(long *)(this + 8) + -0x10);
  if (piVar2 != &emptyString) {
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      operator_delete__(piVar2);
      return;
    }
  }
  return;
}


