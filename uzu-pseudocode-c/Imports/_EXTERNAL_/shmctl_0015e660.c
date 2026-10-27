// Function : shmctl
// Namespace: _EXTERNAL_
// Entry    : 0015e660
// Prototype: int shmctl(int __shmid, int __cmd, shmid_ds * __buf)
// Body     : 0015e660 - 0015e665


/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int shmctl(int __shmid,int __cmd,shmid_ds *__buf)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_shmctl_00717b30)();
  return iVar1;
}


