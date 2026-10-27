// Function : shmat
// Namespace: _EXTERNAL_
// Entry    : 0015ebd0
// Prototype: void * shmat(int __shmid, void * __shmaddr, int __shmflg)
// Body     : 0015ebd0 - 0015ebd5


/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * shmat(int __shmid,void *__shmaddr,int __shmflg)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_shmat_00717de8)();
  return pvVar1;
}


