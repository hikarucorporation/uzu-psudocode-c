// Function : strncmp16
// Namespace: Steinberg
// Entry    : 0019e460
// Prototype: int strncmp16(ushort * param_1, ushort * param_2, int param_3)
// Body     : 0019e460 - 0019e4c6


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* Steinberg::strncmp16(char16_t const*, char16_t const*, unsigned int) */

int __cdecl Steinberg::strncmp16(ushort *param_1,ushort *param_2,int param_3)

{
  long lVar1;
  ushort uVar2;
  long lVar3;
  ushort uVar4;
  
  if (param_3 == 0) {
    return 0;
  }
  if (param_3 != 1) {
    lVar1 = 0;
    lVar3 = 0;
    do {
      uVar2 = param_1[lVar3];
      if (uVar2 == 0) {
        param_2 = (ushort *)((long)param_2 - lVar1);
        goto LAB_0019e4b9;
      }
      uVar4 = param_2[lVar3];
      if (uVar2 != uVar4) goto LAB_0019e4a3;
      lVar3 = lVar3 + 1;
      lVar1 = lVar1 + -2;
    } while (param_3 + -1 != (int)lVar3);
    param_2 = (ushort *)((long)param_2 - lVar1);
    param_1 = (ushort *)((long)param_1 - lVar1);
  }
  uVar2 = *param_1;
  if (uVar2 != 0) {
    uVar4 = *param_2;
LAB_0019e4a3:
    if (uVar4 == 0) {
      return 1;
    }
    return (uint)uVar2 - (uint)uVar4;
  }
LAB_0019e4b9:
  return -(uint)(*param_2 != 0);
}


