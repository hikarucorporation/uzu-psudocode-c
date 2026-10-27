// Function : isCharAlpha
// Namespace: Steinberg:ConstString
// Entry    : 0017e490
// Prototype: bool isCharAlpha(int param_1)
// Body     : 0017e490 - 0017e49c


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* Steinberg::ConstString::isCharAlpha(char) */

bool __cdecl Steinberg::ConstString::isCharAlpha(int param_1)

{
  int iVar1;
  
  iVar1 = isalpha(param_1);
  return iVar1 != 0;
}


