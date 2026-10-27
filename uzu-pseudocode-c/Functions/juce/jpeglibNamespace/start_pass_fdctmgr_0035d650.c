// Function : start_pass_fdctmgr
// Namespace: juce:jpeglibNamespace
// Entry    : 0035d650
// Prototype: undefined start_pass_fdctmgr(long * param_1)
// Body     : 0035d650 - 0035dfbf


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::jpeglibNamespace::start_pass_fdctmgr(juce::jpeglibNamespace::jpeg_compress_struct*) */

void __cdecl juce::jpeglibNamespace::start_pass_fdctmgr(long *param_1)

{
  float *pfVar1;
  ulong uVar2;
  double dVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  ulong *puVar7;
  int *piVar8;
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
  double dVar57;
  double dVar58;
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
  undefined1 auVar71 [14];
  undefined1 auVar72 [14];
  undefined1 auVar73 [14];
  undefined1 auVar74 [14];
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
  undefined1 auVar85 [16];
  byte bVar86;
  code *pcVar87;
  undefined8 *puVar88;
  int iVar89;
  uint uVar90;
  long lVar91;
  long lVar92;
  int iVar93;
  long lVar94;
  long lVar95;
  ulong uVar96;
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
  
  if (0 < *(int *)((long)param_1 + 0x5c)) {
    lVar5 = param_1[0x43];
    lVar95 = param_1[0xd];
    lVar94 = 0;
    iVar93 = 0;
    do {
      iVar4 = *(int *)(lVar95 + 0x24);
      iVar89 = iVar4 * 0x100 + *(int *)(lVar95 + 0x28);
      if (iVar89 < 0x70e) {
        if (iVar89 < 0x404) {
          if (iVar89 < 0x204) {
            if (iVar89 < 0x201) {
              if (iVar89 == 0x101) {
                pcVar87 = jpeg_fdct_1x1;
              }
              else {
                if (iVar89 != 0x102) {
LAB_0035df41:
                  lVar6 = *param_1;
                  *(undefined4 *)(lVar6 + 0x28) = 7;
                  *(int *)(lVar6 + 0x2c) = iVar4;
                  *(undefined4 *)(*param_1 + 0x30) = *(undefined4 *)(lVar95 + 0x28);
                  puVar88 = (undefined8 *)*param_1;
LAB_0035df9c:
                  (*(code *)*puVar88)(param_1);
                  goto LAB_0035da88;
                }
                pcVar87 = jpeg_fdct_1x2;
              }
            }
            else if (iVar89 == 0x201) {
              pcVar87 = jpeg_fdct_2x1;
            }
            else {
              if (iVar89 != 0x202) goto LAB_0035df41;
              pcVar87 = jpeg_fdct_2x2;
            }
          }
          else if (iVar89 < 0x306) {
            if (iVar89 == 0x204) {
              pcVar87 = jpeg_fdct_2x4;
            }
            else {
              if (iVar89 != 0x303) goto LAB_0035df41;
              pcVar87 = jpeg_fdct_3x3;
            }
          }
          else if (iVar89 == 0x306) {
            pcVar87 = jpeg_fdct_3x6;
          }
          else {
            if (iVar89 != 0x402) goto LAB_0035df41;
            pcVar87 = jpeg_fdct_4x2;
          }
        }
        else if (iVar89 < 0x603) {
          if (iVar89 < 0x505) {
            if (iVar89 == 0x404) {
              pcVar87 = jpeg_fdct_4x4;
            }
            else {
              if (iVar89 != 0x408) goto LAB_0035df41;
              pcVar87 = jpeg_fdct_4x8;
            }
          }
          else if (iVar89 == 0x505) {
            pcVar87 = jpeg_fdct_5x5;
          }
          else {
            if (iVar89 != 0x50a) goto LAB_0035df41;
            pcVar87 = jpeg_fdct_5x10;
          }
        }
        else if (iVar89 < 0x60c) {
          if (iVar89 == 0x603) {
            pcVar87 = jpeg_fdct_6x3;
          }
          else {
            if (iVar89 != 0x606) goto LAB_0035df41;
            pcVar87 = jpeg_fdct_6x6;
          }
        }
        else if (iVar89 == 0x60c) {
          pcVar87 = jpeg_fdct_6x12;
        }
        else {
          if (iVar89 != 0x707) goto LAB_0035df41;
          pcVar87 = jpeg_fdct_7x7;
        }
LAB_0035da80:
        *(code **)(lVar5 + 0x58 + lVar94 * 8) = pcVar87;
        iVar93 = 0;
      }
      else {
        if (0xc05 < iVar89) {
          if (iVar89 < 0xe0e) {
            if (iVar89 < 0xd0d) {
              if (iVar89 == 0xc06) {
                pcVar87 = jpeg_fdct_12x6;
              }
              else {
                if (iVar89 != 0xc0c) goto LAB_0035df41;
                pcVar87 = jpeg_fdct_12x12;
              }
            }
            else if (iVar89 == 0xd0d) {
              pcVar87 = jpeg_fdct_13x13;
            }
            else {
              if (iVar89 != 0xe07) goto LAB_0035df41;
              pcVar87 = jpeg_fdct_14x7;
            }
          }
          else if (iVar89 < 0x1008) {
            if (iVar89 == 0xe0e) {
              pcVar87 = jpeg_fdct_14x14;
            }
            else {
              if (iVar89 != 0xf0f) goto LAB_0035df41;
              pcVar87 = jpeg_fdct_15x15;
            }
          }
          else if (iVar89 == 0x1008) {
            pcVar87 = jpeg_fdct_16x8;
          }
          else {
            if (iVar89 != 0x1010) goto LAB_0035df41;
            pcVar87 = jpeg_fdct_16x16;
          }
          goto LAB_0035da80;
        }
        if (0x908 < iVar89) {
          if (iVar89 < 0xa0a) {
            if (iVar89 == 0x909) {
              pcVar87 = jpeg_fdct_9x9;
            }
            else {
              if (iVar89 != 0xa05) goto LAB_0035df41;
              pcVar87 = jpeg_fdct_10x5;
            }
          }
          else if (iVar89 == 0xa0a) {
            pcVar87 = jpeg_fdct_10x10;
          }
          else {
            if (iVar89 != 0xb0b) goto LAB_0035df41;
            pcVar87 = jpeg_fdct_11x11;
          }
          goto LAB_0035da80;
        }
        if (iVar89 < 0x808) {
          if (iVar89 == 0x70e) {
            pcVar87 = jpeg_fdct_7x14;
          }
          else {
            if (iVar89 != 0x804) goto LAB_0035df41;
            pcVar87 = jpeg_fdct_8x4;
          }
          goto LAB_0035da80;
        }
        if (iVar89 != 0x808) {
          if (iVar89 != 0x810) goto LAB_0035df41;
          pcVar87 = jpeg_fdct_8x16;
          goto LAB_0035da80;
        }
        iVar4 = *(int *)((long)param_1 + 300);
        if (iVar4 == 2) {
          *(code **)(lVar5 + 0xa8 + lVar94 * 8) = jpeg_fdct_float;
          iVar93 = 2;
        }
        else {
          if (iVar4 != 1) {
            if (iVar4 == 0) {
              pcVar87 = jpeg_fdct_islow;
              goto LAB_0035da80;
            }
            puVar88 = (undefined8 *)*param_1;
            *(undefined4 *)(puVar88 + 5) = 0x31;
            goto LAB_0035df9c;
          }
          *(code **)(lVar5 + 0x58 + lVar94 * 8) = jpeg_fdct_ifast;
          iVar93 = 1;
        }
      }
LAB_0035da88:
      uVar90 = *(uint *)(lVar95 + 0x10);
      if ((3 < (ulong)uVar90) || (param_1[(ulong)uVar90 + 0xe] == 0)) {
        lVar6 = *param_1;
        *(undefined4 *)(lVar6 + 0x28) = 0x36;
        *(uint *)(lVar6 + 0x2c) = uVar90;
        (**(code **)*param_1)(param_1);
      }
      auVar85 = _DAT_00651e80;
      dVar84 = _UNK_005dd7a8;
      dVar83 = _DAT_005dd7a0;
      dVar82 = _UNK_005dd798;
      dVar81 = _DAT_005dd790;
      dVar80 = _UNK_005dd788;
      dVar79 = _DAT_005dd780;
      dVar78 = _UNK_005dd778;
      dVar77 = _DAT_005dd770;
      dVar76 = _UNK_005dd768;
      dVar75 = _DAT_005dd760;
      puVar7 = (ulong *)param_1[(long)(int)uVar90 + 0xe];
      if (iVar93 == 2) {
        lVar6 = *(long *)(lVar95 + 0x58);
        dVar3 = *(double *)(&DAT_005dd750 + (ulong)(*(char *)(lVar95 + 0x34) == '\0') * 8);
        lVar91 = 0;
        do {
          dVar57 = *(double *)
                    (start_pass_fdctmgr(juce::jpeglibNamespace::jpeg_compress_struct*)::
                     aanscalefactor + lVar91);
          dVar58 = *(double *)
                    (start_pass_fdctmgr(juce::jpeglibNamespace::jpeg_compress_struct*)::
                     aanscalefactor + lVar91 + 8);
          auVar97._0_8_ = (double)*(ushort *)((long)puVar7 + lVar91 * 2) * dVar57 * dVar3;
          auVar97._8_8_ = (double)*(ushort *)((long)puVar7 + lVar91 * 2 + 0x10) * dVar58 * dVar3;
          auVar98 = divpd(auVar85,auVar97);
          auVar99._0_8_ =
               (double)*(ushort *)((long)puVar7 + lVar91 * 2 + 2) * dVar57 * dVar75 * dVar3;
          auVar99._8_8_ =
               (double)*(ushort *)((long)puVar7 + lVar91 * 2 + 0x12) * dVar58 * dVar76 * dVar3;
          auVar101 = divpd(auVar85,auVar99);
          auVar102._0_8_ =
               (double)*(ushort *)((long)puVar7 + lVar91 * 2 + 4) * dVar57 * dVar77 * dVar3;
          auVar102._8_8_ =
               (double)*(ushort *)((long)puVar7 + lVar91 * 2 + 0x14) * dVar58 * dVar78 * dVar3;
          auVar99 = divpd(auVar85,auVar102);
          auVar103._0_8_ =
               (double)*(ushort *)((long)puVar7 + lVar91 * 2 + 6) * dVar57 * dVar79 * dVar3;
          auVar103._8_8_ =
               (double)*(ushort *)((long)puVar7 + lVar91 * 2 + 0x16) * dVar58 * dVar80 * dVar3;
          auVar103 = divpd(auVar85,auVar103);
          auVar104._0_8_ = (double)*(ushort *)((long)puVar7 + lVar91 * 2 + 8) * dVar57 * dVar3;
          auVar104._8_8_ = (double)*(ushort *)((long)puVar7 + lVar91 * 2 + 0x18) * dVar58 * dVar3;
          auVar102 = divpd(auVar85,auVar104);
          auVar106._0_8_ =
               (double)*(ushort *)((long)puVar7 + lVar91 * 2 + 10) * dVar57 * dVar81 * dVar3;
          auVar106._8_8_ =
               (double)*(ushort *)((long)puVar7 + lVar91 * 2 + 0x1a) * dVar58 * dVar82 * dVar3;
          auVar106 = divpd(auVar85,auVar106);
          auVar105._0_8_ =
               (double)*(ushort *)((long)puVar7 + lVar91 * 2 + 0xc) * dVar57 * dVar83 * dVar3;
          auVar105._8_8_ =
               (double)*(ushort *)((long)puVar7 + lVar91 * 2 + 0x1c) * dVar58 * dVar84 * dVar3;
          auVar104 = divpd(auVar85,auVar105);
          auVar100._0_8_ =
               (double)*(ushort *)((long)puVar7 + lVar91 * 2 + 0xe) * dVar57 * _DAT_005dd7b0 * dVar3
          ;
          auVar100._8_8_ =
               (double)*(ushort *)((long)puVar7 + lVar91 * 2 + 0x1e) * dVar58 * _UNK_005dd7b8 *
               dVar3;
          auVar97 = divpd(auVar85,auVar100);
          pfVar1 = (float *)(lVar6 + 0x30 + lVar91 * 4);
          *pfVar1 = (float)auVar102._8_8_;
          pfVar1[1] = (float)auVar106._8_8_;
          pfVar1[2] = (float)auVar104._8_8_;
          pfVar1[3] = (float)auVar97._8_8_;
          pfVar1 = (float *)(lVar6 + 0x20 + lVar91 * 4);
          *pfVar1 = (float)auVar98._8_8_;
          pfVar1[1] = (float)auVar101._8_8_;
          pfVar1[2] = (float)auVar99._8_8_;
          pfVar1[3] = (float)auVar103._8_8_;
          pfVar1 = (float *)(lVar6 + 0x10 + lVar91 * 4);
          *pfVar1 = (float)auVar102._0_8_;
          pfVar1[1] = (float)auVar106._0_8_;
          pfVar1[2] = (float)auVar104._0_8_;
          pfVar1[3] = (float)auVar97._0_8_;
          pfVar1 = (float *)(lVar6 + lVar91 * 4);
          *pfVar1 = (float)auVar98._0_8_;
          pfVar1[1] = (float)auVar101._0_8_;
          pfVar1[2] = (float)auVar99._0_8_;
          pfVar1[3] = (float)auVar103._0_8_;
          lVar91 = lVar91 + 0x10;
        } while (lVar91 != 0x40);
        *(code **)(lVar5 + 8 + lVar94 * 8) = forward_DCT_float;
      }
      else if (iVar93 == 1) {
        lVar6 = *(long *)(lVar95 + 0x58);
        bVar86 = *(char *)(lVar95 + 0x34) == '\0' | 10;
        lVar92 = 1L << (bVar86 - 1 & 0x3f);
        lVar91 = 0;
        do {
          *(int *)(lVar6 + lVar91 * 4) =
               (int)((long)((long)(short)(&start_pass(juce::jpeglibNamespace::jpeg_decompress_struct*)
                                           ::aanscales)[lVar91] *
                            (ulong)*(ushort *)((long)puVar7 + lVar91 * 2) + lVar92) >> bVar86);
          *(int *)(lVar6 + 4 + lVar91 * 4) =
               (int)((long)((long)(short)(&DAT_005ef202)[lVar91] *
                            (ulong)*(ushort *)((long)puVar7 + lVar91 * 2 + 2) + lVar92) >> bVar86);
          lVar91 = lVar91 + 2;
        } while (lVar91 != 0x40);
        *(code **)(lVar5 + 8 + lVar94 * 8) = forward_DCT;
      }
      else if (iVar93 == 0) {
        uVar90 = 4 - (*(char *)(lVar95 + 0x34) == '\0');
        piVar8 = *(int **)(lVar95 + 0x58);
        uVar2 = *puVar7;
        auVar9._8_4_ = 0;
        auVar9._0_8_ = uVar2;
        auVar9._12_2_ = (short)(uVar2 >> 0x30);
        auVar25._8_2_ = (short)(uVar2 >> 0x20);
        auVar25._0_8_ = uVar2;
        auVar25._10_4_ = auVar9._10_4_;
        auVar59._6_8_ = 0;
        auVar59._0_6_ = auVar25._8_6_;
        auVar41._4_2_ = (short)(uVar2 >> 0x10);
        auVar41._0_4_ = (uint)uVar2;
        auVar41._6_8_ = SUB148(auVar59 << 0x40,6);
        uVar96 = (ulong)uVar90;
        *piVar8 = ((uint)uVar2 & 0xffff) << uVar96;
        piVar8[1] = auVar41._4_4_ << uVar96;
        piVar8[2] = auVar25._8_4_ << uVar96;
        piVar8[3] = (auVar9._10_4_ >> 0x10) << uVar96;
        uVar2 = puVar7[1];
        auVar10._8_4_ = 0;
        auVar10._0_8_ = uVar2;
        auVar10._12_2_ = (short)(uVar2 >> 0x30);
        auVar26._8_2_ = (short)(uVar2 >> 0x20);
        auVar26._0_8_ = uVar2;
        auVar26._10_4_ = auVar10._10_4_;
        auVar60._6_8_ = 0;
        auVar60._0_6_ = auVar26._8_6_;
        auVar42._4_2_ = (short)(uVar2 >> 0x10);
        auVar42._0_4_ = (uint)uVar2;
        auVar42._6_8_ = SUB148(auVar60 << 0x40,6);
        piVar8[4] = ((uint)uVar2 & 0xffff) << uVar96;
        piVar8[5] = auVar42._4_4_ << uVar96;
        piVar8[6] = auVar26._8_4_ << uVar96;
        piVar8[7] = (auVar10._10_4_ >> 0x10) << uVar96;
        uVar2 = puVar7[2];
        auVar11._8_4_ = 0;
        auVar11._0_8_ = uVar2;
        auVar11._12_2_ = (short)(uVar2 >> 0x30);
        auVar27._8_2_ = (short)(uVar2 >> 0x20);
        auVar27._0_8_ = uVar2;
        auVar27._10_4_ = auVar11._10_4_;
        auVar61._6_8_ = 0;
        auVar61._0_6_ = auVar27._8_6_;
        auVar43._4_2_ = (short)(uVar2 >> 0x10);
        auVar43._0_4_ = (uint)uVar2;
        auVar43._6_8_ = SUB148(auVar61 << 0x40,6);
        uVar96 = (ulong)uVar90;
        piVar8[8] = ((uint)uVar2 & 0xffff) << uVar96;
        piVar8[9] = auVar43._4_4_ << uVar96;
        piVar8[10] = auVar27._8_4_ << uVar96;
        piVar8[0xb] = (auVar11._10_4_ >> 0x10) << uVar96;
        uVar2 = puVar7[3];
        auVar12._8_4_ = 0;
        auVar12._0_8_ = uVar2;
        auVar12._12_2_ = (short)(uVar2 >> 0x30);
        auVar28._8_2_ = (short)(uVar2 >> 0x20);
        auVar28._0_8_ = uVar2;
        auVar28._10_4_ = auVar12._10_4_;
        auVar62._6_8_ = 0;
        auVar62._0_6_ = auVar28._8_6_;
        auVar44._4_2_ = (short)(uVar2 >> 0x10);
        auVar44._0_4_ = (uint)uVar2;
        auVar44._6_8_ = SUB148(auVar62 << 0x40,6);
        piVar8[0xc] = ((uint)uVar2 & 0xffff) << uVar96;
        piVar8[0xd] = auVar44._4_4_ << uVar96;
        piVar8[0xe] = auVar28._8_4_ << uVar96;
        piVar8[0xf] = (auVar12._10_4_ >> 0x10) << uVar96;
        uVar2 = puVar7[4];
        auVar13._8_4_ = 0;
        auVar13._0_8_ = uVar2;
        auVar13._12_2_ = (short)(uVar2 >> 0x30);
        auVar29._8_2_ = (short)(uVar2 >> 0x20);
        auVar29._0_8_ = uVar2;
        auVar29._10_4_ = auVar13._10_4_;
        auVar63._6_8_ = 0;
        auVar63._0_6_ = auVar29._8_6_;
        auVar45._4_2_ = (short)(uVar2 >> 0x10);
        auVar45._0_4_ = (uint)uVar2;
        auVar45._6_8_ = SUB148(auVar63 << 0x40,6);
        piVar8[0x10] = ((uint)uVar2 & 0xffff) << uVar96;
        piVar8[0x11] = auVar45._4_4_ << uVar96;
        piVar8[0x12] = auVar29._8_4_ << uVar96;
        piVar8[0x13] = (auVar13._10_4_ >> 0x10) << uVar96;
        uVar2 = puVar7[5];
        auVar14._8_4_ = 0;
        auVar14._0_8_ = uVar2;
        auVar14._12_2_ = (short)(uVar2 >> 0x30);
        auVar30._8_2_ = (short)(uVar2 >> 0x20);
        auVar30._0_8_ = uVar2;
        auVar30._10_4_ = auVar14._10_4_;
        auVar64._6_8_ = 0;
        auVar64._0_6_ = auVar30._8_6_;
        auVar46._4_2_ = (short)(uVar2 >> 0x10);
        auVar46._0_4_ = (uint)uVar2;
        auVar46._6_8_ = SUB148(auVar64 << 0x40,6);
        piVar8[0x14] = ((uint)uVar2 & 0xffff) << uVar96;
        piVar8[0x15] = auVar46._4_4_ << uVar96;
        piVar8[0x16] = auVar30._8_4_ << uVar96;
        piVar8[0x17] = (auVar14._10_4_ >> 0x10) << uVar96;
        uVar2 = puVar7[6];
        auVar15._8_4_ = 0;
        auVar15._0_8_ = uVar2;
        auVar15._12_2_ = (short)(uVar2 >> 0x30);
        auVar31._8_2_ = (short)(uVar2 >> 0x20);
        auVar31._0_8_ = uVar2;
        auVar31._10_4_ = auVar15._10_4_;
        auVar65._6_8_ = 0;
        auVar65._0_6_ = auVar31._8_6_;
        auVar47._4_2_ = (short)(uVar2 >> 0x10);
        auVar47._0_4_ = (uint)uVar2;
        auVar47._6_8_ = SUB148(auVar65 << 0x40,6);
        uVar96 = (ulong)uVar90;
        piVar8[0x18] = ((uint)uVar2 & 0xffff) << uVar96;
        piVar8[0x19] = auVar47._4_4_ << uVar96;
        piVar8[0x1a] = auVar31._8_4_ << uVar96;
        piVar8[0x1b] = (auVar15._10_4_ >> 0x10) << uVar96;
        uVar2 = puVar7[7];
        auVar16._8_4_ = 0;
        auVar16._0_8_ = uVar2;
        auVar16._12_2_ = (short)(uVar2 >> 0x30);
        auVar32._8_2_ = (short)(uVar2 >> 0x20);
        auVar32._0_8_ = uVar2;
        auVar32._10_4_ = auVar16._10_4_;
        auVar66._6_8_ = 0;
        auVar66._0_6_ = auVar32._8_6_;
        auVar48._4_2_ = (short)(uVar2 >> 0x10);
        auVar48._0_4_ = (uint)uVar2;
        auVar48._6_8_ = SUB148(auVar66 << 0x40,6);
        piVar8[0x1c] = ((uint)uVar2 & 0xffff) << uVar96;
        piVar8[0x1d] = auVar48._4_4_ << uVar96;
        piVar8[0x1e] = auVar32._8_4_ << uVar96;
        piVar8[0x1f] = (auVar16._10_4_ >> 0x10) << uVar96;
        uVar2 = puVar7[8];
        auVar17._8_4_ = 0;
        auVar17._0_8_ = uVar2;
        auVar17._12_2_ = (short)(uVar2 >> 0x30);
        auVar33._8_2_ = (short)(uVar2 >> 0x20);
        auVar33._0_8_ = uVar2;
        auVar33._10_4_ = auVar17._10_4_;
        auVar67._6_8_ = 0;
        auVar67._0_6_ = auVar33._8_6_;
        auVar49._4_2_ = (short)(uVar2 >> 0x10);
        auVar49._0_4_ = (uint)uVar2;
        auVar49._6_8_ = SUB148(auVar67 << 0x40,6);
        piVar8[0x20] = ((uint)uVar2 & 0xffff) << uVar96;
        piVar8[0x21] = auVar49._4_4_ << uVar96;
        piVar8[0x22] = auVar33._8_4_ << uVar96;
        piVar8[0x23] = (auVar17._10_4_ >> 0x10) << uVar96;
        uVar2 = puVar7[9];
        auVar18._8_4_ = 0;
        auVar18._0_8_ = uVar2;
        auVar18._12_2_ = (short)(uVar2 >> 0x30);
        auVar34._8_2_ = (short)(uVar2 >> 0x20);
        auVar34._0_8_ = uVar2;
        auVar34._10_4_ = auVar18._10_4_;
        auVar68._6_8_ = 0;
        auVar68._0_6_ = auVar34._8_6_;
        auVar50._4_2_ = (short)(uVar2 >> 0x10);
        auVar50._0_4_ = (uint)uVar2;
        auVar50._6_8_ = SUB148(auVar68 << 0x40,6);
        piVar8[0x24] = ((uint)uVar2 & 0xffff) << uVar96;
        piVar8[0x25] = auVar50._4_4_ << uVar96;
        piVar8[0x26] = auVar34._8_4_ << uVar96;
        piVar8[0x27] = (auVar18._10_4_ >> 0x10) << uVar96;
        uVar2 = puVar7[10];
        auVar19._8_4_ = 0;
        auVar19._0_8_ = uVar2;
        auVar19._12_2_ = (short)(uVar2 >> 0x30);
        auVar35._8_2_ = (short)(uVar2 >> 0x20);
        auVar35._0_8_ = uVar2;
        auVar35._10_4_ = auVar19._10_4_;
        auVar69._6_8_ = 0;
        auVar69._0_6_ = auVar35._8_6_;
        auVar51._4_2_ = (short)(uVar2 >> 0x10);
        auVar51._0_4_ = (uint)uVar2;
        auVar51._6_8_ = SUB148(auVar69 << 0x40,6);
        piVar8[0x28] = ((uint)uVar2 & 0xffff) << uVar96;
        piVar8[0x29] = auVar51._4_4_ << uVar96;
        piVar8[0x2a] = auVar35._8_4_ << uVar96;
        piVar8[0x2b] = (auVar19._10_4_ >> 0x10) << uVar96;
        uVar2 = puVar7[0xb];
        auVar20._8_4_ = 0;
        auVar20._0_8_ = uVar2;
        auVar20._12_2_ = (short)(uVar2 >> 0x30);
        auVar36._8_2_ = (short)(uVar2 >> 0x20);
        auVar36._0_8_ = uVar2;
        auVar36._10_4_ = auVar20._10_4_;
        auVar70._6_8_ = 0;
        auVar70._0_6_ = auVar36._8_6_;
        auVar52._4_2_ = (short)(uVar2 >> 0x10);
        auVar52._0_4_ = (uint)uVar2;
        auVar52._6_8_ = SUB148(auVar70 << 0x40,6);
        piVar8[0x2c] = ((uint)uVar2 & 0xffff) << uVar96;
        piVar8[0x2d] = auVar52._4_4_ << uVar96;
        piVar8[0x2e] = auVar36._8_4_ << uVar96;
        piVar8[0x2f] = (auVar20._10_4_ >> 0x10) << uVar96;
        uVar2 = puVar7[0xc];
        auVar21._8_4_ = 0;
        auVar21._0_8_ = uVar2;
        auVar21._12_2_ = (short)(uVar2 >> 0x30);
        auVar37._8_2_ = (short)(uVar2 >> 0x20);
        auVar37._0_8_ = uVar2;
        auVar37._10_4_ = auVar21._10_4_;
        auVar71._6_8_ = 0;
        auVar71._0_6_ = auVar37._8_6_;
        auVar53._4_2_ = (short)(uVar2 >> 0x10);
        auVar53._0_4_ = (uint)uVar2;
        auVar53._6_8_ = SUB148(auVar71 << 0x40,6);
        piVar8[0x30] = ((uint)uVar2 & 0xffff) << uVar96;
        piVar8[0x31] = auVar53._4_4_ << uVar96;
        piVar8[0x32] = auVar37._8_4_ << uVar96;
        piVar8[0x33] = (auVar21._10_4_ >> 0x10) << uVar96;
        uVar2 = puVar7[0xd];
        auVar22._8_4_ = 0;
        auVar22._0_8_ = uVar2;
        auVar22._12_2_ = (short)(uVar2 >> 0x30);
        auVar38._8_2_ = (short)(uVar2 >> 0x20);
        auVar38._0_8_ = uVar2;
        auVar38._10_4_ = auVar22._10_4_;
        auVar72._6_8_ = 0;
        auVar72._0_6_ = auVar38._8_6_;
        auVar54._4_2_ = (short)(uVar2 >> 0x10);
        auVar54._0_4_ = (uint)uVar2;
        auVar54._6_8_ = SUB148(auVar72 << 0x40,6);
        piVar8[0x34] = ((uint)uVar2 & 0xffff) << uVar96;
        piVar8[0x35] = auVar54._4_4_ << uVar96;
        piVar8[0x36] = auVar38._8_4_ << uVar96;
        piVar8[0x37] = (auVar22._10_4_ >> 0x10) << uVar96;
        uVar2 = puVar7[0xe];
        auVar23._8_4_ = 0;
        auVar23._0_8_ = uVar2;
        auVar23._12_2_ = (short)(uVar2 >> 0x30);
        auVar39._8_2_ = (short)(uVar2 >> 0x20);
        auVar39._0_8_ = uVar2;
        auVar39._10_4_ = auVar23._10_4_;
        auVar73._6_8_ = 0;
        auVar73._0_6_ = auVar39._8_6_;
        auVar55._4_2_ = (short)(uVar2 >> 0x10);
        auVar55._0_4_ = (uint)uVar2;
        auVar55._6_8_ = SUB148(auVar73 << 0x40,6);
        uVar96 = (ulong)uVar90;
        piVar8[0x38] = ((uint)uVar2 & 0xffff) << uVar96;
        piVar8[0x39] = auVar55._4_4_ << uVar96;
        piVar8[0x3a] = auVar39._8_4_ << uVar96;
        piVar8[0x3b] = (auVar23._10_4_ >> 0x10) << uVar96;
        uVar2 = puVar7[0xf];
        auVar24._8_4_ = 0;
        auVar24._0_8_ = uVar2;
        auVar24._12_2_ = (short)(uVar2 >> 0x30);
        auVar40._8_2_ = (short)(uVar2 >> 0x20);
        auVar40._0_8_ = uVar2;
        auVar40._10_4_ = auVar24._10_4_;
        auVar74._6_8_ = 0;
        auVar74._0_6_ = auVar40._8_6_;
        auVar56._4_2_ = (short)(uVar2 >> 0x10);
        auVar56._0_4_ = (uint)uVar2;
        auVar56._6_8_ = SUB148(auVar74 << 0x40,6);
        piVar8[0x3c] = ((uint)uVar2 & 0xffff) << uVar96;
        piVar8[0x3d] = auVar56._4_4_ << uVar96;
        piVar8[0x3e] = auVar40._8_4_ << uVar96;
        piVar8[0x3f] = (auVar24._10_4_ >> 0x10) << uVar96;
        *(code **)(lVar5 + 8 + lVar94 * 8) = forward_DCT;
      }
      else {
        puVar88 = (undefined8 *)*param_1;
        *(undefined4 *)(puVar88 + 5) = 0x31;
        (*(code *)*puVar88)(param_1);
      }
      lVar94 = lVar94 + 1;
      lVar95 = lVar95 + 0x60;
    } while (lVar94 < *(int *)((long)param_1 + 0x5c));
  }
  return;
}


