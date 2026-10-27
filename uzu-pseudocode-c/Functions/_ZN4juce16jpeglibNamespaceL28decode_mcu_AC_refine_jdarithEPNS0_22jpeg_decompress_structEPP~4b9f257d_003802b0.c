// Function : _ZN4juce16jpeglibNamespaceL28decode_mcu_AC_refine_jdarithEPNS0_22jpeg_decompress_structEPPA64_s
// Namespace: 
// Entry    : 003802b0
// Prototype: undefined8 _ZN4juce16jpeglibNamespaceL28decode_mcu_AC_refine_jdarithEPNS0_22jpeg_decompress_structEPPA64_s(long * param_1, long * param_2)
// Body     : 003802b0 - 003805ed


undefined8
_ZN4juce16jpeglibNamespaceL28decode_mcu_AC_refine_jdarithEPNS0_22jpeg_decompress_structEPPA64_s
          (long *param_1,long *param_2)

{
  ushort uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long lVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  ulong in_RAX;
  long lVar9;
  int *piVar10;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  byte *pbVar11;
  long lVar12;
  uint uVar13;
  int iVar14;
  long lVar15;
  int iVar16;
  ulong uVar17;
  
  uVar2 = param_1[0x4a];
  if (*(int *)((long)param_1 + 0x15c) != 0) {
    iVar6 = *(int *)(uVar2 + 0x4c);
    if (iVar6 == 0) {
      cVar5 = (**(code **)(param_1[0x49] + 0x10))(param_1);
      if (cVar5 == '\0') {
        puVar3 = (undefined8 *)*param_1;
        *(undefined4 *)(puVar3 + 5) = 0x19;
        (*(code *)*puVar3)(param_1);
      }
      if (0 < (int)param_1[0x34]) {
        lVar9 = 0;
        do {
          lVar4 = param_1[lVar9 + 0x35];
          if (*(char *)((long)param_1 + 0x129) == '\0') {
LAB_003803d0:
            puVar3 = *(undefined8 **)(uVar2 + 0x50 + (long)*(int *)(lVar4 + 0x14) * 8);
            puVar3[6] = 0;
            puVar3[7] = 0;
            puVar3[4] = 0;
            puVar3[5] = 0;
            puVar3[2] = 0;
            puVar3[3] = 0;
            *puVar3 = 0;
            puVar3[1] = 0;
            *(undefined4 *)(uVar2 + 0x2c + lVar9 * 4) = 0;
            *(undefined4 *)(uVar2 + 0x3c + lVar9 * 4) = 0;
            if (*(char *)((long)param_1 + 0x129) == '\0') {
              iVar6 = (int)param_1[0x43];
            }
            else {
              iVar6 = *(int *)((long)param_1 + 0x1fc);
            }
            if (iVar6 != 0) {
LAB_00380330:
              puVar3 = *(undefined8 **)(uVar2 + 0xd0 + (long)*(int *)(lVar4 + 0x18) * 8);
              puVar3[0x1e] = 0;
              puVar3[0x1f] = 0;
              puVar3[0x1c] = 0;
              puVar3[0x1d] = 0;
              puVar3[0x1a] = 0;
              puVar3[0x1b] = 0;
              puVar3[0x18] = 0;
              puVar3[0x19] = 0;
              puVar3[0x16] = 0;
              puVar3[0x17] = 0;
              puVar3[0x14] = 0;
              puVar3[0x15] = 0;
              puVar3[0x12] = 0;
              puVar3[0x13] = 0;
              puVar3[0x10] = 0;
              puVar3[0x11] = 0;
              puVar3[0xe] = 0;
              puVar3[0xf] = 0;
              puVar3[0xc] = 0;
              puVar3[0xd] = 0;
              puVar3[10] = 0;
              puVar3[0xb] = 0;
              puVar3[8] = 0;
              puVar3[9] = 0;
              puVar3[6] = 0;
              puVar3[7] = 0;
              puVar3[4] = 0;
              puVar3[5] = 0;
              puVar3[2] = 0;
              puVar3[3] = 0;
              *puVar3 = 0;
              puVar3[1] = 0;
            }
          }
          else {
            if (*(int *)((long)param_1 + 0x1fc) != 0) goto LAB_00380330;
            if (*(int *)((long)param_1 + 0x204) == 0) goto LAB_003803d0;
          }
          lVar9 = lVar9 + 1;
        } while (lVar9 < (int)param_1[0x34]);
      }
      *(undefined8 *)(uVar2 + 0x18) = 0;
      *(undefined8 *)(uVar2 + 0x20) = 0;
      *(undefined4 *)(uVar2 + 0x28) = 0xfffffff0;
      iVar6 = *(int *)((long)param_1 + 0x15c);
    }
    in_RAX = (ulong)(iVar6 - 1U);
    *(uint *)(uVar2 + 0x4c) = iVar6 - 1U;
  }
  if (*(int *)(uVar2 + 0x28) != -1) {
    lVar9 = param_1[0x42];
    lVar4 = *param_2;
    uVar13 = 1 << (*(byte *)(param_1 + 0x41) & 0x1f);
    iVar6 = *(int *)(param_1[0x35] + 0x18);
    uVar17 = (ulong)(int)param_1[0x40];
    piVar10 = (int *)(lVar9 + uVar17 * 4);
    do {
      iVar16 = (int)uVar17;
      if (*(short *)(lVar4 + (long)*piVar10 * 2) != 0) goto LAB_003804a7;
      piVar10 = piVar10 + -1;
      uVar17 = (ulong)(iVar16 - 1U);
    } while (iVar16 - 1U != 0);
    iVar16 = 0;
LAB_003804a7:
    iVar14 = *(int *)((long)param_1 + 0x1fc) + -1;
    do {
      lVar15 = *(long *)(uVar2 + 0xd0 + (long)iVar6 * 8);
      if (iVar16 <= iVar14) {
        uVar7 = juce::jpeglibNamespace::arith_decode(param_1,(byte *)(iVar14 * 3 + lVar15));
        in_RAX = CONCAT44(extraout_var,uVar7);
        if (uVar7 != 0) break;
      }
      lVar12 = (long)iVar14;
      pbVar11 = (byte *)(iVar14 * 3 + lVar15 + 2);
      while( true ) {
        iVar14 = iVar14 + 1;
        lVar15 = (long)*(int *)(lVar9 + 4 + lVar12 * 4);
        if (*(short *)(lVar4 + lVar15 * 2) != 0) break;
        uVar7 = juce::jpeglibNamespace::arith_decode(param_1,pbVar11 + -1);
        if (uVar7 != 0) {
          uVar8 = juce::jpeglibNamespace::arith_decode(param_1,(byte *)(uVar2 + 0x150));
          uVar7 = -uVar13;
          if (uVar8 == 0) {
            uVar7 = uVar13;
          }
          in_RAX = (ulong)uVar7;
          goto LAB_0038059d;
        }
        lVar12 = lVar12 + 1;
        pbVar11 = pbVar11 + 3;
        if ((int)param_1[0x40] <= lVar12) {
          lVar9 = *param_1;
          *(undefined4 *)(lVar9 + 0x28) = 0x75;
          (**(code **)(lVar9 + 8))(param_1,0xffffffff);
          *(undefined4 *)(uVar2 + 0x28) = 0xffffffff;
          in_RAX = uVar2;
          goto LAB_003805dd;
        }
      }
      uVar7 = juce::jpeglibNamespace::arith_decode(param_1,pbVar11);
      in_RAX = CONCAT44(extraout_var_00,uVar7);
      if (uVar7 != 0) {
        uVar1 = *(ushort *)(lVar4 + lVar15 * 2);
        if ((short)uVar1 < 0) {
          in_RAX = (ulong)(uVar1 - uVar13);
        }
        else {
          in_RAX = (ulong)(uVar1 + uVar13);
        }
LAB_0038059d:
        *(short *)(lVar4 + lVar15 * 2) = (short)in_RAX;
      }
    } while (iVar14 < (int)param_1[0x40]);
  }
LAB_003805dd:
  return CONCAT71((int7)(in_RAX >> 8),1);
}


