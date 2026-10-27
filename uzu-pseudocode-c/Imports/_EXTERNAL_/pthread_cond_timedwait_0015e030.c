// Function : pthread_cond_timedwait
// Namespace: _EXTERNAL_
// Entry    : 0015e030
// Prototype: int pthread_cond_timedwait(pthread_cond_t * __cond, pthread_mutex_t * __mutex, timespec * __abstime)
// Body     : 0015e030 - 0015e035


/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_cond_timedwait(pthread_cond_t *__cond,pthread_mutex_t *__mutex,timespec *__abstime)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_cond_timedwait_00717818)();
  return iVar1;
}


