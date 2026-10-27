// Function : pthread_rwlock_unlock
// Namespace: _EXTERNAL_
// Entry    : 0015e4b0
// Prototype: int pthread_rwlock_unlock(pthread_rwlock_t * __rwlock)
// Body     : 0015e4b0 - 0015e4b5


/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_rwlock_unlock(pthread_rwlock_t *__rwlock)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_rwlock_unlock_00717a58)();
  return iVar1;
}


