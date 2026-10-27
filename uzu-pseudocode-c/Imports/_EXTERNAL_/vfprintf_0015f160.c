// Function : vfprintf
// Namespace: _EXTERNAL_
// Entry    : 0015f160
// Prototype: int vfprintf(FILE * __s, char * __format, __gnuc_va_list __arg)
// Body     : 0015f160 - 0015f165


/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int vfprintf(FILE *__s,char *__format,__gnuc_va_list __arg)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_vfprintf_007180b0)();
  return iVar1;
}


