// Function : _ZN4juce16jpeglibNamespaceL18decode_mcu_jdarithEPNS0_22jpeg_decompress_structEPPA64_s
// Namespace: 
// Entry    : 003805f0
// Prototype: undefined8 _ZN4juce16jpeglibNamespaceL18decode_mcu_jdarithEPNS0_22jpeg_decompress_structEPPA64_s(long * param_1, long param_2)
// Body     : 003805f0 - 00380b89


undefined8
_ZN4juce16jpeglibNamespaceL18decode_mcu_jdarithEPNS0_22jpeg_decompress_structEPPA64_s
          (long *param_1,long param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined2 *puVar3;
  bool bVar4;
  char cVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  ulong in_RAX;
  long lVar11;
  long lVar12;
  long lVar13;
  int iVar14;
  byte *pbVar15;
  int *piVar16;
  ushort uVar17;
  long lVar18;
  long lVar19;
  
  uVar1 = param_1[0x4a];
  if (*(int *)((long)param_1 + 0x15c) != 0) {
    iVar14 = *(int *)(uVar1 + 0x4c);
    if (iVar14 == 0) {
      cVar5 = (**(code **)(param_1[0x49] + 0x10))(param_1);
      if (cVar5 == '\0') {
        puVar2 = (undefined8 *)*param_1;
        *(undefined4 *)(puVar2 + 5) = 0x19;
        (*(code *)*puVar2)(param_1);
      }
      if (0 < (int)param_1[0x34]) {
        lVar11 = 0;
        do {
          lVar13 = param_1[lVar11 + 0x35];
          if (*(char *)((long)param_1 + 0x129) == '\0') {
LAB_00380720:
            puVar2 = *(undefined8 **)(uVar1 + 0x50 + (long)*(int *)(lVar13 + 0x14) * 8);
            puVar2[6] = 0;
            puVar2[7] = 0;
            puVar2[4] = 0;
            puVar2[5] = 0;
            puVar2[2] = 0;
            puVar2[3] = 0;
            *puVar2 = 0;
            puVar2[1] = 0;
            *(undefined4 *)(uVar1 + 0x2c + lVar11 * 4) = 0;
            *(undefined4 *)(uVar1 + 0x3c + lVar11 * 4) = 0;
            if (*(char *)((long)param_1 + 0x129) == '\0') {
              iVar14 = (int)param_1[0x43];
            }
            else {
              iVar14 = *(int *)((long)param_1 + 0x1fc);
            }
            if (iVar14 != 0) {
LAB_00380670:
              puVar2 = *(undefined8 **)(uVar1 + 0xd0 + (long)*(int *)(lVar13 + 0x18) * 8);
              puVar2[0x1e] = 0;
              puVar2[0x1f] = 0;
              puVar2[0x1c] = 0;
              puVar2[0x1d] = 0;
              puVar2[0x1a] = 0;
              puVar2[0x1b] = 0;
              puVar2[0x18] = 0;
              puVar2[0x19] = 0;
              puVar2[0x16] = 0;
              puVar2[0x17] = 0;
              puVar2[0x14] = 0;
              puVar2[0x15] = 0;
              puVar2[0x12] = 0;
              puVar2[0x13] = 0;
              puVar2[0x10] = 0;
              puVar2[0x11] = 0;
              puVar2[0xe] = 0;
              puVar2[0xf] = 0;
              puVar2[0xc] = 0;
              puVar2[0xd] = 0;
              puVar2[10] = 0;
              puVar2[0xb] = 0;
              puVar2[8] = 0;
              puVar2[9] = 0;
              puVar2[6] = 0;
              puVar2[7] = 0;
              puVar2[4] = 0;
              puVar2[5] = 0;
              puVar2[2] = 0;
              puVar2[3] = 0;
              *puVar2 = 0;
              puVar2[1] = 0;
            }
          }
          else {
            if (*(int *)((long)param_1 + 0x1fc) != 0) goto LAB_00380670;
            if (*(int *)((long)param_1 + 0x204) == 0) goto LAB_00380720;
          }
          lVar11 = lVar11 + 1;
        } while (lVar11 < (int)param_1[0x34]);
      }
      *(undefined8 *)(uVar1 + 0x18) = 0;
      *(undefined8 *)(uVar1 + 0x20) = 0;
      *(undefined4 *)(uVar1 + 0x28) = 0xfffffff0;
      iVar14 = *(int *)((long)param_1 + 0x15c);
    }
    in_RAX = (ulong)(iVar14 - 1U);
    *(uint *)(uVar1 + 0x4c) = iVar14 - 1U;
  }
  if ((*(int *)(uVar1 + 0x28) != -1) && (0 < (int)param_1[0x3a])) {
    lVar11 = param_1[0x42];
    lVar13 = 0;
    do {
      puVar3 = *(undefined2 **)(param_2 + lVar13 * 8);
      lVar18 = (long)*(int *)((long)param_1 + lVar13 * 4 + 0x1d4);
      lVar19 = param_1[lVar18 + 0x35];
      lVar12 = (long)*(int *)(lVar19 + 0x14);
      pbVar15 = (byte *)((long)*(int *)(uVar1 + 0x3c + lVar18 * 4) +
                        *(long *)(uVar1 + 0x50 + lVar12 * 8));
      uVar6 = juce::jpeglibNamespace::arith_decode(param_1,pbVar15);
      if (uVar6 == 0) {
        *(undefined4 *)(uVar1 + 0x3c + lVar18 * 4) = 0;
        *puVar3 = (short)*(undefined4 *)(uVar1 + 0x2c + lVar18 * 4);
        iVar14 = (int)param_1[0x43];
      }
      else {
        uVar7 = juce::jpeglibNamespace::arith_decode(param_1,pbVar15 + 1);
        pbVar15 = pbVar15 + (long)(int)uVar7 + 2;
        uVar6 = juce::jpeglibNamespace::arith_decode(param_1,pbVar15);
        uVar9 = 0;
        if (uVar6 != 0) {
          pbVar15 = (byte *)(*(long *)(uVar1 + 0x50 + lVar12 * 8) + 0x14);
          while( true ) {
            uVar8 = juce::jpeglibNamespace::arith_decode(param_1,pbVar15);
            uVar9 = uVar6;
            if (uVar8 == 0) break;
            uVar6 = uVar6 * 2;
            if (uVar6 == 0x8000) goto LAB_00380b56;
            pbVar15 = pbVar15 + 1;
          }
        }
        iVar14 = 0;
        if ((int)((ulong)(1L << (*(byte *)((long)param_1 + lVar12 + 299) & 0x3f)) >> 1) <=
            (int)uVar9) {
          if ((int)((ulong)(1L << (*(byte *)((long)param_1 + lVar12 + 0x13b) & 0x3f)) >> 1) <
              (int)uVar9) {
            iVar14 = uVar7 * 4 + 0xc;
          }
          else {
            iVar14 = uVar7 * 4 + 4;
          }
        }
        *(int *)(uVar1 + 0x3c + lVar18 * 4) = iVar14;
        if (1 < uVar9) {
          uVar6 = uVar9;
          do {
            uVar10 = juce::jpeglibNamespace::arith_decode(param_1,pbVar15 + 0xe);
            uVar8 = 0;
            if (uVar10 != 0) {
              uVar8 = (int)uVar6 >> 1;
            }
            uVar9 = uVar9 | uVar8;
            bVar4 = 3 < uVar6;
            uVar6 = (int)uVar6 >> 1;
          } while (bVar4);
        }
        uVar6 = ~uVar9;
        if (uVar7 == 0) {
          uVar6 = uVar9 + 1;
        }
        iVar14 = uVar6 + *(int *)(uVar1 + 0x2c + lVar18 * 4);
        *(int *)(uVar1 + 0x2c + lVar18 * 4) = iVar14;
        *puVar3 = (short)iVar14;
        iVar14 = (int)param_1[0x43];
      }
      if (iVar14 != 0) {
        lVar19 = (long)*(int *)(lVar19 + 0x18);
        iVar14 = 0;
        do {
          lVar12 = *(long *)(uVar1 + 0xd0 + lVar19 * 8);
          uVar6 = juce::jpeglibNamespace::arith_decode(param_1,(byte *)(lVar12 + iVar14 * 3));
          if (uVar6 != 0) break;
          pbVar15 = (byte *)(lVar12 + iVar14 * 3 + 2);
          piVar16 = (int *)(lVar11 + (long)(iVar14 + 1) * 4);
          while (uVar6 = juce::jpeglibNamespace::arith_decode(param_1,pbVar15 + -1), uVar6 == 0) {
            iVar14 = iVar14 + 1;
            pbVar15 = pbVar15 + 3;
            piVar16 = piVar16 + 1;
            if ((int)param_1[0x43] <= iVar14) goto LAB_00380b56;
          }
          uVar9 = juce::jpeglibNamespace::arith_decode(param_1,(byte *)(uVar1 + 0x150));
          uVar6 = juce::jpeglibNamespace::arith_decode(param_1,pbVar15);
          if (uVar6 == 0) {
            uVar6 = 0;
          }
          else {
            uVar7 = juce::jpeglibNamespace::arith_decode(param_1,pbVar15);
            if (uVar7 != 0) {
              uVar6 = uVar6 * 2;
              lVar12 = *(long *)(uVar1 + 0xd0 + lVar19 * 8);
              pbVar15 = (byte *)(lVar12 + 0xbd);
              if ((int)(uint)*(byte *)((long)param_1 + lVar19 + 0x14b) <= iVar14) {
                pbVar15 = (byte *)(lVar12 + 0xd9);
              }
              while (uVar7 = juce::jpeglibNamespace::arith_decode(param_1,pbVar15), uVar7 != 0) {
                uVar6 = uVar6 * 2;
                if (uVar6 == 0x8000) goto LAB_00380b56;
                pbVar15 = pbVar15 + 1;
              }
            }
            if (1 < uVar6) {
              uVar7 = uVar6;
              do {
                uVar10 = juce::jpeglibNamespace::arith_decode(param_1,pbVar15 + 0xe);
                uVar8 = 0;
                if (uVar10 != 0) {
                  uVar8 = (int)uVar7 >> 1;
                }
                uVar6 = uVar6 | uVar8;
                bVar4 = 3 < uVar7;
                uVar7 = (int)uVar7 >> 1;
              } while (bVar4);
            }
          }
          iVar14 = iVar14 + 1;
          uVar17 = ~(ushort)uVar6;
          if (uVar9 == 0) {
            uVar17 = (ushort)uVar6 + 1;
          }
          puVar3[*piVar16] = uVar17;
        } while (iVar14 < (int)param_1[0x43]);
      }
      lVar13 = lVar13 + 1;
      in_RAX = (ulong)(int)param_1[0x3a];
    } while (lVar13 < (long)in_RAX);
  }
LAB_00380b79:
  return CONCAT71((int7)(in_RAX >> 8),1);
LAB_00380b56:
  lVar11 = *param_1;
  *(undefined4 *)(lVar11 + 0x28) = 0x75;
  (**(code **)(lVar11 + 8))(param_1,0xffffffff);
  *(undefined4 *)(uVar1 + 0x28) = 0xffffffff;
  in_RAX = uVar1;
  goto LAB_00380b79;
}


