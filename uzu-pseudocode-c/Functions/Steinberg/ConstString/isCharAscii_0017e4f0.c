// Function : isCharAscii
// Namespace: Steinberg:ConstString
// Entry    : 0017e4f0
// Prototype: byte isCharAscii(byte param_1)
// Body     : 0017e4f0 - 0017e4f7


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* Steinberg::ConstString::isCharAscii(char) */

byte __cdecl Steinberg::ConstString::isCharAscii(byte param_1)

{
  return (byte)~param_1 >> 7;
}


