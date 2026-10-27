// Function : shmdt
// Namespace: _EXTERNAL_
// Entry    : 0015df70
// Prototype: int shmdt(void * __shmaddr)
// Body     : 0015df70 - 0015df75


/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int shmdt(void *__shmaddr)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_shmdt_007177b8)();
  return iVar1;
}


