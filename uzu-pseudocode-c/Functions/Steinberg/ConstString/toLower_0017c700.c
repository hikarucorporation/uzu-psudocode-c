// Function : toLower
// Namespace: Steinberg:ConstString
// Entry    : 0017c700
// Prototype: int toLower(int param_1)
// Body     : 0017c700 - 0017c71a


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* Steinberg::ConstString::toLower(char) */

int __cdecl Steinberg::ConstString::toLower(int param_1)

{
  int iVar1;
  
  if ((byte)((char)param_1 + 0xbfU) < 0x1a) {
    return param_1 + 0x20;
  }
  iVar1 = tolower(param_1);
  return iVar1;
}


