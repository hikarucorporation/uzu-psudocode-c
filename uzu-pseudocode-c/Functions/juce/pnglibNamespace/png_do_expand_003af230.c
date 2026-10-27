// Function : png_do_expand
// Namespace: juce:pnglibNamespace
// Entry    : 003af230
// Prototype: undefined png_do_expand(uint * param_1, long param_2, long param_3)
// Body     : 003af230 - 003af810


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::pnglibNamespace::png_do_expand(juce::pnglibNamespace::png_row_info_struct*, unsigned char*,
   juce::pnglibNamespace::png_color_16_struct const*) */

void __cdecl juce::pnglibNamespace::png_do_expand(uint *param_1,long param_2,long param_3)

{
  char *pcVar1;
  undefined1 *puVar2;
  char cVar3;
  char cVar4;
  ushort uVar5;
  ushort uVar6;
  uint uVar7;
  bool bVar8;
  byte bVar9;
  int iVar10;
  long lVar11;
  byte *pbVar12;
  ulong uVar13;
  ulong uVar14;
  sbyte sVar15;
  uint uVar16;
  char *pcVar17;
  long lVar18;
  undefined1 uVar19;
  uint uVar20;
  long lVar21;
  long lVar22;
  char cVar23;
  ushort uVar24;
  uint uVar25;
  
  uVar7 = *param_1;
  uVar13 = (ulong)uVar7;
  if ((char)param_1[4] != '\0') {
    if (param_3 == 0) {
      return;
    }
    if ((char)param_1[4] != '\x02') {
      return;
    }
    if (*(char *)((long)param_1 + 0x11) == '\x10') {
      if (uVar13 != 0) {
        uVar24 = *(ushort *)(param_3 + 2);
        uVar5 = *(ushort *)(param_3 + 4);
        uVar6 = *(ushort *)(param_3 + 6);
        lVar11 = param_2 + (ulong)(uVar7 * 8);
        pcVar17 = (char *)(param_2 + *(long *)(param_1 + 2) + -1);
        lVar22 = 0;
        do {
          if (((((uVar24 >> 8 == (ushort)(byte)pcVar17[-5]) && (pcVar17[-4] == (char)uVar24)) &&
               (uVar5 >> 8 == (ushort)(byte)pcVar17[-3])) &&
              ((pcVar17[-2] == (char)uVar5 && (uVar6 >> 8 == (ushort)(byte)pcVar17[-1])))) &&
             (*pcVar17 == (char)uVar6)) {
            uVar19 = 0;
          }
          else {
            uVar19 = 0xff;
          }
          *(undefined1 *)(lVar11 + -1 + lVar22 * 8) = uVar19;
          *(undefined1 *)(lVar11 + -2 + lVar22 * 8) = uVar19;
          *(char *)(lVar11 + -3 + lVar22 * 8) = *pcVar17;
          *(char *)(lVar11 + -4 + lVar22 * 8) = pcVar17[-1];
          *(char *)(lVar11 + -5 + lVar22 * 8) = pcVar17[-2];
          *(char *)(lVar11 + -6 + lVar22 * 8) = pcVar17[-3];
          *(char *)(lVar11 + -7 + lVar22 * 8) = pcVar17[-4];
          pcVar1 = pcVar17 + -5;
          pcVar17 = pcVar17 + -6;
          *(char *)(lVar11 + -8 + lVar22 * 8) = *pcVar1;
          lVar22 = lVar22 + -1;
        } while (-uVar7 != (int)lVar22);
      }
    }
    else if ((*(char *)((long)param_1 + 0x11) == '\b') && (uVar13 != 0)) {
      lVar11 = (ulong)(uVar7 * 4) + param_2;
      pcVar17 = (char *)(param_2 + -1 + *(long *)(param_1 + 2));
      cVar23 = *(char *)(param_3 + 6);
      cVar3 = *(char *)(param_3 + 2);
      cVar4 = *(char *)(param_3 + 4);
      lVar22 = 0;
      do {
        if (((pcVar17[-2] == cVar3) && (pcVar17[-1] == cVar4)) && (*pcVar17 == cVar23)) {
          uVar19 = 0;
        }
        else {
          uVar19 = 0xff;
        }
        *(undefined1 *)(lVar11 + -1 + lVar22 * 4) = uVar19;
        *(char *)(lVar11 + -2 + lVar22 * 4) = *pcVar17;
        *(char *)(lVar11 + -3 + lVar22 * 4) = pcVar17[-1];
        pcVar1 = pcVar17 + -2;
        pcVar17 = pcVar17 + -3;
        *(char *)(lVar11 + -4 + lVar22 * 4) = *pcVar1;
        lVar22 = lVar22 + -1;
      } while (-uVar7 != (int)lVar22);
    }
    *(undefined1 *)(param_1 + 4) = 6;
    *(undefined1 *)((long)param_1 + 0x12) = 4;
    bVar9 = *(char *)((long)param_1 + 0x11) << 2;
    *(byte *)((long)param_1 + 0x13) = bVar9;
    goto joined_r0x003af7f1;
  }
  if (param_3 == 0) {
    uVar24 = 0;
    bVar9 = *(byte *)((long)param_1 + 0x11);
  }
  else {
    uVar24 = *(ushort *)(param_3 + 8);
    bVar9 = *(byte *)((long)param_1 + 0x11);
  }
  if (bVar9 < 8) {
    if (bVar9 == 1) {
      uVar24 = (uVar24 & 1) * 0xff;
      if (uVar13 != 0) {
        uVar25 = -uVar7 & 7;
        lVar11 = param_2 + uVar13;
        pbVar12 = (byte *)((ulong)(uVar7 - 1 >> 3) + param_2);
        if (uVar7 - 1 != 0) {
          uVar20 = uVar7 & 0xfffffffe;
          do {
            *(char *)(lVar11 + -1) = -((*pbVar12 >> (uVar25 & 0x1f) & 1) != 0);
            uVar16 = uVar25 + 1;
            uVar14 = (ulong)(uVar25 == 7);
            if (uVar25 == 7) {
              uVar16 = 0;
            }
            *(char *)(lVar11 + -2) = -((pbVar12[-uVar14] >> (uVar16 & 0x1f) & 1) != 0);
            lVar11 = lVar11 + -2;
            uVar25 = uVar16 + 1;
            if (uVar16 == 7) {
              uVar25 = 0;
            }
            pbVar12 = pbVar12 + (-(ulong)(uVar16 == 7) - uVar14);
            uVar20 = uVar20 - 2;
          } while (uVar20 != 0);
          if ((uVar7 & 1) == 0) goto LAB_003af656;
        }
        *(char *)(lVar11 + -1) = -((*pbVar12 >> (uVar25 & 0x1f) & 1) != 0);
        goto LAB_003af656;
      }
LAB_003af65b:
      uVar14 = 0;
    }
    else {
      if (bVar9 == 2) {
        uVar24 = (uVar24 & 3) * 0x55;
        if (uVar13 == 0) goto LAB_003af65b;
        uVar25 = ~(uVar7 * 2 + 6) & 6;
        lVar11 = param_2 + uVar13;
        pbVar12 = (byte *)((ulong)(uVar7 - 1 >> 2) + param_2);
        if (uVar7 - 1 != 0) {
          uVar20 = uVar7 & 0xfffffffe;
          do {
            *(byte *)(lVar11 + -1) = (*pbVar12 >> ((byte)uVar25 & 0x1f) & 3) * 'U';
            iVar10 = uVar25 + 2;
            if (uVar25 == 6) {
              iVar10 = 0;
            }
            uVar14 = (ulong)(uVar25 == 6);
            *(byte *)(lVar11 + -2) = (pbVar12[-uVar14] >> ((byte)iVar10 & 0x1f) & 3) * 'U';
            lVar11 = lVar11 + -2;
            uVar25 = iVar10 + 2;
            if (iVar10 == 6) {
              uVar25 = 0;
            }
            pbVar12 = pbVar12 + (-(ulong)(iVar10 == 6) - uVar14);
            uVar20 = uVar20 - 2;
          } while (uVar20 != 0);
          if ((uVar7 & 1) == 0) goto LAB_003af656;
        }
        *(byte *)(lVar11 + -1) = (*pbVar12 >> ((byte)uVar25 & 0x1f) & 3) * 'U';
      }
      else if (bVar9 == 4) {
        uVar24 = (uVar24 & 0xf) << 4 | uVar24 & 0xf;
        if (uVar13 == 0) goto LAB_003af65b;
        uVar25 = uVar7 * 4 & 4;
        sVar15 = (sbyte)uVar25;
        lVar11 = param_2 + uVar13;
        pbVar12 = (byte *)((ulong)(uVar7 - 1 >> 1) + param_2);
        if (uVar7 - 1 != 0) {
          uVar20 = uVar7 & 0xfffffffe;
          do {
            bVar9 = *pbVar12 >> (sbyte)uVar25;
            *(byte *)(lVar11 + -1) = bVar9 * '\x10' + (bVar9 & 0xf);
            bVar8 = uVar25 != 4;
            uVar25 = (uint)(uVar25 == 4);
            bVar9 = pbVar12[-(ulong)uVar25] >> bVar8 * '\x04';
            *(byte *)(lVar11 + -2) = bVar9 * '\x10' + (bVar9 & 0xf);
            lVar11 = lVar11 + -2;
            pbVar12 = pbVar12 + (-(ulong)bVar8 - (ulong)uVar25);
            uVar25 = uVar25 << 2;
            sVar15 = (sbyte)uVar25;
            uVar20 = uVar20 - 2;
          } while (uVar20 != 0);
          if ((uVar7 & 1) == 0) goto LAB_003af656;
        }
        *(byte *)(lVar11 + -1) = (*pbVar12 >> sVar15) * '\x10' + (*pbVar12 >> sVar15 & 0xf);
      }
LAB_003af656:
      uVar14 = uVar13;
    }
    *(undefined1 *)((long)param_1 + 0x11) = 8;
    *(undefined1 *)((long)param_1 + 0x13) = 8;
    *(ulong *)(param_1 + 2) = uVar14;
    bVar9 = 8;
  }
  if (param_3 == 0) {
    return;
  }
  cVar23 = (char)uVar24;
  if (bVar9 == 0x10) {
    if (uVar13 != 0) {
      lVar11 = param_2 + *(long *)(param_1 + 2) * 2;
      lVar22 = *(long *)(param_1 + 2) + param_2;
      lVar21 = 0;
      do {
        if ((*(char *)(lVar22 + -2 + lVar21 * 2) == (char)(uVar24 >> 8)) &&
           (*(char *)(lVar22 + -1 + lVar21 * 2) == cVar23)) {
          uVar19 = 0;
        }
        else {
          uVar19 = 0xff;
        }
        *(undefined1 *)(lVar11 + -1 + lVar21 * 4) = uVar19;
        *(undefined1 *)(lVar11 + -2 + lVar21 * 4) = uVar19;
        *(undefined1 *)(lVar11 + -3 + lVar21 * 4) = *(undefined1 *)(lVar22 + -1 + lVar21 * 2);
        *(undefined1 *)(lVar11 + -4 + lVar21 * 4) = *(undefined1 *)(lVar22 + -2 + lVar21 * 2);
        lVar21 = lVar21 + -1;
      } while (-uVar7 != (int)lVar21);
    }
  }
  else if ((bVar9 == 8) && (uVar13 != 0)) {
    lVar11 = param_2 + uVar13;
    lVar22 = (ulong)(uVar7 * 2) + param_2;
    if (uVar7 != 1) {
      uVar25 = (uVar7 - 2 >> 1) + 1;
      if (1 < uVar7 - 2) {
        uVar20 = uVar25 & 0xfffffffe;
        lVar21 = lVar22;
        lVar18 = lVar11;
        do {
          *(char *)(lVar21 + -1) = -(*(char *)(lVar18 + -1) != cVar23);
          *(undefined1 *)(lVar21 + -2) = *(undefined1 *)(lVar18 + -1);
          *(char *)(lVar21 + -3) = -(*(char *)(lVar18 + -2) != cVar23);
          *(undefined1 *)(lVar21 + -4) = *(undefined1 *)(lVar18 + -2);
          *(char *)(lVar21 + -5) = -(*(char *)(lVar18 + -3) != cVar23);
          *(undefined1 *)(lVar21 + -6) = *(undefined1 *)(lVar18 + -3);
          lVar11 = lVar18 + -4;
          lVar22 = lVar21 + -8;
          *(char *)(lVar21 + -7) = -(*(char *)(lVar18 + -4) != cVar23);
          *(undefined1 *)(lVar21 + -8) = *(undefined1 *)(lVar18 + -4);
          uVar20 = uVar20 - 2;
          lVar21 = lVar22;
          lVar18 = lVar11;
        } while (uVar20 != 0);
      }
      if ((uVar25 & 1) != 0) {
        *(char *)(lVar22 + -1) = -(*(char *)(lVar11 + -1) != cVar23);
        *(undefined1 *)(lVar22 + -2) = *(undefined1 *)(lVar11 + -1);
        *(char *)(lVar22 + -3) = -(*(char *)(lVar11 + -2) != cVar23);
        puVar2 = (undefined1 *)(lVar11 + -2);
        lVar11 = lVar11 + -2;
        *(undefined1 *)(lVar22 + -4) = *puVar2;
        lVar22 = lVar22 + -4;
      }
      if ((uVar7 & 1) == 0) goto LAB_003af7df;
    }
    *(char *)(lVar22 + -1) = -(*(char *)(lVar11 + -1) != cVar23);
    *(undefined1 *)(lVar22 + -2) = *(undefined1 *)(lVar11 + -1);
  }
LAB_003af7df:
  *(undefined1 *)(param_1 + 4) = 4;
  *(undefined1 *)((long)param_1 + 0x12) = 2;
  bVar9 = *(char *)((long)param_1 + 0x11) * '\x02';
  *(byte *)((long)param_1 + 0x13) = bVar9;
joined_r0x003af7f1:
  if (bVar9 < 8) {
    uVar13 = bVar9 * uVar13 + 7 >> 3;
  }
  else {
    uVar13 = (bVar9 >> 3) * uVar13;
  }
  *(ulong *)(param_1 + 2) = uVar13;
  return;
}


