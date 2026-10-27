// Function : fdopen
// Namespace: _EXTERNAL_
// Entry    : 0015b380
// Prototype: FILE * fdopen(int __fd, char * __modes)
// Body     : 0015b380 - 0015b385


/* WARNING: Unknown calling convention -- yet parameter storage is locked */

FILE * fdopen(int __fd,char *__modes)

{
  FILE *pFVar1;
  
  pFVar1 = (FILE *)(*(code *)PTR_fdopen_007161c0)();
  return pFVar1;
}


