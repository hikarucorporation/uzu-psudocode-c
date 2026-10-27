// Function : isCharAlphaNum
// Namespace: Steinberg:ConstString
// Entry    : 0017e4b0
// Prototype: bool isCharAlphaNum(int param_1)
// Body     : 0017e4b0 - 0017e4bc


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* Steinberg::ConstString::isCharAlphaNum(char) */

bool __cdecl Steinberg::ConstString::isCharAlphaNum(int param_1)

{
  int iVar1;
  
  iVar1 = isalnum(param_1);
  return iVar1 != 0;
}


