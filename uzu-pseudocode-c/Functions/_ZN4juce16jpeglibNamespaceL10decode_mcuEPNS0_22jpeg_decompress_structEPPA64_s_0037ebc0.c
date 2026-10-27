// Function : _ZN4juce16jpeglibNamespaceL10decode_mcuEPNS0_22jpeg_decompress_structEPPA64_s
// Namespace: 
// Entry    : 0037ebc0
// Prototype: ulong _ZN4juce16jpeglibNamespaceL10decode_mcuEPNS0_22jpeg_decompress_structEPPA64_s(long param_1, long param_2)
// Body     : 0037ebc0 - 0037f13d


ulong _ZN4juce16jpeglibNamespaceL10decode_mcuEPNS0_22jpeg_decompress_structEPPA64_s
                (long param_1,long param_2)

{
  int *piVar1;
  byte bVar2;
  long lVar3;
  long lVar4;
  char cVar5;
  uint uVar6;
  int iVar7;
  long lVar8;
  undefined8 uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 *puVar12;
  long lVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  undefined8 unaff_RBP;
  undefined7 uVar18;
  bool bVar19;
  undefined8 local_98;
  undefined8 local_90;
  ulong local_88;
  uint local_80;
  long local_78;
  int local_6c;
  long local_68;
  undefined2 *local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  long local_40;
  long local_38;
  
  lVar3 = *(long *)(param_1 + 0x250);
  iVar7 = *(int *)(param_1 + 0x15c);
  if (iVar7 == 0) {
    iVar7 = 0;
  }
  else if (*(int *)(lVar3 + 0x40) == 0) {
    iVar7 = *(int *)(lVar3 + 0x20);
    iVar15 = iVar7 + 7;
    if (-1 < iVar7) {
      iVar15 = iVar7;
    }
    lVar8 = *(long *)(param_1 + 0x248);
    piVar1 = (int *)(lVar8 + 0x20);
    *piVar1 = *piVar1 + (iVar15 >> 3);
    *(undefined4 *)(lVar3 + 0x20) = 0;
    cVar5 = (**(code **)(lVar8 + 0x10))(param_1);
    if (cVar5 == '\0') {
LAB_0037f12b:
      uVar11 = 0;
      goto LAB_0037f12d;
    }
    if (0 < *(int *)(param_1 + 0x1a0)) {
      lVar8 = 0;
      do {
        *(undefined4 *)(lVar3 + 0x2c + lVar8 * 4) = 0;
        lVar8 = lVar8 + 1;
      } while (lVar8 < *(int *)(param_1 + 0x1a0));
    }
    *(undefined4 *)(lVar3 + 0x28) = 0;
    iVar7 = *(int *)(param_1 + 0x15c);
    *(int *)(lVar3 + 0x40) = iVar7;
    if (*(int *)(param_1 + 0x21c) == 0) {
      *(undefined1 *)(lVar3 + 0x3c) = 0;
    }
  }
  if (*(char *)(lVar3 + 0x3c) == '\0') {
    puVar12 = *(undefined8 **)(param_1 + 0x28);
    local_98 = *puVar12;
    local_90 = puVar12[1];
    uVar10 = *(ulong *)(lVar3 + 0x18);
    uVar14 = *(uint *)(lVar3 + 0x20);
    local_48 = *(undefined4 *)(lVar3 + 0x38);
    local_58 = *(undefined8 *)(lVar3 + 0x28);
    uStack_50 = *(undefined8 *)(lVar3 + 0x30);
    if (0 < *(int *)(param_1 + 0x1d0)) {
      local_68 = 0;
      local_38 = param_1;
      local_40 = param_2;
      local_78 = param_1;
      do {
        lVar13 = local_38;
        local_60 = *(undefined2 **)(local_40 + local_68 * 8);
        lVar8 = *(long *)(lVar3 + 0xb0 + local_68 * 8);
        if ((int)uVar14 < 8) {
          uVar11 = 0;
          uVar9 = juce::jpeglibNamespace::jpeg_fill_bit_buffer(&local_98,uVar10,uVar14,0);
          if ((char)uVar9 == '\0') goto LAB_0037f12d;
          uVar10 = local_88;
          uVar14 = local_80;
          if (7 < (int)local_80) goto LAB_0037ed30;
          uVar17 = 1;
LAB_0037ed66:
          uVar10 = juce::jpeglibNamespace::jpeg_huff_decode(&local_98,uVar10,uVar14,lVar8,uVar17);
          uVar17 = (uint)uVar10;
          if ((int)uVar17 < 0) goto LAB_0037f12b;
          uVar10 = local_88;
          uVar14 = local_80;
        }
        else {
LAB_0037ed30:
          uVar11 = (long)uVar10 >> ((char)uVar14 - 8U & 0x3f) & 0xff;
          iVar7 = *(int *)(lVar8 + 0x120 + uVar11 * 4);
          if (iVar7 == 0) {
            uVar17 = 9;
            goto LAB_0037ed66;
          }
          uVar14 = uVar14 - iVar7;
          uVar17 = (uint)*(byte *)(lVar8 + 0x520 + uVar11);
        }
        lVar4 = local_68;
        lVar8 = *(long *)(lVar3 + 0x100 + local_68 * 8);
        local_6c = *(int *)(lVar3 + 0x150 + local_68 * 4);
        if (local_6c == 0) {
          if (uVar17 != 0) {
            if ((int)uVar14 < (int)uVar17) {
              uVar9 = juce::jpeglibNamespace::jpeg_fill_bit_buffer(&local_98,uVar10,uVar14,uVar17);
              if ((char)uVar9 == '\0') goto LAB_0037f12b;
              uVar10 = local_88;
              uVar14 = local_80;
            }
            uVar14 = uVar14 - uVar17;
          }
LAB_0037efb0:
          iVar7 = 1;
LAB_0037efe3:
          do {
            if ((int)uVar14 < 8) {
              uVar11 = 0;
              uVar9 = juce::jpeglibNamespace::jpeg_fill_bit_buffer(&local_98,uVar10,uVar14,0);
              if ((char)uVar9 == '\0') goto LAB_0037f12d;
              uVar10 = local_88;
              uVar14 = local_80;
              if (7 < (int)local_80) goto LAB_0037f030;
              uVar10 = juce::jpeglibNamespace::jpeg_huff_decode(&local_98,local_88,local_80,lVar8,1)
              ;
              uVar17 = (uint)uVar10;
              if ((int)uVar17 < 0) goto LAB_0037f12b;
LAB_0037f08b:
              uVar16 = uVar17 >> 4;
              uVar17 = uVar17 & 0xf;
              uVar10 = local_88;
              uVar14 = local_80;
              if (uVar17 != 0) goto LAB_0037f09e;
LAB_0037f05d:
              bVar19 = uVar16 != 0xf;
              uVar16 = 0xf;
              if (bVar19) break;
            }
            else {
LAB_0037f030:
              uVar11 = (long)uVar10 >> ((char)uVar14 - 8U & 0x3f) & 0xff;
              iVar15 = *(int *)(lVar8 + 0x120 + uVar11 * 4);
              if (iVar15 == 0) {
                uVar10 = juce::jpeglibNamespace::jpeg_huff_decode(&local_98,uVar10,uVar14,lVar8,9);
                uVar17 = (uint)uVar10;
                if (-1 < (int)uVar17) goto LAB_0037f08b;
                goto LAB_0037f12b;
              }
              uVar14 = uVar14 - iVar15;
              bVar2 = *(byte *)(lVar8 + 0x520 + uVar11);
              uVar16 = (uint)(bVar2 >> 4);
              uVar17 = bVar2 & 0xf;
              if ((bVar2 & 0xf) == 0) goto LAB_0037f05d;
LAB_0037f09e:
              if ((int)uVar14 < (int)uVar17) {
                uVar9 = juce::jpeglibNamespace::jpeg_fill_bit_buffer(&local_98,uVar10,uVar14,uVar17)
                ;
                if ((char)uVar9 == '\0') goto LAB_0037f12b;
                uVar10 = local_88;
                uVar14 = local_80;
              }
              uVar14 = uVar14 - uVar17;
            }
            iVar7 = iVar7 + uVar16 + 1;
          } while (iVar7 < 0x40);
        }
        else {
          if (uVar17 == 0) {
            iVar7 = 0;
          }
          else {
            if ((int)uVar14 < (int)uVar17) {
              uVar9 = juce::jpeglibNamespace::jpeg_fill_bit_buffer(&local_98,uVar10,uVar14,uVar17);
              if ((char)uVar9 == '\0') goto LAB_0037f12b;
              uVar10 = local_88;
              uVar14 = local_80;
            }
            uVar14 = uVar14 - uVar17;
            uVar16 = *(uint *)(juce::jpeglibNamespace::bmask + (ulong)uVar17 * 4);
            uVar6 = (uint)((long)uVar10 >> ((byte)uVar14 & 0x3f)) & uVar16;
            if (*(int *)(juce::jpeglibNamespace::bmask + (ulong)(uVar17 - 1) * 4) < (int)uVar6) {
              uVar16 = 0;
            }
            iVar7 = uVar6 - uVar16;
          }
          lVar13 = (long)*(int *)(lVar13 + 0x1d4 + lVar4 * 4);
          iVar7 = iVar7 + *(int *)((long)&local_58 + lVar13 * 4 + 4);
          *(int *)((long)&local_58 + lVar13 * 4 + 4) = iVar7;
          *local_60 = (short)iVar7;
          if (local_6c < 2) goto LAB_0037efb0;
          iVar7 = 1;
          do {
            while (7 < (int)uVar14) {
LAB_0037ef00:
              uVar11 = (long)uVar10 >> ((char)uVar14 - 8U & 0x3f) & 0xff;
              iVar15 = *(int *)(lVar8 + 0x120 + uVar11 * 4);
              if (iVar15 == 0) {
                uVar17 = 9;
                goto LAB_0037ef5c;
              }
              uVar14 = uVar14 - iVar15;
              bVar2 = *(byte *)(lVar8 + 0x520 + uVar11);
              uVar17 = (uint)bVar2;
              uVar16 = (uint)(bVar2 >> 4);
              if ((bVar2 & 0xf) == 0) goto LAB_0037ef2d;
LAB_0037ef7e:
              uVar17 = uVar17 & 0xf;
              if ((int)uVar14 < (int)uVar17) {
                uVar9 = juce::jpeglibNamespace::jpeg_fill_bit_buffer(&local_98,uVar10,uVar14,uVar17)
                ;
                if ((char)uVar9 == '\0') goto LAB_0037f12b;
                uVar10 = local_88;
                uVar14 = local_80;
              }
              iVar15 = uVar16 + iVar7;
              uVar14 = uVar14 - uVar17;
              uVar16 = *(uint *)(juce::jpeglibNamespace::bmask + (ulong)uVar17 * 4);
              uVar6 = (uint)((long)uVar10 >> ((byte)uVar14 & 0x3f)) & uVar16;
              if (*(int *)(juce::jpeglibNamespace::bmask + (ulong)(uVar17 - 1) * 4) < (int)uVar6) {
                uVar16 = 0;
              }
              local_60[L"8ccccc/Bcccccccccccccccccccccccccccccccccccccc"[(long)iVar15 + 0x2e]] =
                   (short)uVar6 - (short)uVar16;
              iVar7 = iVar15 + 1;
              if (local_6c <= iVar7) goto LAB_0037efb5;
            }
            uVar11 = 0;
            uVar9 = juce::jpeglibNamespace::jpeg_fill_bit_buffer(&local_98,uVar10,uVar14,0);
            if ((char)uVar9 == '\0') goto LAB_0037f12d;
            uVar10 = local_88;
            uVar14 = local_80;
            if (7 < (int)local_80) goto LAB_0037ef00;
            uVar17 = 1;
LAB_0037ef5c:
            uVar11 = juce::jpeglibNamespace::jpeg_huff_decode(&local_98,uVar10,uVar14,lVar8,uVar17);
            uVar17 = (uint)uVar11;
            if ((int)uVar17 < 0) goto LAB_0037f12b;
            uVar16 = uVar17 >> 4;
            uVar10 = local_88;
            uVar14 = local_80;
            if ((uVar11 & 0xf) != 0) goto LAB_0037ef7e;
LAB_0037ef2d:
            if (uVar16 != 0xf) goto LAB_0037f0c5;
            iVar15 = iVar7 + 0xf;
            iVar7 = iVar7 + 0x10;
          } while (iVar7 < local_6c);
LAB_0037efb5:
          if (iVar15 < 0x3f) goto LAB_0037efe3;
        }
LAB_0037f0c5:
        local_68 = local_68 + 1;
      } while (local_68 < *(int *)(local_38 + 0x1d0));
      puVar12 = *(undefined8 **)(local_38 + 0x28);
      param_1 = local_38;
    }
    *puVar12 = local_98;
    puVar12[1] = local_90;
    *(ulong *)(lVar3 + 0x18) = uVar10;
    *(uint *)(lVar3 + 0x20) = uVar14;
    *(undefined4 *)(lVar3 + 0x38) = local_48;
    *(undefined8 *)(lVar3 + 0x28) = local_58;
    *(undefined8 *)(lVar3 + 0x30) = uStack_50;
    iVar7 = *(int *)(param_1 + 0x15c);
    uVar18 = (undefined7)((ulong)(lVar3 + 0x28) >> 8);
  }
  else {
    uVar18 = (undefined7)((ulong)unaff_RBP >> 8);
  }
  uVar11 = CONCAT71(uVar18,1);
  if (iVar7 != 0) {
    *(int *)(lVar3 + 0x40) = *(int *)(lVar3 + 0x40) + -1;
  }
LAB_0037f12d:
  return uVar11 & 0xffffffff;
}


