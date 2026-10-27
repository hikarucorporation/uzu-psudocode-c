// Function : pthread_rwlock_wrlock
// Namespace: _EXTERNAL_
// Entry    : 0015f2f0
// Prototype: int pthread_rwlock_wrlock(pthread_rwlock_t * __rwlock)
// Body     : 0015f2f0 - 0015f2f5


/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_rwlock_wrlock(pthread_rwlock_t *__rwlock)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_rwlock_wrlock_00718178)();
  return iVar1;
}


