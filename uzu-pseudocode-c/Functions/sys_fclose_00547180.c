// Function : sys_fclose
// Namespace: 
// Entry    : 00547180
// Prototype: int sys_fclose(FILE * __stream)
// Body     : 00547180 - 00547184


/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sys_fclose(FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fclose_00716c10)();
  return iVar1;
}


