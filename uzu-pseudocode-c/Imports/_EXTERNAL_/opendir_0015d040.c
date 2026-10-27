// Function : opendir
// Namespace: _EXTERNAL_
// Entry    : 0015d040
// Prototype: DIR * opendir(char * __name)
// Body     : 0015d040 - 0015d045


/* WARNING: Unknown calling convention -- yet parameter storage is locked */

DIR * opendir(char *__name)

{
  DIR *pDVar1;
  
  pDVar1 = (DIR *)(*(code *)PTR_opendir_00717020)();
  return pDVar1;
}


