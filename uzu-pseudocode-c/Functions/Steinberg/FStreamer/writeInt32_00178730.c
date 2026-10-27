// Function : writeInt32
// Namespace: Steinberg:FStreamer
// Entry    : 00178730
// Prototype: bool writeInt32(long * param_1)
// Body     : 00178730 - 0017875a


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* Steinberg::FStreamer::writeInt32(int) */

bool __cdecl Steinberg::FStreamer::writeInt32(long *param_1)

{
  long lVar1;
  undefined1 local_4 [4];
  
  lVar1 = (**(code **)(*param_1 + 0x18))(param_1,local_4,4);
  return lVar1 == 4;
}


