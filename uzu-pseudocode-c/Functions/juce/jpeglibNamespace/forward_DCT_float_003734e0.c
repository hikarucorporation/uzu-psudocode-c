// Function : forward_DCT_float
// Namespace: juce:jpeglibNamespace
// Entry    : 003734e0
// Prototype: undefined forward_DCT_float(long param_1, long param_2, undefined8 param_3, long param_4, int param_5, uint param_6)
// Body     : 003734e0 - 00373873


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::jpeglibNamespace::forward_DCT_float(juce::jpeglibNamespace::jpeg_compress_struct*,
   juce::jpeglibNamespace::jpeg_component_info*, unsigned char**, short (*) [64], unsigned int,
   unsigned int) */

void __cdecl
juce::jpeglibNamespace::forward_DCT_float
          (long param_1,long param_2,undefined8 param_3,long param_4,int param_5,uint param_6)

{
  code *pcVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  short sVar7;
  short sVar8;
  short sVar9;
  short sVar10;
  long lVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  float local_138;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  float local_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  float local_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  float local_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  float local_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  float local_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  float local_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  float local_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  float local_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  float local_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  float local_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float local_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float local_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float local_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float local_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float local_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  
  if (param_6 != 0) {
    pcVar1 = *(code **)(*(long *)(param_1 + 0x218) + 0xa8 + (long)*(int *)(param_2 + 4) * 8);
    pfVar2 = *(float **)(param_2 + 0x58);
    lVar11 = 0;
    do {
      (*pcVar1)(&local_138,param_3,param_5);
      sVar10 = _UNK_005dda46;
      sVar9 = _UNK_005dda44;
      sVar8 = _UNK_005dda42;
      sVar7 = _DAT_005dda40;
      fVar6 = _UNK_005dda3c;
      fVar5 = _UNK_005dda38;
      fVar4 = _UNK_005dda34;
      fVar3 = _DAT_005dda30;
      auVar12._0_4_ = (int)(*pfVar2 * local_138 + _DAT_005dda30);
      auVar12._4_4_ = (int)(pfVar2[1] * fStack_134 + _UNK_005dda34);
      auVar12._8_4_ = (int)(pfVar2[2] * fStack_130 + _UNK_005dda38);
      auVar12._12_4_ = (int)(pfVar2[3] * fStack_12c + _UNK_005dda3c);
      auVar12 = pshuflw(auVar12,auVar12,0xe8);
      auVar12 = pshufhw(auVar12,auVar12,0xe8);
      *(ulong *)(param_4 + lVar11) =
           CONCAT26(auVar12._10_2_ + _UNK_005dda46,
                    CONCAT24(auVar12._8_2_ + _UNK_005dda44,
                             CONCAT22(auVar12._2_2_ + _UNK_005dda42,auVar12._0_2_ + _DAT_005dda40)))
      ;
      auVar13._0_4_ = (int)(pfVar2[4] * local_128 + fVar3);
      auVar13._4_4_ = (int)(pfVar2[5] * fStack_124 + fVar4);
      auVar13._8_4_ = (int)(pfVar2[6] * fStack_120 + fVar5);
      auVar13._12_4_ = (int)(pfVar2[7] * fStack_11c + fVar6);
      auVar12 = pshuflw(auVar13,auVar13,0xe8);
      auVar12 = pshufhw(auVar12,auVar12,0xe8);
      *(ulong *)(param_4 + 8 + lVar11) =
           CONCAT26(auVar12._10_2_ + sVar10,
                    CONCAT24(auVar12._8_2_ + sVar9,
                             CONCAT22(auVar12._2_2_ + sVar8,auVar12._0_2_ + sVar7)));
      auVar14._0_4_ = (int)(pfVar2[8] * local_118 + fVar3);
      auVar14._4_4_ = (int)(pfVar2[9] * fStack_114 + fVar4);
      auVar14._8_4_ = (int)(pfVar2[10] * fStack_110 + fVar5);
      auVar14._12_4_ = (int)(pfVar2[0xb] * fStack_10c + fVar6);
      auVar12 = pshuflw(auVar14,auVar14,0xe8);
      auVar12 = pshufhw(auVar12,auVar12,0xe8);
      *(ulong *)(param_4 + 0x10 + lVar11) =
           CONCAT26(auVar12._10_2_ + sVar10,
                    CONCAT24(auVar12._8_2_ + sVar9,
                             CONCAT22(auVar12._2_2_ + sVar8,auVar12._0_2_ + sVar7)));
      auVar15._0_4_ = (int)(pfVar2[0xc] * local_108 + fVar3);
      auVar15._4_4_ = (int)(pfVar2[0xd] * fStack_104 + fVar4);
      auVar15._8_4_ = (int)(pfVar2[0xe] * fStack_100 + fVar5);
      auVar15._12_4_ = (int)(pfVar2[0xf] * fStack_fc + fVar6);
      auVar12 = pshuflw(auVar15,auVar15,0xe8);
      auVar12 = pshufhw(auVar12,auVar12,0xe8);
      *(ulong *)(param_4 + 0x18 + lVar11) =
           CONCAT26(auVar12._10_2_ + sVar10,
                    CONCAT24(auVar12._8_2_ + sVar9,
                             CONCAT22(auVar12._2_2_ + sVar8,auVar12._0_2_ + sVar7)));
      auVar16._0_4_ = (int)(pfVar2[0x10] * local_f8 + fVar3);
      auVar16._4_4_ = (int)(pfVar2[0x11] * fStack_f4 + fVar4);
      auVar16._8_4_ = (int)(pfVar2[0x12] * fStack_f0 + fVar5);
      auVar16._12_4_ = (int)(pfVar2[0x13] * fStack_ec + fVar6);
      auVar12 = pshuflw(auVar16,auVar16,0xe8);
      auVar12 = pshufhw(auVar12,auVar12,0xe8);
      *(ulong *)(param_4 + 0x20 + lVar11) =
           CONCAT26(auVar12._10_2_ + sVar10,
                    CONCAT24(auVar12._8_2_ + sVar9,
                             CONCAT22(auVar12._2_2_ + sVar8,auVar12._0_2_ + sVar7)));
      auVar17._0_4_ = (int)(pfVar2[0x14] * local_e8 + fVar3);
      auVar17._4_4_ = (int)(pfVar2[0x15] * fStack_e4 + fVar4);
      auVar17._8_4_ = (int)(pfVar2[0x16] * fStack_e0 + fVar5);
      auVar17._12_4_ = (int)(pfVar2[0x17] * fStack_dc + fVar6);
      auVar12 = pshuflw(auVar17,auVar17,0xe8);
      auVar12 = pshufhw(auVar12,auVar12,0xe8);
      *(ulong *)(param_4 + 0x28 + lVar11) =
           CONCAT26(auVar12._10_2_ + sVar10,
                    CONCAT24(auVar12._8_2_ + sVar9,
                             CONCAT22(auVar12._2_2_ + sVar8,auVar12._0_2_ + sVar7)));
      auVar18._0_4_ = (int)(pfVar2[0x18] * local_d8 + fVar3);
      auVar18._4_4_ = (int)(pfVar2[0x19] * fStack_d4 + fVar4);
      auVar18._8_4_ = (int)(pfVar2[0x1a] * fStack_d0 + fVar5);
      auVar18._12_4_ = (int)(pfVar2[0x1b] * fStack_cc + fVar6);
      auVar12 = pshuflw(auVar18,auVar18,0xe8);
      auVar12 = pshufhw(auVar12,auVar12,0xe8);
      *(ulong *)(param_4 + 0x30 + lVar11) =
           CONCAT26(auVar12._10_2_ + sVar10,
                    CONCAT24(auVar12._8_2_ + sVar9,
                             CONCAT22(auVar12._2_2_ + sVar8,auVar12._0_2_ + sVar7)));
      auVar19._0_4_ = (int)(pfVar2[0x1c] * local_c8 + fVar3);
      auVar19._4_4_ = (int)(pfVar2[0x1d] * fStack_c4 + fVar4);
      auVar19._8_4_ = (int)(pfVar2[0x1e] * fStack_c0 + fVar5);
      auVar19._12_4_ = (int)(pfVar2[0x1f] * fStack_bc + fVar6);
      auVar12 = pshuflw(auVar19,auVar19,0xe8);
      auVar12 = pshufhw(auVar12,auVar12,0xe8);
      *(ulong *)(param_4 + 0x38 + lVar11) =
           CONCAT26(auVar12._10_2_ + sVar10,
                    CONCAT24(auVar12._8_2_ + sVar9,
                             CONCAT22(auVar12._2_2_ + sVar8,auVar12._0_2_ + sVar7)));
      auVar20._0_4_ = (int)(pfVar2[0x20] * local_b8 + fVar3);
      auVar20._4_4_ = (int)(pfVar2[0x21] * fStack_b4 + fVar4);
      auVar20._8_4_ = (int)(pfVar2[0x22] * fStack_b0 + fVar5);
      auVar20._12_4_ = (int)(pfVar2[0x23] * fStack_ac + fVar6);
      auVar12 = pshuflw(auVar20,auVar20,0xe8);
      auVar12 = pshufhw(auVar12,auVar12,0xe8);
      *(ulong *)(param_4 + 0x40 + lVar11) =
           CONCAT26(auVar12._10_2_ + sVar10,
                    CONCAT24(auVar12._8_2_ + sVar9,
                             CONCAT22(auVar12._2_2_ + sVar8,auVar12._0_2_ + sVar7)));
      auVar21._0_4_ = (int)(pfVar2[0x24] * local_a8 + fVar3);
      auVar21._4_4_ = (int)(pfVar2[0x25] * fStack_a4 + fVar4);
      auVar21._8_4_ = (int)(pfVar2[0x26] * fStack_a0 + fVar5);
      auVar21._12_4_ = (int)(pfVar2[0x27] * fStack_9c + fVar6);
      auVar12 = pshuflw(auVar21,auVar21,0xe8);
      auVar12 = pshufhw(auVar12,auVar12,0xe8);
      *(ulong *)(param_4 + 0x48 + lVar11) =
           CONCAT26(auVar12._10_2_ + sVar10,
                    CONCAT24(auVar12._8_2_ + sVar9,
                             CONCAT22(auVar12._2_2_ + sVar8,auVar12._0_2_ + sVar7)));
      auVar22._0_4_ = (int)(pfVar2[0x28] * local_98 + fVar3);
      auVar22._4_4_ = (int)(pfVar2[0x29] * fStack_94 + fVar4);
      auVar22._8_4_ = (int)(pfVar2[0x2a] * fStack_90 + fVar5);
      auVar22._12_4_ = (int)(pfVar2[0x2b] * fStack_8c + fVar6);
      auVar12 = pshuflw(auVar22,auVar22,0xe8);
      auVar12 = pshufhw(auVar12,auVar12,0xe8);
      *(ulong *)(param_4 + 0x50 + lVar11) =
           CONCAT26(auVar12._10_2_ + sVar10,
                    CONCAT24(auVar12._8_2_ + sVar9,
                             CONCAT22(auVar12._2_2_ + sVar8,auVar12._0_2_ + sVar7)));
      auVar23._0_4_ = (int)(pfVar2[0x2c] * local_88 + fVar3);
      auVar23._4_4_ = (int)(pfVar2[0x2d] * fStack_84 + fVar4);
      auVar23._8_4_ = (int)(pfVar2[0x2e] * fStack_80 + fVar5);
      auVar23._12_4_ = (int)(pfVar2[0x2f] * fStack_7c + fVar6);
      auVar12 = pshuflw(auVar23,auVar23,0xe8);
      auVar12 = pshufhw(auVar12,auVar12,0xe8);
      *(ulong *)(param_4 + 0x58 + lVar11) =
           CONCAT26(auVar12._10_2_ + sVar10,
                    CONCAT24(auVar12._8_2_ + sVar9,
                             CONCAT22(auVar12._2_2_ + sVar8,auVar12._0_2_ + sVar7)));
      auVar24._0_4_ = (int)(pfVar2[0x30] * local_78 + fVar3);
      auVar24._4_4_ = (int)(pfVar2[0x31] * fStack_74 + fVar4);
      auVar24._8_4_ = (int)(pfVar2[0x32] * fStack_70 + fVar5);
      auVar24._12_4_ = (int)(pfVar2[0x33] * fStack_6c + fVar6);
      auVar12 = pshuflw(auVar24,auVar24,0xe8);
      auVar12 = pshufhw(auVar12,auVar12,0xe8);
      *(ulong *)(param_4 + 0x60 + lVar11) =
           CONCAT26(auVar12._10_2_ + sVar10,
                    CONCAT24(auVar12._8_2_ + sVar9,
                             CONCAT22(auVar12._2_2_ + sVar8,auVar12._0_2_ + sVar7)));
      auVar25._0_4_ = (int)(pfVar2[0x34] * local_68 + fVar3);
      auVar25._4_4_ = (int)(pfVar2[0x35] * fStack_64 + fVar4);
      auVar25._8_4_ = (int)(pfVar2[0x36] * fStack_60 + fVar5);
      auVar25._12_4_ = (int)(pfVar2[0x37] * fStack_5c + fVar6);
      auVar12 = pshuflw(auVar25,auVar25,0xe8);
      auVar12 = pshufhw(auVar12,auVar12,0xe8);
      *(ulong *)(param_4 + 0x68 + lVar11) =
           CONCAT26(auVar12._10_2_ + sVar10,
                    CONCAT24(auVar12._8_2_ + sVar9,
                             CONCAT22(auVar12._2_2_ + sVar8,auVar12._0_2_ + sVar7)));
      auVar26._0_4_ = (int)(pfVar2[0x38] * local_58 + fVar3);
      auVar26._4_4_ = (int)(pfVar2[0x39] * fStack_54 + fVar4);
      auVar26._8_4_ = (int)(pfVar2[0x3a] * fStack_50 + fVar5);
      auVar26._12_4_ = (int)(pfVar2[0x3b] * fStack_4c + fVar6);
      auVar12 = pshuflw(auVar26,auVar26,0xe8);
      auVar12 = pshufhw(auVar12,auVar12,0xe8);
      *(ulong *)(param_4 + 0x70 + lVar11) =
           CONCAT26(auVar12._10_2_ + sVar10,
                    CONCAT24(auVar12._8_2_ + sVar9,
                             CONCAT22(auVar12._2_2_ + sVar8,auVar12._0_2_ + sVar7)));
      auVar27._0_4_ = (int)(pfVar2[0x3c] * local_48 + fVar3);
      auVar27._4_4_ = (int)(pfVar2[0x3d] * fStack_44 + fVar4);
      auVar27._8_4_ = (int)(pfVar2[0x3e] * fStack_40 + fVar5);
      auVar27._12_4_ = (int)(pfVar2[0x3f] * fStack_3c + fVar6);
      auVar12 = pshuflw(auVar27,auVar27,0xe8);
      auVar12 = pshufhw(auVar12,auVar12,0xe8);
      *(ulong *)(param_4 + 0x78 + lVar11) =
           CONCAT26(auVar12._10_2_ + sVar10,
                    CONCAT24(auVar12._8_2_ + sVar9,
                             CONCAT22(auVar12._2_2_ + sVar8,auVar12._0_2_ + sVar7)));
      param_5 = param_5 + *(int *)(param_2 + 0x24);
      lVar11 = lVar11 + 0x80;
    } while ((ulong)param_6 * 0x80 != lVar11);
  }
  return;
}


