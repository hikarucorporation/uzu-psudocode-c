// Function : _ZN4juce16jpeglibNamespaceL17encode_mcu_gatherEPNS0_20jpeg_compress_structEPPA64_s
// Namespace: 
// Entry    : 00363940
// Prototype: undefined8 _ZN4juce16jpeglibNamespaceL17encode_mcu_gatherEPNS0_20jpeg_compress_structEPPA64_s(long * param_1, long param_2)
// Body     : 00363940 - 00363be4


undefined8
_ZN4juce16jpeglibNamespaceL17encode_mcu_gatherEPNS0_20jpeg_compress_structEPPA64_s
          (long *param_1,long param_2)

{
  ushort uVar1;
  long lVar2;
  short *psVar3;
  long *plVar4;
  long lVar5;
  undefined8 *puVar6;
  bool bVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  ulong in_RAX;
  long lVar11;
  ushort uVar12;
  ulong uVar13;
  uint uVar14;
  long *plVar15;
  long lVar16;
  long lVar17;
  int iVar18;
  long lVar19;
  int iVar20;
  
  lVar2 = param_1[0x44];
  if ((int)param_1[0x26] != 0) {
    iVar18 = *(int *)(lVar2 + 0x38);
    if ((*(int *)(lVar2 + 0x38) == 0) &&
       (iVar18 = (int)param_1[0x26], 0 < *(int *)((long)param_1 + 0x164))) {
      lVar11 = 0;
      do {
        *(undefined4 *)(lVar2 + 0x24 + lVar11 * 4) = 0;
        lVar11 = lVar11 + 1;
      } while (lVar11 < *(int *)((long)param_1 + 0x164));
      iVar18 = (int)param_1[0x26];
    }
    in_RAX = (ulong)(iVar18 - 1U);
    *(uint *)(lVar2 + 0x38) = iVar18 - 1U;
  }
  if (0 < (int)param_1[0x32]) {
    lVar11 = 0;
    do {
      lVar17 = (long)*(int *)((long)param_1 + lVar11 * 4 + 0x194);
      psVar3 = *(short **)(param_2 + lVar11 * 8);
      plVar15 = *(long **)(lVar2 + 0x80 + (long)*(int *)(param_1[lVar17 + 0x2d] + 0x14) * 8);
      plVar4 = *(long **)(lVar2 + 0xa0 + (long)*(int *)(param_1[lVar17 + 0x2d] + 0x18) * 8);
      uVar14 = *(uint *)(param_1 + 0x3b);
      iVar18 = (int)param_1[0xb] + 3;
      lVar5 = param_1[0x3a];
      uVar9 = (int)*psVar3 - *(int *)(lVar2 + 0x24 + lVar17 * 4);
      if (uVar9 != 0) {
        uVar8 = -uVar9;
        if ((int)-uVar9 < 0) {
          uVar8 = uVar9;
        }
        iVar10 = -1;
        uVar13 = (ulong)uVar8;
        do {
          iVar10 = iVar10 + 1;
          plVar15 = plVar15 + 1;
          uVar9 = (uint)uVar13;
          uVar13 = uVar13 >> 1;
        } while (1 < uVar9);
        if (iVar18 <= iVar10) {
          puVar6 = (undefined8 *)*param_1;
          *(undefined4 *)(puVar6 + 5) = 6;
          (*(code *)*puVar6)(param_1);
        }
      }
      *plVar15 = *plVar15 + 1;
      if (0 < (int)uVar14) {
        lVar19 = (ulong)uVar14 + 1;
        lVar16 = 1;
        iVar10 = 0;
        do {
          while (iVar20 = iVar10, uVar1 = psVar3[*(int *)(lVar5 + lVar16 * 4)], uVar1 != 0) {
            if (0xf < iVar20) {
              iVar10 = 0x1f;
              if (iVar20 < 0x1f) {
                iVar10 = iVar20;
              }
              uVar14 = (iVar20 - iVar10) + 0xf;
              iVar20 = (iVar20 - (uVar14 & 0xfffffff0)) + -0x10;
              plVar4[0xf0] = plVar4[0xf0] + (ulong)(uVar14 >> 4) + 1;
            }
            uVar12 = -uVar1;
            if ((short)-uVar1 < 0) {
              uVar12 = uVar1;
            }
            iVar10 = 0;
            uVar13 = (ulong)uVar12;
            uVar14 = (uint)uVar12;
            do {
              iVar10 = iVar10 + 1;
              uVar13 = uVar13 >> 1;
              bVar7 = 1 < uVar14;
              uVar14 = (uint)uVar13;
            } while (bVar7);
            if (iVar18 <= iVar10) {
              puVar6 = (undefined8 *)*param_1;
              *(undefined4 *)(puVar6 + 5) = 6;
              (*(code *)*puVar6)(param_1);
            }
            plVar4[iVar20 * 0x10 + iVar10] = plVar4[iVar20 * 0x10 + iVar10] + 1;
            lVar16 = lVar16 + 1;
            iVar10 = 0;
            if (lVar16 == lVar19) goto LAB_003639d0;
          }
          lVar16 = lVar16 + 1;
          iVar10 = iVar20 + 1;
        } while (lVar16 != lVar19);
        if (-1 < iVar20) {
          *plVar4 = *plVar4 + 1;
        }
      }
LAB_003639d0:
      *(int *)(lVar2 + 0x24 + lVar17 * 4) = (int)**(short **)(param_2 + lVar11 * 8);
      lVar11 = lVar11 + 1;
      in_RAX = (ulong)(int)param_1[0x32];
    } while (lVar11 < (long)in_RAX);
  }
  return CONCAT71((int7)(in_RAX >> 8),1);
}


