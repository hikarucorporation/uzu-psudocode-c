// Function : ~MessageManagerLock
// Namespace: juce:MessageManagerLock
// Entry    : 00482280
// Prototype: undefined ~MessageManagerLock(MessageManagerLock * this)
// Body     : 00482280 - 004822dd


/* juce::MessageManagerLock::~MessageManagerLock() */

void __thiscall juce::MessageManagerLock::~MessageManagerLock(MessageManagerLock *this)

{
  pthread_mutex_t *__mutex;
  int *piVar1;
  void *pvVar2;
  
  *(undefined ***)this = &PTR__MessageManagerLock_00712b30;
  __mutex = (pthread_mutex_t *)(this + 8);
  MessageManager::Lock::exit((Lock *)&__mutex->__data);
  MessageManager::Lock::exit((Lock *)&__mutex->__data);
  std::condition_variable::~condition_variable((condition_variable *)(this + 0x60));
  pvVar2 = *(void **)(this + 0x58);
  if (pvVar2 != (void *)0x0) {
    LOCK();
    piVar1 = (int *)((long)pvVar2 + 8);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      std::condition_variable::~condition_variable((condition_variable *)((long)pvVar2 + 0x38));
      operator_delete(pvVar2);
    }
  }
  pthread_mutex_destroy(__mutex);
  return;
}


