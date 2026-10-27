// Function : getSpeakerChannelIndex
// Namespace: Steinberg:Vst
// Entry    : 001918b0
// Prototype: uint getSpeakerChannelIndex(ulong param_1, ulong param_2, uint * param_3)
// Body     : 001918b0 - 001918f5


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* Steinberg::Vst::getSpeakerChannelIndex(unsigned long, unsigned long, int&) */

uint __cdecl Steinberg::Vst::getSpeakerChannelIndex(ulong param_1,ulong param_2,uint *param_3)

{
  uint uVar1;
  ulong uVar2;
  
  if ((param_2 & param_1) == 0) {
    *param_3 = 0xffffffff;
    return 1;
  }
  uVar1 = 0;
  if (1 < param_2) {
    uVar1 = 0;
    uVar2 = 1;
    do {
      uVar1 = (uVar1 + 1) - (uint)((uVar2 & param_1) == 0);
      uVar2 = uVar2 * 2;
    } while (uVar2 < param_2);
  }
  *param_3 = uVar1;
  return uVar1 >> 0x1f;
}


