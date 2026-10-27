// Function : _ZN4juce16jpeglibNamespaceL27decode_mcu_AC_first_jdarithEPNS0_22jpeg_decompress_structEPPA64_s
// Namespace: 
// Entry    : 0037fd20
// Prototype: undefined8 _ZN4juce16jpeglibNamespaceL27decode_mcu_AC_first_jdarithEPNS0_22jpeg_decompress_structEPPA64_s(long * param_1, long * param_2)
// Body     : 0037fd20 - 003800ca


undefined8
_ZN4juce16jpeglibNamespaceL27decode_mcu_AC_first_jdarithEPNS0_22jpeg_decompress_structEPPA64_s
          (long *param_1,long *param_2)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  bool bVar5;
  char cVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  ulong in_RAX;
  long lVar12;
  undefined4 extraout_var;
  byte *pbVar13;
  long lVar14;
  int *piVar15;
  int iVar16;
  
  lVar1 = param_1[0x4a];
  if (*(int *)((long)param_1 + 0x15c) != 0) {
    iVar16 = *(int *)(lVar1 + 0x4c);
    if (iVar16 == 0) {
      cVar6 = (**(code **)(param_1[0x49] + 0x10))(param_1);
      if (cVar6 == '\0') {
        puVar2 = (undefined8 *)*param_1;
        *(undefined4 *)(puVar2 + 5) = 0x19;
        (*(code *)*puVar2)(param_1);
      }
      if (0 < (int)param_1[0x34]) {
        lVar12 = 0;
        do {
          lVar3 = param_1[lVar12 + 0x35];
          if (*(char *)((long)param_1 + 0x129) == '\0') {
LAB_0037fe40:
            puVar2 = *(undefined8 **)(lVar1 + 0x50 + (long)*(int *)(lVar3 + 0x14) * 8);
            puVar2[6] = 0;
            puVar2[7] = 0;
            puVar2[4] = 0;
            puVar2[5] = 0;
            puVar2[2] = 0;
            puVar2[3] = 0;
            *puVar2 = 0;
            puVar2[1] = 0;
            *(undefined4 *)(lVar1 + 0x2c + lVar12 * 4) = 0;
            *(undefined4 *)(lVar1 + 0x3c + lVar12 * 4) = 0;
            if (*(char *)((long)param_1 + 0x129) == '\0') {
              iVar16 = (int)param_1[0x43];
            }
            else {
              iVar16 = *(int *)((long)param_1 + 0x1fc);
            }
            if (iVar16 != 0) {
LAB_0037fda0:
              puVar2 = *(undefined8 **)(lVar1 + 0xd0 + (long)*(int *)(lVar3 + 0x18) * 8);
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
            if (*(int *)((long)param_1 + 0x1fc) != 0) goto LAB_0037fda0;
            if (*(int *)((long)param_1 + 0x204) == 0) goto LAB_0037fe40;
          }
          lVar12 = lVar12 + 1;
        } while (lVar12 < (int)param_1[0x34]);
      }
      *(undefined8 *)(lVar1 + 0x18) = 0;
      *(undefined8 *)(lVar1 + 0x20) = 0;
      *(undefined4 *)(lVar1 + 0x28) = 0xfffffff0;
      iVar16 = *(int *)((long)param_1 + 0x15c);
    }
    in_RAX = (ulong)(iVar16 - 1U);
    *(uint *)(lVar1 + 0x4c) = iVar16 - 1U;
  }
  if (*(int *)(lVar1 + 0x28) != -1) {
    lVar12 = param_1[0x42];
    lVar3 = *param_2;
    lVar14 = (long)*(int *)(param_1[0x35] + 0x18);
    iVar16 = *(int *)((long)param_1 + 0x1fc) + -1;
    do {
      lVar4 = *(long *)(lVar1 + 0xd0 + lVar14 * 8);
      uVar7 = juce::jpeglibNamespace::arith_decode(param_1,(byte *)(lVar4 + iVar16 * 3));
      in_RAX = CONCAT44(extraout_var,uVar7);
      if (uVar7 != 0) break;
      pbVar13 = (byte *)(lVar4 + iVar16 * 3 + 2);
      piVar15 = (int *)(lVar12 + (long)(iVar16 + 1) * 4);
      while (uVar7 = juce::jpeglibNamespace::arith_decode(param_1,pbVar13 + -1), uVar7 == 0) {
        iVar16 = iVar16 + 1;
        pbVar13 = pbVar13 + 3;
        piVar15 = piVar15 + 1;
        if ((int)param_1[0x40] <= iVar16) goto LAB_0038009c;
      }
      uVar8 = juce::jpeglibNamespace::arith_decode(param_1,(byte *)(lVar1 + 0x150));
      uVar7 = juce::jpeglibNamespace::arith_decode(param_1,pbVar13);
      if (uVar7 == 0) {
        uVar7 = 0;
      }
      else {
        uVar9 = juce::jpeglibNamespace::arith_decode(param_1,pbVar13);
        if (uVar9 != 0) {
          uVar7 = uVar7 * 2;
          lVar4 = *(long *)(lVar1 + 0xd0 + lVar14 * 8);
          pbVar13 = (byte *)(lVar4 + 0xbd);
          if ((int)(uint)*(byte *)((long)param_1 + lVar14 + 0x14b) <= iVar16) {
            pbVar13 = (byte *)(lVar4 + 0xd9);
          }
          while (uVar9 = juce::jpeglibNamespace::arith_decode(param_1,pbVar13), uVar9 != 0) {
            uVar7 = uVar7 * 2;
            if (uVar7 == 0x8000) goto LAB_0038009c;
            pbVar13 = pbVar13 + 1;
          }
        }
        if (1 < uVar7) {
          uVar9 = uVar7;
          do {
            uVar10 = juce::jpeglibNamespace::arith_decode(param_1,pbVar13 + 0xe);
            uVar11 = 0;
            if (uVar10 != 0) {
              uVar11 = (int)uVar9 >> 1;
            }
            uVar7 = uVar7 | uVar11;
            bVar5 = 3 < uVar9;
            uVar9 = (int)uVar9 >> 1;
          } while (bVar5);
        }
      }
      iVar16 = iVar16 + 1;
      uVar9 = ~uVar7;
      if (uVar8 == 0) {
        uVar9 = uVar7 + 1;
      }
      in_RAX = (ulong)*piVar15;
      *(short *)(lVar3 + in_RAX * 2) = (short)(uVar9 << (*(byte *)(param_1 + 0x41) & 0x1f));
    } while (iVar16 < (int)param_1[0x40]);
  }
LAB_003800ba:
  return CONCAT71((int7)(in_RAX >> 8),1);
LAB_0038009c:
  lVar12 = *param_1;
  *(undefined4 *)(lVar12 + 0x28) = 0x75;
  in_RAX = (**(code **)(lVar12 + 8))(param_1,0xffffffff);
  *(undefined4 *)(lVar1 + 0x28) = 0xffffffff;
  goto LAB_003800ba;
}


