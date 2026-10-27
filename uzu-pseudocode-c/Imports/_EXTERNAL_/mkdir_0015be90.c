// Function : mkdir
// Namespace: _EXTERNAL_
// Entry    : 0015be90
// Prototype: int mkdir(char * __path, __mode_t __mode)
// Body     : 0015be90 - 0015be95


/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int mkdir(char *__path,__mode_t __mode)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_mkdir_00716748)();
  return iVar1;
}


