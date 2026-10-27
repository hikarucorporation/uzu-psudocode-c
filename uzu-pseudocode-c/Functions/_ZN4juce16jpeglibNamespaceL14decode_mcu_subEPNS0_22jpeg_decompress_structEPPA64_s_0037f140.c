// Function : _ZN4juce16jpeglibNamespaceL14decode_mcu_subEPNS0_22jpeg_decompress_structEPPA64_s
// Namespace: 
// Entry    : 0037f140
// Prototype: ulong _ZN4juce16jpeglibNamespaceL14decode_mcu_subEPNS0_22jpeg_decompress_structEPPA64_s(long param_1, long param_2)
// Body     : 0037f140 - 0037f6ea


ulong _ZN4juce16jpeglibNamespaceL14decode_mcu_subEPNS0_22jpeg_decompress_structEPPA64_s
                (long param_1,long param_2)

{
  int *piVar1;
  byte bVar2;
  long lVar3;
  undefined2 *puVar4;
  long lVar5;
  char cVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  long lVar11;
  undefined8 uVar12;
  ulong uVar13;
  ulong uVar14;
  undefined8 *puVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  undefined7 uVar19;
  int iVar20;
  undefined8 local_98;
  undefined8 local_90;
  ulong local_88;
  uint local_80;
  long local_78;
  int local_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  long local_50;
  long local_48;
  undefined2 *local_40;
  long local_38;
  
  lVar3 = *(long *)(param_1 + 0x250);
  iVar7 = *(int *)(param_1 + 0x15c);
  if (iVar7 == 0) {
    iVar7 = 0;
  }
  else if (*(int *)(lVar3 + 0x40) == 0) {
    iVar7 = *(int *)(lVar3 + 0x20);
    iVar9 = iVar7 + 7;
    if (-1 < iVar7) {
      iVar9 = iVar7;
    }
    lVar11 = *(long *)(param_1 + 0x248);
    piVar1 = (int *)(lVar11 + 0x20);
    *piVar1 = *piVar1 + (iVar9 >> 3);
    *(undefined4 *)(lVar3 + 0x20) = 0;
    cVar6 = (**(code **)(lVar11 + 0x10))(param_1);
    if (cVar6 == '\0') {
LAB_0037f692:
      uVar14 = 0;
      goto LAB_0037f694;
    }
    if (0 < *(int *)(param_1 + 0x1a0)) {
      lVar11 = 0;
      do {
        *(undefined4 *)(lVar3 + 0x2c + lVar11 * 4) = 0;
        lVar11 = lVar11 + 1;
      } while (lVar11 < *(int *)(param_1 + 0x1a0));
    }
    *(undefined4 *)(lVar3 + 0x28) = 0;
    iVar7 = *(int *)(param_1 + 0x15c);
    *(int *)(lVar3 + 0x40) = iVar7;
    if (*(int *)(param_1 + 0x21c) == 0) {
      *(undefined1 *)(lVar3 + 0x3c) = 0;
    }
  }
  if (*(char *)(lVar3 + 0x3c) == '\0') {
    local_38 = *(long *)(param_1 + 0x210);
    local_6c = *(int *)(param_1 + 0x218);
    puVar15 = *(undefined8 **)(param_1 + 0x28);
    local_98 = *puVar15;
    local_90 = puVar15[1];
    uVar13 = *(ulong *)(lVar3 + 0x18);
    uVar17 = *(uint *)(lVar3 + 0x20);
    local_58 = *(undefined4 *)(lVar3 + 0x38);
    local_68 = *(undefined8 *)(lVar3 + 0x28);
    uStack_60 = *(undefined8 *)(lVar3 + 0x30);
    if (0 < *(int *)(param_1 + 0x1d0)) {
      lVar11 = 0;
      local_50 = param_2;
      local_78 = param_1;
      do {
        puVar4 = *(undefined2 **)(local_50 + lVar11 * 8);
        lVar5 = *(long *)(lVar3 + 0xb0 + lVar11 * 8);
        if ((int)uVar17 < 8) {
          uVar14 = 0;
          uVar12 = juce::jpeglibNamespace::jpeg_fill_bit_buffer(&local_98,uVar13,uVar17,0);
          if ((char)uVar12 == '\0') goto LAB_0037f694;
          uVar13 = local_88;
          uVar17 = local_80;
          if (7 < (int)local_80) goto LAB_0037f300;
          uVar18 = 1;
LAB_0037f333:
          uVar13 = juce::jpeglibNamespace::jpeg_huff_decode(&local_98,uVar13,uVar17,lVar5,uVar18);
          uVar14 = uVar13 & 0xffffffff;
          if ((int)uVar13 < 0) goto LAB_0037f692;
          uVar13 = local_88;
          uVar17 = local_80;
        }
        else {
LAB_0037f300:
          uVar14 = (long)uVar13 >> ((char)uVar17 - 8U & 0x3f) & 0xff;
          iVar7 = *(int *)(lVar5 + 0x120 + uVar14 * 4);
          if (iVar7 == 0) {
            uVar18 = 9;
            goto LAB_0037f333;
          }
          uVar17 = uVar17 - iVar7;
          uVar14 = (ulong)*(byte *)(lVar5 + 0x520 + uVar14);
        }
        lVar5 = *(long *)(lVar3 + 0x100 + lVar11 * 8);
        iVar7 = *(int *)(lVar3 + 0x150 + lVar11 * 4);
        local_48 = lVar11;
        iVar9 = (int)uVar14;
        if (iVar7 != 0) {
          if (iVar9 == 0) {
            iVar9 = 0;
          }
          else {
            if ((int)uVar17 < iVar9) {
              uVar12 = juce::jpeglibNamespace::jpeg_fill_bit_buffer(&local_98,uVar13,uVar17,iVar9);
              if ((char)uVar12 == '\0') goto LAB_0037f692;
              uVar13 = local_88;
              uVar17 = local_80;
            }
            uVar17 = uVar17 - iVar9;
            uVar18 = *(uint *)(juce::jpeglibNamespace::bmask + uVar14 * 4);
            uVar8 = (uint)((long)uVar13 >> ((byte)uVar17 & 0x3f)) & uVar18;
            if (*(int *)(juce::jpeglibNamespace::bmask + (ulong)(iVar9 - 1) * 4) < (int)uVar8) {
              uVar18 = 0;
            }
            iVar9 = uVar8 - uVar18;
          }
          lVar11 = (long)*(int *)(param_1 + 0x1d4 + lVar11 * 4);
          iVar9 = iVar9 + *(int *)((long)&local_68 + lVar11 * 4 + 4);
          *(int *)((long)&local_68 + lVar11 * 4 + 4) = iVar9;
          *puVar4 = (short)iVar9;
          iVar20 = 1;
          if (iVar7 < 2) goto LAB_0037f599;
          local_40 = puVar4;
          iVar20 = 1;
          do {
            if ((int)uVar17 < 8) {
              uVar14 = 0;
              uVar12 = juce::jpeglibNamespace::jpeg_fill_bit_buffer(&local_98,uVar13,uVar17,0);
              if ((char)uVar12 == '\0') goto LAB_0037f694;
              uVar13 = local_88;
              uVar17 = local_80;
              if (7 < (int)local_80) goto LAB_0037f4d5;
              uVar18 = 1;
LAB_0037f52e:
              uVar14 = juce::jpeglibNamespace::jpeg_huff_decode
                                 (&local_98,uVar13,uVar17,lVar5,uVar18);
              uVar18 = (uint)uVar14;
              if ((int)uVar18 < 0) goto LAB_0037f692;
              uVar8 = uVar18 >> 4;
              uVar13 = local_88;
              uVar17 = local_80;
              if ((uVar14 & 0xf) == 0) goto LAB_0037f502;
LAB_0037f555:
              uVar18 = uVar18 & 0xf;
              if ((int)uVar17 < (int)uVar18) {
                uVar12 = juce::jpeglibNamespace::jpeg_fill_bit_buffer
                                   (&local_98,uVar13,uVar17,uVar18);
                if ((char)uVar12 == '\0') goto LAB_0037f692;
                uVar13 = local_88;
                uVar17 = local_80;
              }
              uVar17 = uVar17 - uVar18;
              uVar16 = *(uint *)(juce::jpeglibNamespace::bmask + (ulong)uVar18 * 4);
              uVar10 = (uint)((long)uVar13 >> ((byte)uVar17 & 0x3f)) & uVar16;
              if (*(int *)(juce::jpeglibNamespace::bmask + (ulong)(uVar18 - 1) * 4) < (int)uVar10) {
                uVar16 = 0;
              }
              local_40[*(int *)(local_38 + (long)(int)(iVar20 + uVar8) * 4)] =
                   (short)uVar10 - (short)uVar16;
              iVar20 = iVar20 + uVar8 + 1;
            }
            else {
LAB_0037f4d5:
              uVar14 = (long)uVar13 >> ((char)uVar17 - 8U & 0x3f) & 0xff;
              iVar9 = *(int *)(lVar5 + 0x120 + uVar14 * 4);
              if (iVar9 == 0) {
                uVar18 = 9;
                goto LAB_0037f52e;
              }
              uVar17 = uVar17 - iVar9;
              bVar2 = *(byte *)(lVar5 + 0x520 + uVar14);
              uVar18 = (uint)bVar2;
              uVar8 = (uint)(bVar2 >> 4);
              if ((bVar2 & 0xf) != 0) goto LAB_0037f555;
LAB_0037f502:
              if (uVar8 != 0xf) goto LAB_0037f290;
              iVar20 = iVar20 + 0x10;
            }
            if (iVar7 <= iVar20) goto LAB_0037f599;
          } while( true );
        }
        iVar20 = 1;
        if (iVar9 == 0) goto LAB_0037f599;
        if ((int)uVar17 < iVar9) {
          uVar12 = juce::jpeglibNamespace::jpeg_fill_bit_buffer(&local_98,uVar13,uVar17,iVar9);
          if ((char)uVar12 == '\0') goto LAB_0037f692;
          uVar13 = local_88;
          uVar17 = local_80;
        }
        uVar17 = uVar17 - iVar9;
        if (0 < local_6c) {
          do {
            while ((int)uVar17 < 8) {
              uVar14 = 0;
              uVar12 = juce::jpeglibNamespace::jpeg_fill_bit_buffer(&local_98,uVar13,uVar17,0);
              if ((char)uVar12 == '\0') goto LAB_0037f694;
              uVar13 = local_88;
              uVar17 = local_80;
              if (7 < (int)local_80) break;
              uVar18 = 1;
LAB_0037f64e:
              uVar14 = juce::jpeglibNamespace::jpeg_huff_decode
                                 (&local_98,uVar13,uVar17,lVar5,uVar18);
              uVar18 = (uint)uVar14;
              if ((int)uVar18 < 0) goto LAB_0037f692;
              uVar8 = uVar18 >> 4;
              uVar13 = local_88;
              uVar17 = local_80;
              if ((uVar14 & 0xf) != 0) goto LAB_0037f66c;
LAB_0037f60d:
              if ((uVar8 != 0xf) || (iVar20 = iVar20 + 0x10, local_6c < iVar20)) goto LAB_0037f290;
            }
            uVar14 = (long)uVar13 >> ((char)uVar17 - 8U & 0x3f) & 0xff;
            iVar7 = *(int *)(lVar5 + 0x120 + uVar14 * 4);
            if (iVar7 == 0) {
              uVar18 = 9;
              goto LAB_0037f64e;
            }
            uVar17 = uVar17 - iVar7;
            bVar2 = *(byte *)(lVar5 + 0x520 + uVar14);
            uVar18 = (uint)bVar2;
            uVar8 = (uint)(bVar2 >> 4);
            if ((bVar2 & 0xf) == 0) goto LAB_0037f60d;
LAB_0037f66c:
            uVar18 = uVar18 & 0xf;
            if ((int)uVar17 < (int)uVar18) {
              uVar12 = juce::jpeglibNamespace::jpeg_fill_bit_buffer(&local_98,uVar13,uVar17,uVar18);
              if ((char)uVar12 == '\0') goto LAB_0037f692;
              uVar13 = local_88;
              uVar17 = local_80;
            }
            uVar17 = uVar17 - uVar18;
            iVar20 = iVar20 + uVar8 + 1;
LAB_0037f599:
          } while (iVar20 <= local_6c);
        }
LAB_0037f290:
        lVar11 = local_48 + 1;
      } while (lVar11 < *(int *)(param_1 + 0x1d0));
      puVar15 = *(undefined8 **)(param_1 + 0x28);
      param_2 = local_50;
    }
    *puVar15 = local_98;
    puVar15[1] = local_90;
    *(ulong *)(lVar3 + 0x18) = uVar13;
    *(uint *)(lVar3 + 0x20) = uVar17;
    *(undefined4 *)(lVar3 + 0x38) = local_58;
    *(undefined8 *)(lVar3 + 0x28) = local_68;
    *(undefined8 *)(lVar3 + 0x30) = uStack_60;
    iVar7 = *(int *)(param_1 + 0x15c);
    uVar19 = (undefined7)((ulong)param_2 >> 8);
  }
  else {
    uVar19 = (undefined7)((ulong)param_2 >> 8);
  }
  uVar14 = CONCAT71(uVar19,1);
  if (iVar7 != 0) {
    *(int *)(lVar3 + 0x40) = *(int *)(lVar3 + 0x40) + -1;
  }
LAB_0037f694:
  return uVar14 & 0xffffffff;
}


