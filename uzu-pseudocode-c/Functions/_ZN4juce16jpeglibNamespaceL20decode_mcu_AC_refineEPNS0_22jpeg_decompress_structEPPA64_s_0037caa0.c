// Function : _ZN4juce16jpeglibNamespaceL20decode_mcu_AC_refineEPNS0_22jpeg_decompress_structEPPA64_s
// Namespace: 
// Entry    : 0037caa0
// Prototype: undefined8 _ZN4juce16jpeglibNamespaceL20decode_mcu_AC_refineEPNS0_22jpeg_decompress_structEPPA64_s(long * param_1, long * param_2)
// Body     : 0037caa0 - 0037d097


undefined8
_ZN4juce16jpeglibNamespaceL20decode_mcu_AC_refineEPNS0_22jpeg_decompress_structEPPA64_s
          (long *param_1,long *param_2)

{
  int *piVar1;
  short sVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  ulong uVar6;
  uint uVar7;
  long in_RAX;
  undefined7 uVar11;
  undefined8 uVar8;
  ulong uVar9;
  ulong uVar10;
  int iVar12;
  int iVar13;
  uint uVar14;
  long lVar15;
  uint uVar16;
  long lVar17;
  int iVar18;
  uint uVar19;
  int iVar20;
  uint uVar21;
  uint local_1ac;
  uint local_194;
  undefined8 local_180;
  undefined8 local_178;
  ulong local_170;
  uint local_168;
  long *local_160;
  long local_158;
  uint local_14c;
  long *local_148;
  long local_140;
  int aiStack_138 [66];
  
  lVar17 = param_1[0x4a];
  iVar18 = *(int *)((long)param_1 + 0x15c);
  if (iVar18 == 0) {
    iVar18 = 0;
  }
  else if (*(int *)(lVar17 + 0x40) == 0) {
    iVar18 = *(int *)(lVar17 + 0x20);
    iVar12 = iVar18 + 7;
    if (-1 < iVar18) {
      iVar12 = iVar18;
    }
    lVar3 = param_1[0x49];
    piVar1 = (int *)(lVar3 + 0x20);
    *piVar1 = *piVar1 + (iVar12 >> 3);
    *(undefined4 *)(lVar17 + 0x20) = 0;
    in_RAX = (**(code **)(lVar3 + 0x10))(param_1);
    if ((char)in_RAX == '\0') {
      return 0;
    }
    if (0 < (int)param_1[0x34]) {
      in_RAX = 0;
      do {
        *(undefined4 *)(lVar17 + 0x2c + in_RAX * 4) = 0;
        in_RAX = in_RAX + 1;
      } while (in_RAX < (int)param_1[0x34]);
    }
    *(undefined4 *)(lVar17 + 0x28) = 0;
    iVar18 = *(int *)((long)param_1 + 0x15c);
    *(int *)(lVar17 + 0x40) = iVar18;
    if (*(int *)((long)param_1 + 0x21c) == 0) {
      *(undefined1 *)(lVar17 + 0x3c) = 0;
    }
  }
  if (*(char *)(lVar17 + 0x3c) == '\0') {
    iVar13 = 0x10000 << (*(byte *)(param_1 + 0x41) & 0x1f);
    iVar12 = (int)param_1[0x40];
    uVar19 = iVar13 >> 0x10;
    lVar3 = param_1[0x42];
    local_180 = *(undefined8 *)param_1[5];
    local_178 = ((undefined8 *)param_1[5])[1];
    uVar10 = *(ulong *)(lVar17 + 0x18);
    uVar9 = (ulong)*(uint *)(lVar17 + 0x20);
    local_1ac = *(int *)(lVar17 + 0x28);
    lVar4 = *param_2;
    iVar18 = *(int *)((long)param_1 + 0x1fc);
    local_160 = param_1;
    local_158 = lVar17;
    local_148 = param_1;
    if (local_1ac == 0) {
      local_140 = *(long *)(lVar17 + 0x68);
      local_14c = -iVar13 >> 0x10;
      uVar14 = 0;
      do {
        lVar17 = local_140;
        uVar21 = (uint)uVar9;
        if ((int)uVar21 < 8) {
          uVar8 = juce::jpeglibNamespace::jpeg_fill_bit_buffer(&local_180,uVar10,uVar21,0);
          if ((char)uVar8 == '\0') goto LAB_0037d018;
          uVar10 = local_170;
          uVar21 = local_168;
          if (7 < (int)local_168) goto LAB_0037cd7b;
          uVar7 = 1;
LAB_0037cdb4:
          uVar10 = juce::jpeglibNamespace::jpeg_huff_decode(&local_180,uVar10,uVar21,lVar17,uVar7);
          uVar7 = (uint)uVar10;
          if ((int)uVar7 < 0) goto LAB_0037d018;
          uVar10 = local_170;
          uVar21 = local_168;
        }
        else {
LAB_0037cd7b:
          uVar9 = (long)uVar10 >> ((char)uVar21 - 8U & 0x3f) & 0xff;
          iVar13 = *(int *)(lVar17 + 0x120 + uVar9 * 4);
          if (iVar13 == 0) {
            uVar7 = 9;
            goto LAB_0037cdb4;
          }
          uVar21 = uVar21 - iVar13;
          uVar7 = (uint)*(byte *)(lVar17 + 0x520 + uVar9);
        }
        uVar9 = (ulong)uVar21;
        uVar16 = uVar7 >> 4;
        if ((uVar7 & 0xf) == 0) {
          if (uVar16 != 0xf) {
            local_1ac = 1 << ((byte)uVar16 & 0x1f);
            if (uVar7 < 0x10) goto LAB_0037cbdf;
            if ((int)uVar21 < (int)uVar16) {
              uVar8 = juce::jpeglibNamespace::jpeg_fill_bit_buffer(&local_180,uVar10,uVar21,uVar16);
              if ((char)uVar8 == '\0') goto LAB_0037d018;
              uVar10 = local_170;
              uVar21 = local_168;
            }
            uVar21 = uVar21 - uVar16;
            uVar9 = (ulong)uVar21;
            local_1ac = local_1ac +
                        ((uint)((long)uVar10 >> ((byte)uVar21 & 0x3f)) &
                        *(uint *)(juce::jpeglibNamespace::bmask + (ulong)uVar16 * 4));
            if (local_1ac != 0) goto LAB_0037cbdf;
            break;
          }
          local_1ac = 0;
        }
        else {
          if ((uVar7 & 0xf) != 1) {
            lVar17 = *local_148;
            *(undefined4 *)(lVar17 + 0x28) = 0x79;
            (**(code **)(lVar17 + 8))(local_148,0xffffffff);
          }
          if ((int)uVar21 < 1) {
            uVar8 = juce::jpeglibNamespace::jpeg_fill_bit_buffer(&local_180,uVar10,uVar21,1);
            if ((char)uVar8 == '\0') goto LAB_0037d018;
            uVar10 = local_170;
            uVar21 = local_168;
          }
          uVar9 = (ulong)(uVar21 - 1);
          local_1ac = uVar19;
          if ((uVar10 >> (uVar9 & 0x3f) & 1) == 0) {
            local_1ac = local_14c;
          }
        }
        iVar13 = iVar12;
        if (iVar12 < iVar18) {
          iVar13 = iVar18;
        }
        lVar17 = (long)iVar18 + -1;
        do {
          local_194 = -uVar19;
          lVar15 = (long)*(int *)(lVar3 + 4 + lVar17 * 4);
          if (*(short *)(lVar4 + lVar15 * 2) == 0) {
            iVar20 = iVar18;
            if ((int)uVar16 < 1) goto LAB_0037cf63;
            uVar16 = uVar16 - 1;
          }
          else {
            uVar21 = (uint)uVar9;
            if ((int)uVar21 < 1) {
              uVar8 = juce::jpeglibNamespace::jpeg_fill_bit_buffer(&local_180,uVar10,uVar21,1);
              if ((char)uVar8 == '\0') goto LAB_0037d018;
              uVar9 = (ulong)(local_168 - 1);
              uVar6 = local_170 >> (uVar9 & 0x3f);
              uVar10 = local_170;
            }
            else {
              uVar9 = (ulong)(uVar21 - 1);
              uVar6 = uVar10 >> (uVar9 & 0x3f);
            }
            if (((uVar6 & 1) != 0) &&
               (sVar2 = *(short *)(lVar4 + lVar15 * 2), (uVar19 & (int)sVar2) == 0)) {
              if (-1 < sVar2) {
                local_194 = uVar19;
              }
              *(short *)(lVar4 + lVar15 * 2) = (short)local_194 + sVar2;
            }
          }
          iVar18 = iVar18 + 1;
          lVar17 = lVar17 + 1;
        } while (lVar17 < iVar12);
        iVar20 = iVar13 + 1;
LAB_0037cf63:
        uVar21 = (uint)uVar9;
        if (local_1ac != 0) {
          iVar18 = *(int *)(lVar3 + (long)iVar20 * 4);
          *(short *)(lVar4 + (long)iVar18 * 2) = (short)local_1ac;
          lVar17 = (long)(int)uVar14;
          uVar14 = uVar14 + 1;
          aiStack_138[lVar17] = iVar18;
        }
        iVar18 = iVar20 + 1;
      } while (iVar20 < iVar12);
      iVar18 = 0;
    }
    else {
      uVar14 = 0;
LAB_0037cbdf:
      local_194 = -uVar19;
      if (iVar12 < iVar18) {
        iVar12 = iVar18;
      }
      lVar17 = 0;
      do {
        lVar15 = (long)*(int *)(lVar3 + (long)iVar18 * 4 + lVar17 * 4);
        if (*(short *)(lVar4 + lVar15 * 2) != 0) {
          uVar21 = (uint)uVar9;
          if ((int)uVar21 < 1) {
            uVar8 = juce::jpeglibNamespace::jpeg_fill_bit_buffer(&local_180,uVar10,uVar21,1);
            if ((char)uVar8 == '\0') {
LAB_0037d018:
              if (uVar14 != 0) {
                lVar17 = (long)(int)uVar14;
                for (uVar19 = uVar14 & 3; uVar19 != 0; uVar19 = uVar19 - 1) {
                  lVar3 = lVar17 + -1;
                  lVar17 = lVar17 + -1;
                  *(undefined2 *)(lVar4 + (long)aiStack_138[lVar3] * 2) = 0;
                }
                if (2 < uVar14 - 1) {
                  do {
                    *(undefined2 *)(lVar4 + (long)aiStack_138[lVar17 + -1] * 2) = 0;
                    *(undefined2 *)(lVar4 + (long)aiStack_138[lVar17 + -2] * 2) = 0;
                    *(undefined2 *)(lVar4 + (long)aiStack_138[lVar17 + -3] * 2) = 0;
                    lVar3 = lVar17 + -4;
                    lVar17 = lVar17 + -4;
                    *(undefined2 *)(lVar4 + (long)aiStack_138[lVar3] * 2) = 0;
                  } while ((int)lVar17 != 0);
                }
              }
              return 0;
            }
            uVar9 = (ulong)(local_168 - 1);
            uVar6 = local_170 >> (uVar9 & 0x3f);
            uVar10 = local_170;
          }
          else {
            uVar9 = (ulong)(uVar21 - 1);
            uVar6 = uVar10 >> (uVar9 & 0x3f);
          }
          if (((uVar6 & 1) != 0) &&
             (sVar2 = *(short *)(lVar4 + lVar15 * 2), (uVar19 & (int)sVar2) == 0)) {
            uVar21 = local_194;
            if (-1 < sVar2) {
              uVar21 = uVar19;
            }
            *(short *)(lVar4 + lVar15 * 2) = (short)uVar21 + sVar2;
          }
        }
        uVar21 = (uint)uVar9;
        lVar17 = lVar17 + 1;
      } while ((iVar12 - iVar18) + 1 != (int)lVar17);
      iVar18 = local_1ac + -1;
    }
    puVar5 = (undefined8 *)local_148[5];
    *puVar5 = local_180;
    puVar5[1] = local_178;
    *(ulong *)(local_158 + 0x18) = uVar10;
    *(uint *)(local_158 + 0x20) = uVar21;
    *(int *)(local_158 + 0x28) = iVar18;
    iVar18 = *(int *)((long)local_148 + 0x15c);
    uVar11 = (undefined7)((ulong)local_178 >> 8);
    lVar17 = local_158;
  }
  else {
    uVar11 = (undefined7)((ulong)in_RAX >> 8);
  }
  if (iVar18 == 0) {
    return CONCAT71(uVar11,1);
  }
  *(int *)(lVar17 + 0x40) = *(int *)(lVar17 + 0x40) + -1;
  return CONCAT71(uVar11,1);
}


