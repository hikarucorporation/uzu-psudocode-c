// Function : writeChar16
// Namespace: Steinberg:FStreamer
// Entry    : 00178950
// Prototype: bool writeChar16(long * param_1)
// Body     : 00178950 - 0017897e


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* Steinberg::FStreamer::writeChar16(char16_t) */

bool __cdecl Steinberg::FStreamer::writeChar16(long *param_1)

{
  long lVar1;
  undefined1 local_2 [2];
  
  lVar1 = (**(code **)(*param_1 + 0x18))(param_1,local_2,2);
  return lVar1 == 2;
}


