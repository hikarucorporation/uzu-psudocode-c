// Function : writeInt8
// Namespace: Steinberg:FStreamer
// Entry    : 001789c0
// Prototype: bool writeInt8(long * param_1)
// Body     : 001789c0 - 001789de


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* Steinberg::FStreamer::writeInt8(char) */

bool __cdecl Steinberg::FStreamer::writeInt8(long *param_1)

{
  long lVar1;
  undefined1 local_1;
  
  lVar1 = (**(code **)(*param_1 + 0x18))(param_1,&local_1,1);
  return lVar1 == 1;
}


