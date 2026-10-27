// Function : pd_vsnprintf
// Namespace: 
// Entry    : 00547360
// Prototype: int pd_vsnprintf(char * __s, size_t __maxlen, char * __format, __gnuc_va_list __arg)
// Body     : 00547360 - 00547364


/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pd_vsnprintf(char *__s,size_t __maxlen,char *__format,__gnuc_va_list __arg)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_vsnprintf_00717400)();
  return iVar1;
}


