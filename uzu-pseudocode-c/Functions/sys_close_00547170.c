// Function : sys_close
// Namespace: 
// Entry    : 00547170
// Prototype: int sys_close(int __fd)
// Body     : 00547170 - 00547174


/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sys_close(int __fd)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_close_00716618)();
  return iVar1;
}


