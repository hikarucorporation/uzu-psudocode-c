// Function : tstrnatcmp<char16_t>
// Namespace: Steinberg
// Entry    : 0019e7b0
// Prototype: int tstrnatcmp<char16_t>(ushort * param_1, ushort * param_2, char param_3)
// Body     : 0019e7b0 - 0019e9bc


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* int Steinberg::tstrnatcmp<char16_t>(char16_t const*, char16_t const*, bool) */

int __cdecl Steinberg::tstrnatcmp<char16_t>(ushort *param_1,ushort *param_2,char param_3)

{
  ushort *puVar1;
  ushort uVar2;
  ushort uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  long lVar9;
  long lVar10;
  int iVar11;
  
  iVar4 = 1;
  if (param_1 == (ushort *)0x0) {
    iVar4 = -(uint)(param_1 != (ushort *)0x0 || param_2 != (ushort *)0x0);
  }
  else if (param_2 != (ushort *)0x0) {
    uVar3 = *param_1;
    while (uVar3 != 0) {
      if (*param_2 == 0) {
        return 1;
      }
      iVar4 = iswdigit((uint)uVar3);
      if ((iVar4 == 0) || (iVar4 = iswdigit((uint)*param_2), iVar4 == 0)) {
        uVar3 = *param_1;
        if (param_3 == '\0') {
          uVar7 = toupper((uint)uVar3);
          uVar8 = toupper((uint)*param_2);
          iVar4 = (uVar7 & 0xffff) - (uVar8 & 0xffff);
          if (iVar4 != 0) {
            return iVar4;
          }
        }
        else if (uVar3 != *param_2) {
          return (uint)uVar3 - (uint)*param_2;
        }
        param_1 = param_1 + 1;
        param_2 = param_2 + 1;
      }
      else {
        iVar11 = 0;
        iVar4 = 0;
        uVar3 = *param_1;
        while (uVar3 == 0x30) {
          iVar4 = iVar4 + 1;
          puVar1 = param_1 + 1;
          param_1 = param_1 + 1;
          uVar3 = *puVar1;
        }
        uVar2 = *param_2;
        if (uVar2 == 0x30) {
          iVar11 = 0;
          do {
            iVar11 = iVar11 + 1;
            uVar2 = param_2[1];
            param_2 = param_2 + 1;
          } while (uVar2 == 0x30);
        }
        lVar10 = 0;
        iVar5 = 0;
        if (uVar3 != 0) {
          lVar9 = 0;
          do {
            iVar5 = iswdigit((uint)uVar3);
            if (iVar5 == 0) break;
            uVar3 = param_1[lVar9 + 1];
            lVar9 = lVar9 + 1;
          } while (uVar3 != 0);
          iVar5 = (int)lVar9;
          uVar2 = *param_2;
        }
        if (uVar2 != 0) {
          lVar10 = 0;
          do {
            iVar6 = iswdigit((uint)uVar2);
            if (iVar6 == 0) break;
            uVar2 = param_2[lVar10 + 1];
            lVar10 = lVar10 + 1;
          } while (uVar2 != 0);
        }
        iVar6 = iVar5 - (int)lVar10;
        if (iVar6 != 0) {
          return iVar6;
        }
        if (iVar5 != 0) {
          lVar10 = 0;
          lVar9 = 0;
          do {
            if (param_1[lVar9] != param_2[lVar9]) {
              return (uint)param_1[lVar9] - (uint)param_2[lVar9];
            }
            lVar9 = lVar9 + 1;
            lVar10 = lVar10 + -2;
          } while (iVar5 != (int)lVar9);
          param_1 = (ushort *)((long)param_1 - lVar10);
          param_2 = (ushort *)((long)param_2 - lVar10);
        }
        if (iVar4 - iVar11 != 0) {
          return iVar4 - iVar11;
        }
      }
      uVar3 = *param_1;
    }
    iVar4 = -(uint)(*param_2 != 0);
  }
  return iVar4;
}


