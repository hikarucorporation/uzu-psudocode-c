// Function : pthread_mutex_destroy
// Namespace: _EXTERNAL_
// Entry    : 0015b5b0
// Prototype: int pthread_mutex_destroy(pthread_mutex_t * __mutex)
// Body     : 0015b5b0 - 0015b5b5


/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_mutex_destroy(pthread_mutex_t *__mutex)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_mutex_destroy_007162d8)();
  return iVar1;
}


