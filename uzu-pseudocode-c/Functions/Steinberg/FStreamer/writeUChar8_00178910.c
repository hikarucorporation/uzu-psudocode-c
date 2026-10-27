// Function : writeUChar8
// Namespace: Steinberg:FStreamer
// Entry    : 00178910
// Prototype: bool writeUChar8(long * param_1)
// Body     : 00178910 - 0017892e


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* Steinberg::FStreamer::writeUChar8(unsigned char) */

bool __cdecl Steinberg::FStreamer::writeUChar8(long *param_1)

{
  long lVar1;
  undefined1 local_1;
  
  lVar1 = (**(code **)(*param_1 + 0x18))(param_1,&local_1,1);
  return lVar1 == 1;
}


