// Function : stat
// Namespace: _EXTERNAL_
// Entry    : 0015b500
// Prototype: int stat(char * __file, stat * __buf)
// Body     : 0015b500 - 0015b505


/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int stat(char *__file,stat *__buf)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_stat_00716280)();
  return iVar1;
}


