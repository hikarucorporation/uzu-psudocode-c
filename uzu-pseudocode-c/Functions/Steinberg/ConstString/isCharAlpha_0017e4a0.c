// Function : isCharAlpha
// Namespace: Steinberg:ConstString
// Entry    : 0017e4a0
// Prototype: bool isCharAlpha(wint_t param_1)
// Body     : 0017e4a0 - 0017e4ac


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* Steinberg::ConstString::isCharAlpha(char16_t) */

bool __cdecl Steinberg::ConstString::isCharAlpha(wint_t param_1)

{
  int iVar1;
  
  iVar1 = iswalpha(param_1);
  return iVar1 != 0;
}


