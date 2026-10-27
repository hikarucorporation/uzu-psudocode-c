// Function : lockRegister
// Namespace: Steinberg:Singleton
// Entry    : 00178460
// Prototype: undefined lockRegister(void)
// Body     : 00178460 - 001784ca


/* Steinberg::Singleton::lockRegister() */

void Steinberg::Singleton::lockRegister(void)

{
  long *plVar1;
  pthread_mutexattr_t apStack_18 [2];
  
  if (singletonsLock == (long *)0x0) {
    plVar1 = operator_new(0x30);
    *plVar1 = (long)&PTR__FLock_00702c68;
    pthread_mutexattr_init(apStack_18);
    pthread_mutexattr_settype(apStack_18,1);
    pthread_mutex_init((pthread_mutex_t *)(plVar1 + 1),apStack_18);
    pthread_mutexattr_destroy(apStack_18);
    singletonsLock = plVar1;
  }
  (**(code **)(*singletonsLock + 0x10))(singletonsLock);
  return;
}


