// Function : pthread_cancel
// Namespace: _EXTERNAL_
// Entry    : 0015f100
// Prototype: int pthread_cancel(pthread_t __th)
// Body     : 0015f100 - 0015f105


/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_cancel(pthread_t __th)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_cancel_00718080)();
  return iVar1;
}


