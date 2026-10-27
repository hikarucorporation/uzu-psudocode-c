// Function : exit
// Namespace: juce:MessageManager:Lock
// Entry    : 00481850
// Prototype: undefined exit(Lock * this)
// Body     : 00481850 - 0048192c


/* juce::MessageManager::Lock::exit() const */

void __thiscall juce::MessageManager::Lock::exit(Lock *this)

{
  int *piVar1;
  Lock LVar2;
  void *pvVar3;
  int iVar4;
  long lVar5;
  
  iVar4 = pthread_mutex_lock((pthread_mutex_t *)(this + 0x28));
  if (iVar4 != 0) {
                    /* try { // try from 0048191f to 00481925 has its CatchHandler @ 0048194c */
                    /* WARNING: Subroutine does not return */
    std::__throw_system_error(iVar4);
  }
  LVar2 = this[0x89];
  pthread_mutex_unlock((pthread_mutex_t *)(this + 0x28));
  if (LVar2 == (Lock)0x0) {
    return;
  }
  lVar5 = *(long *)(this + 0x50);
  if (lVar5 != 0) {
    if (instance != 0) {
      LOCK();
      *(undefined8 *)(instance + 0x18) = 0;
      UNLOCK();
      lVar5 = *(long *)(this + 0x50);
    }
    iVar4 = pthread_mutex_lock((pthread_mutex_t *)(lVar5 + 0x10));
    if (iVar4 != 0) {
                    /* try { // try from 00481926 to 0048192c has its CatchHandler @ 0048192d */
                    /* WARNING: Subroutine does not return */
      std::__throw_system_error(iVar4);
    }
    *(undefined8 *)(lVar5 + 0x68) = 0;
    pthread_mutex_unlock((pthread_mutex_t *)(lVar5 + 0x10));
    std::condition_variable::notify_one();
    pvVar3 = *(void **)(this + 0x50);
    *(undefined8 *)(this + 0x50) = 0;
    if (pvVar3 != (void *)0x0) {
      LOCK();
      piVar1 = (int *)((long)pvVar3 + 8);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        std::condition_variable::~condition_variable((condition_variable *)((long)pvVar3 + 0x38));
        operator_delete(pvVar3);
      }
    }
    this[0x89] = (Lock)0x0;
  }
  pthread_mutex_unlock((pthread_mutex_t *)this);
  return;
}


