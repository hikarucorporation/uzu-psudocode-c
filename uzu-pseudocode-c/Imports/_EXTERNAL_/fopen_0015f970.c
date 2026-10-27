// Function : fopen
// Namespace: _EXTERNAL_
// Entry    : 0015f970
// Prototype: FILE * fopen(char * __filename, char * __modes)
// Body     : 0015f970 - 0015f975


/* WARNING: Unknown calling convention -- yet parameter storage is locked */

FILE * fopen(char *__filename,char *__modes)

{
  FILE *pFVar1;
  
  pFVar1 = (FILE *)(*(code *)PTR_fopen_007184b8)();
  return pFVar1;
}


