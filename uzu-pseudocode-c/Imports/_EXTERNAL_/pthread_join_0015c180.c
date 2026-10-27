// Function : pthread_join
// Namespace: _EXTERNAL_
// Entry    : 0015c180
// Prototype: int pthread_join(pthread_t __th, void * * __thread_return)
// Body     : 0015c180 - 0015c185


/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_join(pthread_t __th,void **__thread_return)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_join_007168c0)();
  return iVar1;
}


