// Function : writeInt16
// Namespace: Steinberg:FStreamer
// Entry    : 00178a40
// Prototype: bool writeInt16(long * param_1)
// Body     : 00178a40 - 00178a6e


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* Steinberg::FStreamer::writeInt16(short) */

bool __cdecl Steinberg::FStreamer::writeInt16(long *param_1)

{
  long lVar1;
  undefined1 local_2 [2];
  
  lVar1 = (**(code **)(*param_1 + 0x18))(param_1,local_2,2);
  return lVar1 == 2;
}


