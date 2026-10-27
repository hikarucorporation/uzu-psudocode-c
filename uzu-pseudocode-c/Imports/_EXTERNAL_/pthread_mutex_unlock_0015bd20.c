// Function : pthread_mutex_unlock
// Namespace: _EXTERNAL_
// Entry    : 0015bd20
// Prototype: int pthread_mutex_unlock(pthread_mutex_t * __mutex)
// Body     : 0015bd20 - 0015bd25


/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_mutex_unlock(pthread_mutex_t *__mutex)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_mutex_unlock_00716690)();
  return iVar1;
}


