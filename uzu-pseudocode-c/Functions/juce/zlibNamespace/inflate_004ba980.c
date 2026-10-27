// Function : inflate
// Namespace: juce:zlibNamespace
// Entry    : 004ba980
// Prototype: int inflate(long * param_1, int param_2)
// Body     : 004ba980 - 004bd3a6


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::zlibNamespace::inflate(juce::zlibNamespace::z_stream_s*, int) */

int __cdecl juce::zlibNamespace::inflate(long *param_1,int param_2)

{
  long *plVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  char cVar4;
  undefined1 uVar5;
  long *plVar6;
  byte bVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  ulong *puVar12;
  long *plVar13;
  undefined2 uVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  undefined8 uVar18;
  ulong uVar19;
  char *pcVar20;
  void *__dest;
  ulong uVar21;
  byte bVar22;
  uint uVar23;
  undefined1 *puVar24;
  int iVar25;
  long lVar26;
  ulong uVar27;
  int iVar28;
  uint uVar29;
  ulong uVar30;
  byte bVar31;
  ushort *puVar32;
  ulong *puVar33;
  long lVar34;
  uint uVar35;
  uint uVar36;
  ulong uVar37;
  byte bVar38;
  uint uVar39;
  ushort uVar40;
  undefined1 *__dest_00;
  uint uVar41;
  uint uVar42;
  undefined4 uVar43;
  undefined1 auVar44 [16];
  int local_bc;
  ulong local_b0;
  ulong local_98;
  ulong *local_90;
  uint local_80;
  undefined4 local_7c;
  ulong *local_78;
  int local_6c;
  long *local_68;
  long *local_60;
  long *local_58;
  uint *local_50;
  long *local_48;
  uint *local_40;
  ulong local_38;
  
  if (param_1 == (long *)0x0) {
    return -2;
  }
  if (param_1[8] == 0) {
    return -2;
  }
  if (param_1[9] == 0) {
    return -2;
  }
  plVar6 = (long *)param_1[7];
  if (plVar6 == (long *)0x0) {
    return -2;
  }
  if ((long *)*plVar6 != param_1) {
    return -2;
  }
  iVar25 = (int)plVar6[1];
  if (0x1f < iVar25 - 0x3f34U) {
    return -2;
  }
  __dest_00 = (undefined1 *)param_1[3];
  if (__dest_00 == (undefined1 *)0x0) {
    return -2;
  }
  local_90 = (ulong *)*param_1;
  if ((local_90 == (ulong *)0x0) && ((int)param_1[1] != 0)) {
    return -2;
  }
  plVar1 = plVar6 + 1;
  if (iVar25 == 0x3f3f) {
    *(int *)plVar1 = 0x3f40;
    iVar25 = 0x3f40;
  }
  local_38 = (ulong)*(uint *)(param_1 + 1);
  uVar41 = *(uint *)(param_1 + 4);
  uVar21 = plVar6[10];
  local_b0 = (ulong)*(uint *)(plVar6 + 0xb);
  local_78 = (ulong *)(plVar6 + 4);
  local_48 = plVar6 + 0xab;
  local_68 = plVar6 + 0x12;
  local_50 = (uint *)(plVar6 + 0xf);
  local_58 = plVar6 + 0x13;
  local_60 = plVar6 + 99;
  local_40 = (uint *)((long)plVar6 + 0x7c);
  local_bc = 0;
  local_98 = (ulong)*(uint *)(param_1 + 1);
  local_6c = param_2;
  uVar42 = uVar41;
LAB_004baab4:
  puVar12 = local_78;
  uVar23 = (uint)local_98;
  uVar16 = (uint)local_b0;
  bVar22 = (byte)local_b0;
  puVar33 = local_90;
  iVar17 = 1;
  iVar28 = -3;
  uVar29 = uVar16;
  switch(iVar25) {
  case 0x3f34:
    uVar36 = *(uint *)(plVar6 + 2);
    if (uVar36 == 0) {
      *(int *)plVar1 = 0x3f40;
LAB_004bba83:
      iVar25 = (int)*plVar1;
      goto LAB_004baab4;
    }
    uVar19 = uVar21;
    if (uVar16 < 0x10) {
      if (uVar23 == 0) {
LAB_004bd389:
        uVar23 = 0;
        iVar28 = local_bc;
        goto switchD_004baad4_caseD_3f51;
      }
      uVar29 = uVar23 - 1;
      puVar33 = (ulong *)((long)local_90 + 1);
      uVar21 = ((ulong)(byte)*local_90 << (bVar22 & 0x3f)) + uVar21;
      uVar19 = local_b0 + 8;
      if (uVar16 < 8) {
        if (uVar29 == 0) {
          uVar29 = (uint)uVar19;
          goto LAB_004bd389;
        }
        uVar29 = uVar23 - 2;
        puVar33 = (ulong *)((long)local_90 + 2);
        uVar21 = uVar21 + ((ulong)*(byte *)((long)local_90 + 1) << ((byte)uVar19 & 0x3f));
        uVar19 = local_b0 + 0x10;
      }
      local_98 = (ulong)uVar29;
      local_b0 = uVar19 & 0xffffffff;
      local_90 = puVar33;
      uVar19 = uVar21;
    }
    if (((uVar36 & 2) != 0) && (uVar19 == 0x8b1f)) {
      if ((int)plVar6[7] == 0) {
        *(undefined4 *)(plVar6 + 7) = 0xf;
      }
      *local_78 = 0;
      local_7c = CONCAT22(local_7c._2_2_,0x8b1f);
      uVar21 = 0;
      uVar19 = crc32_z(0,(ulong *)&local_7c,2);
      *puVar12 = uVar19;
      *(int *)plVar1 = 0x3f35;
      local_b0 = 0;
      goto LAB_004bb1ba;
    }
    if (plVar6[6] != 0) {
      *(undefined4 *)(plVar6[6] + 0x48) = 0xffffffff;
    }
    if (((uVar36 & 1) == 0) ||
       (0x842108421084210 <
        ((uVar19 >> 8) + (ulong)(((uint)uVar19 & 0xff) << 8)) * -0x1084210842108421)) {
      pcVar20 = "incorrect header check";
    }
    else {
      if (((uint)uVar19 & 0xf) == 8) {
        uVar21 = uVar19 >> 4;
        uVar16 = (uint)uVar21 & 0xf;
        uVar29 = uVar16 + 8;
        uVar23 = *(uint *)(plVar6 + 7);
        if (*(uint *)(plVar6 + 7) == 0) {
          *(uint *)(plVar6 + 7) = uVar29;
          uVar23 = uVar29;
        }
        if ((uVar16 < 8) && (uVar29 <= uVar23)) {
          *(int *)((long)plVar6 + 0x1c) = 0x100 << (sbyte)uVar16;
          *(undefined4 *)(plVar6 + 3) = 0;
          plVar6[4] = 1;
          param_1[0xc] = 1;
          *(uint *)(plVar6 + 1) = (uint)((uVar19 & 0x2000) == 0) * 2 + 0x3f3d;
          uVar21 = 0;
          local_b0 = 0;
          iVar25 = (int)*plVar1;
        }
        else {
          local_b0 = (ulong)((int)local_b0 - 4);
          param_1[6] = (long)"invalid window size";
          *(int *)plVar1 = 0x3f51;
          iVar25 = (int)*plVar1;
        }
        goto LAB_004baab4;
      }
      pcVar20 = "unknown compression method";
    }
    param_1[6] = (long)pcVar20;
    *(int *)plVar1 = 0x3f51;
    uVar21 = uVar19;
    goto LAB_004bba83;
  case 0x3f35:
    if (uVar16 < 0x10) {
      if (uVar23 == 0) {
LAB_004bd104:
        local_90 = puVar33;
LAB_004bd10b:
        uVar23 = 0;
        puVar33 = local_90;
        iVar28 = local_bc;
        goto switchD_004baad4_caseD_3f51;
      }
      uVar36 = uVar23 - 1;
      puVar33 = (ulong *)((long)local_90 + 1);
      uVar21 = ((ulong)(byte)*local_90 << (bVar22 & 0x3f)) + uVar21;
      uVar19 = local_b0 + 8;
      uVar29 = (uint)uVar19;
      if (uVar16 < 8) {
        if (uVar36 == 0) goto LAB_004bd104;
        uVar36 = uVar23 - 2;
        uVar21 = uVar21 + ((ulong)*(byte *)((long)local_90 + 1) << ((byte)uVar19 & 0x3f));
        uVar19 = local_b0 + 0x10;
        puVar33 = (ulong *)((long)local_90 + 2);
      }
      local_90 = puVar33;
      local_98 = (ulong)uVar36;
      local_b0 = uVar19 & 0xffffffff;
    }
    uVar23 = (uint)local_98;
    *(int *)(plVar6 + 3) = (int)uVar21;
    if ((char)uVar21 == '\b') {
      if ((uVar21 & 0xe000) == 0) {
        if ((uint *)plVar6[6] != (uint *)0x0) {
          *(uint *)plVar6[6] = (uint)(uVar21 >> 8) & 1;
        }
        if (((uVar21 & 0x200) != 0) && ((*(byte *)(plVar6 + 2) & 4) != 0)) {
          local_7c = CONCAT22(local_7c._2_2_,(short)uVar21);
          uVar21 = crc32_z((uint)*local_78,(ulong *)&local_7c,2);
          *puVar12 = uVar21;
        }
        *(int *)plVar1 = 0x3f36;
        local_b0 = 0;
        uVar21 = 0;
        goto LAB_004bbb44;
      }
      pcVar20 = "unknown header flags set";
    }
    else {
      pcVar20 = "unknown compression method";
    }
    break;
  case 0x3f36:
    if (uVar16 < 0x20) {
LAB_004bbb44:
      uVar29 = (uint)local_b0;
      if (uVar23 == 0) {
        puVar33 = local_90;
LAB_004bd0c5:
        uVar23 = 0;
        iVar28 = local_bc;
        goto switchD_004baad4_caseD_3f51;
      }
      uVar16 = uVar23 - 1;
      puVar33 = (ulong *)((long)local_90 + 1);
      uVar21 = uVar21 + ((ulong)(byte)*local_90 << ((byte)local_b0 & 0x3f));
      if (0x17 < uVar29) {
LAB_004bbbf8:
        local_90 = puVar33;
        uVar23 = uVar16;
        goto LAB_004bbc01;
      }
      uVar36 = (uint)(local_b0 + 8);
      if (uVar16 == 0) {
LAB_004bd0bf:
        uVar29 = uVar36;
        goto LAB_004bd0c5;
      }
      uVar16 = uVar23 - 2;
      puVar33 = (ulong *)((long)local_90 + 2);
      uVar21 = uVar21 + ((ulong)*(byte *)((long)local_90 + 1) << ((byte)(local_b0 + 8) & 0x3f));
      if (0xf < uVar29) goto LAB_004bbbf8;
      uVar36 = (uint)(local_b0 + 0x10);
      if (uVar16 == 0) goto LAB_004bd0bf;
      uVar21 = uVar21 + ((ulong)*(byte *)((long)local_90 + 2) << ((byte)(local_b0 + 0x10) & 0x3f));
      puVar33 = (ulong *)((long)local_90 + 3);
      puVar12 = local_78;
      if (uVar29 < 8) {
        uVar29 = (uint)(local_b0 + 0x18);
        if (uVar23 - 3 == 0) goto LAB_004bd0c5;
        uVar23 = uVar23 - 4;
        puVar33 = (ulong *)((long)local_90 + 4);
        uVar21 = uVar21 + ((ulong)*(byte *)((long)local_90 + 3) << ((byte)(local_b0 + 0x18) & 0x3f))
        ;
        lVar26 = plVar6[6];
      }
      else {
        lVar26 = plVar6[6];
        uVar23 = uVar23 - 3;
      }
    }
    else {
LAB_004bbc01:
      lVar26 = plVar6[6];
      puVar33 = local_90;
      puVar12 = local_78;
    }
    if (lVar26 != 0) {
      *(ulong *)(lVar26 + 8) = uVar21;
    }
    local_78 = puVar12;
    if (((*(byte *)((long)plVar6 + 0x19) & 2) != 0) && ((*(byte *)(plVar6 + 2) & 4) != 0)) {
      local_7c = (undefined4)uVar21;
      uVar21 = crc32_z((uint)*puVar12,(ulong *)&local_7c,4);
      *puVar12 = uVar21;
    }
    *(int *)plVar1 = 0x3f37;
    local_b0 = 0;
    uVar21 = 0;
LAB_004bbc74:
    uVar29 = (uint)local_b0;
    if (uVar23 != 0) {
      local_98 = (ulong)(uVar23 - 1);
      local_90 = (ulong *)((long)puVar33 + 1);
      uVar21 = uVar21 + ((ulong)(byte)*puVar33 << ((byte)local_b0 & 0x3f));
      if (7 < uVar29) {
LAB_004bbccc:
        puVar33 = local_78;
        uVar23 = (uint)local_98;
        lVar26 = plVar6[6];
        if (lVar26 != 0) {
          *(uint *)(lVar26 + 0x10) = (uint)uVar21 & 0xff;
          *(int *)(lVar26 + 0x14) = (int)(uVar21 >> 8);
        }
        local_80 = *(uint *)(plVar6 + 3);
        if (((local_80 & 0x200) != 0) && ((*(byte *)(plVar6 + 2) & 4) != 0)) {
          local_7c = CONCAT22(local_7c._2_2_,(short)uVar21);
          uVar21 = crc32_z((uint)*local_78,(ulong *)&local_7c,2);
          *puVar33 = uVar21;
        }
        *(int *)plVar1 = 0x3f38;
        uVar21 = 0;
        local_b0 = 0;
        uVar16 = 0;
        uVar36 = local_80 & 0x400;
        puVar33 = local_90;
        if (uVar36 != 0) goto LAB_004bbd8b;
        goto LAB_004bbd6e;
      }
      uVar29 = (uint)(local_b0 + 8);
      if (uVar23 - 1 != 0) {
        local_98 = (ulong)(uVar23 - 2);
        local_90 = (ulong *)((long)puVar33 + 2);
        uVar21 = uVar21 + ((ulong)*(byte *)((long)puVar33 + 1) << ((byte)(local_b0 + 8) & 0x3f));
        goto LAB_004bbccc;
      }
LAB_004bd054:
      puVar33 = local_90;
    }
    goto LAB_004bd057;
  case 0x3f37:
    if (uVar16 < 0x10) goto LAB_004bbc74;
    goto LAB_004bbccc;
  case 0x3f38:
    local_80 = *(uint *)(plVar6 + 3);
    uVar36 = local_80 & 0x400;
    if (uVar36 == 0) {
      lVar26 = plVar6[6];
LAB_004bbd6e:
      uVar36 = 0;
      if (lVar26 != 0) {
        *(undefined8 *)(lVar26 + 0x18) = 0;
      }
    }
    else {
      if (uVar16 < 0x10) {
LAB_004bbd8b:
        uVar29 = (uint)local_b0;
        if (uVar23 == 0) goto LAB_004bd057;
        uVar16 = uVar23 - 1;
        local_90 = (ulong *)((long)puVar33 + 1);
        uVar21 = uVar21 + ((ulong)(byte)*puVar33 << ((byte)local_b0 & 0x3f));
        if (uVar29 < 8) {
          uVar29 = (uint)(local_b0 + 8);
          if (uVar16 == 0) goto LAB_004bd054;
          uVar16 = uVar23 - 2;
          local_90 = (ulong *)((long)puVar33 + 2);
          uVar21 = uVar21 + ((ulong)*(byte *)((long)puVar33 + 1) << ((byte)(local_b0 + 8) & 0x3f));
        }
        local_98 = (ulong)uVar16;
      }
      puVar33 = local_78;
      *(int *)((long)plVar6 + 0x5c) = (int)uVar21;
      if (plVar6[6] != 0) {
        *(int *)(plVar6[6] + 0x20) = (int)uVar21;
      }
      if (((local_80 & 0x200) != 0) && ((*(byte *)(plVar6 + 2) & 4) != 0)) {
        local_7c = CONCAT22(local_7c._2_2_,(short)uVar21);
        uVar21 = crc32_z((uint)*local_78,(ulong *)&local_7c,2);
        *puVar33 = uVar21;
      }
      uVar21 = 0;
      uVar16 = 0;
    }
    *(int *)plVar1 = 0x3f39;
    local_b0 = (ulong)uVar16;
    goto LAB_004bbe82;
  case 0x3f39:
    local_80 = *(uint *)(plVar6 + 3);
    uVar36 = local_80 & 0x400;
LAB_004bbe82:
    uVar29 = (uint)local_b0;
    if (uVar36 == 0) {
LAB_004bbfa1:
      *(undefined4 *)((long)plVar6 + 0x5c) = 0;
      *(undefined4 *)(plVar6 + 1) = 0x3f3a;
LAB_004bbfb1:
      uVar29 = (uint)local_b0;
      if ((local_80 & 0x800) == 0) {
        if (plVar6[6] != 0) {
          *(undefined8 *)(plVar6[6] + 0x28) = 0;
        }
LAB_004bc0b0:
        *(undefined4 *)((long)plVar6 + 0x5c) = 0;
        *(undefined4 *)(plVar6 + 1) = 0x3f3b;
LAB_004bc0c0:
        uVar29 = (uint)local_b0;
        if ((local_80 & 0x1000) == 0) {
          if (plVar6[6] != 0) {
            *(undefined8 *)(plVar6[6] + 0x38) = 0;
          }
        }
        else {
          if ((int)local_98 == 0) goto LAB_004bcfd0;
          uVar19 = 0;
          do {
            cVar4 = *(char *)((long)local_90 + uVar19);
            lVar26 = plVar6[6];
            if ((lVar26 != 0) && (lVar34 = *(long *)(lVar26 + 0x38), lVar34 != 0)) {
              uVar23 = *(uint *)((long)plVar6 + 0x5c);
              if (uVar23 < *(uint *)(lVar26 + 0x40)) {
                *(uint *)((long)plVar6 + 0x5c) = uVar23 + 1;
                *(char *)(lVar34 + (ulong)uVar23) = cVar4;
              }
            }
            uVar19 = uVar19 + 1;
          } while ((cVar4 != '\0') && (uVar19 < local_98));
          local_80 = *(uint *)(plVar6 + 3);
          if (((local_80 & 0x200) != 0) && ((*(byte *)(plVar6 + 2) & 4) != 0)) {
            uVar27 = crc32_z((uint)*local_78,local_90,uVar19);
            *local_78 = uVar27;
          }
          if (cVar4 != '\0') {
            local_90 = (ulong *)((long)local_90 + uVar19);
            uVar23 = (int)local_98 - (int)uVar19;
            goto LAB_004bcff0;
          }
          local_90 = (ulong *)((long)local_90 + uVar19);
          local_98 = local_98 - uVar19 & 0xffffffff;
        }
        *(int *)plVar1 = 0x3f3c;
LAB_004bc1c6:
        uVar23 = (uint)local_b0;
        if ((local_80 & 0x200) != 0) {
          if (uVar23 < 0x10) {
            iVar25 = (int)local_98;
            puVar33 = local_90;
            uVar29 = uVar23;
            if (iVar25 == 0) {
LAB_004bd074:
              uVar23 = 0;
              iVar28 = local_bc;
              goto switchD_004baad4_caseD_3f51;
            }
            uVar16 = iVar25 - 1;
            puVar33 = (ulong *)((long)local_90 + 1);
            uVar21 = ((ulong)(byte)*local_90 << ((byte)local_b0 & 0x3f)) + uVar21;
            uVar19 = local_b0 + 8;
            uVar29 = (uint)uVar19;
            if (uVar23 < 8) {
              if (uVar16 == 0) goto LAB_004bd074;
              uVar16 = iVar25 - 2;
              uVar21 = uVar21 + ((ulong)*(byte *)((long)local_90 + 1) << ((byte)uVar19 & 0x3f));
              uVar19 = local_b0 + 0x10;
              puVar33 = (ulong *)((long)local_90 + 2);
            }
            local_90 = puVar33;
            local_98 = (ulong)uVar16;
            local_b0 = uVar19 & 0xffffffff;
          }
          if ((*(byte *)(plVar6 + 2) & 4) == 0) {
            uVar21 = 0;
            local_b0 = 0;
          }
          else {
            if (uVar21 != (ushort)*local_78) {
              pcVar20 = "header crc mismatch";
              break;
            }
            uVar21 = 0;
            local_b0 = 0;
          }
        }
        lVar26 = plVar6[6];
        if (lVar26 != 0) {
          *(uint *)(lVar26 + 0x44) = local_80 >> 9 & 1;
          *(undefined4 *)(lVar26 + 0x48) = 1;
        }
        *local_78 = 0;
        param_1[0xc] = 0;
        *(int *)plVar1 = 0x3f3f;
        iVar25 = (int)*plVar1;
        goto LAB_004baab4;
      }
      if ((int)local_98 != 0) {
        uVar19 = 0;
        do {
          cVar4 = *(char *)((long)local_90 + uVar19);
          lVar26 = plVar6[6];
          if ((lVar26 != 0) && (lVar34 = *(long *)(lVar26 + 0x28), lVar34 != 0)) {
            uVar23 = *(uint *)((long)plVar6 + 0x5c);
            if (uVar23 < *(uint *)(lVar26 + 0x30)) {
              *(uint *)((long)plVar6 + 0x5c) = uVar23 + 1;
              *(char *)(lVar34 + (ulong)uVar23) = cVar4;
            }
          }
          uVar19 = uVar19 + 1;
        } while ((cVar4 != '\0') && (uVar19 < local_98));
        local_80 = *(uint *)(plVar6 + 3);
        if (((local_80 & 0x200) != 0) && ((*(byte *)(plVar6 + 2) & 4) != 0)) {
          uVar27 = crc32_z((uint)*local_78,local_90,uVar19);
          *local_78 = uVar27;
        }
        if (cVar4 == '\0') {
          local_90 = (ulong *)((long)local_90 + uVar19);
          local_98 = local_98 - uVar19 & 0xffffffff;
          goto LAB_004bc0b0;
        }
        local_90 = (ulong *)((long)local_90 + uVar19);
        uVar23 = (int)local_98 - (int)uVar19;
LAB_004bcff0:
        iVar17 = local_bc;
        goto switchD_004baad4_caseD_3f50;
      }
LAB_004bcfd0:
      uVar23 = 0;
    }
    else {
      uVar16 = *(uint *)((long)plVar6 + 0x5c);
      uVar36 = (uint)local_98;
      uVar23 = uVar16;
      if (uVar36 < uVar16) {
        uVar23 = uVar36;
      }
      if (uVar23 != 0) {
        lVar26 = plVar6[6];
        if ((lVar26 != 0) && (*(long *)(lVar26 + 0x18) != 0)) {
          uVar35 = *(uint *)(lVar26 + 0x24);
          uVar16 = *(int *)(lVar26 + 0x20) - uVar16;
          if (uVar16 <= uVar35 && uVar35 - uVar16 != 0) {
            uVar39 = uVar35 - uVar16;
            if (uVar16 + uVar23 <= uVar35) {
              uVar39 = uVar23;
            }
            memcpy((void *)(*(long *)(lVar26 + 0x18) + (ulong)uVar16),local_90,(ulong)uVar39);
            local_80 = *(uint *)(plVar6 + 3);
          }
        }
        puVar33 = local_78;
        if (((local_80 & 0x200) != 0) && ((*(byte *)(plVar6 + 2) & 4) != 0)) {
          uVar19 = crc32_z((uint)*local_78,local_90,(ulong)uVar23);
          *puVar33 = uVar19;
        }
        local_98 = (ulong)(uVar36 - uVar23);
        local_90 = (ulong *)((long)local_90 + (ulong)uVar23);
        uVar16 = *(int *)((long)plVar6 + 0x5c) - uVar23;
        *(uint *)((long)plVar6 + 0x5c) = uVar16;
      }
      uVar23 = (uint)local_98;
      if (uVar16 == 0) goto LAB_004bbfa1;
    }
LAB_004bcfd3:
    puVar33 = local_90;
    iVar28 = local_bc;
    goto switchD_004baad4_caseD_3f51;
  case 0x3f3a:
    local_80 = *(uint *)(plVar6 + 3);
    goto LAB_004bbfb1;
  case 0x3f3b:
    local_80 = *(uint *)(plVar6 + 3);
    goto LAB_004bc0c0;
  case 0x3f3c:
    local_80 = *(uint *)(plVar6 + 3);
    goto LAB_004bc1c6;
  case 0x3f3d:
    if (0x1f < uVar16) {
LAB_004bb8d6:
      uVar29 = (uint)uVar21;
      uVar21 = (ulong)(uVar29 >> 0x18 | (uVar29 & 0xff0000) >> 8 | (uVar29 & 0xff00) << 8 |
                      uVar29 << 0x18);
      *local_78 = uVar21;
      param_1[0xc] = uVar21;
      *(int *)plVar1 = 0x3f3e;
      uVar21 = 0;
      uVar29 = 0;
      goto switchD_004baad4_caseD_3f3e;
    }
    if (uVar23 != 0) {
      uVar36 = uVar23 - 1;
      puVar33 = (ulong *)((long)local_90 + 1);
      uVar21 = uVar21 + ((ulong)(byte)*local_90 << (bVar22 & 0x3f));
      if (0x17 < uVar16) {
LAB_004bb8cd:
        local_98 = (ulong)uVar36;
        goto LAB_004bb8d6;
      }
      uVar29 = (uint)(local_b0 + 8);
      if (uVar36 != 0) {
        uVar36 = uVar23 - 2;
        puVar33 = (ulong *)((long)local_90 + 2);
        uVar21 = uVar21 + ((ulong)*(byte *)((long)local_90 + 1) << ((byte)(local_b0 + 8) & 0x3f));
        if (0xf < uVar16) goto LAB_004bb8cd;
        uVar29 = (uint)(local_b0 + 0x10);
        if (uVar36 != 0) {
          local_98 = (ulong)(uVar23 - 3);
          puVar33 = (ulong *)((long)local_90 + 3);
          uVar21 = uVar21 + ((ulong)*(byte *)((long)local_90 + 2) <<
                            ((byte)(local_b0 + 0x10) & 0x3f));
          if (uVar16 < 8) {
            uVar29 = (uint)(local_b0 + 0x18);
            if (uVar23 - 3 == 0) goto LAB_004bd0d4;
            local_98 = (ulong)(uVar23 - 4);
            puVar33 = (ulong *)((long)local_90 + 4);
            uVar21 = uVar21 + ((ulong)*(byte *)((long)local_90 + 3) <<
                              ((byte)(local_b0 + 0x18) & 0x3f));
          }
          goto LAB_004bb8d6;
        }
      }
    }
LAB_004bd0d4:
    uVar23 = 0;
    iVar28 = local_bc;
    goto switchD_004baad4_caseD_3f51;
  case 0x3f3e:
switchD_004baad4_caseD_3f3e:
    if (*(int *)((long)plVar6 + 0x14) == 0) {
      param_1[3] = (long)__dest_00;
      *(uint *)(param_1 + 4) = uVar41;
      *param_1 = (long)puVar33;
      *(int *)(param_1 + 1) = (int)local_98;
      plVar6[10] = uVar21;
      *(uint *)(plVar6 + 0xb) = uVar29;
      return 2;
    }
    *local_78 = 1;
    param_1[0xc] = 1;
    *(int *)plVar1 = 0x3f3f;
    local_90 = puVar33;
switchD_004baad4_caseD_3f3f:
    if (*(int *)((long)plVar6 + 0xc) == 0) {
      if (uVar29 < 3) {
        puVar33 = local_90;
        if ((int)local_98 == 0) {
LAB_004bd057:
          uVar23 = 0;
          iVar28 = local_bc;
          goto switchD_004baad4_caseD_3f51;
        }
        uVar19 = *local_90;
        local_98 = (ulong)((int)local_98 - 1);
        local_90 = (ulong *)((long)local_90 + 1);
        uVar21 = uVar21 + ((ulong)(byte)uVar19 << ((byte)uVar29 & 0x3f));
        uVar29 = uVar29 + 8;
      }
      *(uint *)((long)plVar6 + 0xc) = (uint)uVar21 & 1;
      iVar25 = 0x3f41;
      switch((uint)(uVar21 >> 1) & 3) {
      case 1:
        plVar6[0xd] = (long)fixedtables(juce::zlibNamespace::inflate_state*)::lenfix;
        plVar6[0xf] = 0x500000009;
        plVar6[0xe] = (long)fixedtables(juce::zlibNamespace::inflate_state*)::distfix;
        iVar25 = 0x3f47;
        break;
      case 2:
        iVar25 = 0x3f44;
        break;
      case 3:
        param_1[6] = (long)"invalid block type";
        iVar25 = 0x3f51;
      }
      *(int *)plVar1 = iVar25;
      uVar21 = uVar21 >> 3;
      local_b0 = (ulong)(uVar29 - 3);
      iVar25 = (int)*plVar1;
    }
    else {
      uVar21 = uVar21 >> ((byte)uVar29 & 7);
      local_b0 = (ulong)(uVar29 & 0xfffffff8);
      *(int *)plVar1 = 0x3f4e;
      iVar25 = (int)*plVar1;
    }
    goto LAB_004baab4;
  case 0x3f3f:
  case 0x3f40:
    goto switchD_004baad4_caseD_3f3f;
  case 0x3f41:
    uVar21 = uVar21 >> (bVar22 & 7);
    uVar29 = uVar16 & 0xfffffff8;
    uVar35 = uVar29;
    if (uVar29 < 0x20) {
      if (uVar23 == 0) goto LAB_004bd104;
      local_98 = (ulong)(uVar23 - 1);
      puVar33 = (ulong *)((long)local_90 + 1);
      uVar21 = ((ulong)(byte)*local_90 << ((byte)uVar29 & 0x3f)) + uVar21;
      uVar35 = uVar29 + 8;
      if (uVar29 < 0x18) {
        if (uVar23 - 1 == 0) {
LAB_004bd0af:
          uVar29 = uVar35;
          goto LAB_004bd104;
        }
        local_98 = (ulong)(uVar23 - 2);
        puVar33 = (ulong *)((long)local_90 + 2);
        uVar21 = uVar21 + ((ulong)*(byte *)((long)local_90 + 1) << ((byte)uVar35 & 0x3f));
        uVar35 = uVar29 + 0x10;
        if (uVar29 < 0x10) {
          if (uVar23 - 2 == 0) goto LAB_004bd0af;
          local_98 = (ulong)(uVar23 - 3);
          puVar33 = (ulong *)((long)local_90 + 3);
          uVar21 = uVar21 + ((ulong)*(byte *)((long)local_90 + 2) << ((byte)uVar35 & 0x3f));
          uVar35 = uVar29 + 0x18;
          if ((local_b0 & 0xfffffff8) == 0) {
            if (uVar23 - 3 == 0) goto LAB_004bd0af;
            puVar33 = (ulong *)((long)local_90 + 4);
            uVar21 = uVar21 + ((ulong)*(byte *)((long)local_90 + 3) << ((byte)uVar35 & 0x3f));
            uVar35 = uVar29 + 0x20;
            local_98 = (ulong)(uVar23 - 4);
          }
        }
      }
      local_90 = puVar33;
    }
    local_b0 = (ulong)uVar35;
    if ((uVar21 & 0xffff) == (uVar21 >> 0x10 ^ 0xffff)) {
      *(uint *)((long)plVar6 + 0x5c) = (uint)uVar21 & 0xffff;
      uVar21 = 0;
      local_b0 = 0;
      goto switchD_004baad4_caseD_3f42;
    }
    pcVar20 = "invalid stored block lengths";
    break;
  case 0x3f42:
switchD_004baad4_caseD_3f42:
    *(int *)plVar1 = 0x3f43;
  case 0x3f43:
    uVar29 = (uint)local_b0;
    uVar23 = (uint)local_98;
    uVar16 = *(uint *)((long)plVar6 + 0x5c);
    if (uVar16 == 0) {
      *(int *)plVar1 = 0x3f3f;
      iVar25 = (int)*plVar1;
    }
    else {
      if (uVar23 < uVar16) {
        uVar16 = uVar23;
      }
      if (uVar41 < uVar16) {
        uVar16 = uVar41;
      }
      if (uVar16 == 0) goto LAB_004bcfd3;
      uVar19 = (ulong)uVar16;
      memcpy(__dest_00,local_90,uVar19);
      local_98 = (ulong)(uVar23 - uVar16);
      local_90 = (ulong *)((long)local_90 + uVar19);
      uVar41 = uVar41 - uVar16;
      __dest_00 = __dest_00 + uVar19;
      *(int *)((long)plVar6 + 0x5c) = *(int *)((long)plVar6 + 0x5c) - uVar16;
      iVar25 = (int)*plVar1;
    }
    goto LAB_004baab4;
  case 0x3f44:
    if (uVar16 < 0xe) {
      if (uVar23 != 0) {
        uVar36 = uVar23 - 1;
        puVar33 = (ulong *)((long)local_90 + 1);
        uVar21 = ((ulong)(byte)*local_90 << (bVar22 & 0x3f)) + uVar21;
        uVar29 = (uint)(local_b0 + 8);
        if (uVar16 < 6) {
          if (uVar36 == 0) goto LAB_004bd368;
          uVar36 = uVar23 - 2;
          uVar21 = uVar21 + ((ulong)*(byte *)((long)local_90 + 1) << ((byte)(local_b0 + 8) & 0x3f));
          puVar33 = (ulong *)((long)local_90 + 2);
          uVar29 = uVar16 + 0x10;
        }
        uVar16 = uVar29;
        local_90 = puVar33;
        local_98 = (ulong)uVar36;
        goto LAB_004baf7f;
      }
LAB_004bd368:
      uVar23 = 0;
      iVar28 = local_bc;
      goto switchD_004baad4_caseD_3f51;
    }
LAB_004baf7f:
    uVar36 = (uint)uVar21 & 0x1f;
    *(uint *)((long)plVar6 + 0x84) = uVar36 + 0x101;
    uVar29 = (uint)(uVar21 >> 5) & 0x1f;
    *(uint *)(plVar6 + 0x11) = uVar29 + 1;
    uVar23 = ((uint)(uVar21 >> 10) & 0xf) + 4;
    *(uint *)(plVar6 + 0x10) = uVar23;
    uVar21 = uVar21 >> 0xe;
    local_b0 = (ulong)(uVar16 - 0xe);
    if ((uVar36 < 0x1e) && (uVar29 < 0x1e)) {
      *(undefined4 *)((long)plVar6 + 0x8c) = 0;
      *(undefined4 *)(plVar6 + 1) = 0x3f45;
      uVar29 = 0;
LAB_004bb00f:
      uVar19 = (ulong)uVar29;
      puVar32 = (ushort *)(inflate(juce::zlibNamespace::z_stream_s*,int)::order + uVar19 * 2);
      do {
        uVar29 = (uint)local_b0;
        if (uVar29 < 3) {
          if ((int)local_98 == 0) {
            uVar23 = 0;
            puVar33 = local_90;
            iVar28 = local_bc;
            goto switchD_004baad4_caseD_3f51;
          }
          uVar27 = *local_90;
          local_98 = (ulong)((int)local_98 - 1);
          local_90 = (ulong *)((long)local_90 + 1);
          uVar21 = uVar21 + ((ulong)(byte)uVar27 << ((byte)local_b0 & 0x3f));
          uVar29 = uVar29 + 8;
        }
        uVar19 = uVar19 + 1;
        *(int *)((long)plVar6 + 0x8c) = (int)uVar19;
        *(ushort *)((long)plVar6 + (ulong)*puVar32 * 2 + 0x98) = (ushort)uVar21 & 7;
        uVar21 = uVar21 >> 3;
        local_b0 = (ulong)(uVar29 - 3);
        puVar32 = puVar32 + 1;
      } while (uVar19 < uVar23);
      goto LAB_004bb082;
    }
    param_1[6] = (long)"too many length or distance symbols";
    *(int *)plVar1 = 0x3f51;
    iVar25 = (int)*plVar1;
    goto LAB_004baab4;
  case 0x3f45:
    uVar23 = *(uint *)(plVar6 + 0x10);
    uVar29 = *(uint *)((long)plVar6 + 0x8c);
    uVar19 = (ulong)uVar29;
    if (uVar29 < uVar23) goto LAB_004bb00f;
LAB_004bb082:
    uVar29 = (uint)uVar19;
    if (uVar29 < 0x13) {
      uVar27 = uVar19 & 0xffffffff;
      if ((3 - uVar29 & 3) != 0) {
        lVar26 = 0;
        do {
          *(undefined2 *)
           ((long)plVar6 +
           (ulong)*(ushort *)
                   (inflate(juce::zlibNamespace::z_stream_s*,int)::order + lVar26 * 2 + uVar27 * 2)
           * 2 + 0x98) = 0;
          lVar26 = lVar26 + 1;
        } while (((byte)~(byte)uVar19 & 3) != (uint)lVar26);
        uVar27 = uVar27 + lVar26;
      }
      if (2 < uVar29 - 0x10) {
        do {
          *(undefined2 *)
           ((long)plVar6 +
           (ulong)*(ushort *)(inflate(juce::zlibNamespace::z_stream_s*,int)::order + uVar27 * 2) * 2
           + 0x98) = 0;
          *(undefined2 *)
           ((long)plVar6 +
           (ulong)*(ushort *)(inflate(juce::zlibNamespace::z_stream_s*,int)::order + uVar27 * 2 + 2)
           * 2 + 0x98) = 0;
          *(undefined2 *)
           ((long)plVar6 +
           (ulong)*(ushort *)(inflate(juce::zlibNamespace::z_stream_s*,int)::order + uVar27 * 2 + 4)
           * 2 + 0x98) = 0;
          lVar26 = uVar27 * 2;
          uVar27 = uVar27 + 4;
          *(undefined2 *)
           ((long)plVar6 +
           (ulong)*(ushort *)(inflate(juce::zlibNamespace::z_stream_s*,int)::order + lVar26 + 6) * 2
           + 0x98) = 0;
        } while ((int)uVar27 != 0x13);
      }
      *(undefined4 *)((long)plVar6 + 0x8c) = 0x13;
    }
    plVar6[0x12] = (long)local_48;
    plVar6[0xd] = (long)local_48;
    *(undefined4 *)(plVar6 + 0xf) = 7;
    uVar19 = 0;
    uVar18 = inflate_table(0,(long)local_58,0x13,local_68,local_50,(undefined1 *)local_60);
    local_bc = (int)uVar18;
    if (local_bc == 0) {
      *(undefined4 *)((long)plVar6 + 0x8c) = 0;
      *(undefined4 *)(plVar6 + 1) = 0x3f46;
      local_bc = 0;
LAB_004bb3e2:
      plVar13 = local_60;
      uVar23 = *(uint *)((long)plVar6 + 0x84);
      uVar16 = (int)plVar6[0x11] + uVar23;
      if ((uint)uVar19 < uVar16) {
        lVar26 = plVar6[0xd];
        uVar36 = ~(-1 << (*(byte *)(plVar6 + 0xf) & 0x1f));
        do {
          uVar27 = (ulong)(uVar36 & (uint)uVar21);
          bVar22 = *(byte *)(lVar26 + 1 + uVar27 * 4);
          uVar35 = (uint)bVar22;
          uVar29 = (uint)local_b0;
          if (uVar29 < uVar35) {
            puVar33 = local_90;
            uVar30 = local_98;
            do {
              iVar25 = (int)uVar30;
              uVar30 = (ulong)(iVar25 - 1);
              if (iVar25 == 0) {
                uVar29 = uVar29 + (int)local_98 * 8;
                local_90 = (ulong *)((long)local_90 + local_98);
                goto LAB_004bd10b;
              }
              uVar27 = *puVar33;
              puVar33 = (ulong *)((long)puVar33 + 1);
              uVar21 = uVar21 + ((ulong)(byte)uVar27 << ((byte)local_b0 & 0x3f));
              local_b0 = local_b0 + 8;
              uVar27 = (ulong)(uVar36 & (uint)uVar21);
              bVar22 = *(byte *)(lVar26 + 1 + uVar27 * 4);
              uVar35 = (uint)bVar22;
            } while (local_b0 < bVar22);
            local_b0 = local_b0 & 0xffffffff;
            local_90 = puVar33;
            local_98 = uVar30;
          }
          uVar40 = *(ushort *)(lVar26 + 2 + uVar27 * 4);
          uVar29 = (uint)uVar19;
          uVar39 = (uint)local_b0;
          if (uVar40 < 0x10) {
            uVar21 = uVar21 >> (bVar22 & 0x3f);
            local_b0 = (ulong)(uVar39 - uVar35);
            uVar29 = uVar29 + 1;
            *(uint *)((long)plVar6 + 0x8c) = uVar29;
            *(ushort *)((long)plVar6 + uVar19 * 2 + 0x98) = uVar40;
          }
          else {
            if (uVar40 == 0x10) {
              if (uVar39 < uVar35 + 2) {
                do {
                  iVar25 = (int)local_98;
                  local_98 = (ulong)(iVar25 - 1);
                  if (iVar25 == 0) goto LAB_004bd036;
                  uVar27 = *local_90;
                  local_90 = (ulong *)((long)local_90 + 1);
                  uVar21 = uVar21 + ((ulong)(byte)uVar27 << ((byte)local_b0 & 0x3f));
                  local_b0 = local_b0 + 8;
                } while (local_b0 < uVar35 + 2);
              }
              uVar21 = uVar21 >> (bVar22 & 0x3f);
              uVar35 = (int)local_b0 - uVar35;
              local_b0 = (ulong)uVar35;
              if (uVar29 == 0) {
                param_1[6] = (long)"invalid bit length repeat";
                *(int *)plVar1 = 0x3f51;
                iVar25 = (int)*plVar1;
                goto LAB_004baab4;
              }
              uVar15 = (uint)*(ushort *)((long)plVar6 + (ulong)(uVar29 - 1) * 2 + 0x98);
              uVar39 = ((uint)uVar21 & 3) + 3;
              uVar21 = uVar21 >> 2;
              uVar35 = uVar35 - 2;
            }
            else {
              if (uVar40 == 0x11) {
                if (uVar39 < uVar35 + 3) {
                  do {
                    iVar25 = (int)local_98;
                    local_98 = (ulong)(iVar25 - 1);
                    if (iVar25 == 0) goto LAB_004bd036;
                    uVar27 = *local_90;
                    local_90 = (ulong *)((long)local_90 + 1);
                    uVar21 = uVar21 + ((ulong)(byte)uVar27 << ((byte)local_b0 & 0x3f));
                    local_b0 = local_b0 + 8;
                  } while (local_b0 < uVar35 + 3);
                }
                uVar21 = uVar21 >> (bVar22 & 0x3f);
                uVar39 = ((uint)uVar21 & 7) + 3;
                uVar21 = uVar21 >> 3;
                uVar35 = ((int)local_b0 - uVar35) - 3;
              }
              else {
                if (uVar39 < uVar35 + 7) {
                  do {
                    iVar25 = (int)local_98;
                    local_98 = (ulong)(iVar25 - 1);
                    if (iVar25 == 0) goto LAB_004bd036;
                    uVar27 = *local_90;
                    local_90 = (ulong *)((long)local_90 + 1);
                    uVar21 = uVar21 + ((ulong)(byte)uVar27 << ((byte)local_b0 & 0x3f));
                    local_b0 = local_b0 + 8;
                  } while (local_b0 < uVar35 + 7);
                }
                uVar21 = uVar21 >> (bVar22 & 0x3f);
                uVar39 = ((uint)uVar21 & 0x7f) + 0xb;
                uVar21 = uVar21 >> 7;
                uVar35 = ((int)local_b0 - uVar35) - 7;
              }
              uVar15 = 0;
            }
            local_b0 = (ulong)uVar35;
            if (uVar16 < uVar39 + uVar29) {
              param_1[6] = (long)"invalid bit length repeat";
              *(int *)plVar1 = 0x3f51;
              goto LAB_004bc33e;
            }
            if ((uVar39 < 0x10) || (CARRY4(uVar39 - 1,uVar29))) {
LAB_004bb718:
              uVar35 = uVar39 - 1;
              uVar29 = uVar39 & 3;
              uVar14 = (undefined2)uVar15;
              if (uVar29 != 0) {
                uVar39 = uVar39 & 0xfffffffc;
                uVar27 = uVar19;
                do {
                  uVar19 = (ulong)((int)uVar27 + 1);
                  *(undefined2 *)((long)plVar6 + uVar27 * 2 + 0x98) = uVar14;
                  uVar29 = uVar29 - 1;
                  uVar27 = uVar19;
                } while (uVar29 != 0);
              }
              uVar29 = (uint)uVar19;
              if (2 < uVar35) {
                uVar35 = uVar39 - 4;
                if ((uVar35 & 4) == 0) {
                  *(undefined2 *)((long)plVar6 + uVar19 * 2 + 0x98) = uVar14;
                  *(undefined2 *)((long)plVar6 + (ulong)(uVar29 + 1) * 2 + 0x98) = uVar14;
                  uVar39 = uVar29 + 3;
                  *(undefined2 *)((long)plVar6 + (ulong)(uVar29 + 2) * 2 + 0x98) = uVar14;
                  uVar29 = uVar29 + 4;
                  *(undefined2 *)((long)plVar6 + (ulong)uVar39 * 2 + 0x98) = uVar14;
                  uVar39 = uVar35;
                }
                if (3 < uVar35) {
                  uVar35 = 0;
                  do {
                    *(undefined2 *)((long)plVar6 + (ulong)(uVar29 + uVar35) * 2 + 0x98) = uVar14;
                    *(undefined2 *)((long)plVar6 + (ulong)(uVar29 + uVar35 + 1) * 2 + 0x98) = uVar14
                    ;
                    *(undefined2 *)((long)plVar6 + (ulong)(uVar29 + 2 + uVar35) * 2 + 0x98) = uVar14
                    ;
                    *(undefined2 *)((long)plVar6 + (ulong)(uVar29 + 3 + uVar35) * 2 + 0x98) = uVar14
                    ;
                    *(undefined2 *)((long)plVar6 + (ulong)(uVar29 + 4 + uVar35) * 2 + 0x98) = uVar14
                    ;
                    *(undefined2 *)((long)plVar6 + (ulong)(uVar29 + 5 + uVar35) * 2 + 0x98) = uVar14
                    ;
                    *(undefined2 *)((long)plVar6 + (ulong)(uVar29 + 6 + uVar35) * 2 + 0x98) = uVar14
                    ;
                    *(undefined2 *)((long)plVar6 + (ulong)(uVar29 + uVar35 + 7) * 2 + 0x98) = uVar14
                    ;
                    uVar35 = uVar35 + 8;
                  } while (uVar39 != uVar35);
                  uVar29 = uVar29 + uVar35;
                }
              }
            }
            else {
              uVar35 = uVar39 & 0xfffffff0;
              auVar44 = pshuflw(ZEXT416(uVar15),ZEXT416(uVar15),0);
              uVar43 = auVar44._0_4_;
              puVar2 = (undefined4 *)((long)plVar6 + uVar19 * 2 + 0x98);
              *puVar2 = uVar43;
              puVar2[1] = uVar43;
              puVar2[2] = uVar43;
              puVar2[3] = uVar43;
              puVar2 = (undefined4 *)((long)plVar6 + uVar19 * 2 + 0xa8);
              *puVar2 = uVar43;
              puVar2[1] = uVar43;
              puVar2[2] = uVar43;
              puVar2[3] = uVar43;
              if (uVar35 != 0x10) {
                puVar2 = (undefined4 *)((long)plVar6 + (ulong)(uVar29 + 0x10) * 2 + 0x98);
                *puVar2 = uVar43;
                puVar2[1] = uVar43;
                puVar2[2] = uVar43;
                puVar2[3] = uVar43;
                puVar2 = (undefined4 *)((long)plVar6 + (ulong)(uVar29 + 0x10) * 2 + 0xa8);
                *puVar2 = uVar43;
                puVar2[1] = uVar43;
                puVar2[2] = uVar43;
                puVar2[3] = uVar43;
                if (uVar35 != 0x20) {
                  puVar2 = (undefined4 *)((long)plVar6 + (ulong)(uVar29 + 0x20) * 2 + 0x98);
                  *puVar2 = uVar43;
                  puVar2[1] = uVar43;
                  puVar2[2] = uVar43;
                  puVar2[3] = uVar43;
                  puVar2 = (undefined4 *)((long)plVar6 + (ulong)(uVar29 + 0x20) * 2 + 0xa8);
                  *puVar2 = uVar43;
                  puVar2[1] = uVar43;
                  puVar2[2] = uVar43;
                  puVar2[3] = uVar43;
                  if (uVar35 != 0x30) {
                    puVar2 = (undefined4 *)((long)plVar6 + (ulong)(uVar29 + 0x30) * 2 + 0x98);
                    *puVar2 = uVar43;
                    puVar2[1] = uVar43;
                    puVar2[2] = uVar43;
                    puVar2[3] = uVar43;
                    puVar2 = (undefined4 *)((long)plVar6 + (ulong)(uVar29 + 0x30) * 2 + 0xa8);
                    *puVar2 = uVar43;
                    puVar2[1] = uVar43;
                    puVar2[2] = uVar43;
                    puVar2[3] = uVar43;
                    if (uVar35 != 0x40) {
                      puVar2 = (undefined4 *)((long)plVar6 + (ulong)(uVar29 + 0x40) * 2 + 0x98);
                      *puVar2 = uVar43;
                      puVar2[1] = uVar43;
                      puVar2[2] = uVar43;
                      puVar2[3] = uVar43;
                      puVar2 = (undefined4 *)((long)plVar6 + (ulong)(uVar29 + 0x40) * 2 + 0xa8);
                      *puVar2 = uVar43;
                      puVar2[1] = uVar43;
                      puVar2[2] = uVar43;
                      puVar2[3] = uVar43;
                      if (uVar35 != 0x50) {
                        puVar2 = (undefined4 *)((long)plVar6 + (ulong)(uVar29 + 0x50) * 2 + 0x98);
                        *puVar2 = uVar43;
                        puVar2[1] = uVar43;
                        puVar2[2] = uVar43;
                        puVar2[3] = uVar43;
                        puVar2 = (undefined4 *)((long)plVar6 + (ulong)(uVar29 + 0x50) * 2 + 0xa8);
                        *puVar2 = uVar43;
                        puVar2[1] = uVar43;
                        puVar2[2] = uVar43;
                        puVar2[3] = uVar43;
                        if (uVar35 != 0x60) {
                          puVar2 = (undefined4 *)((long)plVar6 + (ulong)(uVar29 + 0x60) * 2 + 0x98);
                          *puVar2 = uVar43;
                          puVar2[1] = uVar43;
                          puVar2[2] = uVar43;
                          puVar2[3] = uVar43;
                          puVar2 = (undefined4 *)((long)plVar6 + (ulong)(uVar29 + 0x60) * 2 + 0xa8);
                          *puVar2 = uVar43;
                          puVar2[1] = uVar43;
                          puVar2[2] = uVar43;
                          puVar2[3] = uVar43;
                          if (uVar35 != 0x70) {
                            puVar2 = (undefined4 *)
                                     ((long)plVar6 + (ulong)(uVar29 + 0x70) * 2 + 0x98);
                            *puVar2 = uVar43;
                            puVar2[1] = uVar43;
                            puVar2[2] = uVar43;
                            puVar2[3] = uVar43;
                            puVar2 = (undefined4 *)
                                     ((long)plVar6 + (ulong)(uVar29 + 0x70) * 2 + 0xa8);
                            *puVar2 = uVar43;
                            puVar2[1] = uVar43;
                            puVar2[2] = uVar43;
                            puVar2[3] = uVar43;
                          }
                        }
                      }
                    }
                  }
                }
              }
              uVar29 = uVar29 + uVar35;
              uVar19 = (ulong)uVar29;
              if (uVar39 != uVar35) {
                uVar39 = uVar39 & 0xf;
                goto LAB_004bb718;
              }
            }
            *(uint *)((long)plVar6 + 0x8c) = uVar29;
          }
          uVar19 = (ulong)uVar29;
        } while (uVar29 < uVar16);
      }
      if ((short)plVar6[0x53] == 0) {
        param_1[6] = (long)"invalid code -- missing end-of-block";
        *(int *)plVar1 = 0x3f51;
        iVar25 = (int)*plVar1;
      }
      else {
        plVar6[0x12] = (long)local_48;
        plVar6[0xd] = (long)local_48;
        *(undefined4 *)(plVar6 + 0xf) = 9;
        uVar18 = inflate_table(1,(long)local_58,uVar23,local_68,local_50,(undefined1 *)local_60);
        local_bc = (int)uVar18;
        if (local_bc == 0) {
          plVar6[0xe] = plVar6[0x12];
          *(undefined4 *)((long)plVar6 + 0x7c) = 6;
          uVar18 = inflate_table(2,(long)plVar6 + (ulong)*(uint *)((long)plVar6 + 0x84) * 2 + 0x98,
                                 *(uint *)(plVar6 + 0x11),local_68,local_40,(undefined1 *)plVar13);
          local_bc = (int)uVar18;
          if (local_bc != 0) {
            param_1[6] = (long)"invalid distances set";
            *(int *)plVar1 = 0x3f51;
            goto LAB_004bc33e;
          }
          local_bc = 0;
switchD_004baad4_caseD_3f47:
          *(int *)plVar1 = 0x3f48;
switchD_004baad4_caseD_3f48:
          uVar23 = (uint)local_98;
          uVar29 = (uint)local_b0;
          if ((uVar23 < 6) || (uVar41 < 0x102)) {
            *(undefined4 *)((long)plVar6 + 0x1bec) = 0;
            lVar26 = plVar6[0xd];
            uVar16 = ~(-1 << (*(byte *)(plVar6 + 0xf) & 0x1f));
            uVar27 = (ulong)((uint)uVar21 & uVar16);
            bVar22 = *(byte *)(lVar26 + 1 + uVar27 * 4);
            uVar19 = (ulong)bVar22;
            if (uVar29 < bVar22) {
              puVar33 = local_90;
              uVar30 = local_98;
              do {
                iVar25 = (int)uVar30;
                uVar30 = (ulong)(iVar25 - 1);
                if (iVar25 == 0) {
                  uVar29 = uVar29 + uVar23 * 8;
                  goto LAB_004bcf5e;
                }
                uVar19 = *puVar33;
                puVar33 = (ulong *)((long)puVar33 + 1);
                uVar21 = uVar21 + ((ulong)(byte)uVar19 << ((byte)local_b0 & 0x3f));
                local_b0 = local_b0 + 8;
                uVar27 = (ulong)(uVar16 & (uint)uVar21);
                bVar22 = *(byte *)(lVar26 + 1 + uVar27 * 4);
                uVar19 = (ulong)bVar22;
              } while (local_b0 < uVar19);
              local_b0 = local_b0 & 0xffffffff;
              local_90 = puVar33;
              local_98 = uVar30;
            }
            uVar16 = (uint)local_b0;
            bVar31 = *(byte *)(lVar26 + uVar27 * 4);
            uVar40 = *(ushort *)(lVar26 + 2 + uVar27 * 4);
            uVar23 = (uint)uVar19;
            uVar29 = uVar23;
            local_b0._0_4_ = uVar16;
            if (bVar31 != 0) {
              if ((bVar31 & 0xf0) != 0) {
                uVar23 = 0;
                goto LAB_004bc7c4;
              }
              bVar7 = (byte)uVar19;
              uVar29 = ~(-1 << (bVar31 + bVar7 & 0x1f));
              uVar27 = (ulong)((((uint)uVar21 & uVar29) >> (bVar7 & 0x1f)) + (uint)uVar40);
              bVar38 = *(byte *)(lVar26 + 1 + uVar27 * 4);
              if (uVar16 < uVar23 + bVar38) {
                puVar33 = local_90;
                uVar30 = local_98;
LAB_004bc746:
                iVar25 = (int)uVar30;
                uVar30 = (ulong)(iVar25 - 1);
                if (iVar25 != 0) goto code_r0x004bc750;
                local_b0 = (ulong)(uVar16 + (int)local_98 * 8);
                local_90 = (ulong *)((long)local_90 + local_98);
LAB_004bd036:
                uVar29 = (uint)local_b0;
                goto LAB_004bd10b;
              }
              goto LAB_004bc793;
            }
            uVar23 = 0;
            bVar31 = 0;
            goto LAB_004bc7c4;
          }
          param_1[3] = (long)__dest_00;
          *(uint *)(param_1 + 4) = uVar41;
          *param_1 = (long)local_90;
          *(uint *)(param_1 + 1) = uVar23;
          plVar6[10] = uVar21;
          *(uint *)(plVar6 + 0xb) = uVar29;
          inflate_fast(param_1,uVar42);
          __dest_00 = (undefined1 *)param_1[3];
          uVar41 = *(uint *)(param_1 + 4);
          local_90 = (ulong *)*param_1;
          local_98 = (ulong)*(uint *)(param_1 + 1);
          uVar21 = plVar6[10];
          local_b0 = (ulong)*(uint *)(plVar6 + 0xb);
          if ((int)plVar6[1] == 0x3f3f) {
            *(undefined4 *)((long)plVar6 + 0x1bec) = 0xffffffff;
            iVar25 = (int)*plVar1;
          }
          else {
            iVar25 = (int)*plVar1;
          }
        }
        else {
          param_1[6] = (long)"invalid literal/lengths set";
          *(int *)plVar1 = 0x3f51;
LAB_004bc33e:
          iVar25 = (int)*plVar1;
        }
      }
    }
    else {
      param_1[6] = (long)"invalid code lengths set";
      *(int *)plVar1 = 0x3f51;
LAB_004bb1ba:
      iVar25 = (int)*plVar1;
    }
    goto LAB_004baab4;
  case 0x3f46:
    uVar19 = (ulong)*(uint *)((long)plVar6 + 0x8c);
    goto LAB_004bb3e2;
  case 0x3f47:
    goto switchD_004baad4_caseD_3f47;
  case 0x3f48:
    goto switchD_004baad4_caseD_3f48;
  case 0x3f49:
    uVar23 = *(uint *)((long)plVar6 + 100);
    if (uVar23 == 0) goto LAB_004bc833;
    goto LAB_004bb1e8;
  case 0x3f4a:
    goto switchD_004baad4_caseD_3f4a;
  case 0x3f4b:
    uVar23 = *(uint *)((long)plVar6 + 100);
    goto LAB_004bca1b;
  case 0x3f4c:
    goto switchD_004baad4_caseD_3f4c;
  case 0x3f4d:
    if (uVar41 == 0) goto LAB_004bcfab;
    *__dest_00 = *(undefined1 *)((long)plVar6 + 0x5c);
    __dest_00 = __dest_00 + 1;
    uVar41 = uVar41 - 1;
    *(undefined4 *)(plVar6 + 1) = 0x3f48;
    iVar25 = (int)*plVar1;
    goto LAB_004baab4;
  case 0x3f4e:
    uVar36 = *(uint *)(plVar6 + 2);
    if (uVar36 == 0) {
LAB_004bc43c:
      *(int *)plVar1 = 0x3f4f;
      puVar33 = local_90;
      goto LAB_004bc442;
    }
    if (uVar16 < 0x20) {
      if (uVar23 == 0) goto LAB_004bd104;
      local_98 = (ulong)(uVar23 - 1);
      puVar33 = (ulong *)((long)local_90 + 1);
      uVar21 = ((ulong)(byte)*local_90 << (bVar22 & 0x3f)) + uVar21;
      uVar19 = local_b0 + 8;
      if (uVar16 < 0x18) {
        uVar35 = (uint)uVar19;
        if (uVar23 - 1 != 0) {
          uVar29 = uVar23 - 2;
          puVar33 = (ulong *)((long)local_90 + 2);
          uVar21 = uVar21 + ((ulong)*(byte *)((long)local_90 + 1) << ((byte)uVar19 & 0x3f));
          uVar19 = local_b0 + 0x10;
          if (0xf < uVar16) {
LAB_004bc35e:
            local_98 = (ulong)uVar29;
            goto LAB_004bc360;
          }
          uVar35 = (uint)uVar19;
          if (uVar29 != 0) {
            uVar29 = uVar23 - 3;
            puVar33 = (ulong *)((long)local_90 + 3);
            uVar21 = uVar21 + ((ulong)*(byte *)((long)local_90 + 2) << ((byte)uVar19 & 0x3f));
            uVar19 = local_b0 + 0x18;
            if (7 < uVar16) goto LAB_004bc35e;
            uVar35 = (uint)uVar19;
            if (uVar29 != 0) {
              puVar33 = (ulong *)((long)local_90 + 4);
              uVar21 = uVar21 + ((ulong)*(byte *)((long)local_90 + 3) << ((byte)uVar19 & 0x3f));
              uVar19 = local_b0 + 0x20;
              local_98 = (ulong)(uVar23 - 4);
              goto LAB_004bc360;
            }
          }
        }
        goto LAB_004bd0af;
      }
LAB_004bc360:
      local_b0 = uVar19 & 0xffffffff;
      local_90 = puVar33;
    }
    uVar19 = (ulong)(uVar42 - uVar41);
    param_1[5] = param_1[5] + uVar19;
    plVar6[5] = plVar6[5] + uVar19;
    if (((uVar36 & 4) == 0) || (uVar42 - uVar41 == 0)) {
      if ((uVar36 & 4) == 0) {
        uVar21 = 0;
        local_b0 = 0;
        uVar42 = uVar41;
        goto LAB_004bc43c;
      }
      iVar25 = (int)plVar6[3];
      uVar19 = plVar6[4];
    }
    else {
      iVar25 = (int)plVar6[3];
      if (iVar25 == 0) {
        uVar19 = adler32_z(plVar6[4],__dest_00 + -uVar19,uVar19);
      }
      else {
        uVar19 = crc32_z((uint)plVar6[4],(ulong *)(__dest_00 + -uVar19),uVar19);
      }
      *local_78 = uVar19;
      param_1[0xc] = uVar19;
    }
    uVar42 = (uint)uVar21;
    uVar27 = (ulong)(uVar42 >> 0x18 | (uVar42 & 0xff0000) >> 8 | (uVar42 & 0xff00) << 8 |
                    uVar42 << 0x18);
    if (iVar25 != 0) {
      uVar27 = uVar21;
    }
    if (uVar27 == uVar19) {
      uVar21 = 0;
      local_b0 = 0;
      uVar42 = uVar41;
      goto LAB_004bc43c;
    }
    param_1[6] = (long)"incorrect data check";
    *(int *)plVar1 = 0x3f51;
    iVar25 = (int)*plVar1;
    uVar42 = uVar41;
    goto LAB_004baab4;
  case 0x3f4f:
    uVar36 = *(uint *)(plVar6 + 2);
LAB_004bc442:
    uVar29 = (uint)local_b0;
    uVar23 = (uint)local_98;
    local_90 = puVar33;
    if ((uVar36 != 0) && ((int)plVar6[3] != 0)) {
      if (uVar29 < 0x20) {
        if (uVar23 == 0) goto LAB_004bd368;
        local_98 = (ulong)(uVar23 - 1);
        local_90 = (ulong *)((long)puVar33 + 1);
        uVar21 = ((ulong)(byte)*puVar33 << ((byte)local_b0 & 0x3f)) + uVar21;
        uVar19 = local_b0 + 8;
        if (uVar29 < 0x18) {
          uVar16 = (uint)uVar19;
          if (uVar23 - 1 != 0) {
            uVar35 = uVar23 - 2;
            local_90 = (ulong *)((long)puVar33 + 2);
            uVar21 = uVar21 + ((ulong)*(byte *)((long)puVar33 + 1) << ((byte)uVar19 & 0x3f));
            uVar19 = local_b0 + 0x10;
            if (0xf < uVar29) {
LAB_004bc512:
              local_98 = (ulong)uVar35;
              goto LAB_004bc514;
            }
            uVar16 = (uint)uVar19;
            if (uVar35 != 0) {
              uVar35 = uVar23 - 3;
              local_90 = (ulong *)((long)puVar33 + 3);
              uVar21 = uVar21 + ((ulong)*(byte *)((long)puVar33 + 2) << ((byte)uVar19 & 0x3f));
              uVar19 = local_b0 + 0x18;
              if (7 < uVar29) goto LAB_004bc512;
              uVar16 = (uint)uVar19;
              if (uVar35 != 0) {
                local_90 = (ulong *)((long)puVar33 + 4);
                uVar21 = uVar21 + ((ulong)*(byte *)((long)puVar33 + 3) << ((byte)uVar19 & 0x3f));
                uVar19 = local_b0 + 0x20;
                local_98 = (ulong)(uVar23 - 4);
                goto LAB_004bc514;
              }
            }
          }
          uVar29 = uVar16;
          puVar33 = local_90;
          goto LAB_004bd368;
        }
LAB_004bc514:
        local_b0 = uVar19 & 0xffffffff;
      }
      uVar23 = (uint)local_98;
      if (((uVar36 & 4) != 0) && (uVar21 != *(uint *)(plVar6 + 5))) {
        pcVar20 = "incorrect length check";
        break;
      }
      uVar29 = 0;
      uVar21 = 0;
    }
    *(int *)plVar1 = 0x3f50;
    puVar33 = local_90;
    iVar28 = 1;
    goto switchD_004baad4_caseD_3f51;
  case 0x3f50:
    goto switchD_004baad4_caseD_3f50;
  case 0x3f51:
    goto switchD_004baad4_caseD_3f51;
  case 0x3f52:
    goto LAB_004bd305;
  default:
    return -2;
  }
  param_1[6] = (long)pcVar20;
  *(int *)plVar1 = 0x3f51;
  iVar25 = (int)*plVar1;
  goto LAB_004baab4;
code_r0x004bc750:
  uVar27 = *puVar33;
  puVar33 = (ulong *)((long)puVar33 + 1);
  uVar21 = uVar21 + ((ulong)(byte)uVar27 << ((byte)local_b0 & 0x3f));
  local_b0 = local_b0 + 8;
  uVar27 = (ulong)((((uint)uVar21 & uVar29) >> (bVar7 & 0x1f)) + (uint)uVar40);
  bVar38 = *(byte *)(lVar26 + 1 + uVar27 * 4);
  if (uVar19 + bVar38 <= local_b0) goto code_r0x004bc780;
  goto LAB_004bc746;
code_r0x004bc780:
  local_90 = puVar33;
  local_98 = uVar30;
LAB_004bc793:
  uVar40 = *(ushort *)(lVar26 + 2 + uVar27 * 4);
  bVar31 = *(byte *)(lVar26 + uVar27 * 4);
  uVar21 = uVar21 >> (bVar22 & 0x3f);
  bVar22 = bVar38;
  uVar29 = (uint)bVar38;
  local_b0._0_4_ = (int)local_b0 - uVar23;
LAB_004bc7c4:
  uVar21 = uVar21 >> (bVar22 & 0x3f);
  local_b0 = (ulong)((uint)local_b0 - uVar29);
  *(uint *)((long)plVar6 + 0x1bec) = uVar23 + uVar29;
  *(uint *)((long)plVar6 + 0x5c) = (uint)uVar40;
  if (bVar31 == 0) {
    *(int *)plVar1 = 0x3f4d;
    iVar25 = (int)*plVar1;
    goto LAB_004baab4;
  }
  if ((bVar31 & 0x20) != 0) {
    *(undefined4 *)((long)plVar6 + 0x1bec) = 0xffffffff;
    *(undefined4 *)(plVar6 + 1) = 0x3f3f;
LAB_004bcd9f:
    iVar25 = (int)*plVar1;
    goto LAB_004baab4;
  }
  if ((bVar31 & 0x40) != 0) {
    param_1[6] = (long)"invalid literal/length code";
    *(int *)plVar1 = 0x3f51;
    goto LAB_004bcd9f;
  }
  uVar23 = bVar31 & 0xf;
  *(uint *)((long)plVar6 + 100) = uVar23;
  *(undefined4 *)(plVar6 + 1) = 0x3f49;
  if ((bVar31 & 0xf) == 0) {
LAB_004bc833:
    iVar25 = *(int *)((long)plVar6 + 0x5c);
  }
  else {
LAB_004bb1e8:
    uVar29 = (uint)local_b0;
    puVar33 = local_90;
    if (uVar29 < uVar23) {
      uVar19 = local_98;
      do {
        iVar25 = (int)uVar19;
        uVar36 = iVar25 - 1;
        uVar19 = (ulong)uVar36;
        if (iVar25 == 0) {
          uVar29 = uVar29 + (uint)local_98 * 8;
          puVar33 = (ulong *)((long)local_90 + local_98);
          goto LAB_004bd104;
        }
        uVar27 = *puVar33;
        puVar33 = (ulong *)((long)puVar33 + 1);
        uVar21 = uVar21 + ((ulong)(byte)uVar27 << ((byte)local_b0 & 0x3f));
        uVar16 = (int)local_b0 + 8;
        local_b0 = (ulong)uVar16;
      } while (uVar16 < uVar23);
    }
    else {
      uVar16 = uVar29;
      uVar36 = (uint)local_98;
    }
    local_90 = puVar33;
    iVar25 = (~(-1 << ((byte)uVar23 & 0x1f)) & (uint)uVar21) + *(int *)((long)plVar6 + 0x5c);
    *(int *)((long)plVar6 + 0x5c) = iVar25;
    uVar21 = uVar21 >> ((byte)uVar23 & 0x3f);
    *(int *)((long)plVar6 + 0x1bec) = *(int *)((long)plVar6 + 0x1bec) + uVar23;
    local_98 = (ulong)uVar36;
    local_b0 = (ulong)(uVar16 - uVar23);
  }
  *(int *)(plVar6 + 0x37e) = iVar25;
  *(undefined4 *)(plVar6 + 1) = 0x3f4a;
switchD_004baad4_caseD_3f4a:
  lVar26 = plVar6[0xe];
  uVar23 = ~(-1 << (*(byte *)((long)plVar6 + 0x7c) & 0x1f));
  uVar27 = (ulong)((uint)uVar21 & uVar23);
  bVar22 = *(byte *)(lVar26 + 1 + uVar27 * 4);
  uVar19 = (ulong)bVar22;
  uVar29 = (uint)local_b0;
  if (uVar29 < bVar22) {
    uVar30 = local_98;
    puVar33 = local_90;
    do {
      iVar25 = (int)uVar30;
      uVar30 = (ulong)(iVar25 - 1);
      if (iVar25 == 0) {
        uVar29 = uVar29 + (int)local_98 * 8;
        goto LAB_004bcf5e;
      }
      uVar19 = *puVar33;
      puVar33 = (ulong *)((long)puVar33 + 1);
      uVar21 = uVar21 + ((ulong)(byte)uVar19 << ((byte)local_b0 & 0x3f));
      local_b0 = local_b0 + 8;
      uVar27 = (ulong)(uVar23 & (uint)uVar21);
      bVar22 = *(byte *)(lVar26 + 1 + uVar27 * 4);
      uVar19 = (ulong)bVar22;
    } while (local_b0 < uVar19);
    local_98 = uVar30;
    local_90 = puVar33;
  }
  uVar29 = (uint)uVar19;
  bVar31 = *(byte *)(lVar26 + uVar27 * 4);
  uVar40 = *(ushort *)(lVar26 + 2 + uVar27 * 4);
  if ((bVar31 & 0xf0) == 0) {
    bVar7 = (byte)uVar19;
    uVar23 = ~(-1 << (bVar31 + bVar7 & 0x1f));
    uVar27 = (ulong)((((uint)uVar21 & uVar23) >> (bVar7 & 0x1f)) + (uint)uVar40);
    bVar38 = *(byte *)(lVar26 + 1 + uVar27 * 4);
    if ((uint)local_b0 < uVar29 + bVar38) {
      uVar37 = local_b0 & 0xffffffff;
      puVar33 = local_90;
      uVar30 = local_98;
      do {
        iVar25 = (int)uVar30;
        uVar30 = (ulong)(iVar25 - 1);
        if (iVar25 == 0) {
          uVar29 = (uint)local_b0 + (int)local_98 * 8;
          local_90 = (ulong *)((long)local_90 + local_98);
          goto LAB_004bd10b;
        }
        uVar27 = *puVar33;
        puVar33 = (ulong *)((long)puVar33 + 1);
        uVar21 = uVar21 + ((ulong)(byte)uVar27 << ((byte)uVar37 & 0x3f));
        uVar37 = uVar37 + 8;
        uVar27 = (ulong)((((uint)uVar21 & uVar23) >> (bVar7 & 0x1f)) + (uint)uVar40);
        bVar38 = *(byte *)(lVar26 + 1 + uVar27 * 4);
      } while (uVar37 < uVar19 + bVar38);
      local_98 = uVar30;
      local_90 = puVar33;
      local_b0 = uVar37;
    }
    uVar23 = (uint)bVar38;
    uVar40 = *(ushort *)(lVar26 + 2 + uVar27 * 4);
    uVar21 = uVar21 >> (bVar22 & 0x3f);
    bVar31 = *(byte *)(lVar26 + uVar27 * 4);
    local_b0._0_4_ = (int)local_b0 - uVar29;
    iVar25 = uVar29 + *(int *)((long)plVar6 + 0x1bec);
  }
  else {
    iVar25 = *(int *)((long)plVar6 + 0x1bec);
    uVar23 = uVar29;
    bVar38 = bVar22;
  }
  uVar21 = uVar21 >> (bVar38 & 0x3f);
  local_b0 = (ulong)((uint)local_b0 - uVar23);
  *(uint *)((long)plVar6 + 0x1bec) = iVar25 + uVar23;
  if ((bVar31 & 0x40) != 0) {
    param_1[6] = (long)"invalid distance code";
    *(int *)plVar1 = 0x3f51;
    iVar25 = (int)*plVar1;
    goto LAB_004baab4;
  }
  *(uint *)(plVar6 + 0xc) = (uint)uVar40;
  uVar23 = bVar31 & 0xf;
  *(uint *)((long)plVar6 + 100) = uVar23;
  *(undefined4 *)(plVar6 + 1) = 0x3f4b;
LAB_004bca1b:
  if (uVar23 != 0) {
    uVar29 = (uint)local_b0;
    puVar33 = local_90;
    if (uVar29 < uVar23) {
      uVar19 = local_98;
LAB_004bca32:
      iVar25 = (int)uVar19;
      uVar16 = iVar25 - 1;
      uVar19 = (ulong)uVar16;
      if (iVar25 != 0) goto code_r0x004bca3b;
      uVar29 = uVar29 + (uint)local_98 * 8;
LAB_004bcf5e:
      uVar23 = 0;
      puVar33 = (ulong *)((long)local_90 + local_98);
      iVar28 = local_bc;
      goto switchD_004baad4_caseD_3f51;
    }
    uVar36 = uVar29;
    uVar16 = (uint)local_98;
LAB_004bca8b:
    local_90 = puVar33;
    *(uint *)(plVar6 + 0xc) = (int)plVar6[0xc] + (~(-1 << ((byte)uVar23 & 0x1f)) & (uint)uVar21);
    uVar21 = uVar21 >> ((byte)uVar23 & 0x3f);
    *(int *)((long)plVar6 + 0x1bec) = *(int *)((long)plVar6 + 0x1bec) + uVar23;
    local_98 = (ulong)uVar16;
    local_b0 = (ulong)(uVar36 - uVar23);
  }
  *(int *)plVar1 = 0x3f4c;
switchD_004baad4_caseD_3f4c:
  uVar29 = (uint)local_b0;
  uVar23 = (uint)local_98;
  if (uVar41 == 0) {
LAB_004bcfab:
    uVar41 = 0;
    puVar33 = local_90;
    iVar28 = local_bc;
    goto switchD_004baad4_caseD_3f51;
  }
  uVar29 = *(uint *)(plVar6 + 0xc);
  if (uVar42 - uVar41 < uVar29) {
    uVar29 = uVar29 - (uVar42 - uVar41);
    if ((*(uint *)(plVar6 + 8) < uVar29) && ((int)plVar6[0x37d] != 0)) {
      param_1[6] = (long)"invalid distance too far back";
      *(int *)plVar1 = 0x3f51;
      iVar25 = (int)*plVar1;
      goto LAB_004baab4;
    }
    uVar23 = *(uint *)((long)plVar6 + 0x44);
    uVar16 = uVar29 - uVar23;
    if (uVar29 < uVar23 || uVar16 == 0) {
      uVar23 = uVar23 - uVar29;
    }
    else {
      uVar23 = *(int *)((long)plVar6 + 0x3c) - uVar16;
      uVar29 = uVar16;
    }
    puVar24 = (undefined1 *)((ulong)uVar23 + plVar6[9]);
    uVar23 = *(uint *)((long)plVar6 + 0x5c);
    if (uVar23 < uVar29) {
      uVar29 = uVar23;
    }
  }
  else {
    puVar24 = __dest_00 + -(ulong)uVar29;
    uVar23 = *(uint *)((long)plVar6 + 0x5c);
    uVar29 = uVar23;
  }
  if (uVar41 < uVar29) {
    uVar29 = uVar41;
  }
  *(uint *)((long)plVar6 + 0x5c) = uVar23 - uVar29;
  uVar23 = uVar29 - 1;
  uVar19 = (ulong)uVar23;
  uVar16 = uVar29;
  if ((0x1e < uVar23) &&
     ((puVar24 + uVar19 + 1 <= __dest_00 || (__dest_00 + uVar19 + 1 <= puVar24)))) {
    uVar27 = uVar19 + 1 & 0xffffffffffffffe0;
    uVar37 = (uVar27 - 0x20 >> 5) + 1;
    uVar30 = (ulong)((uint)uVar37 & 3);
    if (uVar27 - 0x20 < 0x60) {
      lVar26 = 0;
    }
    else {
      uVar37 = uVar37 & 0xfffffffffffffffc;
      lVar26 = 0;
      do {
        uVar18 = *(undefined8 *)((long)(puVar24 + lVar26) + 8);
        uVar10 = *(undefined8 *)(puVar24 + lVar26 + 0x10);
        uVar11 = *(undefined8 *)((long)(puVar24 + lVar26 + 0x10) + 8);
        *(undefined8 *)(__dest_00 + lVar26) = *(undefined8 *)(puVar24 + lVar26);
        *(undefined8 *)((long)(__dest_00 + lVar26) + 8) = uVar18;
        *(undefined8 *)(__dest_00 + lVar26 + 0x10) = uVar10;
        *(undefined8 *)((long)(__dest_00 + lVar26 + 0x10) + 8) = uVar11;
        uVar18 = *(undefined8 *)((long)(puVar24 + lVar26 + 0x20) + 8);
        uVar10 = *(undefined8 *)(puVar24 + lVar26 + 0x30);
        uVar11 = *(undefined8 *)((long)(puVar24 + lVar26 + 0x30) + 8);
        *(undefined8 *)(__dest_00 + lVar26 + 0x20) = *(undefined8 *)(puVar24 + lVar26 + 0x20);
        *(undefined8 *)((long)(__dest_00 + lVar26 + 0x20) + 8) = uVar18;
        *(undefined8 *)(__dest_00 + lVar26 + 0x30) = uVar10;
        *(undefined8 *)((long)(__dest_00 + lVar26 + 0x30) + 8) = uVar11;
        uVar18 = *(undefined8 *)((long)(puVar24 + lVar26 + 0x40) + 8);
        uVar10 = *(undefined8 *)(puVar24 + lVar26 + 0x50);
        uVar11 = *(undefined8 *)((long)(puVar24 + lVar26 + 0x50) + 8);
        *(undefined8 *)(__dest_00 + lVar26 + 0x40) = *(undefined8 *)(puVar24 + lVar26 + 0x40);
        *(undefined8 *)((long)(__dest_00 + lVar26 + 0x40) + 8) = uVar18;
        *(undefined8 *)(__dest_00 + lVar26 + 0x50) = uVar10;
        *(undefined8 *)((long)(__dest_00 + lVar26 + 0x50) + 8) = uVar11;
        puVar2 = (undefined4 *)(puVar24 + lVar26 + 0x60);
        uVar43 = puVar2[1];
        uVar8 = puVar2[2];
        uVar9 = puVar2[3];
        uVar18 = *(undefined8 *)(puVar24 + lVar26 + 0x70);
        uVar10 = *(undefined8 *)((long)(puVar24 + lVar26 + 0x70) + 8);
        puVar3 = (undefined4 *)(__dest_00 + lVar26 + 0x60);
        *puVar3 = *puVar2;
        puVar3[1] = uVar43;
        puVar3[2] = uVar8;
        puVar3[3] = uVar9;
        *(undefined8 *)(__dest_00 + lVar26 + 0x70) = uVar18;
        *(undefined8 *)((long)(__dest_00 + lVar26 + 0x70) + 8) = uVar10;
        lVar26 = lVar26 + 0x80;
        uVar37 = uVar37 - 4;
      } while (uVar37 != 0);
    }
    if (uVar30 != 0) {
      lVar34 = 0;
      do {
        puVar2 = (undefined4 *)(puVar24 + lVar34 + lVar26);
        uVar43 = puVar2[1];
        uVar8 = puVar2[2];
        uVar9 = puVar2[3];
        uVar18 = *(undefined8 *)(puVar24 + lVar34 + lVar26 + 0x10);
        uVar10 = *(undefined8 *)((long)(puVar24 + lVar34 + lVar26 + 0x10) + 8);
        puVar3 = (undefined4 *)(__dest_00 + lVar34 + lVar26);
        *puVar3 = *puVar2;
        puVar3[1] = uVar43;
        puVar3[2] = uVar8;
        puVar3[3] = uVar9;
        *(undefined8 *)(__dest_00 + lVar34 + lVar26 + 0x10) = uVar18;
        *(undefined8 *)((long)(__dest_00 + lVar34 + lVar26 + 0x10) + 8) = uVar10;
        lVar34 = lVar34 + 0x20;
      } while (uVar30 * 0x20 != lVar34);
    }
    __dest_00 = __dest_00 + uVar27;
    if (uVar19 + 1 == uVar27) goto LAB_004bcd0f;
    uVar16 = uVar29 - (int)uVar27;
    puVar24 = puVar24 + uVar27;
    uVar23 = uVar16 - 1;
  }
  uVar36 = uVar16 & 7;
  if (uVar36 != 0) {
    uVar16 = uVar16 & 0xfffffff8;
    do {
      uVar5 = *puVar24;
      puVar24 = puVar24 + 1;
      *__dest_00 = uVar5;
      __dest_00 = __dest_00 + 1;
      uVar36 = uVar36 - 1;
    } while (uVar36 != 0);
  }
  if (6 < uVar23) {
    lVar26 = 0;
    do {
      __dest_00[lVar26] = puVar24[lVar26];
      __dest_00[lVar26 + 1] = puVar24[lVar26 + 1];
      __dest_00[lVar26 + 2] = puVar24[lVar26 + 2];
      __dest_00[lVar26 + 3] = puVar24[lVar26 + 3];
      __dest_00[lVar26 + 4] = puVar24[lVar26 + 4];
      __dest_00[lVar26 + 5] = puVar24[lVar26 + 5];
      __dest_00[lVar26 + 6] = puVar24[lVar26 + 6];
      __dest_00[lVar26 + 7] = puVar24[lVar26 + 7];
      lVar26 = lVar26 + 8;
    } while (uVar16 != (uint)lVar26);
    __dest_00 = __dest_00 + lVar26;
  }
LAB_004bcd0f:
  uVar41 = uVar41 - uVar29;
  if (*(int *)((long)plVar6 + 0x5c) == 0) {
    *(int *)plVar1 = 0x3f48;
    iVar25 = (int)*plVar1;
  }
  else {
    iVar25 = (int)*plVar1;
  }
  goto LAB_004baab4;
code_r0x004bca3b:
  uVar27 = *puVar33;
  puVar33 = (ulong *)((long)puVar33 + 1);
  uVar21 = uVar21 + ((ulong)(byte)uVar27 << ((byte)local_b0 & 0x3f));
  uVar36 = (int)local_b0 + 8;
  local_b0 = (ulong)uVar36;
  if (uVar23 <= uVar36) goto LAB_004bca8b;
  goto LAB_004bca32;
switchD_004baad4_caseD_3f50:
  puVar33 = local_90;
  iVar28 = iVar17;
switchD_004baad4_caseD_3f51:
  param_1[3] = (long)__dest_00;
  *(uint *)(param_1 + 4) = uVar41;
  *param_1 = (long)puVar33;
  *(uint *)(param_1 + 1) = uVar23;
  plVar6[10] = uVar21;
  *(uint *)(plVar6 + 0xb) = uVar29;
  if ((*(int *)((long)plVar6 + 0x3c) != 0) ||
     (((uVar42 != uVar41 && ((int)*plVar1 < 0x3f51)) && ((local_6c != 4 || ((int)*plVar1 < 0x3f4e)))
      ))) {
    lVar26 = param_1[7];
    __dest = *(void **)(lVar26 + 0x48);
    if (__dest == (void *)0x0) {
      __dest = (void *)(*(code *)param_1[8])(param_1[10],1 << (*(byte *)(lVar26 + 0x38) & 0x1f),1);
      *(void **)(lVar26 + 0x48) = __dest;
      if (__dest == (void *)0x0) {
        *(int *)plVar1 = 0x3f52;
LAB_004bd305:
        return -4;
      }
    }
    uVar41 = uVar42 - uVar41;
    uVar29 = *(uint *)(lVar26 + 0x3c);
    if (uVar29 == 0) {
      uVar29 = 1 << (*(byte *)(lVar26 + 0x38) & 0x1f);
      *(uint *)(lVar26 + 0x3c) = uVar29;
      *(undefined8 *)(lVar26 + 0x40) = 0;
    }
    if (uVar41 < uVar29) {
      uVar29 = uVar29 - *(uint *)(lVar26 + 0x44);
      if (uVar41 < uVar29) {
        uVar29 = uVar41;
      }
      memcpy((void *)((long)__dest + (ulong)*(uint *)(lVar26 + 0x44)),__dest_00 + -(ulong)uVar41,
             (ulong)uVar29);
      uVar41 = uVar41 - uVar29;
      if (uVar41 == 0) {
        uVar23 = *(int *)(lVar26 + 0x44) + uVar29;
        uVar41 = 0;
        if (uVar23 != *(uint *)(lVar26 + 0x3c)) {
          uVar41 = uVar23;
        }
        *(uint *)(lVar26 + 0x44) = uVar41;
        if (*(uint *)(lVar26 + 0x40) < *(uint *)(lVar26 + 0x3c)) {
          *(uint *)(lVar26 + 0x40) = *(uint *)(lVar26 + 0x40) + uVar29;
        }
        goto LAB_004bd244;
      }
      memcpy(*(void **)(lVar26 + 0x48),__dest_00 + -(ulong)uVar41,(ulong)uVar41);
      *(uint *)(lVar26 + 0x44) = uVar41;
    }
    else {
      memcpy(__dest,__dest_00 + -(ulong)uVar29,(ulong)uVar29);
      *(undefined4 *)(lVar26 + 0x44) = 0;
    }
    *(undefined4 *)(lVar26 + 0x40) = *(undefined4 *)(lVar26 + 0x3c);
  }
LAB_004bd244:
  uVar41 = (int)local_38 - (int)param_1[1];
  uVar42 = uVar42 - (int)param_1[4];
  uVar21 = (ulong)uVar42;
  param_1[2] = param_1[2] + (ulong)uVar41;
  param_1[5] = param_1[5] + uVar21;
  plVar6[5] = plVar6[5] + uVar21;
  if (((*(byte *)(plVar6 + 2) & 4) != 0) && (uVar42 != 0)) {
    if ((int)plVar6[3] == 0) {
      uVar21 = adler32_z(plVar6[4],(byte *)(param_1[3] - uVar21),uVar21);
    }
    else {
      uVar21 = crc32_z((uint)plVar6[4],(ulong *)(param_1[3] - uVar21),uVar21);
    }
    *local_78 = uVar21;
    param_1[0xc] = uVar21;
  }
  iVar25 = (int)plVar6[1];
  iVar17 = -5;
  if (iVar28 != 0) {
    iVar17 = iVar28;
  }
  if (uVar41 == 0 && uVar42 == 0) {
    iVar28 = iVar17;
  }
  *(uint *)(param_1 + 0xb) =
       (uint)(iVar25 == 0x3f42 || iVar25 == 0x3f47) * 0x100 +
       (uint)(iVar25 == 0x3f3f) * 0x80 +
       (uint)(*(int *)((long)plVar6 + 0xc) != 0) * 0x40 + (int)plVar6[0xb];
  if (local_6c == 4) {
    iVar28 = iVar17;
  }
  return iVar28;
}


