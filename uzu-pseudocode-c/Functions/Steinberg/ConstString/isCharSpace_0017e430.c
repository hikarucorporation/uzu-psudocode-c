// Function : isCharSpace
// Namespace: Steinberg:ConstString
// Entry    : 0017e430
// Prototype: bool isCharSpace(int param_1)
// Body     : 0017e430 - 0017e43c


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* Steinberg::ConstString::isCharSpace(char) */

bool __cdecl Steinberg::ConstString::isCharSpace(int param_1)

{
  int iVar1;
  
  iVar1 = isspace(param_1);
  return iVar1 != 0;
}


