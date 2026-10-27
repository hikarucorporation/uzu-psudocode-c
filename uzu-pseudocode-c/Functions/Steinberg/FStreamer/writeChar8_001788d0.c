// Function : writeChar8
// Namespace: Steinberg:FStreamer
// Entry    : 001788d0
// Prototype: bool writeChar8(long * param_1)
// Body     : 001788d0 - 001788ee


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* Steinberg::FStreamer::writeChar8(char) */

bool __cdecl Steinberg::FStreamer::writeChar8(long *param_1)

{
  long lVar1;
  undefined1 local_1;
  
  lVar1 = (**(code **)(*param_1 + 0x18))(param_1,&local_1,1);
  return lVar1 == 1;
}


