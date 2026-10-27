// Function : instance
// Namespace: Steinberg:UpdateHandler
// Entry    : 0019f320
// Prototype: UpdateHandler * instance(char param_1)
// Body     : 0019f320 - 0019f3f6


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* Steinberg::UpdateHandler::instance(bool) */

UpdateHandler * __cdecl Steinberg::UpdateHandler::instance(char param_1)

{
  long *plVar1;
  UpdateHandler *this;
  pthread_mutexattr_t apStack_18 [2];
  
  if (((instance(bool)::inst == (UpdateHandler *)0x0) && (param_1 != '\0')) &&
     (Singleton::singletonsTerminated == '\0')) {
    if (Singleton::singletonsLock == (long *)0x0) {
      plVar1 = operator_new(0x30);
      *plVar1 = (long)&PTR__FLock_00702c68;
      pthread_mutexattr_init(apStack_18);
      pthread_mutexattr_settype(apStack_18,1);
      pthread_mutex_init((pthread_mutex_t *)(plVar1 + 1),apStack_18);
      pthread_mutexattr_destroy(apStack_18);
      Singleton::singletonsLock = plVar1;
    }
    (**(code **)(*Singleton::singletonsLock + 0x10))(Singleton::singletonsLock);
    if (instance(bool)::inst == (UpdateHandler *)0x0) {
      this = operator_new(0x58);
                    /* try { // try from 0019f3c0 to 0019f3c7 has its CatchHandler @ 0019f3f7 */
      UpdateHandler(this);
      instance(bool)::inst = this;
      Singleton::registerInstance(&instance(bool)::inst);
    }
    (**(code **)(*Singleton::singletonsLock + 0x18))();
  }
  return instance(bool)::inst;
}


