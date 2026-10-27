// Function : vsnprintf
// Namespace: _EXTERNAL_
// Entry    : 0015d800
// Prototype: int vsnprintf(char * __s, size_t __maxlen, char * __format, __gnuc_va_list __arg)
// Body     : 0015d800 - 0015d805


/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int vsnprintf(char *__s,size_t __maxlen,char *__format,__gnuc_va_list __arg)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_vsnprintf_00717400)();
  return iVar1;
}


