// Function : pthread_setname_np
// Namespace: _EXTERNAL_
// Entry    : 0015e420
// Prototype: int pthread_setname_np(pthread_t __target_thread, char * __name)
// Body     : 0015e420 - 0015e425


/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_setname_np(pthread_t __target_thread,char *__name)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_setname_np_00717a10)();
  return iVar1;
}


