// Function : SBCodepointSequenceGetCodepointAt
// Namespace: 
// Entry    : 0047e680
// Prototype: uint SBCodepointSequenceGetCodepointAt(int * param_1, ulong * param_2)
// Body     : 0047e680 - 0047e82f


uint SBCodepointSequenceGetCodepointAt(int *param_1,ulong *param_2)

{
  byte bVar1;
  byte bVar2;
  ushort uVar3;
  ushort uVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  uint uVar8;
  uint uVar9;
  ulong uVar10;
  byte bVar11;
  byte bVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  bool bVar16;
  
  iVar5 = *param_1;
  uVar8 = 0xffffffff;
  if (iVar5 == 2) {
    uVar6 = *param_2;
    if (uVar6 < *(ulong *)(param_1 + 4)) {
      uVar8 = *(uint *)(*(long *)(param_1 + 2) + uVar6 * 4);
      *param_2 = uVar6 + 1;
      uVar9 = 0xfffd;
      if ((uVar8 & 0xfffff800) != 0xd800) {
        uVar9 = uVar8;
      }
      if (0x10ffff < uVar8) {
        uVar9 = 0xfffd;
      }
      return uVar9;
    }
  }
  else if (iVar5 == 1) {
    uVar6 = *(ulong *)(param_1 + 4);
    uVar10 = *param_2;
    if (uVar10 < uVar6) {
      lVar7 = *(long *)(param_1 + 2);
      uVar3 = *(ushort *)(lVar7 + uVar10 * 2);
      *param_2 = uVar10 + 1;
      if ((uVar3 & 0xf800) != 0xd800) {
        return (uint)uVar3;
      }
      uVar8 = 0xfffd;
      if (((uVar3 < 0xdc00) && (uVar10 + 1 < uVar6)) &&
         (uVar4 = *(ushort *)(lVar7 + 2 + uVar10 * 2), (uVar4 & 0xfc00) == 0xdc00)) {
        *param_2 = uVar10 + 2;
        return (uint)uVar3 * 0x400 + (uint)uVar4 + 0xfca02400;
      }
    }
  }
  else if (iVar5 == 0) {
    uVar6 = *(ulong *)(param_1 + 4);
    uVar10 = *param_2;
    if (uVar10 < uVar6) {
      lVar7 = *(long *)(param_1 + 2);
      bVar11 = *(byte *)(lVar7 + uVar10);
      bVar1 = UTF8LookupTable[bVar11];
      uVar13 = (ulong)bVar1;
      uVar14 = (byte)UTF8StateTable[uVar13 * 4 + 1] + uVar10;
      uVar15 = uVar14;
      if (uVar6 < uVar14) {
        uVar15 = uVar6;
      }
      uVar8 = 0x7fU >> (UTF8StateTable[uVar13 * 4 + 1] & 0x1f) & (uint)bVar11;
      *param_2 = uVar10 + 1;
      if (uVar10 + 1 < uVar15) {
        bVar11 = UTF8StateTable[uVar13 * 4 + 2];
        bVar12 = UTF8StateTable[uVar13 * 4 + 3];
        uVar10 = uVar10 + 2;
        do {
          bVar2 = *(byte *)(lVar7 + -1 + uVar10);
          if (bVar2 < bVar11) {
            return 0xfffd;
          }
          if (bVar12 < bVar2) {
            return 0xfffd;
          }
          uVar8 = uVar8 << 6 | bVar2 & 0x3f;
          *param_2 = uVar10;
          bVar11 = 0x80;
          bVar12 = 0xbf;
          bVar16 = uVar10 != uVar15;
          uVar10 = uVar10 + 1;
        } while (bVar16);
      }
      if ((uVar6 < uVar14) || (bVar1 == 1)) {
        return 0xfffd;
      }
    }
  }
  return uVar8;
}


