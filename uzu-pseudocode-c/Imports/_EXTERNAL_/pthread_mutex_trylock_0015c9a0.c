// Function : pthread_mutex_trylock
// Namespace: _EXTERNAL_
// Entry    : 0015c9a0
// Prototype: int pthread_mutex_trylock(pthread_mutex_t * __mutex)
// Body     : 0015c9a0 - 0015c9a5


/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_mutex_trylock(pthread_mutex_t *__mutex)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_mutex_trylock_00716cd0)();
  return iVar1;
}


