// Function : pthread_cond_signal
// Namespace: _EXTERNAL_
// Entry    : 0015d9a0
// Prototype: int pthread_cond_signal(pthread_cond_t * __cond)
// Body     : 0015d9a0 - 0015d9a5


/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_cond_signal(pthread_cond_t *__cond)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_cond_signal_007174d0)();
  return iVar1;
}


