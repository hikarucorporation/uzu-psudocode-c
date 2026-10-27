// Function : pthread_cond_destroy
// Namespace: _EXTERNAL_
// Entry    : 0015c060
// Prototype: int pthread_cond_destroy(pthread_cond_t * __cond)
// Body     : 0015c060 - 0015c065


/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_cond_destroy(pthread_cond_t *__cond)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_cond_destroy_00716830)();
  return iVar1;
}


