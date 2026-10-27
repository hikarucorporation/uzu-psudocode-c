// Function : pthread_detach
// Namespace: _EXTERNAL_
// Entry    : 0015c090
// Prototype: int pthread_detach(pthread_t __th)
// Body     : 0015c090 - 0015c095


/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_detach(pthread_t __th)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_detach_00716848)();
  return iVar1;
}


