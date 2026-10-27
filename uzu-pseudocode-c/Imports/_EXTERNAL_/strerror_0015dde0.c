// Function : strerror
// Namespace: _EXTERNAL_
// Entry    : 0015dde0
// Prototype: char * strerror(int __errnum)
// Body     : 0015dde0 - 0015dde5


/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strerror(int __errnum)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strerror_007176f0)();
  return pcVar1;
}


