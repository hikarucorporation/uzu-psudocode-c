// Function : writeInt16u
// Namespace: Steinberg:FStreamer
// Entry    : 00178bf0
// Prototype: bool writeInt16u(long * param_1)
// Body     : 00178bf0 - 00178c1e


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* Steinberg::FStreamer::writeInt16u(unsigned short) */

bool __cdecl Steinberg::FStreamer::writeInt16u(long *param_1)

{
  long lVar1;
  undefined1 local_2 [2];
  
  lVar1 = (**(code **)(*param_1 + 0x18))(param_1,local_2,2);
  return lVar1 == 2;
}


