// Function : shmget
// Namespace: _EXTERNAL_
// Entry    : 0015d370
// Prototype: int shmget(key_t __key, size_t __size, int __shmflg)
// Body     : 0015d370 - 0015d375


/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int shmget(key_t __key,size_t __size,int __shmflg)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_shmget_007171b8)();
  return iVar1;
}


