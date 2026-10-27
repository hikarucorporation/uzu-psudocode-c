// Function : start_pass
// Namespace: juce:jpeglibNamespace
// Entry    : 00378970
// Prototype: undefined start_pass(long * param_1)
// Body     : 00378970 - 00379818


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::jpeglibNamespace::start_pass(juce::jpeglibNamespace::jpeg_decompress_struct*) */

void __cdecl juce::jpeglibNamespace::start_pass(long *param_1)

{
  char cVar1;
  long lVar2;
  ulong *puVar3;
  undefined1 (*pauVar4) [16];
  float *pfVar5;
  long lVar6;
  undefined1 auVar7 [14];
  undefined1 auVar8 [14];
  undefined1 auVar9 [14];
  undefined1 auVar10 [14];
  undefined1 auVar11 [14];
  undefined1 auVar12 [14];
  undefined1 auVar13 [14];
  undefined1 auVar14 [14];
  undefined1 auVar15 [14];
  undefined1 auVar16 [14];
  undefined1 auVar17 [14];
  undefined1 auVar18 [14];
  undefined1 auVar19 [14];
  undefined1 auVar20 [14];
  undefined1 auVar21 [14];
  undefined1 auVar22 [14];
  undefined1 auVar23 [14];
  undefined1 auVar24 [14];
  undefined1 auVar25 [14];
  undefined1 auVar26 [14];
  undefined1 auVar27 [14];
  undefined1 auVar28 [14];
  undefined1 auVar29 [14];
  undefined1 auVar30 [14];
  undefined1 auVar31 [14];
  undefined1 auVar32 [14];
  undefined1 auVar33 [14];
  undefined1 auVar34 [14];
  undefined1 auVar35 [14];
  undefined1 auVar36 [14];
  undefined1 auVar37 [14];
  undefined1 auVar38 [14];
  undefined1 auVar39 [14];
  undefined1 auVar40 [14];
  undefined1 auVar41 [14];
  undefined1 auVar42 [14];
  undefined1 auVar43 [14];
  undefined1 auVar44 [14];
  undefined1 auVar45 [14];
  undefined1 auVar46 [14];
  undefined1 auVar47 [14];
  undefined1 auVar48 [14];
  undefined1 auVar49 [14];
  undefined1 auVar50 [14];
  undefined1 auVar51 [14];
  undefined1 auVar52 [14];
  undefined1 auVar53 [14];
  undefined1 auVar54 [14];
  undefined1 auVar55 [14];
  undefined1 auVar56 [14];
  undefined1 auVar57 [14];
  undefined1 auVar58 [14];
  undefined1 auVar59 [14];
  undefined1 auVar60 [14];
  undefined1 auVar61 [14];
  undefined1 auVar62 [14];
  undefined1 auVar63 [14];
  undefined1 auVar64 [14];
  undefined1 auVar65 [14];
  undefined1 auVar66 [14];
  undefined1 auVar67 [14];
  undefined1 auVar68 [14];
  undefined1 auVar69 [14];
  undefined1 auVar70 [14];
  double dVar71;
  double dVar72;
  double dVar73;
  double dVar74;
  double dVar75;
  double dVar76;
  double dVar77;
  double dVar78;
  double dVar79;
  double dVar80;
  double dVar81;
  double dVar82;
  double dVar83;
  double dVar84;
  undefined8 *puVar85;
  int iVar86;
  long lVar87;
  long lVar88;
  long lVar89;
  int iVar90;
  ulong uVar91;
  ulong uVar92;
  code *pcVar93;
  code *pcVar94;
  double dVar95;
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  undefined1 auVar100 [16];
  undefined1 auVar101 [16];
  undefined1 auVar102 [16];
  undefined1 auVar103 [16];
  undefined1 auVar104 [16];
  undefined1 auVar105 [16];
  undefined1 auVar106 [16];
  undefined1 auVar107 [16];
  undefined1 auVar108 [16];
  undefined1 auVar109 [16];
  undefined1 auVar110 [16];
  undefined1 auVar111 [16];
  double dVar112;
  double dVar113;
  double dVar114;
  double dVar115;
  double dVar116;
  double dVar117;
  double dVar118;
  double dVar119;
  double dVar120;
  double dVar121;
  double dVar122;
  double dVar123;
  double dVar124;
  double dVar125;
  
  if (0 < (int)param_1[7]) {
    lVar2 = param_1[0x4b];
    lVar88 = param_1[0x24];
    lVar89 = 0;
    uVar91 = 0;
    pcVar94 = (code *)0x0;
    do {
      iVar90 = *(int *)(lVar88 + 0x24);
      iVar86 = iVar90 * 0x100 + *(int *)(lVar88 + 0x28);
      if (iVar86 < 0x70e) {
        if (0x403 < iVar86) {
          if (iVar86 < 0x603) {
            if (iVar86 < 0x505) {
              if (iVar86 == 0x404) {
                pcVar93 = jpeg_idct_4x4;
                *(code **)(lVar2 + 8 + lVar89 * 8) = jpeg_idct_4x4;
                cVar1 = *(char *)(lVar88 + 0x34);
              }
              else {
                if (iVar86 != 0x408) goto LAB_003797b8;
                pcVar93 = jpeg_idct_4x8;
                *(code **)(lVar2 + 8 + lVar89 * 8) = jpeg_idct_4x8;
                cVar1 = *(char *)(lVar88 + 0x34);
              }
              goto joined_r0x00378c6b;
            }
            if (iVar86 == 0x505) {
              pcVar94 = jpeg_idct_5x5;
              *(code **)(lVar2 + 8 + lVar89 * 8) = jpeg_idct_5x5;
              cVar1 = *(char *)(lVar88 + 0x34);
              goto joined_r0x00378daf;
            }
            if (iVar86 == 0x50a) {
              uVar91 = 0;
              *(code **)(lVar2 + 8 + lVar89 * 8) = jpeg_idct_5x10;
              cVar1 = *(char *)(lVar88 + 0x34);
              pcVar94 = jpeg_idct_5x10;
              goto joined_r0x00378e39;
            }
          }
          else {
            if (0x60b < iVar86) {
              if (iVar86 == 0x60c) {
                pcVar94 = jpeg_idct_6x12;
                *(code **)(lVar2 + 8 + lVar89 * 8) = jpeg_idct_6x12;
                cVar1 = *(char *)(lVar88 + 0x34);
              }
              else {
                if (iVar86 != 0x707) goto LAB_003797b8;
                pcVar94 = jpeg_idct_7x7;
                *(code **)(lVar2 + 8 + lVar89 * 8) = jpeg_idct_7x7;
                cVar1 = *(char *)(lVar88 + 0x34);
              }
              uVar91 = 0;
              goto joined_r0x00378e39;
            }
            if (iVar86 == 0x603) {
              pcVar94 = jpeg_idct_6x3;
              *(code **)(lVar2 + 8 + lVar89 * 8) = jpeg_idct_6x3;
              cVar1 = *(char *)(lVar88 + 0x34);
              goto joined_r0x00378abf;
            }
            if (iVar86 == 0x606) {
              pcVar94 = jpeg_idct_6x6;
              *(code **)(lVar2 + 8 + lVar89 * 8) = jpeg_idct_6x6;
              cVar1 = *(char *)(lVar88 + 0x34);
              goto joined_r0x00378e39;
            }
          }
LAB_003797b8:
          lVar6 = *param_1;
          *(undefined4 *)(lVar6 + 0x28) = 7;
          *(int *)(lVar6 + 0x2c) = iVar90;
          *(undefined4 *)(*param_1 + 0x30) = *(undefined4 *)(lVar88 + 0x28);
          puVar85 = (undefined8 *)*param_1;
          goto LAB_003797dd;
        }
        if (0x203 < iVar86) {
          if (iVar86 < 0x306) {
            if (iVar86 == 0x204) {
              pcVar94 = jpeg_idct_2x4;
              *(code **)(lVar2 + 8 + lVar89 * 8) = jpeg_idct_2x4;
              cVar1 = *(char *)(lVar88 + 0x34);
joined_r0x00378abf:
              uVar91 = 0;
              goto joined_r0x00378e39;
            }
            if (iVar86 == 0x303) {
              pcVar93 = jpeg_idct_3x3;
              *(code **)(lVar2 + 8 + lVar89 * 8) = jpeg_idct_3x3;
              cVar1 = *(char *)(lVar88 + 0x34);
              goto joined_r0x00378c6b;
            }
          }
          else {
            if (iVar86 == 0x306) {
              pcVar94 = jpeg_idct_3x6;
              *(code **)(lVar2 + 8 + lVar89 * 8) = jpeg_idct_3x6;
              cVar1 = *(char *)(lVar88 + 0x34);
joined_r0x00378daf:
              uVar91 = 0;
              goto joined_r0x00378e39;
            }
            if (iVar86 == 0x402) {
              pcVar94 = jpeg_idct_4x2;
              *(code **)(lVar2 + 8 + lVar89 * 8) = jpeg_idct_4x2;
              cVar1 = *(char *)(lVar88 + 0x34);
              goto joined_r0x00378e39;
            }
          }
          goto LAB_003797b8;
        }
        if (iVar86 < 0x201) {
          pcVar93 = jpeg_idct_1x1;
          if (iVar86 != 0x101) {
            if (iVar86 == 0x102) {
              pcVar94 = jpeg_idct_1x2;
              *(code **)(lVar2 + 8 + lVar89 * 8) = jpeg_idct_1x2;
              cVar1 = *(char *)(lVar88 + 0x34);
joined_r0x00378e1b:
              uVar91 = 0;
              goto joined_r0x00378e39;
            }
            goto LAB_003797b8;
          }
LAB_00378fe0:
          *(code **)(lVar2 + 8 + lVar89 * 8) = pcVar93;
          cVar1 = *(char *)(lVar88 + 0x34);
        }
        else {
          if (iVar86 != 0x201) {
            if (iVar86 == 0x202) {
              pcVar94 = jpeg_idct_2x2;
              *(code **)(lVar2 + 8 + lVar89 * 8) = jpeg_idct_2x2;
              cVar1 = *(char *)(lVar88 + 0x34);
              goto joined_r0x00378f74;
            }
            goto LAB_003797b8;
          }
          pcVar93 = jpeg_idct_2x1;
          *(code **)(lVar2 + 8 + lVar89 * 8) = jpeg_idct_2x1;
          cVar1 = *(char *)(lVar88 + 0x34);
        }
joined_r0x00378c6b:
        uVar91 = 0;
        pcVar94 = pcVar93;
      }
      else {
        if (0xc05 < iVar86) {
          if (iVar86 < 0xe0e) {
            if (iVar86 < 0xd0d) {
              if (iVar86 != 0xc06) {
                if (iVar86 == 0xc0c) {
                  pcVar94 = jpeg_idct_12x12;
                  *(code **)(lVar2 + 8 + lVar89 * 8) = jpeg_idct_12x12;
                  cVar1 = *(char *)(lVar88 + 0x34);
                  goto joined_r0x00378abf;
                }
                goto LAB_003797b8;
              }
              pcVar93 = jpeg_idct_12x6;
              *(code **)(lVar2 + 8 + lVar89 * 8) = jpeg_idct_12x6;
              cVar1 = *(char *)(lVar88 + 0x34);
            }
            else {
              if (iVar86 == 0xd0d) {
                pcVar94 = jpeg_idct_13x13;
                *(code **)(lVar2 + 8 + lVar89 * 8) = jpeg_idct_13x13;
                cVar1 = *(char *)(lVar88 + 0x34);
joined_r0x00378f74:
                uVar91 = 0;
                goto joined_r0x00378e39;
              }
              if (iVar86 != 0xe07) goto LAB_003797b8;
              pcVar93 = jpeg_idct_14x7;
              *(code **)(lVar2 + 8 + lVar89 * 8) = jpeg_idct_14x7;
              cVar1 = *(char *)(lVar88 + 0x34);
            }
            goto joined_r0x00378c6b;
          }
          if (iVar86 < 0x1008) {
            if (iVar86 == 0xe0e) {
              pcVar94 = jpeg_idct_14x14;
              uVar91 = 0;
              *(code **)(lVar2 + 8 + lVar89 * 8) = jpeg_idct_14x14;
              cVar1 = *(char *)(lVar88 + 0x34);
              goto joined_r0x00378e39;
            }
            if (iVar86 == 0xf0f) {
              pcVar93 = jpeg_idct_15x15;
              *(code **)(lVar2 + 8 + lVar89 * 8) = jpeg_idct_15x15;
              cVar1 = *(char *)(lVar88 + 0x34);
              goto joined_r0x00378c6b;
            }
          }
          else {
            if (iVar86 == 0x1008) {
              pcVar93 = jpeg_idct_16x8;
              goto LAB_00378fe0;
            }
            if (iVar86 == 0x1010) {
              pcVar94 = jpeg_idct_16x16;
              *(code **)(lVar2 + 8 + lVar89 * 8) = jpeg_idct_16x16;
              cVar1 = *(char *)(lVar88 + 0x34);
              goto joined_r0x00378e1b;
            }
          }
          goto LAB_003797b8;
        }
        if (0x908 < iVar86) {
          if (iVar86 < 0xa0a) {
            if (iVar86 == 0x909) {
              pcVar93 = jpeg_idct_9x9;
              *(code **)(lVar2 + 8 + lVar89 * 8) = jpeg_idct_9x9;
              cVar1 = *(char *)(lVar88 + 0x34);
            }
            else {
              if (iVar86 != 0xa05) goto LAB_003797b8;
              pcVar93 = jpeg_idct_10x5;
              *(code **)(lVar2 + 8 + lVar89 * 8) = jpeg_idct_10x5;
              cVar1 = *(char *)(lVar88 + 0x34);
            }
            goto joined_r0x00378c6b;
          }
          if (iVar86 == 0xa0a) {
            pcVar94 = jpeg_idct_10x10;
            *(code **)(lVar2 + 8 + lVar89 * 8) = jpeg_idct_10x10;
            cVar1 = *(char *)(lVar88 + 0x34);
            goto joined_r0x00378e39;
          }
          if (iVar86 == 0xb0b) {
            pcVar94 = jpeg_idct_11x11;
            *(code **)(lVar2 + 8 + lVar89 * 8) = jpeg_idct_11x11;
            cVar1 = *(char *)(lVar88 + 0x34);
            goto joined_r0x00378daf;
          }
          goto LAB_003797b8;
        }
        if (iVar86 < 0x808) {
          if (iVar86 == 0x70e) {
            pcVar94 = jpeg_idct_7x14;
            *(code **)(lVar2 + 8 + lVar89 * 8) = jpeg_idct_7x14;
            cVar1 = *(char *)(lVar88 + 0x34);
joined_r0x00378e39:
            uVar91 = 0;
            goto joined_r0x00378e39;
          }
          if (iVar86 == 0x804) {
            pcVar94 = jpeg_idct_8x4;
            *(code **)(lVar2 + 8 + lVar89 * 8) = jpeg_idct_8x4;
            cVar1 = *(char *)(lVar88 + 0x34);
            goto joined_r0x00378abf;
          }
          goto LAB_003797b8;
        }
        if (iVar86 != 0x808) {
          if (iVar86 == 0x810) {
            pcVar94 = jpeg_idct_8x16;
            *(code **)(lVar2 + 8 + lVar89 * 8) = jpeg_idct_8x16;
            cVar1 = *(char *)(lVar88 + 0x34);
            goto joined_r0x00378daf;
          }
          goto LAB_003797b8;
        }
        uVar92 = (ulong)*(int *)((long)param_1 + 0x5c);
        if (uVar92 < 3) {
          pcVar94 = (code *)(&PTR_jpeg_idct_islow_007126b8)[uVar92];
          *(code **)(lVar2 + 8 + lVar89 * 8) = pcVar94;
          cVar1 = *(char *)(lVar88 + 0x34);
          uVar91 = uVar92;
          goto joined_r0x00378e39;
        }
        puVar85 = (undefined8 *)*param_1;
        *(undefined4 *)(puVar85 + 5) = 0x31;
LAB_003797dd:
        (*(code *)*puVar85)();
        uVar91 = uVar91 & 0xffffffff;
        *(code **)(lVar2 + 8 + lVar89 * 8) = pcVar94;
        cVar1 = *(char *)(lVar88 + 0x34);
      }
joined_r0x00378e39:
      if (((cVar1 != '\0') && (iVar90 = (int)uVar91, *(int *)(lVar2 + 0x58 + lVar89 * 4) != iVar90))
         && (puVar3 = *(ulong **)(lVar88 + 0x50), puVar3 != (ulong *)0x0)) {
        *(int *)(lVar2 + 0x58 + lVar89 * 4) = iVar90;
        dVar84 = _UNK_005dda98;
        dVar83 = _DAT_005dda90;
        dVar82 = _UNK_005dd7b8;
        dVar81 = _DAT_005dd7b0;
        dVar80 = _UNK_005dd7a8;
        dVar79 = _DAT_005dd7a0;
        dVar78 = _UNK_005dd798;
        dVar77 = _DAT_005dd790;
        dVar76 = _UNK_005dd788;
        dVar75 = _DAT_005dd780;
        dVar74 = _UNK_005dd778;
        dVar73 = _DAT_005dd770;
        dVar72 = _UNK_005dd768;
        dVar71 = _DAT_005dd760;
        if (iVar90 == 2) {
          dVar95 = (double)(ushort)*puVar3 * _DAT_005dda80 * _DAT_005dda90;
          dVar112 = (double)(ushort)puVar3[2] * _UNK_005dda88 * _UNK_005dda98;
          dVar113 = (double)*(ushort *)((long)puVar3 + 2) * _DAT_005dda80 * _DAT_005dd760 *
                    _DAT_005dda90;
          dVar115 = (double)*(ushort *)((long)puVar3 + 0x12) * _UNK_005dda88 * _UNK_005dd768 *
                    _UNK_005dda98;
          dVar114 = (double)*(ushort *)((long)puVar3 + 4) * _DAT_005dda80 * _DAT_005dd770 *
                    _DAT_005dda90;
          dVar116 = (double)*(ushort *)((long)puVar3 + 0x14) * _UNK_005dda88 * _UNK_005dd778 *
                    _UNK_005dda98;
          dVar117 = (double)*(ushort *)((long)puVar3 + 6) * _DAT_005dda80 * _DAT_005dd780 *
                    _DAT_005dda90;
          dVar119 = (double)*(ushort *)((long)puVar3 + 0x16) * _UNK_005dda88 * _UNK_005dd788 *
                    _UNK_005dda98;
          pfVar5 = *(float **)(lVar88 + 0x58);
          dVar118 = (double)(ushort)puVar3[1] * _DAT_005dda80 * _DAT_005dda90;
          dVar120 = (double)*(ushort *)((long)puVar3 + 10) * _DAT_005dda80 * _DAT_005dd790 *
                    _DAT_005dda90;
          dVar122 = (double)*(ushort *)((long)puVar3 + 0x1a) * _UNK_005dda88 * _UNK_005dd798 *
                    _UNK_005dda98;
          dVar121 = (double)*(ushort *)((long)puVar3 + 0xc) * _DAT_005dda80 * _DAT_005dd7a0 *
                    _DAT_005dda90;
          dVar123 = (double)*(ushort *)((long)puVar3 + 0x1c) * _UNK_005dda88 * _UNK_005dd7a8 *
                    _UNK_005dda98;
          dVar124 = (double)*(ushort *)((long)puVar3 + 0xe) * _DAT_005dda80 * _DAT_005dd7b0 *
                    _DAT_005dda90;
          dVar125 = (double)*(ushort *)((long)puVar3 + 0x1e) * _UNK_005dda88 * _UNK_005dd7b8 *
                    _UNK_005dda98;
          pfVar5[0xc] = (float)((double)(ushort)puVar3[3] * _UNK_005dda88 * _UNK_005dda98);
          pfVar5[0xd] = (float)dVar122;
          pfVar5[0xe] = (float)dVar123;
          pfVar5[0xf] = (float)dVar125;
          pfVar5[8] = (float)dVar112;
          pfVar5[9] = (float)dVar115;
          pfVar5[10] = (float)dVar116;
          pfVar5[0xb] = (float)dVar119;
          pfVar5[4] = (float)dVar118;
          pfVar5[5] = (float)dVar120;
          pfVar5[6] = (float)dVar121;
          pfVar5[7] = (float)dVar124;
          *pfVar5 = (float)dVar95;
          pfVar5[1] = (float)dVar113;
          pfVar5[2] = (float)dVar114;
          pfVar5[3] = (float)dVar117;
          dVar95 = (double)(ushort)puVar3[4] * _DAT_005ddaa0;
          dVar112 = (double)(ushort)puVar3[6] * _UNK_005ddaa8;
          dVar113 = (double)*(ushort *)((long)puVar3 + 0x22) * _DAT_005ddaa0;
          dVar115 = (double)*(ushort *)((long)puVar3 + 0x32) * _UNK_005ddaa8;
          dVar114 = (double)*(ushort *)((long)puVar3 + 0x24) * _DAT_005ddaa0;
          dVar116 = (double)*(ushort *)((long)puVar3 + 0x34) * _UNK_005ddaa8;
          dVar117 = (double)*(ushort *)((long)puVar3 + 0x26) * _DAT_005ddaa0;
          dVar119 = (double)*(ushort *)((long)puVar3 + 0x36) * _UNK_005ddaa8;
          dVar118 = (double)(ushort)puVar3[5] * _DAT_005ddaa0;
          dVar120 = (double)*(ushort *)((long)puVar3 + 0x2a) * _DAT_005ddaa0;
          dVar122 = (double)*(ushort *)((long)puVar3 + 0x3a) * _UNK_005ddaa8;
          dVar121 = (double)*(ushort *)((long)puVar3 + 0x2c) * _DAT_005ddaa0;
          dVar123 = (double)*(ushort *)((long)puVar3 + 0x3c) * _UNK_005ddaa8;
          dVar124 = (double)*(ushort *)((long)puVar3 + 0x2e) * _DAT_005ddaa0;
          dVar125 = (double)*(ushort *)((long)puVar3 + 0x3e) * _UNK_005ddaa8;
          pfVar5[0x1c] = (float)((double)(ushort)puVar3[7] * _UNK_005ddaa8 * dVar84);
          pfVar5[0x1d] = (float)(dVar122 * dVar78 * dVar84);
          pfVar5[0x1e] = (float)(dVar123 * dVar80 * dVar84);
          pfVar5[0x1f] = (float)(dVar125 * dVar82 * dVar84);
          pfVar5[0x18] = (float)(dVar112 * dVar84);
          pfVar5[0x19] = (float)(dVar115 * dVar72 * dVar84);
          pfVar5[0x1a] = (float)(dVar116 * dVar74 * dVar84);
          pfVar5[0x1b] = (float)(dVar119 * dVar76 * dVar84);
          pfVar5[0x14] = (float)(dVar118 * dVar83);
          pfVar5[0x15] = (float)(dVar120 * dVar77 * dVar83);
          pfVar5[0x16] = (float)(dVar121 * dVar79 * dVar83);
          pfVar5[0x17] = (float)(dVar124 * dVar81 * dVar83);
          pfVar5[0x10] = (float)(dVar95 * dVar83);
          pfVar5[0x11] = (float)(dVar113 * dVar71 * dVar83);
          pfVar5[0x12] = (float)(dVar114 * dVar73 * dVar83);
          pfVar5[0x13] = (float)(dVar117 * dVar75 * dVar83);
          dVar95 = (double)(ushort)puVar3[8] * _DAT_005ddab0;
          dVar112 = (double)(ushort)puVar3[10] * _UNK_005ddab8;
          dVar113 = (double)*(ushort *)((long)puVar3 + 0x42) * _DAT_005ddab0;
          dVar115 = (double)*(ushort *)((long)puVar3 + 0x52) * _UNK_005ddab8;
          dVar114 = (double)*(ushort *)((long)puVar3 + 0x44) * _DAT_005ddab0;
          dVar116 = (double)*(ushort *)((long)puVar3 + 0x54) * _UNK_005ddab8;
          dVar117 = (double)*(ushort *)((long)puVar3 + 0x46) * _DAT_005ddab0;
          dVar119 = (double)*(ushort *)((long)puVar3 + 0x56) * _UNK_005ddab8;
          dVar118 = (double)(ushort)puVar3[9] * _DAT_005ddab0;
          dVar120 = (double)*(ushort *)((long)puVar3 + 0x4a) * _DAT_005ddab0;
          dVar122 = (double)*(ushort *)((long)puVar3 + 0x5a) * _UNK_005ddab8;
          dVar121 = (double)*(ushort *)((long)puVar3 + 0x4c) * _DAT_005ddab0;
          dVar123 = (double)*(ushort *)((long)puVar3 + 0x5c) * _UNK_005ddab8;
          dVar124 = (double)*(ushort *)((long)puVar3 + 0x4e) * _DAT_005ddab0;
          dVar125 = (double)*(ushort *)((long)puVar3 + 0x5e) * _UNK_005ddab8;
          pfVar5[0x2c] = (float)((double)(ushort)puVar3[0xb] * _UNK_005ddab8 * dVar84);
          pfVar5[0x2d] = (float)(dVar122 * dVar78 * dVar84);
          pfVar5[0x2e] = (float)(dVar123 * dVar80 * dVar84);
          pfVar5[0x2f] = (float)(dVar125 * dVar82 * dVar84);
          pfVar5[0x28] = (float)(dVar112 * dVar84);
          pfVar5[0x29] = (float)(dVar115 * dVar72 * dVar84);
          pfVar5[0x2a] = (float)(dVar116 * dVar74 * dVar84);
          pfVar5[0x2b] = (float)(dVar119 * dVar76 * dVar84);
          pfVar5[0x24] = (float)(dVar118 * dVar83);
          pfVar5[0x25] = (float)(dVar120 * dVar77 * dVar83);
          pfVar5[0x26] = (float)(dVar121 * dVar79 * dVar83);
          pfVar5[0x27] = (float)(dVar124 * dVar81 * dVar83);
          pfVar5[0x20] = (float)(dVar95 * dVar83);
          pfVar5[0x21] = (float)(dVar113 * dVar71 * dVar83);
          pfVar5[0x22] = (float)(dVar114 * dVar73 * dVar83);
          pfVar5[0x23] = (float)(dVar117 * dVar75 * dVar83);
          dVar95 = (double)(ushort)puVar3[0xc] * _DAT_005ddac0;
          dVar112 = (double)(ushort)puVar3[0xe] * _UNK_005ddac8;
          dVar113 = (double)*(ushort *)((long)puVar3 + 0x62) * _DAT_005ddac0;
          dVar115 = (double)*(ushort *)((long)puVar3 + 0x72) * _UNK_005ddac8;
          dVar114 = (double)*(ushort *)((long)puVar3 + 100) * _DAT_005ddac0;
          dVar116 = (double)*(ushort *)((long)puVar3 + 0x74) * _UNK_005ddac8;
          dVar117 = (double)*(ushort *)((long)puVar3 + 0x66) * _DAT_005ddac0;
          dVar119 = (double)*(ushort *)((long)puVar3 + 0x76) * _UNK_005ddac8;
          dVar118 = (double)(ushort)puVar3[0xd] * _DAT_005ddac0;
          dVar120 = (double)*(ushort *)((long)puVar3 + 0x6a) * _DAT_005ddac0;
          dVar122 = (double)*(ushort *)((long)puVar3 + 0x7a) * _UNK_005ddac8;
          dVar121 = (double)*(ushort *)((long)puVar3 + 0x6c) * _DAT_005ddac0;
          dVar123 = (double)*(ushort *)((long)puVar3 + 0x7c) * _UNK_005ddac8;
          dVar124 = (double)*(ushort *)((long)puVar3 + 0x6e) * _DAT_005ddac0;
          dVar125 = (double)*(ushort *)((long)puVar3 + 0x7e) * _UNK_005ddac8;
          pfVar5[0x3c] = (float)((double)(ushort)puVar3[0xf] * _UNK_005ddac8 * dVar84);
          pfVar5[0x3d] = (float)(dVar122 * dVar78 * dVar84);
          pfVar5[0x3e] = (float)(dVar123 * dVar80 * dVar84);
          pfVar5[0x3f] = (float)(dVar125 * dVar82 * dVar84);
          pfVar5[0x38] = (float)(dVar112 * dVar84);
          pfVar5[0x39] = (float)(dVar115 * dVar72 * dVar84);
          pfVar5[0x3a] = (float)(dVar116 * dVar74 * dVar84);
          pfVar5[0x3b] = (float)(dVar119 * dVar76 * dVar84);
          pfVar5[0x34] = (float)(dVar118 * dVar83);
          pfVar5[0x35] = (float)(dVar120 * dVar77 * dVar83);
          pfVar5[0x36] = (float)(dVar121 * dVar79 * dVar83);
          pfVar5[0x37] = (float)(dVar124 * dVar81 * dVar83);
          pfVar5[0x30] = (float)(dVar95 * dVar83);
          pfVar5[0x31] = (float)(dVar113 * dVar71 * dVar83);
          pfVar5[0x32] = (float)(dVar114 * dVar73 * dVar83);
          pfVar5[0x33] = (float)(dVar117 * dVar75 * dVar83);
        }
        else if (iVar90 == 1) {
          lVar6 = *(long *)(lVar88 + 0x58);
          lVar87 = 0;
          do {
            *(int *)(lVar6 + lVar87 * 4) =
                 (int)((long)(short)(&start_pass(juce::jpeglibNamespace::jpeg_decompress_struct*)::
                                      aanscales)[lVar87] *
                       (ulong)*(ushort *)((long)puVar3 + lVar87 * 2) + 0x800 >> 0xc);
            *(int *)(lVar6 + 4 + lVar87 * 4) =
                 (int)((long)(short)(&DAT_005ef202)[lVar87] *
                       (ulong)*(ushort *)((long)puVar3 + lVar87 * 2 + 2) + 0x800 >> 0xc);
            lVar87 = lVar87 + 2;
          } while (lVar87 != 0x40);
        }
        else if (iVar90 == 0) {
          pauVar4 = *(undefined1 (**) [16])(lVar88 + 0x58);
          uVar92 = *puVar3;
          auVar7._8_4_ = 0;
          auVar7._0_8_ = uVar92;
          auVar7._12_2_ = (short)(uVar92 >> 0x30);
          auVar23._8_2_ = (short)(uVar92 >> 0x20);
          auVar23._0_8_ = uVar92;
          auVar23._10_4_ = auVar7._10_4_;
          auVar55._6_8_ = 0;
          auVar55._0_6_ = auVar23._8_6_;
          auVar39._4_2_ = (short)(uVar92 >> 0x10);
          auVar39._0_4_ = (uint)uVar92;
          auVar39._6_8_ = SUB148(auVar55 << 0x40,6);
          auVar96._0_4_ = (uint)uVar92 & 0xffff;
          auVar96._4_10_ = auVar39._4_10_;
          auVar96._14_2_ = 0;
          *pauVar4 = auVar96;
          uVar92 = puVar3[1];
          auVar8._8_4_ = 0;
          auVar8._0_8_ = uVar92;
          auVar8._12_2_ = (short)(uVar92 >> 0x30);
          auVar24._8_2_ = (short)(uVar92 >> 0x20);
          auVar24._0_8_ = uVar92;
          auVar24._10_4_ = auVar8._10_4_;
          auVar56._6_8_ = 0;
          auVar56._0_6_ = auVar24._8_6_;
          auVar40._4_2_ = (short)(uVar92 >> 0x10);
          auVar40._0_4_ = (uint)uVar92;
          auVar40._6_8_ = SUB148(auVar56 << 0x40,6);
          auVar97._0_4_ = (uint)uVar92 & 0xffff;
          auVar97._4_10_ = auVar40._4_10_;
          auVar97._14_2_ = 0;
          pauVar4[1] = auVar97;
          uVar92 = puVar3[2];
          auVar9._8_4_ = 0;
          auVar9._0_8_ = uVar92;
          auVar9._12_2_ = (short)(uVar92 >> 0x30);
          auVar25._8_2_ = (short)(uVar92 >> 0x20);
          auVar25._0_8_ = uVar92;
          auVar25._10_4_ = auVar9._10_4_;
          auVar57._6_8_ = 0;
          auVar57._0_6_ = auVar25._8_6_;
          auVar41._4_2_ = (short)(uVar92 >> 0x10);
          auVar41._0_4_ = (uint)uVar92;
          auVar41._6_8_ = SUB148(auVar57 << 0x40,6);
          auVar98._0_4_ = (uint)uVar92 & 0xffff;
          auVar98._4_10_ = auVar41._4_10_;
          auVar98._14_2_ = 0;
          pauVar4[2] = auVar98;
          uVar92 = puVar3[3];
          auVar10._8_4_ = 0;
          auVar10._0_8_ = uVar92;
          auVar10._12_2_ = (short)(uVar92 >> 0x30);
          auVar26._8_2_ = (short)(uVar92 >> 0x20);
          auVar26._0_8_ = uVar92;
          auVar26._10_4_ = auVar10._10_4_;
          auVar58._6_8_ = 0;
          auVar58._0_6_ = auVar26._8_6_;
          auVar42._4_2_ = (short)(uVar92 >> 0x10);
          auVar42._0_4_ = (uint)uVar92;
          auVar42._6_8_ = SUB148(auVar58 << 0x40,6);
          auVar99._0_4_ = (uint)uVar92 & 0xffff;
          auVar99._4_10_ = auVar42._4_10_;
          auVar99._14_2_ = 0;
          pauVar4[3] = auVar99;
          uVar92 = puVar3[4];
          auVar11._8_4_ = 0;
          auVar11._0_8_ = uVar92;
          auVar11._12_2_ = (short)(uVar92 >> 0x30);
          auVar27._8_2_ = (short)(uVar92 >> 0x20);
          auVar27._0_8_ = uVar92;
          auVar27._10_4_ = auVar11._10_4_;
          auVar59._6_8_ = 0;
          auVar59._0_6_ = auVar27._8_6_;
          auVar43._4_2_ = (short)(uVar92 >> 0x10);
          auVar43._0_4_ = (uint)uVar92;
          auVar43._6_8_ = SUB148(auVar59 << 0x40,6);
          auVar100._0_4_ = (uint)uVar92 & 0xffff;
          auVar100._4_10_ = auVar43._4_10_;
          auVar100._14_2_ = 0;
          pauVar4[4] = auVar100;
          uVar92 = puVar3[5];
          auVar12._8_4_ = 0;
          auVar12._0_8_ = uVar92;
          auVar12._12_2_ = (short)(uVar92 >> 0x30);
          auVar28._8_2_ = (short)(uVar92 >> 0x20);
          auVar28._0_8_ = uVar92;
          auVar28._10_4_ = auVar12._10_4_;
          auVar60._6_8_ = 0;
          auVar60._0_6_ = auVar28._8_6_;
          auVar44._4_2_ = (short)(uVar92 >> 0x10);
          auVar44._0_4_ = (uint)uVar92;
          auVar44._6_8_ = SUB148(auVar60 << 0x40,6);
          auVar101._0_4_ = (uint)uVar92 & 0xffff;
          auVar101._4_10_ = auVar44._4_10_;
          auVar101._14_2_ = 0;
          pauVar4[5] = auVar101;
          uVar92 = puVar3[6];
          auVar13._8_4_ = 0;
          auVar13._0_8_ = uVar92;
          auVar13._12_2_ = (short)(uVar92 >> 0x30);
          auVar29._8_2_ = (short)(uVar92 >> 0x20);
          auVar29._0_8_ = uVar92;
          auVar29._10_4_ = auVar13._10_4_;
          auVar61._6_8_ = 0;
          auVar61._0_6_ = auVar29._8_6_;
          auVar45._4_2_ = (short)(uVar92 >> 0x10);
          auVar45._0_4_ = (uint)uVar92;
          auVar45._6_8_ = SUB148(auVar61 << 0x40,6);
          auVar102._0_4_ = (uint)uVar92 & 0xffff;
          auVar102._4_10_ = auVar45._4_10_;
          auVar102._14_2_ = 0;
          pauVar4[6] = auVar102;
          uVar92 = puVar3[7];
          auVar14._8_4_ = 0;
          auVar14._0_8_ = uVar92;
          auVar14._12_2_ = (short)(uVar92 >> 0x30);
          auVar30._8_2_ = (short)(uVar92 >> 0x20);
          auVar30._0_8_ = uVar92;
          auVar30._10_4_ = auVar14._10_4_;
          auVar62._6_8_ = 0;
          auVar62._0_6_ = auVar30._8_6_;
          auVar46._4_2_ = (short)(uVar92 >> 0x10);
          auVar46._0_4_ = (uint)uVar92;
          auVar46._6_8_ = SUB148(auVar62 << 0x40,6);
          auVar103._0_4_ = (uint)uVar92 & 0xffff;
          auVar103._4_10_ = auVar46._4_10_;
          auVar103._14_2_ = 0;
          pauVar4[7] = auVar103;
          uVar92 = puVar3[8];
          auVar15._8_4_ = 0;
          auVar15._0_8_ = uVar92;
          auVar15._12_2_ = (short)(uVar92 >> 0x30);
          auVar31._8_2_ = (short)(uVar92 >> 0x20);
          auVar31._0_8_ = uVar92;
          auVar31._10_4_ = auVar15._10_4_;
          auVar63._6_8_ = 0;
          auVar63._0_6_ = auVar31._8_6_;
          auVar47._4_2_ = (short)(uVar92 >> 0x10);
          auVar47._0_4_ = (uint)uVar92;
          auVar47._6_8_ = SUB148(auVar63 << 0x40,6);
          auVar104._0_4_ = (uint)uVar92 & 0xffff;
          auVar104._4_10_ = auVar47._4_10_;
          auVar104._14_2_ = 0;
          pauVar4[8] = auVar104;
          uVar92 = puVar3[9];
          auVar16._8_4_ = 0;
          auVar16._0_8_ = uVar92;
          auVar16._12_2_ = (short)(uVar92 >> 0x30);
          auVar32._8_2_ = (short)(uVar92 >> 0x20);
          auVar32._0_8_ = uVar92;
          auVar32._10_4_ = auVar16._10_4_;
          auVar64._6_8_ = 0;
          auVar64._0_6_ = auVar32._8_6_;
          auVar48._4_2_ = (short)(uVar92 >> 0x10);
          auVar48._0_4_ = (uint)uVar92;
          auVar48._6_8_ = SUB148(auVar64 << 0x40,6);
          auVar105._0_4_ = (uint)uVar92 & 0xffff;
          auVar105._4_10_ = auVar48._4_10_;
          auVar105._14_2_ = 0;
          pauVar4[9] = auVar105;
          uVar92 = puVar3[10];
          auVar17._8_4_ = 0;
          auVar17._0_8_ = uVar92;
          auVar17._12_2_ = (short)(uVar92 >> 0x30);
          auVar33._8_2_ = (short)(uVar92 >> 0x20);
          auVar33._0_8_ = uVar92;
          auVar33._10_4_ = auVar17._10_4_;
          auVar65._6_8_ = 0;
          auVar65._0_6_ = auVar33._8_6_;
          auVar49._4_2_ = (short)(uVar92 >> 0x10);
          auVar49._0_4_ = (uint)uVar92;
          auVar49._6_8_ = SUB148(auVar65 << 0x40,6);
          auVar106._0_4_ = (uint)uVar92 & 0xffff;
          auVar106._4_10_ = auVar49._4_10_;
          auVar106._14_2_ = 0;
          pauVar4[10] = auVar106;
          uVar92 = puVar3[0xb];
          auVar18._8_4_ = 0;
          auVar18._0_8_ = uVar92;
          auVar18._12_2_ = (short)(uVar92 >> 0x30);
          auVar34._8_2_ = (short)(uVar92 >> 0x20);
          auVar34._0_8_ = uVar92;
          auVar34._10_4_ = auVar18._10_4_;
          auVar66._6_8_ = 0;
          auVar66._0_6_ = auVar34._8_6_;
          auVar50._4_2_ = (short)(uVar92 >> 0x10);
          auVar50._0_4_ = (uint)uVar92;
          auVar50._6_8_ = SUB148(auVar66 << 0x40,6);
          auVar107._0_4_ = (uint)uVar92 & 0xffff;
          auVar107._4_10_ = auVar50._4_10_;
          auVar107._14_2_ = 0;
          pauVar4[0xb] = auVar107;
          uVar92 = puVar3[0xc];
          auVar19._8_4_ = 0;
          auVar19._0_8_ = uVar92;
          auVar19._12_2_ = (short)(uVar92 >> 0x30);
          auVar35._8_2_ = (short)(uVar92 >> 0x20);
          auVar35._0_8_ = uVar92;
          auVar35._10_4_ = auVar19._10_4_;
          auVar67._6_8_ = 0;
          auVar67._0_6_ = auVar35._8_6_;
          auVar51._4_2_ = (short)(uVar92 >> 0x10);
          auVar51._0_4_ = (uint)uVar92;
          auVar51._6_8_ = SUB148(auVar67 << 0x40,6);
          auVar108._0_4_ = (uint)uVar92 & 0xffff;
          auVar108._4_10_ = auVar51._4_10_;
          auVar108._14_2_ = 0;
          pauVar4[0xc] = auVar108;
          uVar92 = puVar3[0xd];
          auVar20._8_4_ = 0;
          auVar20._0_8_ = uVar92;
          auVar20._12_2_ = (short)(uVar92 >> 0x30);
          auVar36._8_2_ = (short)(uVar92 >> 0x20);
          auVar36._0_8_ = uVar92;
          auVar36._10_4_ = auVar20._10_4_;
          auVar68._6_8_ = 0;
          auVar68._0_6_ = auVar36._8_6_;
          auVar52._4_2_ = (short)(uVar92 >> 0x10);
          auVar52._0_4_ = (uint)uVar92;
          auVar52._6_8_ = SUB148(auVar68 << 0x40,6);
          auVar109._0_4_ = (uint)uVar92 & 0xffff;
          auVar109._4_10_ = auVar52._4_10_;
          auVar109._14_2_ = 0;
          pauVar4[0xd] = auVar109;
          uVar92 = puVar3[0xe];
          auVar21._8_4_ = 0;
          auVar21._0_8_ = uVar92;
          auVar21._12_2_ = (short)(uVar92 >> 0x30);
          auVar37._8_2_ = (short)(uVar92 >> 0x20);
          auVar37._0_8_ = uVar92;
          auVar37._10_4_ = auVar21._10_4_;
          auVar69._6_8_ = 0;
          auVar69._0_6_ = auVar37._8_6_;
          auVar53._4_2_ = (short)(uVar92 >> 0x10);
          auVar53._0_4_ = (uint)uVar92;
          auVar53._6_8_ = SUB148(auVar69 << 0x40,6);
          auVar110._0_4_ = (uint)uVar92 & 0xffff;
          auVar110._4_10_ = auVar53._4_10_;
          auVar110._14_2_ = 0;
          pauVar4[0xe] = auVar110;
          uVar92 = puVar3[0xf];
          auVar22._8_4_ = 0;
          auVar22._0_8_ = uVar92;
          auVar22._12_2_ = (short)(uVar92 >> 0x30);
          auVar38._8_2_ = (short)(uVar92 >> 0x20);
          auVar38._0_8_ = uVar92;
          auVar38._10_4_ = auVar22._10_4_;
          auVar70._6_8_ = 0;
          auVar70._0_6_ = auVar38._8_6_;
          auVar54._4_2_ = (short)(uVar92 >> 0x10);
          auVar54._0_4_ = (uint)uVar92;
          auVar54._6_8_ = SUB148(auVar70 << 0x40,6);
          auVar111._0_4_ = (uint)uVar92 & 0xffff;
          auVar111._4_10_ = auVar54._4_10_;
          auVar111._14_2_ = 0;
          pauVar4[0xf] = auVar111;
        }
        else {
          puVar85 = (undefined8 *)*param_1;
          *(undefined4 *)(puVar85 + 5) = 0x31;
          (*(code *)*puVar85)();
        }
      }
      lVar89 = lVar89 + 1;
      lVar88 = lVar88 + 0x60;
    } while (lVar89 < (int)param_1[7]);
  }
  return;
}


