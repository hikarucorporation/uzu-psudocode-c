// Function : strtod_l
// Namespace: _EXTERNAL_
// Entry    : 0015f340
// Prototype: double strtod_l(char * __nptr, char * * __endptr, __locale_t __loc)
// Body     : 0015f340 - 0015f345


/* WARNING: Unknown calling convention -- yet parameter storage is locked */

double strtod_l(char *__nptr,char **__endptr,__locale_t __loc)

{
  double dVar1;
  
  dVar1 = (double)(*(code *)PTR_strtod_l_007181a0)();
  return dVar1;
}


