// Function : _ZN4juce16jpeglibNamespaceL19decode_mcu_DC_firstEPNS0_22jpeg_decompress_structEPPA64_s
// Namespace: 
// Entry    : 0037c2e0
// Prototype: ulong _ZN4juce16jpeglibNamespaceL19decode_mcu_DC_firstEPNS0_22jpeg_decompress_structEPPA64_s(long param_1, long param_2)
// Body     : 0037c2e0 - 0037c5bd


ulong _ZN4juce16jpeglibNamespaceL19decode_mcu_DC_firstEPNS0_22jpeg_decompress_structEPPA64_s
                (long param_1,long param_2)

{
  int *piVar1;
  byte bVar2;
  undefined4 uVar3;
  long lVar4;
  undefined2 *puVar5;
  long lVar6;
  char cVar7;
  int iVar8;
  uint uVar9;
  long lVar10;
  undefined8 uVar11;
  ulong uVar12;
  ulong uVar13;
  undefined8 *puVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  long lVar19;
  undefined7 uVar20;
  undefined8 local_70;
  undefined8 local_68;
  ulong local_60;
  uint local_58;
  long local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  
  lVar4 = *(long *)(param_1 + 0x250);
  uVar3 = *(undefined4 *)(param_1 + 0x208);
  iVar8 = *(int *)(param_1 + 0x15c);
  if (iVar8 == 0) {
    iVar8 = 0;
  }
  else if (*(int *)(lVar4 + 0x40) == 0) {
    iVar8 = *(int *)(lVar4 + 0x20);
    iVar15 = iVar8 + 7;
    if (-1 < iVar8) {
      iVar15 = iVar8;
    }
    lVar10 = *(long *)(param_1 + 0x248);
    piVar1 = (int *)(lVar10 + 0x20);
    *piVar1 = *piVar1 + (iVar15 >> 3);
    *(undefined4 *)(lVar4 + 0x20) = 0;
    cVar7 = (**(code **)(lVar10 + 0x10))(param_1);
    if (cVar7 == '\0') {
LAB_0037c560:
      uVar13 = 0;
      goto LAB_0037c5ac;
    }
    if (0 < *(int *)(param_1 + 0x1a0)) {
      lVar10 = 0;
      do {
        *(undefined4 *)(lVar4 + 0x2c + lVar10 * 4) = 0;
        lVar10 = lVar10 + 1;
      } while (lVar10 < *(int *)(param_1 + 0x1a0));
    }
    *(undefined4 *)(lVar4 + 0x28) = 0;
    iVar8 = *(int *)(param_1 + 0x15c);
    *(int *)(lVar4 + 0x40) = iVar8;
    if (*(int *)(param_1 + 0x21c) == 0) {
      *(undefined1 *)(lVar4 + 0x3c) = 0;
    }
  }
  uVar20 = (undefined7)((ulong)lVar4 >> 8);
  if (*(char *)(lVar4 + 0x3c) == '\0') {
    puVar14 = *(undefined8 **)(param_1 + 0x28);
    local_70 = *puVar14;
    local_68 = puVar14[1];
    uVar12 = *(ulong *)(lVar4 + 0x18);
    uVar16 = *(uint *)(lVar4 + 0x20);
    local_38 = *(undefined4 *)(lVar4 + 0x38);
    local_48 = *(undefined8 *)(lVar4 + 0x28);
    uStack_40 = *(undefined8 *)(lVar4 + 0x30);
    if (0 < *(int *)(param_1 + 0x1d0)) {
      lVar10 = 0;
      local_50 = param_1;
      do {
        puVar5 = *(undefined2 **)(param_2 + lVar10 * 8);
        lVar19 = (long)*(int *)(param_1 + 0x1d4 + lVar10 * 4);
        lVar6 = *(long *)(lVar4 + 0x48 +
                         (long)*(int *)(*(long *)(param_1 + 0x1a8 + lVar19 * 8) + 0x14) * 8);
        if ((int)uVar16 < 8) {
          uVar13 = 0;
          uVar11 = juce::jpeglibNamespace::jpeg_fill_bit_buffer(&local_70,uVar12,uVar16,0);
          if ((char)uVar11 == '\0') goto LAB_0037c5ac;
          uVar12 = local_60;
          uVar16 = local_58;
          if (7 < (int)local_58) goto LAB_0037c4b4;
          uVar12 = juce::jpeglibNamespace::jpeg_huff_decode(&local_70,local_60,local_58,lVar6,1);
          uVar17 = (uint)uVar12;
          if ((int)uVar17 < 0) goto LAB_0037c560;
LAB_0037c4f9:
          uVar12 = local_60;
          uVar16 = local_58;
          if (uVar17 == 0) goto LAB_0037c4d9;
LAB_0037c506:
          if ((int)uVar16 < (int)uVar17) {
            uVar11 = juce::jpeglibNamespace::jpeg_fill_bit_buffer(&local_70,uVar12,uVar16,uVar17);
            if ((char)uVar11 == '\0') goto LAB_0037c560;
            uVar12 = local_60;
            uVar16 = local_58;
          }
          uVar16 = uVar16 - uVar17;
          uVar9 = (uint)((long)uVar12 >> ((byte)uVar16 & 0x3f)) &
                  *(uint *)(juce::jpeglibNamespace::bmask + (ulong)uVar17 * 4);
          uVar18 = 0;
          if ((int)uVar9 <= *(int *)(juce::jpeglibNamespace::bmask + (ulong)(uVar17 - 1) * 4)) {
            uVar18 = *(uint *)(juce::jpeglibNamespace::bmask + (ulong)uVar17 * 4);
          }
          iVar8 = uVar9 - uVar18;
        }
        else {
LAB_0037c4b4:
          uVar13 = (long)uVar12 >> ((char)uVar16 - 8U & 0x3f) & 0xff;
          iVar8 = *(int *)(lVar6 + 0x120 + uVar13 * 4);
          if (iVar8 == 0) {
            uVar12 = juce::jpeglibNamespace::jpeg_huff_decode(&local_70,uVar12,uVar16,lVar6,9);
            uVar17 = (uint)uVar12;
            if (-1 < (int)uVar17) goto LAB_0037c4f9;
            goto LAB_0037c560;
          }
          uVar16 = uVar16 - iVar8;
          bVar2 = *(byte *)(lVar6 + 0x520 + uVar13);
          uVar17 = (uint)bVar2;
          if (bVar2 != 0) goto LAB_0037c506;
LAB_0037c4d9:
          iVar8 = 0;
        }
        iVar8 = iVar8 + *(int *)((long)&local_48 + lVar19 * 4 + 4);
        *(int *)((long)&local_48 + lVar19 * 4 + 4) = iVar8;
        *puVar5 = (short)(iVar8 << ((byte)uVar3 & 0x1f));
        lVar10 = lVar10 + 1;
      } while (lVar10 < *(int *)(param_1 + 0x1d0));
      puVar14 = *(undefined8 **)(param_1 + 0x28);
    }
    *puVar14 = local_70;
    puVar14[1] = local_68;
    *(ulong *)(lVar4 + 0x18) = uVar12;
    *(uint *)(lVar4 + 0x20) = uVar16;
    *(undefined4 *)(lVar4 + 0x38) = local_38;
    *(undefined8 *)(lVar4 + 0x28) = local_48;
    *(undefined8 *)(lVar4 + 0x30) = uStack_40;
    iVar8 = *(int *)(param_1 + 0x15c);
  }
  uVar13 = CONCAT71(uVar20,1);
  if (iVar8 != 0) {
    uVar13 = CONCAT71(uVar20,1);
    *(int *)(lVar4 + 0x40) = *(int *)(lVar4 + 0x40) + -1;
  }
LAB_0037c5ac:
  return uVar13 & 0xffffffff;
}


