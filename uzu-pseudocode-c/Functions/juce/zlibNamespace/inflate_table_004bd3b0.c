// Function : inflate_table
// Namespace: juce:zlibNamespace
// Entry    : 004bd3b0
// Prototype: undefined8 inflate_table(int param_1, long param_2, uint param_3, long * param_4, uint * param_5, undefined1 * param_6)
// Body     : 004bd3b0 - 004bdb92


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::zlibNamespace::inflate_table(juce::zlibNamespace::codetype, unsigned short*, unsigned int,
   juce::zlibNamespace::code**, unsigned int*, unsigned short*) */

undefined8 __cdecl
juce::zlibNamespace::inflate_table
          (int param_1,long param_2,uint param_3,long *param_4,uint *param_5,undefined1 *param_6)

{
  ushort *puVar1;
  long lVar2;
  undefined4 *puVar3;
  byte bVar4;
  long *plVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  byte bVar9;
  uint uVar10;
  ulong uVar11;
  undefined1 uVar12;
  uint uVar13;
  ushort uVar14;
  uint uVar15;
  ulong uVar16;
  int iVar17;
  long lVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  uint uVar23;
  uint uVar24;
  ulong uVar25;
  uint uVar26;
  int iVar27;
  uint uVar28;
  int iVar29;
  int iVar30;
  uint uVar31;
  bool bVar32;
  uint local_bc;
  ushort local_b8 [20];
  ulong local_90;
  undefined1 *local_88;
  int local_7c;
  uint *local_78;
  undefined1 *local_70;
  ushort auStack_68 [5];
  undefined2 local_5e;
  undefined2 local_5c;
  undefined2 local_5a;
  undefined2 local_58;
  undefined2 local_56;
  undefined2 local_54;
  short local_52;
  short local_50;
  short local_4e;
  short local_4c;
  short local_4a;
  long *local_48;
  undefined1 *local_40;
  uint local_38;
  uint local_34;
  
  local_b8[0] = 0;
  local_b8[1] = 0;
  local_b8[2] = 0;
  local_b8[3] = 0;
  local_b8[4] = 0;
  local_b8[5] = 0;
  local_b8[6] = 0;
  local_b8[7] = 0;
  local_b8[8] = 0;
  local_b8[9] = 0;
  local_b8[10] = 0;
  local_b8[0xb] = 0;
  local_b8[0xc] = 0;
  local_b8[0xd] = 0;
  local_b8[0xe] = 0;
  local_b8[0xf] = 0;
  if (param_3 == 0) {
    uVar8 = *param_5;
LAB_004bd3e9:
    if (local_b8[0xd] != 0) {
      uVar25 = 0xd;
LAB_004bd515:
      uVar14 = 0;
      goto LAB_004bd518;
    }
    if (local_b8[0xc] != 0) {
      uVar25 = 0xc;
      goto LAB_004bd515;
    }
    if (local_b8[0xb] != 0) {
      uVar25 = 0xb;
      goto LAB_004bd515;
    }
    if (local_b8[10] != 0) {
      uVar25 = 10;
      goto LAB_004bd515;
    }
    if (local_b8[9] != 0) {
      uVar25 = 9;
      goto LAB_004bd515;
    }
    if (local_b8[8] != 0) {
      uVar25 = 8;
      goto LAB_004bd515;
    }
    if (local_b8[7] != 0) {
      uVar25 = 7;
      goto LAB_004bd515;
    }
    if (local_b8[6] != 0) {
      uVar25 = 6;
      goto LAB_004bd515;
    }
    if (local_b8[5] != 0) {
      uVar25 = 5;
      goto LAB_004bd515;
    }
    local_78 = param_5;
    if (local_b8[4] != 0) {
      uVar25 = 4;
LAB_004bdb2a:
      uVar14 = 0;
      goto LAB_004bd518;
    }
    if (local_b8[3] != 0) {
      uVar25 = 3;
      goto LAB_004bdb2a;
    }
    if (local_b8[2] != 0) {
      uVar25 = 2;
      goto LAB_004bdb2a;
    }
    if (local_b8[1] == 0) {
      puVar3 = (undefined4 *)*param_4;
      *param_4 = (long)(puVar3 + 1);
      *puVar3 = 0x140;
      puVar3 = (undefined4 *)*param_4;
      *param_4 = (long)(puVar3 + 1);
      *puVar3 = 0x140;
      uVar8 = 1;
LAB_004bda8b:
      *local_78 = uVar8;
      return 0;
    }
    uVar24 = 1;
    bVar32 = false;
    uVar8 = (uint)(uVar8 != 0);
    uVar14 = 0;
    uVar16 = 1;
  }
  else {
    if ((ulong)param_3 - 1 < 3) {
      uVar25 = 0;
    }
    else {
      uVar25 = 0;
      do {
        local_b8[*(ushort *)(param_2 + uVar25 * 2)] =
             local_b8[*(ushort *)(param_2 + uVar25 * 2)] + 1;
        local_b8[*(ushort *)(param_2 + 2 + uVar25 * 2)] =
             local_b8[*(ushort *)(param_2 + 2 + uVar25 * 2)] + 1;
        local_b8[*(ushort *)(param_2 + 4 + uVar25 * 2)] =
             local_b8[*(ushort *)(param_2 + 4 + uVar25 * 2)] + 1;
        local_b8[*(ushort *)(param_2 + 6 + uVar25 * 2)] =
             local_b8[*(ushort *)(param_2 + 6 + uVar25 * 2)] + 1;
        uVar25 = uVar25 + 4;
      } while ((param_3 & 0xfffffffc) != uVar25);
    }
    if ((ulong)(param_3 & 3) != 0) {
      uVar16 = 0;
      do {
        local_b8[*(ushort *)(param_2 + uVar25 * 2 + uVar16 * 2)] =
             local_b8[*(ushort *)(param_2 + uVar25 * 2 + uVar16 * 2)] + 1;
        uVar16 = uVar16 + 1;
      } while ((param_3 & 3) != uVar16);
    }
    uVar8 = *param_5;
    uVar25 = 0xf;
    uVar14 = local_b8[0xf];
    if (local_b8[0xf] == 0) {
      if (local_b8[0xe] == 0) goto LAB_004bd3e9;
      uVar25 = 0xe;
      goto LAB_004bd515;
    }
LAB_004bd518:
    uVar24 = (uint)uVar25;
    if (uVar24 < uVar8) {
      uVar8 = uVar24;
    }
    uVar16 = 1;
    do {
      if (local_b8[uVar16] != 0) {
        bVar32 = true;
        goto LAB_004bd54b;
      }
      uVar16 = uVar16 + 1;
    } while (uVar25 != uVar16);
    bVar32 = true;
    uVar16 = uVar25;
  }
LAB_004bd54b:
  if (uVar8 < (uint)uVar16) {
    uVar8 = (uint)uVar16;
  }
  if (2 < local_b8[1]) {
    return 0xffffffff;
  }
  local_78 = param_5;
  iVar29 = 4 - ((uint)local_b8[2] + (uint)local_b8[1] * 2);
  if (iVar29 < 0) {
    return 0xffffffff;
  }
  local_40 = param_6;
  local_48 = param_4;
  iVar29 = iVar29 * 2 - (uint)local_b8[3];
  if (iVar29 < 0) {
    return 0xffffffff;
  }
  iVar29 = iVar29 * 2 - (uint)local_b8[4];
  if (iVar29 < 0) {
    return 0xffffffff;
  }
  iVar29 = iVar29 * 2 - (uint)local_b8[5];
  if (iVar29 < 0) {
    return 0xffffffff;
  }
  iVar29 = iVar29 * 2 - (uint)local_b8[6];
  if (iVar29 < 0) {
    return 0xffffffff;
  }
  iVar29 = iVar29 * 2 - (uint)local_b8[7];
  if (iVar29 < 0) {
    return 0xffffffff;
  }
  uVar31 = (uint)local_b8[8];
  iVar29 = iVar29 * 2 - uVar31;
  if (iVar29 < 0) {
    return 0xffffffff;
  }
  uVar10 = (uint)local_b8[9];
  local_70 = (undefined1 *)CONCAT44(local_70._4_4_,uVar10);
  iVar29 = iVar29 * 2 - uVar10;
  if (iVar29 < 0) {
    return 0xffffffff;
  }
  local_90 = CONCAT44(local_90._4_4_,uVar31);
  iVar29 = iVar29 * 2 - (uint)local_b8[10];
  if (iVar29 < 0) {
    return 0xffffffff;
  }
  iVar29 = iVar29 * 2 - (uint)local_b8[0xb];
  if (iVar29 < 0) {
    return 0xffffffff;
  }
  iVar29 = iVar29 * 2 - (uint)local_b8[0xc];
  if (iVar29 < 0) {
    return 0xffffffff;
  }
  iVar29 = iVar29 * 2 - (uint)local_b8[0xd];
  if (iVar29 < 0) {
    return 0xffffffff;
  }
  local_34 = (uint)local_b8[0xe];
  iVar29 = iVar29 * 2 - (uint)local_b8[0xe];
  if (iVar29 < 0) {
    return 0xffffffff;
  }
  local_38 = (uint)local_b8[0xd];
  uVar23 = iVar29 * 2;
  if ((int)(uVar23 - uVar14) < 0) {
    return 0xffffffff;
  }
  if ((uVar23 != uVar14) && (param_1 == 0 || bVar32)) {
    return 0xffffffff;
  }
  iVar27 = (uint)local_b8[2] + (uint)local_b8[1];
  iVar17 = (uint)local_b8[3] + iVar27;
  iVar20 = (uint)local_b8[4] + iVar17;
  local_7c = (uint)local_b8[5] + iVar20;
  iVar30 = (uint)local_b8[6] + local_7c;
  iVar29 = (uint)local_b8[7] + iVar30;
  iVar22 = uVar31 + iVar29;
  iVar21 = uVar10 + iVar22;
  iVar19 = (uint)local_b8[10] + iVar21;
  local_88 = (undefined1 *)CONCAT44(local_88._4_4_,iVar19);
  local_52 = (short)iVar19;
  local_50 = local_b8[0xb] + local_52;
  local_4e = local_b8[0xc] + local_50;
  local_4c = local_b8[0xd] + local_4e;
  auStack_68[1] = 0;
  auStack_68[2] = local_b8[1];
  auStack_68[3] = (short)iVar27;
  auStack_68[4] = (short)iVar17;
  local_5e = (short)iVar20;
  local_5c = (short)local_7c;
  local_5a = (short)iVar30;
  local_58 = (short)iVar29;
  local_56 = (short)iVar22;
  local_54 = (short)iVar21;
  local_4a = local_b8[0xe] + local_4c;
  if (param_3 != 0) {
    if (param_3 == 1) {
      uVar25 = 0;
    }
    else {
      uVar25 = 0;
      do {
        uVar11 = (ulong)*(ushort *)(param_2 + uVar25 * 2);
        if (uVar11 != 0) {
          uVar14 = auStack_68[uVar11];
          auStack_68[uVar11] = uVar14 + 1;
          *(short *)(param_6 + (ulong)uVar14 * 2) = (short)uVar25;
        }
        uVar11 = (ulong)*(ushort *)(param_2 + 2 + uVar25 * 2);
        if (uVar11 != 0) {
          uVar14 = auStack_68[uVar11];
          auStack_68[uVar11] = uVar14 + 1;
          *(short *)(param_6 + (ulong)uVar14 * 2) = (short)uVar25 + 1;
        }
        uVar25 = uVar25 + 2;
      } while ((param_3 & 0xfffffffe) != uVar25);
    }
    if (((param_3 & 1) != 0) && (uVar11 = (ulong)*(ushort *)(param_2 + uVar25 * 2), uVar11 != 0)) {
      uVar14 = auStack_68[uVar11];
      auStack_68[uVar11] = uVar14 + 1;
      *(short *)(param_6 + (ulong)uVar14 * 2) = (short)uVar25;
    }
  }
  if (param_1 == 0) {
    uVar31 = 0x14;
    bVar32 = false;
    local_88 = param_6;
    local_70 = param_6;
  }
  else {
    if (param_1 == 1) {
      if (9 < uVar8) {
        return 1;
      }
      bVar4 = 1;
      uVar31 = 0x101;
      local_70 = inflate_table(juce::zlibNamespace::codetype,unsigned_short*,unsigned_int,juce::zlibNamespace::code**,unsigned_int*,unsigned_short*)
                 ::lext;
      local_88 = inflate_table(juce::zlibNamespace::codetype,unsigned_short*,unsigned_int,juce::zlibNamespace::code**,unsigned_int*,unsigned_short*)
                 ::lbase;
      bVar32 = false;
      goto LAB_004bd877;
    }
    uVar31 = 0;
    local_70 = inflate_table(juce::zlibNamespace::codetype,unsigned_short*,unsigned_int,juce::zlibNamespace::code**,unsigned_int*,unsigned_short*)
               ::dext;
    local_88 = inflate_table(juce::zlibNamespace::codetype,unsigned_short*,unsigned_int,juce::zlibNamespace::code**,unsigned_int*,unsigned_short*)
               ::dbase;
    bVar32 = param_1 == 2;
    if (bVar32) {
      bVar4 = 0;
      if (9 < uVar8) {
        return 1;
      }
      goto LAB_004bd877;
    }
  }
  bVar4 = 0;
LAB_004bd877:
  uVar6 = 1 << ((byte)uVar8 & 0x1f);
  local_90 = (ulong)uVar6;
  lVar18 = *local_48;
  local_bc = 0xffffffff;
  uVar26 = 0;
  uVar23 = 0;
  uVar28 = 0;
  uVar10 = uVar8;
  do {
    uVar7 = 1 << ((byte)uVar10 & 0x1f);
    do {
      plVar5 = local_48;
      bVar9 = (char)uVar16 - (byte)uVar23;
      uVar14 = *(ushort *)(local_40 + (ulong)uVar26 * 2);
      if (uVar14 + 1 < uVar31) {
        uVar12 = 0;
      }
      else if (uVar14 < uVar31) {
        uVar12 = 0x60;
        uVar14 = 0;
      }
      else {
        uVar25 = (ulong)(uVar14 - uVar31);
        uVar12 = local_70[uVar25 * 2];
        uVar14 = *(ushort *)(local_88 + uVar25 * 2);
      }
      iVar29 = -1 << (bVar9 & 0x1f);
      uVar10 = uVar7;
      do {
        uVar25 = (ulong)((uVar28 >> ((byte)uVar23 & 0x1f)) + iVar29 + uVar10);
        *(undefined1 *)(lVar18 + uVar25 * 4) = uVar12;
        *(byte *)(lVar18 + 1 + uVar25 * 4) = bVar9;
        *(ushort *)(lVar18 + 2 + uVar25 * 4) = uVar14;
        uVar10 = uVar10 + iVar29;
      } while (uVar10 != 0);
      uVar10 = 1 << ((char)uVar16 - 1U & 0x1f);
      do {
        uVar13 = uVar10;
        uVar10 = uVar13 >> 1;
      } while ((uVar13 & uVar28) != 0);
      uVar28 = (uVar13 - 1 & uVar28) + uVar13;
      if (uVar13 == 0) {
        uVar28 = 0;
      }
      uVar26 = uVar26 + 1;
      puVar1 = local_b8 + (uVar16 & 0xffffffff);
      *puVar1 = *puVar1 - 1;
      if (*puVar1 == 0) {
        if ((uint)uVar16 == uVar24) {
          if (uVar28 != 0) {
            uVar25 = (ulong)uVar28;
            *(undefined1 *)(lVar18 + uVar25 * 4) = 0x40;
            *(byte *)(lVar18 + 1 + uVar25 * 4) = bVar9;
            *(undefined2 *)(lVar18 + 2 + uVar25 * 4) = 0;
          }
          *plVar5 = *plVar5 + (local_90 & 0xffffffff) * 4;
          goto LAB_004bda8b;
        }
        uVar16 = (ulong)*(ushort *)(param_2 + (ulong)*(ushort *)(local_40 + (ulong)uVar26 * 2) * 2);
      }
      uVar13 = (uint)uVar16;
    } while ((uVar13 <= uVar8) || (uVar15 = uVar28 & uVar6 - 1, uVar15 == local_bc));
    if (uVar23 == 0) {
      uVar23 = uVar8;
    }
    uVar10 = uVar13 - uVar23;
    iVar29 = 1 << ((byte)uVar10 & 0x1f);
    if (uVar13 < uVar24) {
      uVar10 = uVar24 - uVar23;
      uVar25 = uVar16 & 0xffffffff;
      do {
        iVar17 = iVar29 - (uint)local_b8[uVar25];
        if (iVar17 == 0 || iVar29 < (int)(uint)local_b8[uVar25]) {
          uVar10 = (int)uVar25 - uVar23;
          break;
        }
        iVar29 = iVar17 * 2;
        uVar25 = uVar25 + 1;
      } while ((uint)uVar25 < uVar24);
      iVar29 = 1 << ((byte)uVar10 & 0x1f);
    }
    uVar13 = (int)local_90 + iVar29;
    if ((bool)(bVar4 & 0x354 < uVar13)) {
      return 1;
    }
    local_90 = (ulong)uVar13;
    if ((bool)(bVar32 & 0x250 < uVar13)) {
      return 1;
    }
    lVar18 = lVar18 + (ulong)uVar7 * 4;
    lVar2 = *local_48;
    uVar25 = (ulong)uVar15;
    *(char *)(lVar2 + uVar25 * 4) = (char)uVar10;
    *(byte *)(lVar2 + 1 + uVar25 * 4) = (byte)uVar8;
    *(short *)(lVar2 + 2 + uVar25 * 4) = (short)((uint)((int)lVar18 - (int)lVar2) >> 2);
    local_bc = uVar15;
  } while( true );
}


