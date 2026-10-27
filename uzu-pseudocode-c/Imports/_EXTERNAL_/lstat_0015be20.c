// Function : lstat
// Namespace: _EXTERNAL_
// Entry    : 0015be20
// Prototype: int lstat(char * __file, stat * __buf)
// Body     : 0015be20 - 0015be25


/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int lstat(char *__file,stat *__buf)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_lstat_00716710)();
  return iVar1;
}


