// Function : _ZN4juce16jpeglibNamespaceL15encode_mcu_huffEPNS0_20jpeg_compress_structEPPA64_s
// Namespace: 
// Entry    : 00363bf0
// Prototype: undefined8 _ZN4juce16jpeglibNamespaceL15encode_mcu_huffEPNS0_20jpeg_compress_structEPPA64_s(long * param_1, long param_2)
// Body     : 00363bf0 - 00364a05


undefined8
_ZN4juce16jpeglibNamespaceL15encode_mcu_huffEPNS0_20jpeg_compress_structEPPA64_s
          (long *param_1,long param_2)

{
  byte bVar1;
  undefined4 uVar2;
  uint *puVar3;
  undefined8 *puVar4;
  bool bVar5;
  char cVar6;
  char *pcVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  int iVar11;
  int iVar12;
  long *plVar13;
  uint uVar14;
  uint uVar15;
  ulong uVar16;
  long lVar17;
  uint uVar18;
  char *local_d0;
  long local_c8;
  ulong local_c0;
  int iStack_b8;
  int iStack_b4;
  undefined8 local_b0;
  undefined8 uStack_a8;
  long *local_a0;
  long local_98;
  long local_90;
  long local_88;
  uint local_80;
  int local_7c;
  ulong local_78;
  short *local_70;
  uint *local_68;
  long local_60;
  long local_58;
  long local_50;
  long local_48;
  long *local_40;
  long local_38;
  
  local_58 = param_2;
  lVar10 = param_1[0x44];
  local_d0 = *(char **)param_1[5];
  local_c8 = ((undefined8 *)param_1[5])[1];
  local_c0 = *(ulong *)(lVar10 + 0x18);
  iStack_b8 = *(int *)(lVar10 + 0x20);
  iStack_b4 = *(int *)(lVar10 + 0x24);
  local_b0 = *(undefined8 *)(lVar10 + 0x28);
  uStack_a8 = *(undefined8 *)(lVar10 + 0x30);
  local_a0 = param_1;
  plVar13 = param_1;
  if (((int)param_1[0x26] != 0) && (*(int *)(lVar10 + 0x38) == 0)) {
    uVar2 = *(undefined4 *)(lVar10 + 0x3c);
    if (0 < iStack_b8) {
      local_c0 = 0x7fL << (0x11U - (char)iStack_b8 & 0x3f) | local_c0;
      iStack_b8 = iStack_b8 + 7;
      while( true ) {
        *local_d0 = (char)(local_c0 >> 0x10);
        local_c8 = local_c8 + -1;
        local_d0 = local_d0 + 1;
        if (local_c8 == 0) {
          puVar4 = (undefined8 *)local_a0[5];
          cVar6 = (*(code *)puVar4[3])();
          if (cVar6 == '\0') {
            return 0;
          }
          local_c8 = puVar4[1];
          local_d0 = (char *)*puVar4;
        }
        if ((~(uint)local_c0 & 0xff0000) == 0) {
          *local_d0 = '\0';
          local_c8 = local_c8 + -1;
          local_d0 = local_d0 + 1;
          if (local_c8 == 0) {
            puVar4 = (undefined8 *)local_a0[5];
            cVar6 = (*(code *)puVar4[3])();
            if (cVar6 == '\0') {
              return 0;
            }
            local_d0 = (char *)*puVar4;
            local_c8 = puVar4[1];
          }
        }
        if (iStack_b8 < 0x10) break;
        iStack_b8 = iStack_b8 + -8;
        local_c0 = local_c0 << 8;
      }
    }
    local_c0 = 0;
    iStack_b8 = 0;
    pcVar7 = local_d0 + 1;
    *local_d0 = -1;
    local_c8 = local_c8 + -1;
    if (local_c8 == 0) {
      puVar4 = (undefined8 *)local_a0[5];
      cVar6 = (*(code *)puVar4[3])();
      if (cVar6 == '\0') {
        return 0;
      }
      pcVar7 = (char *)*puVar4;
      local_c8 = puVar4[1];
    }
    plVar13 = local_a0;
    local_d0 = pcVar7 + 1;
    *pcVar7 = (char)uVar2 + -0x30;
    local_c8 = local_c8 + -1;
    if (local_c8 == 0) {
      puVar4 = (undefined8 *)local_a0[5];
      cVar6 = (*(code *)puVar4[3])(local_a0);
      if (cVar6 == '\0') {
        return 0;
      }
      local_d0 = (char *)*puVar4;
      local_c8 = puVar4[1];
    }
    if (0 < *(int *)((long)plVar13 + 0x164)) {
      lVar8 = 0;
      do {
        (&iStack_b4)[lVar8] = 0;
        lVar8 = lVar8 + 1;
      } while (lVar8 < *(int *)((long)plVar13 + 0x164));
    }
  }
  local_60 = lVar10;
  lVar8 = local_c8;
  if (0 < (int)param_1[0x32]) {
    local_88 = 0;
    local_40 = param_1;
    do {
      local_38 = (long)*(int *)((long)local_40 + local_88 * 4 + 0x194);
      local_70 = *(short **)(local_58 + local_88 * 8);
      puVar3 = *(uint **)(local_60 + 0x40 + (long)*(int *)(local_40[local_38 + 0x2d] + 0x14) * 8);
      local_68 = *(uint **)(local_60 + 0x60 + (long)*(int *)(local_40[local_38 + 0x2d] + 0x18) * 8);
      local_78 = (ulong)*(uint *)(plVar13 + 0x3b);
      local_7c = (int)plVar13[0xb] + 3;
      local_98 = plVar13[0x3a];
      uVar14 = (int)*local_70 - (&iStack_b4)[local_38];
      if (uVar14 == 0) {
        uVar14 = *puVar3;
        bVar1 = (byte)puVar3[0x100];
        if ((char)bVar1 == 0) {
          puVar4 = (undefined8 *)*plVar13;
          *(undefined4 *)(puVar4 + 5) = 0x29;
          (*(code *)*puVar4)(plVar13);
        }
        lVar10 = local_88;
        uVar18 = (char)bVar1 + iStack_b8;
        uVar16 = (ulong)uVar18;
        local_c0 = (ulong)(uVar14 & ~(uint)(-1L << (bVar1 & 0x3f))) << (0x18U - (char)uVar18 & 0x3f)
                   | local_c0;
        if ((int)uVar18 < 8) {
          uVar16 = (ulong)uVar18;
          goto LAB_00364200;
        }
        lVar9 = local_98;
        do {
          pcVar7 = local_d0 + 1;
          *local_d0 = (char)(local_c0 >> 0x10);
          local_c8 = local_c8 + -1;
          if (local_c8 == 0) {
            puVar4 = (undefined8 *)local_a0[5];
            cVar6 = (*(code *)puVar4[3])();
            if (cVar6 == '\0') {
              return 0;
            }
            pcVar7 = (char *)*puVar4;
            local_c8 = puVar4[1];
            lVar9 = local_98;
          }
          local_d0 = pcVar7;
          if ((~(uint)local_c0 & 0xff0000) == 0) {
            local_d0 = pcVar7 + 1;
            *pcVar7 = '\0';
            local_c8 = local_c8 + -1;
            if (local_c8 == 0) {
              puVar4 = (undefined8 *)local_a0[5];
              cVar6 = (*(code *)puVar4[3])();
              if (cVar6 == '\0') {
                return 0;
              }
              local_d0 = (char *)*puVar4;
              local_c8 = puVar4[1];
              lVar9 = local_98;
            }
          }
          local_c0 = local_c0 << 8;
          iVar11 = (int)uVar16;
          uVar16 = (ulong)(iVar11 - 8);
          lVar8 = local_c8;
        } while (0xf < iVar11);
      }
      else {
        local_90 = CONCAT44(local_90._4_4_,uVar14);
        uVar18 = -uVar14;
        if ((int)-uVar14 < 0) {
          uVar18 = uVar14;
        }
        uVar16 = (ulong)uVar18;
        lVar9 = 0;
        iVar11 = 9;
        do {
          iVar12 = iVar11;
          lVar10 = lVar9;
          uVar16 = uVar16 >> 1;
          lVar9 = lVar10 + 1;
          bVar5 = 1 < uVar18;
          uVar18 = (uint)uVar16;
          iVar11 = iVar12 + 1;
        } while (bVar5);
        if (local_7c <= (int)lVar10) {
          puVar4 = (undefined8 *)*plVar13;
          *(undefined4 *)(puVar4 + 5) = 6;
          (*(code *)*puVar4)(plVar13);
        }
        uVar14 = puVar3[lVar9];
        bVar1 = *(byte *)((long)puVar3 + lVar10 + 0x401);
        if ((char)bVar1 == 0) {
          puVar4 = (undefined8 *)*plVar13;
          *(undefined4 *)(puVar4 + 5) = 0x29;
          (*(code *)*puVar4)(plVar13);
        }
        uVar18 = (char)bVar1 + iStack_b8;
        local_c0 = (ulong)(uVar14 & ~(uint)(-1L << (bVar1 & 0x3f))) << (0x18U - (char)uVar18 & 0x3f)
                   | local_c0;
        uVar14 = uVar18;
        if ((int)uVar18 < 8) {
        }
        else {
          do {
            pcVar7 = local_d0 + 1;
            *local_d0 = (char)(local_c0 >> 0x10);
            local_c8 = local_c8 + -1;
            if (local_c8 == 0) {
              puVar4 = (undefined8 *)local_a0[5];
              cVar6 = (*(code *)puVar4[3])();
              if (cVar6 == '\0') {
                return 0;
              }
              pcVar7 = (char *)*puVar4;
              local_c8 = puVar4[1];
            }
            local_d0 = pcVar7;
            if ((~(uint)local_c0 & 0xff0000) == 0) {
              local_d0 = pcVar7 + 1;
              *pcVar7 = '\0';
              local_c8 = local_c8 + -1;
              if (local_c8 == 0) {
                puVar4 = (undefined8 *)local_a0[5];
                cVar6 = (*(code *)puVar4[3])();
                if (cVar6 == '\0') {
                  return 0;
                }
                local_d0 = (char *)*puVar4;
                local_c8 = puVar4[1];
              }
            }
            local_c0 = local_c0 << 8;
            uVar18 = uVar14 - 8;
            bVar5 = 0xf < (int)uVar14;
            lVar8 = local_c8;
            uVar14 = uVar18;
          } while (bVar5);
        }
        lVar10 = local_88;
        uVar16 = (ulong)uVar18 + lVar9;
        local_c0 = (ulong)(~(uint)(-1L << ((byte)lVar9 & 0x3f)) &
                          ((int)local_90 >> 0x1f) + (int)local_90) <<
                   (0x18 - ((byte)lVar9 + (char)uVar18) & 0x3f) | local_c0;
        if ((int)uVar16 < 8) {
        }
        else {
          iVar11 = uVar18 + iVar12;
          do {
            iVar12 = iVar11;
            pcVar7 = local_d0 + 1;
            *local_d0 = (char)(local_c0 >> 0x10);
            local_c8 = local_c8 + -1;
            if (local_c8 == 0) {
              puVar4 = (undefined8 *)local_a0[5];
              cVar6 = (*(code *)puVar4[3])();
              if (cVar6 == '\0') {
                return 0;
              }
              pcVar7 = (char *)*puVar4;
              local_c8 = puVar4[1];
            }
            local_d0 = pcVar7;
            if ((~(uint)local_c0 & 0xff0000) == 0) {
              local_d0 = pcVar7 + 1;
              *pcVar7 = '\0';
              local_c8 = local_c8 + -1;
              if (local_c8 == 0) {
                puVar4 = (undefined8 *)local_a0[5];
                cVar6 = (*(code *)puVar4[3])();
                if (cVar6 == '\0') {
                  return 0;
                }
                local_d0 = (char *)*puVar4;
                local_c8 = puVar4[1];
              }
            }
            local_c0 = local_c0 << 8;
            iVar11 = iVar12 + -8;
          } while (0xf < iVar11);
          uVar16 = (ulong)(iVar12 - 0x10);
          lVar8 = local_c8;
        }
LAB_00364200:
        lVar9 = local_98;
      }
      iStack_b8 = (int)uVar16;
      if (0 < (int)local_78) {
        local_78 = ~local_78;
        lVar17 = 1;
        do {
          uVar14 = 0;
          while( true ) {
            lVar17 = lVar17 + 1;
            iStack_b8 = (int)uVar16;
            if ((int)local_70[*(int *)(lVar9 + -4 + lVar17 * 4)] != 0) break;
            uVar14 = uVar14 + 1;
            if (local_78 + lVar17 == 0) {
              uVar14 = *local_68;
              bVar1 = (byte)local_68[0x100];
              if ((char)bVar1 == 0) {
                puVar4 = (undefined8 *)*local_a0;
                *(undefined4 *)(puVar4 + 5) = 0x29;
                (*(code *)*puVar4)();
              }
              iStack_b8 = iStack_b8 + (char)bVar1;
              local_c0 = (ulong)(uVar14 & ~(uint)(-1L << (bVar1 & 0x3f))) <<
                         (0x18U - (char)iStack_b8 & 0x3f) | local_c0;
              iVar11 = iStack_b8;
              if (iStack_b8 < 8) {
              }
              else {
                do {
                  pcVar7 = local_d0 + 1;
                  *local_d0 = (char)(local_c0 >> 0x10);
                  local_c8 = local_c8 + -1;
                  if (local_c8 == 0) {
                    puVar4 = (undefined8 *)local_a0[5];
                    cVar6 = (*(code *)puVar4[3])();
                    if (cVar6 == '\0') {
                      return 0;
                    }
                    pcVar7 = (char *)*puVar4;
                    local_c8 = puVar4[1];
                  }
                  local_d0 = pcVar7;
                  if ((~(uint)local_c0 & 0xff0000) == 0) {
                    local_d0 = pcVar7 + 1;
                    *pcVar7 = '\0';
                    local_c8 = local_c8 + -1;
                    if (local_c8 == 0) {
                      puVar4 = (undefined8 *)local_a0[5];
                      cVar6 = (*(code *)puVar4[3])();
                      if (cVar6 == '\0') {
                        return 0;
                      }
                      local_d0 = (char *)*puVar4;
                      local_c8 = puVar4[1];
                    }
                  }
                  local_c0 = local_c0 << 8;
                  iStack_b8 = iVar11 + -8;
                  bVar5 = 0xf < iVar11;
                  lVar8 = local_c8;
                  iVar11 = iStack_b8;
                } while (bVar5);
              }
              goto LAB_0036479c;
            }
          }
          local_90 = lVar17;
          local_80 = (int)local_70[*(int *)(lVar9 + -4 + lVar17 * 4)];
          uVar18 = uVar14;
          if (0xf < uVar14) {
            do {
              uVar14 = local_68[0xf0];
              bVar1 = (byte)local_68[0x13c];
              if ((char)bVar1 == 0) {
                puVar4 = (undefined8 *)*local_a0;
                *(undefined4 *)(puVar4 + 5) = 0x29;
                (*(code *)*puVar4)();
              }
              uVar15 = (int)uVar16 + (int)(char)bVar1;
              uVar16 = (ulong)uVar15;
              local_c0 = (ulong)(uVar14 & ~(uint)(-1L << (bVar1 & 0x3f))) <<
                         (0x18U - (char)uVar15 & 0x3f) | local_c0;
              if ((int)uVar15 < 8) {
                uVar16 = (ulong)uVar15;
              }
              else {
                do {
                  pcVar7 = local_d0 + 1;
                  *local_d0 = (char)(local_c0 >> 0x10);
                  local_c8 = local_c8 + -1;
                  if (local_c8 == 0) {
                    puVar4 = (undefined8 *)local_a0[5];
                    cVar6 = (*(code *)puVar4[3])();
                    if (cVar6 == '\0') {
                      return 0;
                    }
                    pcVar7 = (char *)*puVar4;
                    local_c8 = puVar4[1];
                  }
                  local_d0 = pcVar7;
                  if ((~(uint)local_c0 & 0xff0000) == 0) {
                    local_d0 = pcVar7 + 1;
                    *pcVar7 = '\0';
                    local_c8 = local_c8 + -1;
                    if (local_c8 == 0) {
                      puVar4 = (undefined8 *)local_a0[5];
                      cVar6 = (*(code *)puVar4[3])();
                      if (cVar6 == '\0') {
                        return 0;
                      }
                      local_d0 = (char *)*puVar4;
                      local_c8 = puVar4[1];
                    }
                  }
                  local_c0 = local_c0 << 8;
                  uVar14 = (uint)uVar16;
                  uVar16 = (ulong)(uVar14 - 8);
                  lVar8 = local_c8;
                } while (0xf < uVar14);
              }
              iStack_b8 = (int)uVar16;
              uVar14 = uVar18 - 0x10;
              bVar5 = 0x1f < (int)uVar18;
              uVar18 = uVar14;
            } while (bVar5);
          }
          uVar18 = -local_80;
          if ((int)-local_80 < 0) {
            uVar18 = local_80;
          }
          uVar16 = (ulong)uVar18;
          lVar10 = 0;
          do {
            lVar17 = lVar10;
            uVar16 = uVar16 >> 1;
            lVar10 = lVar17 + -1;
            bVar5 = 1 < uVar18;
            uVar18 = (uint)uVar16;
          } while (bVar5);
          if (local_7c <= -(int)lVar10) {
            puVar4 = (undefined8 *)*local_a0;
            *(undefined4 *)(puVar4 + 5) = 6;
            (*(code *)*puVar4)();
          }
          local_48 = lVar10;
          lVar10 = (long)(int)(uVar14 * 0x10 - (int)lVar10);
          uVar14 = local_68[lVar10];
          bVar1 = *(byte *)((long)local_68 + lVar10 + 0x400);
          if ((char)bVar1 == 0) {
            puVar4 = (undefined8 *)*local_a0;
            *(undefined4 *)(puVar4 + 5) = 0x29;
            (*(code *)*puVar4)();
          }
          lVar10 = local_88;
          lVar9 = local_98;
          local_50 = lVar17;
          uVar18 = iStack_b8 + (char)bVar1;
          local_c0 = (ulong)(uVar14 & ~(uint)(-1L << (bVar1 & 0x3f))) <<
                     (0x18U - (char)uVar18 & 0x3f) | local_c0;
          if (7 < (int)uVar18) {
            do {
              pcVar7 = local_d0 + 1;
              *local_d0 = (char)(local_c0 >> 0x10);
              local_c8 = local_c8 + -1;
              if (local_c8 == 0) {
                puVar4 = (undefined8 *)local_a0[5];
                cVar6 = (*(code *)puVar4[3])();
                if (cVar6 == '\0') {
                  return 0;
                }
                pcVar7 = (char *)*puVar4;
                local_c8 = puVar4[1];
              }
              local_d0 = pcVar7;
              if ((~(uint)local_c0 & 0xff0000) == 0) {
                local_d0 = pcVar7 + 1;
                *pcVar7 = '\0';
                local_c8 = local_c8 + -1;
                if (local_c8 == 0) {
                  puVar4 = (undefined8 *)local_a0[5];
                  cVar6 = (*(code *)puVar4[3])();
                  if (cVar6 == '\0') {
                    return 0;
                  }
                  local_d0 = (char *)*puVar4;
                  local_c8 = puVar4[1];
                }
              }
              local_c0 = local_c0 << 8;
              uVar14 = uVar18 - 8;
              bVar5 = 0xf < uVar18;
              lVar8 = local_c8;
              uVar18 = uVar14;
            } while (bVar5);
          }
          uVar16 = (ulong)uVar18 - local_48;
          local_c0 = (ulong)(~(uint)(-1L << (-(char)local_48 & 0x3fU)) &
                            ((int)local_80 >> 0xf) + local_80) <<
                     (((char)local_48 - (char)uVar18) + 0x18U & 0x3f) | local_c0;
          lVar17 = local_90;
          if (7 < (int)uVar16) {
            uVar14 = (uVar18 - (int)local_50) + 9;
            do {
              uVar18 = uVar14;
              pcVar7 = local_d0 + 1;
              *local_d0 = (char)(local_c0 >> 0x10);
              local_c8 = local_c8 + -1;
              if (local_c8 == 0) {
                puVar4 = (undefined8 *)local_a0[5];
                cVar6 = (*(code *)puVar4[3])();
                if (cVar6 == '\0') {
                  return 0;
                }
                pcVar7 = (char *)*puVar4;
                local_c8 = puVar4[1];
                lVar9 = local_98;
                lVar17 = local_90;
              }
              local_d0 = pcVar7;
              if ((~(uint)local_c0 & 0xff0000) == 0) {
                local_d0 = pcVar7 + 1;
                *pcVar7 = '\0';
                local_c8 = local_c8 + -1;
                if (local_c8 == 0) {
                  puVar4 = (undefined8 *)local_a0[5];
                  cVar6 = (*(code *)puVar4[3])();
                  if (cVar6 == '\0') {
                    return 0;
                  }
                  local_d0 = (char *)*puVar4;
                  local_c8 = puVar4[1];
                  lVar9 = local_98;
                  lVar17 = local_90;
                }
              }
              local_c0 = local_c0 << 8;
              uVar14 = uVar18 - 8;
            } while (0xf < uVar14);
            uVar16 = (ulong)(uVar18 - 0x10);
            lVar8 = local_c8;
          }
          iStack_b8 = (int)uVar16;
        } while (local_78 + lVar17 != 0);
      }
LAB_0036479c:
      (&iStack_b4)[local_38] = (int)**(short **)(local_58 + lVar10 * 8);
      local_88 = lVar10 + 1;
      if ((int)local_40[0x32] <= local_88) goto LAB_003649a1;
      plVar13 = local_a0;
    } while( true );
  }
LAB_003649a6:
  puVar4 = (undefined8 *)param_1[5];
  *puVar4 = local_d0;
  puVar4[1] = lVar8;
  *(undefined8 *)(local_60 + 0x28) = local_b0;
  *(undefined8 *)(local_60 + 0x30) = uStack_a8;
  *(ulong *)(local_60 + 0x18) = local_c0;
  *(ulong *)(local_60 + 0x20) = CONCAT44(iStack_b4,iStack_b8);
  lVar10 = param_1[0x26];
  if ((int)lVar10 != 0) {
    iVar11 = *(int *)(local_60 + 0x38);
    if (*(int *)(local_60 + 0x38) == 0) {
      *(uint *)(local_60 + 0x3c) = *(int *)(local_60 + 0x3c) + 1U & 7;
      iVar11 = (int)lVar10;
    }
    *(int *)(local_60 + 0x38) = iVar11 + -1;
  }
  return CONCAT71((int7)((ulong)(local_60 + 0x18) >> 8),1);
LAB_003649a1:
  param_1 = local_40;
  goto LAB_003649a6;
}


