// Function : isCharDigit
// Namespace: Steinberg:ConstString
// Entry    : 0017e4e0
// Prototype: bool isCharDigit(wint_t param_1)
// Body     : 0017e4e0 - 0017e4ec


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* Steinberg::ConstString::isCharDigit(char16_t) */

bool __cdecl Steinberg::ConstString::isCharDigit(wint_t param_1)

{
  int iVar1;
  
  iVar1 = iswdigit(param_1);
  return iVar1 != 0;
}


