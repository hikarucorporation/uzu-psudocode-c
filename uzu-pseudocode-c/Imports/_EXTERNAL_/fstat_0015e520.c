// Function : fstat
// Namespace: _EXTERNAL_
// Entry    : 0015e520
// Prototype: int fstat(int __fd, stat * __buf)
// Body     : 0015e520 - 0015e525


/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fstat(int __fd,stat *__buf)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fstat_00717a90)();
  return iVar1;
}


