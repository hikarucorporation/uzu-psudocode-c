// Function : normalize
// Namespace: Steinberg:String
// Entry    : 0017f7b0
// Prototype: byte normalize(long param_1)
// Body     : 0017f7b0 - 0017f7c0


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* Steinberg::String::normalize(Steinberg::UnicodeNormalization) */

byte __cdecl Steinberg::String::normalize(long param_1)

{
  return *(long *)(param_1 + 8) == 0 & *(byte *)(param_1 + 0x13) >> 6;
}


