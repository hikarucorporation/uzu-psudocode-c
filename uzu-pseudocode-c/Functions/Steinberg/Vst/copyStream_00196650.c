// Function : copyStream
// Namespace: Steinberg:Vst
// Entry    : 00196650
// Prototype: bool copyStream(long * param_1, long * param_2)
// Body     : 00196650 - 001966f6


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* Steinberg::Vst::copyStream(Steinberg::IBStream*, Steinberg::IBStream*) */

bool __cdecl Steinberg::Vst::copyStream(long *param_1,long *param_2)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  int local_2040 [2];
  undefined1 local_2038 [8200];
  
  bVar3 = false;
  if ((param_1 != (long *)0x0) && (param_2 != (long *)0x0)) {
    local_2040[0] = 0;
    local_2040[1] = 0;
    do {
      iVar1 = (**(code **)(*param_1 + 0x18))(param_1,local_2038,0x2000,local_2040);
      bVar3 = local_2040[0] < 1;
      if (bVar3 || iVar1 != 0) break;
      iVar2 = (**(code **)(*param_2 + 0x20))(param_2,local_2038,local_2040[0],local_2040 + 1);
    } while (iVar2 == 0);
    bVar3 = bVar3 || iVar1 != 0;
  }
  return bVar3;
}


