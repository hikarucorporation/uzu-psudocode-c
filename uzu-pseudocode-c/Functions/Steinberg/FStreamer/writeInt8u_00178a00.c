// Function : writeInt8u
// Namespace: Steinberg:FStreamer
// Entry    : 00178a00
// Prototype: bool writeInt8u(long * param_1)
// Body     : 00178a00 - 00178a1e


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* Steinberg::FStreamer::writeInt8u(unsigned char) */

bool __cdecl Steinberg::FStreamer::writeInt8u(long *param_1)

{
  long lVar1;
  undefined1 local_1;
  
  lVar1 = (**(code **)(*param_1 + 0x18))(param_1,&local_1,1);
  return lVar1 == 1;
}


