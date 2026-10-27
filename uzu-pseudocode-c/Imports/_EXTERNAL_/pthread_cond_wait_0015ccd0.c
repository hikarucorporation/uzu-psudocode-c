// Function : pthread_cond_wait
// Namespace: _EXTERNAL_
// Entry    : 0015ccd0
// Prototype: int pthread_cond_wait(pthread_cond_t * __cond, pthread_mutex_t * __mutex)
// Body     : 0015ccd0 - 0015ccd5


/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_cond_wait(pthread_cond_t *__cond,pthread_mutex_t *__mutex)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_cond_wait_00716e68)();
  return iVar1;
}


