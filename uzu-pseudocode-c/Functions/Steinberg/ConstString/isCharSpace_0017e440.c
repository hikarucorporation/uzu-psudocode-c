// Function : isCharSpace
// Namespace: Steinberg:ConstString
// Entry    : 0017e440
// Prototype: undefined8 isCharSpace(short param_1)
// Body     : 0017e440 - 0017e48a


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* Steinberg::ConstString::isCharSpace(char16_t) */

undefined8 __cdecl Steinberg::ConstString::isCharSpace(short param_1)

{
  undefined8 in_RAX;
  
  if (param_1 < 0x202f) {
    if (((9 < (ushort)(param_1 + 0xdffeU)) && (param_1 != 0x20)) && (param_1 != 0xa0)) {
      return 0;
    }
  }
  else if (((param_1 != 0x202f) && (param_1 != 0x205f)) && (param_1 != 0x3000)) {
    return 0;
  }
  return CONCAT71((int7)((ulong)in_RAX >> 8),1);
}


