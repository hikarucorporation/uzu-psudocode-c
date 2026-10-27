// Function : strncpy
// Namespace: _EXTERNAL_
// Entry    : 0015b860
// Prototype: char * strncpy(char * __dest, char * __src, size_t __n)
// Body     : 0015b860 - 0015b865


/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strncpy(char *__dest,char *__src,size_t __n)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strncpy_00716430)();
  return pcVar1;
}


