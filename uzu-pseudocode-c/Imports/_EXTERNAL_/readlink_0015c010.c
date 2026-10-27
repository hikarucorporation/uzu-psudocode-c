// Function : readlink
// Namespace: _EXTERNAL_
// Entry    : 0015c010
// Prototype: ssize_t readlink(char * __path, char * __buf, size_t __len)
// Body     : 0015c010 - 0015c015


/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t readlink(char *__path,char *__buf,size_t __len)

{
  ssize_t sVar1;
  
  sVar1 = (*(code *)PTR_readlink_00716808)();
  return sVar1;
}


