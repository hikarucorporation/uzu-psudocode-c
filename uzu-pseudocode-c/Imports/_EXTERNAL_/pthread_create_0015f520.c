// Function : pthread_create
// Namespace: _EXTERNAL_
// Entry    : 0015f520
// Prototype: int pthread_create(pthread_t * __newthread, pthread_attr_t * __attr, __start_routine * __start_routine, void * __arg)
// Body     : 0015f520 - 0015f525


/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_create(pthread_t *__newthread,pthread_attr_t *__attr,__start_routine *__start_routine,
                  void *__arg)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_create_00718290)();
  return iVar1;
}


