// Function : hashString16
// Namespace: Steinberg
// Entry    : 001834f0
// Prototype: uint hashString16(ushort * param_1, uint param_2)
// Body     : 001834f0 - 0018352c


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* Steinberg::hashString16(char16_t const*, unsigned int) */

uint __cdecl Steinberg::hashString16(ushort *param_1,uint param_2)

{
  ushort uVar1;
  uint uVar2;
  
  uVar2 = 0;
  if ((param_1 != (ushort *)0x0) && (uVar1 = *param_1, uVar1 != 0)) {
    uVar2 = 0;
    do {
      param_1 = param_1 + 1;
      uVar2 = (uVar2 * 0x40 + (uint)uVar1) % param_2;
      uVar1 = *param_1;
    } while (uVar1 != 0);
  }
  return uVar2;
}


