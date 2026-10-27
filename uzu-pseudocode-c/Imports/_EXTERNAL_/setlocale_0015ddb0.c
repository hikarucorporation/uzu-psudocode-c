// Function : setlocale
// Namespace: _EXTERNAL_
// Entry    : 0015ddb0
// Prototype: char * setlocale(int __category, char * __locale)
// Body     : 0015ddb0 - 0015ddb5


/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * setlocale(int __category,char *__locale)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_setlocale_007176d8)();
  return pcVar1;
}


