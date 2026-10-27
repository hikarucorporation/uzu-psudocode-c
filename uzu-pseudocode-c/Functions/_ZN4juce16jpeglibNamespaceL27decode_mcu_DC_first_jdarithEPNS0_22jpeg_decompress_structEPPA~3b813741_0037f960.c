// Function : _ZN4juce16jpeglibNamespaceL27decode_mcu_DC_first_jdarithEPNS0_22jpeg_decompress_structEPPA64_s
// Namespace: 
// Entry    : 0037f960
// Prototype: undefined8 _ZN4juce16jpeglibNamespaceL27decode_mcu_DC_first_jdarithEPNS0_22jpeg_decompress_structEPPA64_s(long * param_1, long param_2)
// Body     : 0037f960 - 0037fd1e


undefined8
_ZN4juce16jpeglibNamespaceL27decode_mcu_DC_first_jdarithEPNS0_22jpeg_decompress_structEPPA64_s
          (long *param_1,long param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined2 *puVar3;
  bool bVar4;
  char cVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  ulong in_RAX;
  long lVar10;
  long lVar11;
  byte *pbVar12;
  int iVar13;
  uint uVar14;
  long lVar15;
  
  lVar1 = param_1[0x4a];
  if (*(int *)((long)param_1 + 0x15c) != 0) {
    iVar13 = *(int *)(lVar1 + 0x4c);
    if (iVar13 == 0) {
      cVar5 = (**(code **)(param_1[0x49] + 0x10))(param_1);
      if (cVar5 == '\0') {
        puVar2 = (undefined8 *)*param_1;
        *(undefined4 *)(puVar2 + 5) = 0x19;
        (*(code *)*puVar2)(param_1);
      }
      if (0 < (int)param_1[0x34]) {
        lVar10 = 0;
        do {
          lVar11 = param_1[lVar10 + 0x35];
          if (*(char *)((long)param_1 + 0x129) == '\0') {
LAB_0037fa90:
            puVar2 = *(undefined8 **)(lVar1 + 0x50 + (long)*(int *)(lVar11 + 0x14) * 8);
            puVar2[6] = 0;
            puVar2[7] = 0;
            puVar2[4] = 0;
            puVar2[5] = 0;
            puVar2[2] = 0;
            puVar2[3] = 0;
            *puVar2 = 0;
            puVar2[1] = 0;
            *(undefined4 *)(lVar1 + 0x2c + lVar10 * 4) = 0;
            *(undefined4 *)(lVar1 + 0x3c + lVar10 * 4) = 0;
            if (*(char *)((long)param_1 + 0x129) == '\0') {
              iVar13 = (int)param_1[0x43];
            }
            else {
              iVar13 = *(int *)((long)param_1 + 0x1fc);
            }
            if (iVar13 != 0) {
LAB_0037f9e0:
              puVar2 = *(undefined8 **)(lVar1 + 0xd0 + (long)*(int *)(lVar11 + 0x18) * 8);
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
            if (*(int *)((long)param_1 + 0x1fc) != 0) goto LAB_0037f9e0;
            if (*(int *)((long)param_1 + 0x204) == 0) goto LAB_0037fa90;
          }
          lVar10 = lVar10 + 1;
        } while (lVar10 < (int)param_1[0x34]);
      }
      *(undefined8 *)(lVar1 + 0x18) = 0;
      *(undefined8 *)(lVar1 + 0x20) = 0;
      *(undefined4 *)(lVar1 + 0x28) = 0xfffffff0;
      iVar13 = *(int *)((long)param_1 + 0x15c);
    }
    in_RAX = (ulong)(iVar13 - 1U);
    *(uint *)(lVar1 + 0x4c) = iVar13 - 1U;
  }
  if ((*(int *)(lVar1 + 0x28) != -1) && (0 < (int)param_1[0x3a])) {
    lVar10 = 0;
    do {
      puVar3 = *(undefined2 **)(param_2 + lVar10 * 8);
      lVar15 = (long)*(int *)((long)param_1 + lVar10 * 4 + 0x1d4);
      lVar11 = (long)*(int *)(param_1[lVar15 + 0x35] + 0x14);
      pbVar12 = (byte *)((long)*(int *)(lVar1 + 0x3c + lVar15 * 4) +
                        *(long *)(lVar1 + 0x50 + lVar11 * 8));
      uVar6 = juce::jpeglibNamespace::arith_decode(param_1,pbVar12);
      if (uVar6 == 0) {
        *(undefined4 *)(lVar1 + 0x3c + lVar15 * 4) = 0;
        iVar13 = *(int *)(lVar1 + 0x2c + lVar15 * 4);
      }
      else {
        uVar7 = juce::jpeglibNamespace::arith_decode(param_1,pbVar12 + 1);
        pbVar12 = pbVar12 + (long)(int)uVar7 + 2;
        uVar6 = juce::jpeglibNamespace::arith_decode(param_1,pbVar12);
        uVar14 = 0;
        if (uVar6 != 0) {
          pbVar12 = (byte *)(*(long *)(lVar1 + 0x50 + lVar11 * 8) + 0x14);
          while( true ) {
            uVar8 = juce::jpeglibNamespace::arith_decode(param_1,pbVar12);
            uVar14 = uVar6;
            if (uVar8 == 0) break;
            uVar6 = uVar6 * 2;
            if (uVar6 == 0x8000) {
              lVar10 = *param_1;
              *(undefined4 *)(lVar10 + 0x28) = 0x75;
              in_RAX = (**(code **)(lVar10 + 8))(param_1,0xffffffff);
              *(undefined4 *)(lVar1 + 0x28) = 0xffffffff;
              goto LAB_0037fd0e;
            }
            pbVar12 = pbVar12 + 1;
          }
        }
        iVar13 = 0;
        if ((int)uVar14 <
            (int)((ulong)(1L << (*(byte *)((long)param_1 + lVar11 + 299) & 0x3f)) >> 1)) {
LAB_0037fc61:
          *(int *)(lVar1 + 0x3c + lVar15 * 4) = iVar13;
          if (1 < uVar14) {
LAB_0037fc89:
            uVar6 = uVar14;
            do {
              uVar9 = juce::jpeglibNamespace::arith_decode(param_1,pbVar12 + 0xe);
              uVar8 = 0;
              if (uVar9 != 0) {
                uVar8 = (int)uVar6 >> 1;
              }
              uVar14 = uVar14 | uVar8;
              bVar4 = 3 < uVar6;
              uVar6 = (int)uVar6 >> 1;
            } while (bVar4);
          }
        }
        else {
          if ((int)((ulong)(1L << (*(byte *)((long)param_1 + lVar11 + 0x13b) & 0x3f)) >> 1) <
              (int)uVar14) {
            iVar13 = uVar7 * 4 + 0xc;
            goto LAB_0037fc61;
          }
          *(uint *)(lVar1 + 0x3c + lVar15 * 4) = uVar7 * 4 + 4;
          if (1 < uVar14) goto LAB_0037fc89;
        }
        uVar6 = ~uVar14;
        if (uVar7 == 0) {
          uVar6 = uVar14 + 1;
        }
        iVar13 = uVar6 + *(int *)(lVar1 + 0x2c + lVar15 * 4);
        *(int *)(lVar1 + 0x2c + lVar15 * 4) = iVar13;
      }
      *puVar3 = (short)(iVar13 << (*(byte *)(param_1 + 0x41) & 0x1f));
      lVar10 = lVar10 + 1;
      in_RAX = (ulong)(int)param_1[0x3a];
    } while (lVar10 < (long)in_RAX);
  }
LAB_0037fd0e:
  return CONCAT71((int7)(in_RAX >> 8),1);
}


