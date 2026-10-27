// Function : pthread_cond_init
// Namespace: _EXTERNAL_
// Entry    : 0015c7f0
// Prototype: int pthread_cond_init(pthread_cond_t * __cond, pthread_condattr_t * __cond_attr)
// Body     : 0015c7f0 - 0015c7f5


/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_cond_init(pthread_cond_t *__cond,pthread_condattr_t *__cond_attr)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_cond_init_00716bf8)();
  return iVar1;
}


