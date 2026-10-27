// Function : mlockall
// Namespace: _EXTERNAL_
// Entry    : 0015d4c0
// Prototype: int mlockall(int __flags)
// Body     : 0015d4c0 - 0015d4c5


/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int mlockall(int __flags)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_mlockall_00717260)();
  return iVar1;
}


