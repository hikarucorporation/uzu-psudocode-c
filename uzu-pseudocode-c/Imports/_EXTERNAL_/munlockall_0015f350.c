// Function : munlockall
// Namespace: _EXTERNAL_
// Entry    : 0015f350
// Prototype: int munlockall(void)
// Body     : 0015f350 - 0015f355


/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int munlockall(void)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_munlockall_007181a8)();
  return iVar1;
}


