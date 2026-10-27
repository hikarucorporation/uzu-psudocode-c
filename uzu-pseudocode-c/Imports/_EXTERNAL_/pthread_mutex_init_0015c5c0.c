// Function : pthread_mutex_init
// Namespace: _EXTERNAL_
// Entry    : 0015c5c0
// Prototype: int pthread_mutex_init(pthread_mutex_t * __mutex, pthread_mutexattr_t * __mutexattr)
// Body     : 0015c5c0 - 0015c5c5


/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_mutex_init(pthread_mutex_t *__mutex,pthread_mutexattr_t *__mutexattr)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_mutex_init_00716ae0)();
  return iVar1;
}


