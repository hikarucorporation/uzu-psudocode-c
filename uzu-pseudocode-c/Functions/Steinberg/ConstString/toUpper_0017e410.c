// Function : toUpper
// Namespace: Steinberg:ConstString
// Entry    : 0017e410
// Prototype: int toUpper(int param_1)
// Body     : 0017e410 - 0017e42a


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* Steinberg::ConstString::toUpper(char) */

int __cdecl Steinberg::ConstString::toUpper(int param_1)

{
  int iVar1;
  
  if ((byte)((char)param_1 + 0x9fU) < 0x1a) {
    return param_1 + -0x20;
  }
  iVar1 = toupper(param_1);
  return iVar1;
}


