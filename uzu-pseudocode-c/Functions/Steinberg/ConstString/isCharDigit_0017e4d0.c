// Function : isCharDigit
// Namespace: Steinberg:ConstString
// Entry    : 0017e4d0
// Prototype: bool isCharDigit(int param_1)
// Body     : 0017e4d0 - 0017e4d9


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* Steinberg::ConstString::isCharDigit(char) */

bool __cdecl Steinberg::ConstString::isCharDigit(int param_1)

{
  return param_1 - 0x30U < 10;
}


