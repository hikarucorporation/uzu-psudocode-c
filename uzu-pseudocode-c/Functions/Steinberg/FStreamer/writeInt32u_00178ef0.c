// Function : writeInt32u
// Namespace: Steinberg:FStreamer
// Entry    : 00178ef0
// Prototype: bool writeInt32u(long * param_1)
// Body     : 00178ef0 - 00178f1a


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* Steinberg::FStreamer::writeInt32u(unsigned int) */

bool __cdecl Steinberg::FStreamer::writeInt32u(long *param_1)

{
  long lVar1;
  undefined1 local_4 [4];
  
  lVar1 = (**(code **)(*param_1 + 0x18))(param_1,local_4,4);
  return lVar1 == 4;
}


