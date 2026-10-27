// Function : isCharAlphaNum
// Namespace: Steinberg:ConstString
// Entry    : 0017e4c0
// Prototype: bool isCharAlphaNum(wint_t param_1)
// Body     : 0017e4c0 - 0017e4cc


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* Steinberg::ConstString::isCharAlphaNum(char16_t) */

bool __cdecl Steinberg::ConstString::isCharAlphaNum(wint_t param_1)

{
  int iVar1;
  
  iVar1 = iswalnum(param_1);
  return iVar1 != 0;
}


