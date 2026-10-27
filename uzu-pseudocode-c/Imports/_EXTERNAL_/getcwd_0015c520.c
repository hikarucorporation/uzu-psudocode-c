// Function : getcwd
// Namespace: _EXTERNAL_
// Entry    : 0015c520
// Prototype: char * getcwd(char * __buf, size_t __size)
// Body     : 0015c520 - 0015c525


/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * getcwd(char *__buf,size_t __size)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_getcwd_00716a90)();
  return pcVar1;
}


