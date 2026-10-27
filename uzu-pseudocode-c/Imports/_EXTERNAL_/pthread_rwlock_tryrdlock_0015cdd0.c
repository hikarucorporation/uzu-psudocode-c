// Function : pthread_rwlock_tryrdlock
// Namespace: _EXTERNAL_
// Entry    : 0015cdd0
// Prototype: int pthread_rwlock_tryrdlock(pthread_rwlock_t * __rwlock)
// Body     : 0015cdd0 - 0015cdd5


/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_rwlock_tryrdlock(pthread_rwlock_t *__rwlock)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_rwlock_tryrdlock_00716ee8)();
  return iVar1;
}


