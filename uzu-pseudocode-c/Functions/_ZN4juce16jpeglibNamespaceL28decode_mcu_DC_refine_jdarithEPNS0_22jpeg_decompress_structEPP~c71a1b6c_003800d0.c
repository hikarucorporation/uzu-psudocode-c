// Function : _ZN4juce16jpeglibNamespaceL28decode_mcu_DC_refine_jdarithEPNS0_22jpeg_decompress_structEPPA64_s
// Namespace: 
// Entry    : 003800d0
// Prototype: undefined8 _ZN4juce16jpeglibNamespaceL28decode_mcu_DC_refine_jdarithEPNS0_22jpeg_decompress_structEPPA64_s(long * param_1, long param_2)
// Body     : 003800d0 - 003802a3


undefined8
_ZN4juce16jpeglibNamespaceL28decode_mcu_DC_refine_jdarithEPNS0_22jpeg_decompress_structEPPA64_s
          (long *param_1,long param_2)

{
  byte bVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  ushort *puVar5;
  char cVar6;
  int iVar7;
  uint uVar8;
  ulong in_RAX;
  long lVar9;
  
  lVar2 = param_1[0x4a];
  if (*(int *)((long)param_1 + 0x15c) != 0) {
    iVar7 = *(int *)(lVar2 + 0x4c);
    if (iVar7 == 0) {
      cVar6 = (**(code **)(param_1[0x49] + 0x10))(param_1);
      if (cVar6 == '\0') {
        puVar3 = (undefined8 *)*param_1;
        *(undefined4 *)(puVar3 + 5) = 0x19;
        (*(code *)*puVar3)(param_1);
      }
      if (0 < (int)param_1[0x34]) {
        lVar9 = 0;
        do {
          lVar4 = param_1[lVar9 + 0x35];
          if (*(char *)((long)param_1 + 0x129) == '\0') {
LAB_003801e0:
            puVar3 = *(undefined8 **)(lVar2 + 0x50 + (long)*(int *)(lVar4 + 0x14) * 8);
            puVar3[6] = 0;
            puVar3[7] = 0;
            puVar3[4] = 0;
            puVar3[5] = 0;
            puVar3[2] = 0;
            puVar3[3] = 0;
            *puVar3 = 0;
            puVar3[1] = 0;
            *(undefined4 *)(lVar2 + 0x2c + lVar9 * 4) = 0;
            *(undefined4 *)(lVar2 + 0x3c + lVar9 * 4) = 0;
            if (*(char *)((long)param_1 + 0x129) == '\0') {
              iVar7 = (int)param_1[0x43];
            }
            else {
              iVar7 = *(int *)((long)param_1 + 0x1fc);
            }
            if (iVar7 != 0) {
LAB_00380140:
              puVar3 = *(undefined8 **)(lVar2 + 0xd0 + (long)*(int *)(lVar4 + 0x18) * 8);
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
            if (*(int *)((long)param_1 + 0x1fc) != 0) goto LAB_00380140;
            if (*(int *)((long)param_1 + 0x204) == 0) goto LAB_003801e0;
          }
          lVar9 = lVar9 + 1;
        } while (lVar9 < (int)param_1[0x34]);
      }
      *(undefined8 *)(lVar2 + 0x18) = 0;
      *(undefined8 *)(lVar2 + 0x20) = 0;
      *(undefined4 *)(lVar2 + 0x28) = 0xfffffff0;
      iVar7 = *(int *)((long)param_1 + 0x15c);
    }
    in_RAX = (ulong)(iVar7 - 1U);
    *(uint *)(lVar2 + 0x4c) = iVar7 - 1U;
  }
  if (0 < (int)param_1[0x3a]) {
    bVar1 = *(byte *)(param_1 + 0x41);
    lVar9 = 0;
    do {
      uVar8 = juce::jpeglibNamespace::arith_decode(param_1,(byte *)(lVar2 + 0x150));
      if (uVar8 != 0) {
        puVar5 = *(ushort **)(param_2 + lVar9 * 8);
        *puVar5 = *puVar5 | (ushort)((uint)(0x10000 << (bVar1 & 0x1f)) >> 0x10);
      }
      lVar9 = lVar9 + 1;
      in_RAX = (ulong)(int)param_1[0x3a];
    } while (lVar9 < (long)in_RAX);
  }
  return CONCAT71((int7)(in_RAX >> 8),1);
}


