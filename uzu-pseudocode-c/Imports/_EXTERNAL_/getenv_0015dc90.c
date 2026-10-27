// Function : getenv
// Namespace: _EXTERNAL_
// Entry    : 0015dc90
// Prototype: char * getenv(char * __name)
// Body     : 0015dc90 - 0015dc95


/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * getenv(char *__name)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_getenv_00717648)();
  return pcVar1;
}


