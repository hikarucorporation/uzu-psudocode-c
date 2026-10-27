// Function : pthread_rwlock_rdlock
// Namespace: _EXTERNAL_
// Entry    : 0015cc90
// Prototype: int pthread_rwlock_rdlock(pthread_rwlock_t * __rwlock)
// Body     : 0015cc90 - 0015cc95


/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_rwlock_rdlock(pthread_rwlock_t *__rwlock)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_rwlock_rdlock_00716e48)();
  return iVar1;
}


