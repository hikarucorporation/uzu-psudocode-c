// Function : _ZN4juce16jpeglibNamespaceL19decode_mcu_AC_firstEPNS0_22jpeg_decompress_structEPPA64_s
// Namespace: 
// Entry    : 0037c5c0
// Prototype: ulong _ZN4juce16jpeglibNamespaceL19decode_mcu_AC_firstEPNS0_22jpeg_decompress_structEPPA64_s(long param_1, long * param_2)
// Body     : 0037c5c0 - 0037c8f1


ulong _ZN4juce16jpeglibNamespaceL19decode_mcu_AC_firstEPNS0_22jpeg_decompress_structEPPA64_s
                (long param_1,long *param_2)

{
  int *piVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 *puVar4;
  char cVar5;
  uint uVar6;
  long lVar7;
  undefined8 uVar8;
  ulong uVar9;
  ulong uVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  undefined8 unaff_RBX;
  uint7 uVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  undefined8 local_68;
  undefined8 local_60;
  ulong local_58;
  uint local_50;
  long local_48;
  long local_40;
  long local_38;
  
  lVar3 = *(long *)(param_1 + 0x250);
  iVar17 = *(int *)(param_1 + 0x15c);
  if (iVar17 == 0) {
    iVar17 = 0;
  }
  else if (*(int *)(lVar3 + 0x40) == 0) {
    iVar17 = *(int *)(lVar3 + 0x20);
    iVar12 = iVar17 + 7;
    if (-1 < iVar17) {
      iVar12 = iVar17;
    }
    lVar7 = *(long *)(param_1 + 0x248);
    piVar1 = (int *)(lVar7 + 0x20);
    *piVar1 = *piVar1 + (iVar12 >> 3);
    *(undefined4 *)(lVar3 + 0x20) = 0;
    cVar5 = (**(code **)(lVar7 + 0x10))();
    if (cVar5 == '\0') {
LAB_0037c8ee:
      uVar9 = 0;
      goto LAB_0037c898;
    }
    if (0 < *(int *)(param_1 + 0x1a0)) {
      lVar7 = 0;
      do {
        *(undefined4 *)(lVar3 + 0x2c + lVar7 * 4) = 0;
        lVar7 = lVar7 + 1;
      } while (lVar7 < *(int *)(param_1 + 0x1a0));
    }
    *(undefined4 *)(lVar3 + 0x28) = 0;
    iVar17 = *(int *)(param_1 + 0x15c);
    *(int *)(lVar3 + 0x40) = iVar17;
    if (*(int *)(param_1 + 0x21c) == 0) {
      *(undefined1 *)(lVar3 + 0x3c) = 0;
    }
  }
  if (*(char *)(lVar3 + 0x3c) == '\0') {
    if (*(int *)(lVar3 + 0x28) == 0) {
      local_68 = **(undefined8 **)(param_1 + 0x28);
      local_60 = (*(undefined8 **)(param_1 + 0x28))[1];
      uVar10 = *(ulong *)(lVar3 + 0x18);
      uVar11 = *(uint *)(lVar3 + 0x20);
      iVar17 = *(int *)(param_1 + 0x1fc);
      iVar12 = *(int *)(param_1 + 0x200);
      uVar9 = 0;
      if (iVar17 <= iVar12) {
        uVar2 = *(undefined4 *)(param_1 + 0x208);
        local_38 = *(long *)(param_1 + 0x210);
        local_40 = *param_2;
        lVar7 = *(long *)(lVar3 + 0x68);
        local_48 = param_1;
LAB_0037c73d:
        do {
          if ((int)uVar11 < 8) {
            uVar9 = 0;
            uVar8 = juce::jpeglibNamespace::jpeg_fill_bit_buffer(&local_68,uVar10,uVar11,0);
            if ((char)uVar8 == '\0') goto LAB_0037c898;
            uVar10 = local_58;
            uVar11 = local_50;
            if (7 < (int)local_50) goto LAB_0037c780;
            uVar6 = 1;
LAB_0037c7be:
            uVar10 = juce::jpeglibNamespace::jpeg_huff_decode(&local_68,uVar10,uVar11,lVar7,uVar6);
            uVar6 = (uint)uVar10;
            if ((int)uVar6 < 0) goto LAB_0037c8ee;
            uVar10 = local_58;
            uVar11 = local_50;
          }
          else {
LAB_0037c780:
            uVar9 = (long)uVar10 >> ((char)uVar11 - 8U & 0x3f) & 0xff;
            iVar16 = *(int *)(lVar7 + 0x120 + uVar9 * 4);
            if (iVar16 == 0) {
              uVar6 = 9;
              goto LAB_0037c7be;
            }
            uVar11 = uVar11 - iVar16;
            uVar6 = (uint)*(byte *)(lVar7 + 0x520 + uVar9);
          }
          uVar15 = uVar6 >> 4;
          uVar13 = uVar6 & 0xf;
          if (uVar13 != 0) {
            if ((int)uVar11 < (int)uVar13) {
              uVar8 = juce::jpeglibNamespace::jpeg_fill_bit_buffer(&local_68,uVar10,uVar11,uVar13);
              if ((char)uVar8 == '\0') goto LAB_0037c8ee;
              uVar10 = local_58;
              uVar11 = local_50;
            }
            uVar11 = uVar11 - uVar13;
            iVar16 = uVar15 + iVar17;
            uVar15 = (uint)((long)uVar10 >> ((byte)uVar11 & 0x3f)) &
                     *(uint *)(juce::jpeglibNamespace::bmask + (ulong)uVar13 * 4);
            uVar6 = 0;
            if ((int)uVar15 <= *(int *)(juce::jpeglibNamespace::bmask + (ulong)(uVar13 - 1) * 4)) {
              uVar6 = *(uint *)(juce::jpeglibNamespace::bmask + (ulong)uVar13 * 4);
            }
            *(short *)(local_40 + (long)*(int *)(local_38 + (long)iVar16 * 4) * 2) =
                 (short)(uVar15 - uVar6 << ((byte)uVar2 & 0x1f));
            iVar17 = iVar16 + 1;
            if (iVar12 <= iVar16) break;
            goto LAB_0037c73d;
          }
          if (uVar15 != 0xf) {
            if (0xf < uVar6) {
              if ((int)uVar11 < (int)uVar15) {
                uVar8 = juce::jpeglibNamespace::jpeg_fill_bit_buffer(&local_68,uVar10,uVar11,uVar15)
                ;
                if ((char)uVar8 == '\0') goto LAB_0037c8ee;
                uVar10 = local_58;
                uVar11 = local_50;
              }
              uVar11 = uVar11 - uVar15;
              uVar9 = (ulong)(~(-1 << ((byte)uVar15 & 0x1f)) +
                             ((uint)((long)uVar10 >> ((byte)uVar11 & 0x3f)) &
                             *(uint *)(juce::jpeglibNamespace::bmask + (ulong)uVar15 * 4)));
              goto LAB_0037c865;
            }
            break;
          }
          iVar16 = iVar17 + 0xf;
          iVar17 = iVar17 + 0x10;
        } while (iVar16 < iVar12);
        uVar9 = 0;
      }
LAB_0037c865:
      puVar4 = *(undefined8 **)(param_1 + 0x28);
      *puVar4 = local_68;
      puVar4[1] = local_60;
      *(ulong *)(lVar3 + 0x18) = uVar10;
      *(uint *)(lVar3 + 0x20) = uVar11;
      iVar17 = *(int *)(param_1 + 0x15c);
      *(int *)(lVar3 + 0x28) = (int)uVar9;
      uVar14 = (uint7)(uVar9 >> 8);
    }
    else {
      iVar12 = *(int *)(lVar3 + 0x28) + -1;
      *(int *)(lVar3 + 0x28) = iVar12;
      uVar14 = (uint7)(uint3)((uint)iVar12 >> 8);
    }
  }
  else {
    uVar14 = (uint7)((ulong)unaff_RBX >> 8);
  }
  uVar9 = CONCAT71(uVar14,1);
  if (iVar17 != 0) {
    *(int *)(lVar3 + 0x40) = *(int *)(lVar3 + 0x40) + -1;
  }
LAB_0037c898:
  return uVar9 & 0xffffffff;
}


