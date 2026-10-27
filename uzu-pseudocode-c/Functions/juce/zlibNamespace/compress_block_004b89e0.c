// Function : compress_block
// Namespace: juce:zlibNamespace
// Entry    : 004b89e0
// Prototype: undefined compress_block(long param_1, long param_2, long param_3)
// Body     : 004b89e0 - 004b8e2e


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::zlibNamespace::compress_block(juce::zlibNamespace::internal_state*,
   juce::zlibNamespace::ct_data_s const*, juce::zlibNamespace::ct_data_s const*) */

void __cdecl juce::zlibNamespace::compress_block(long param_1,long param_2,long param_3)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  uint uVar7;
  int iVar8;
  ushort uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  
  if (*(int *)(param_1 + 0x170c) == 0) {
    iVar8 = *(int *)(param_1 + 0x1734);
    uVar10 = (uint)*(ushort *)(param_1 + 0x1730);
  }
  else {
    uVar11 = 0;
    do {
      lVar5 = *(long *)(param_1 + 0x1700);
      uVar7 = uVar11 + 1;
      uVar6 = (ulong)uVar11;
      uVar10 = uVar11 + 2;
      uVar11 = uVar11 + 3;
      uVar7 = (uint)CONCAT11(*(undefined1 *)(lVar5 + (ulong)uVar7),*(undefined1 *)(lVar5 + uVar6));
      bVar1 = *(byte *)(lVar5 + (ulong)uVar10);
      uVar6 = (ulong)bVar1;
      if (uVar7 == 0) {
        uVar2 = *(ushort *)(param_2 + 2 + uVar6 * 4);
        iVar8 = *(int *)(param_1 + 0x1734);
        uVar3 = *(ushort *)(param_2 + uVar6 * 4);
        uVar9 = uVar3 << ((byte)iVar8 & 0x1f) | *(ushort *)(param_1 + 0x1730);
        uVar10 = (uint)uVar9;
        *(ushort *)(param_1 + 0x1730) = uVar9;
        if ((int)(0x10 - (uint)uVar2) < iVar8) {
          lVar5 = *(long *)(param_1 + 0x28);
          *(long *)(param_1 + 0x28) = lVar5 + 1;
          *(char *)(*(long *)(param_1 + 0x10) + lVar5) = (char)uVar9;
          lVar5 = *(long *)(param_1 + 0x28);
          *(long *)(param_1 + 0x28) = lVar5 + 1;
          *(undefined1 *)(*(long *)(param_1 + 0x10) + lVar5) = *(undefined1 *)(param_1 + 0x1731);
          uVar3 = uVar3 >> (0x10U - (char)*(int *)(param_1 + 0x1734) & 0x1f);
          *(ushort *)(param_1 + 0x1730) = uVar3;
          iVar8 = (uint)uVar2 + *(int *)(param_1 + 0x1734) + -0x10;
          uVar10 = (uint)uVar3;
        }
        else {
          iVar8 = iVar8 + (uint)uVar2;
        }
LAB_004b8a0d:
        *(int *)(param_1 + 0x1734) = iVar8;
      }
      else {
        uVar6 = (ulong)(byte)_length_code[uVar6];
        uVar2 = *(ushort *)(param_2 + 0x406 + uVar6 * 4);
        iVar8 = *(int *)(param_1 + 0x1734);
        uVar3 = *(ushort *)(param_2 + 0x404 + uVar6 * 4);
        uVar9 = uVar3 << ((byte)iVar8 & 0x1f) | *(ushort *)(param_1 + 0x1730);
        *(ushort *)(param_1 + 0x1730) = uVar9;
        if ((int)(0x10 - (uint)uVar2) < iVar8) {
          lVar5 = *(long *)(param_1 + 0x28);
          *(long *)(param_1 + 0x28) = lVar5 + 1;
          *(char *)(*(long *)(param_1 + 0x10) + lVar5) = (char)uVar9;
          lVar5 = *(long *)(param_1 + 0x28);
          *(long *)(param_1 + 0x28) = lVar5 + 1;
          *(undefined1 *)(*(long *)(param_1 + 0x10) + lVar5) = *(undefined1 *)(param_1 + 0x1731);
          uVar9 = uVar3 >> (0x10U - (char)*(int *)(param_1 + 0x1734) & 0x1f);
          *(ushort *)(param_1 + 0x1730) = uVar9;
          iVar8 = (uint)uVar2 + *(int *)(param_1 + 0x1734) + -0x10;
          *(int *)(param_1 + 0x1734) = iVar8;
        }
        else {
          iVar8 = iVar8 + (uint)uVar2;
          *(int *)(param_1 + 0x1734) = iVar8;
        }
        uVar10 = (uint)uVar9;
        if (0xffffffffffffffeb < uVar6 - 0x1c) {
          uVar12 = (uint)bVar1 - *(int *)(base_length + uVar6 * 4);
          iVar4 = *(int *)(extra_lbits + uVar6 * 4);
          if (0x10 - iVar4 < iVar8) {
            uVar10 = uVar10 | uVar12 << ((byte)iVar8 & 0x1f);
            *(short *)(param_1 + 0x1730) = (short)uVar10;
            lVar5 = *(long *)(param_1 + 0x28);
            *(long *)(param_1 + 0x28) = lVar5 + 1;
            *(char *)(*(long *)(param_1 + 0x10) + lVar5) = (char)uVar10;
            lVar5 = *(long *)(param_1 + 0x28);
            *(long *)(param_1 + 0x28) = lVar5 + 1;
            *(undefined1 *)(*(long *)(param_1 + 0x10) + lVar5) = *(undefined1 *)(param_1 + 0x1731);
            uVar10 = (uVar12 & 0xffff) >> (0x10U - (char)*(int *)(param_1 + 0x1734) & 0x1f);
            *(short *)(param_1 + 0x1730) = (short)uVar10;
            iVar8 = iVar4 + *(int *)(param_1 + 0x1734) + -0x10;
          }
          else {
            uVar10 = uVar10 | uVar12 << ((byte)iVar8 & 0x1f);
            *(short *)(param_1 + 0x1730) = (short)uVar10;
            iVar8 = iVar4 + iVar8;
          }
          *(int *)(param_1 + 0x1734) = iVar8;
        }
        uVar7 = uVar7 - 1;
        uVar12 = (uVar7 >> 7) + 0x100;
        if (uVar7 < 0x100) {
          uVar12 = uVar7;
        }
        bVar1 = _dist_code[uVar12];
        uVar6 = (ulong)bVar1;
        uVar2 = *(ushort *)(param_3 + 2 + uVar6 * 4);
        uVar3 = *(ushort *)(param_3 + uVar6 * 4);
        uVar10 = uVar10 | (uint)uVar3 << ((byte)iVar8 & 0x1f);
        *(short *)(param_1 + 0x1730) = (short)uVar10;
        if ((int)(0x10 - (uint)uVar2) < iVar8) {
          lVar5 = *(long *)(param_1 + 0x28);
          *(long *)(param_1 + 0x28) = lVar5 + 1;
          *(char *)(*(long *)(param_1 + 0x10) + lVar5) = (char)uVar10;
          lVar5 = *(long *)(param_1 + 0x28);
          *(long *)(param_1 + 0x28) = lVar5 + 1;
          *(undefined1 *)(*(long *)(param_1 + 0x10) + lVar5) = *(undefined1 *)(param_1 + 0x1731);
          uVar3 = uVar3 >> (0x10U - (char)*(int *)(param_1 + 0x1734) & 0x1f);
          *(ushort *)(param_1 + 0x1730) = uVar3;
          iVar8 = (uint)uVar2 + *(int *)(param_1 + 0x1734) + -0x10;
          uVar10 = (uint)uVar3;
          *(int *)(param_1 + 0x1734) = iVar8;
        }
        else {
          iVar8 = iVar8 + (uint)uVar2;
          *(int *)(param_1 + 0x1734) = iVar8;
        }
        if (3 < bVar1) {
          uVar7 = uVar7 - *(int *)(base_dist + uVar6 * 4);
          iVar4 = *(int *)(extra_dbits + uVar6 * 4);
          if (0x10 - iVar4 < iVar8) {
            uVar10 = uVar10 | uVar7 << ((byte)iVar8 & 0x1f);
            *(short *)(param_1 + 0x1730) = (short)uVar10;
            lVar5 = *(long *)(param_1 + 0x28);
            *(long *)(param_1 + 0x28) = lVar5 + 1;
            *(char *)(*(long *)(param_1 + 0x10) + lVar5) = (char)uVar10;
            lVar5 = *(long *)(param_1 + 0x28);
            *(long *)(param_1 + 0x28) = lVar5 + 1;
            *(undefined1 *)(*(long *)(param_1 + 0x10) + lVar5) = *(undefined1 *)(param_1 + 0x1731);
            uVar10 = (uVar7 & 0xffff) >> (0x10U - (char)*(int *)(param_1 + 0x1734) & 0x1f);
            *(short *)(param_1 + 0x1730) = (short)uVar10;
            iVar8 = iVar4 + *(int *)(param_1 + 0x1734) + -0x10;
          }
          else {
            uVar10 = uVar10 | uVar7 << ((byte)iVar8 & 0x1f);
            *(short *)(param_1 + 0x1730) = (short)uVar10;
            iVar8 = iVar4 + iVar8;
          }
          goto LAB_004b8a0d;
        }
      }
    } while (uVar11 < *(uint *)(param_1 + 0x170c));
  }
  uVar2 = *(ushort *)(param_2 + 0x402);
  uVar3 = *(ushort *)(param_2 + 0x400);
  uVar10 = uVar10 | (uint)uVar3 << ((byte)iVar8 & 0x1f);
  *(short *)(param_1 + 0x1730) = (short)uVar10;
  if ((int)(0x10 - (uint)uVar2) < iVar8) {
    lVar5 = *(long *)(param_1 + 0x28);
    *(long *)(param_1 + 0x28) = lVar5 + 1;
    *(char *)(*(long *)(param_1 + 0x10) + lVar5) = (char)uVar10;
    lVar5 = *(long *)(param_1 + 0x28);
    *(long *)(param_1 + 0x28) = lVar5 + 1;
    *(undefined1 *)(*(long *)(param_1 + 0x10) + lVar5) = *(undefined1 *)(param_1 + 0x1731);
    *(ushort *)(param_1 + 0x1730) = uVar3 >> (0x10U - (char)*(int *)(param_1 + 0x1734) & 0x1f);
    iVar8 = (uint)uVar2 + *(int *)(param_1 + 0x1734) + -0x10;
  }
  else {
    iVar8 = iVar8 + (uint)uVar2;
  }
  *(int *)(param_1 + 0x1734) = iVar8;
  return;
}


