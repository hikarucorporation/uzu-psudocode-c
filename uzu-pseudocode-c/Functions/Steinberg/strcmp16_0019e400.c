// Function : strcmp16
// Namespace: Steinberg
// Entry    : 0019e400
// Prototype: int strcmp16(ushort * param_1, ushort * param_2)
// Body     : 0019e400 - 0019e45c


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* Steinberg::strcmp16(char16_t const*, char16_t const*) */

int __cdecl Steinberg::strcmp16(ushort *param_1,ushort *param_2)

{
  int iVar1;
  long lVar2;
  ushort uVar3;
  ushort uVar4;
  bool bVar5;
  
  uVar3 = *param_1;
  uVar4 = *param_2;
  bVar5 = uVar4 == 0;
  if ((uVar3 == uVar4) && (uVar4 != 0)) {
    lVar2 = 2;
    do {
      uVar3 = *(ushort *)((long)param_1 + lVar2);
      uVar4 = *(ushort *)((long)param_2 + lVar2);
      bVar5 = uVar4 == 0;
      if (uVar3 != uVar4) break;
      lVar2 = lVar2 + 2;
    } while (uVar4 != 0);
  }
  if (uVar3 == 0) {
    return bVar5 - 1;
  }
  iVar1 = 1;
  if (bVar5 == false) {
    iVar1 = (uint)uVar3 - (uint)uVar4;
  }
  return iVar1;
}


