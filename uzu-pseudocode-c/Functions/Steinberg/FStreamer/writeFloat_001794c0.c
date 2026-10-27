// Function : writeFloat
// Namespace: Steinberg:FStreamer
// Entry    : 001794c0
// Prototype: bool writeFloat(long * param_1)
// Body     : 001794c0 - 001794f0


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* Steinberg::FStreamer::writeFloat(float) */

bool __cdecl Steinberg::FStreamer::writeFloat(long *param_1)

{
  long lVar1;
  undefined1 local_4 [4];
  
  lVar1 = (**(code **)(*param_1 + 0x18))(param_1,local_4,4);
  return lVar1 == 4;
}


