// Function : fseek
// Namespace: _EXTERNAL_
// Entry    : 0015f7e0
// Prototype: int fseek(FILE * __stream, long __off, int __whence)
// Body     : 0015f7e0 - 0015f7e5


/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fseek(FILE *__stream,long __off,int __whence)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fseek_007183f0)();
  return iVar1;
}


