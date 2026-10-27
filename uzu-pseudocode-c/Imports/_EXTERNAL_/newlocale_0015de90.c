// Function : newlocale
// Namespace: _EXTERNAL_
// Entry    : 0015de90
// Prototype: __locale_t newlocale(int __category_mask, char * __locale, __locale_t __base)
// Body     : 0015de90 - 0015de95


/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__locale_t newlocale(int __category_mask,char *__locale,__locale_t __base)

{
  __locale_t p_Var1;
  
  p_Var1 = (__locale_t)(*(code *)PTR_newlocale_00717748)();
  return p_Var1;
}


