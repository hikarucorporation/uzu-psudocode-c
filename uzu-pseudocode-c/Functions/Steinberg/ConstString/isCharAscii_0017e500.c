// Function : isCharAscii
// Namespace: Steinberg:ConstString
// Entry    : 0017e500
// Prototype: bool isCharAscii(uint param_1)
// Body     : 0017e500 - 0017e509


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* Steinberg::ConstString::isCharAscii(char16_t) */

bool __cdecl Steinberg::ConstString::isCharAscii(uint param_1)

{
  return param_1 < 0x80;
}


