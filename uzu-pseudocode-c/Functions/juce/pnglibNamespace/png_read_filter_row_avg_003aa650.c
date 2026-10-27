// Function : png_read_filter_row_avg
// Namespace: juce:pnglibNamespace
// Entry    : 003aa650
// Prototype: undefined png_read_filter_row_avg(long param_1, byte * param_2, byte * param_3)
// Body     : 003aa650 - 003aaa64


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::pnglibNamespace::png_read_filter_row_avg(juce::pnglibNamespace::png_row_info_struct*,
   unsigned char*, unsigned char const*) */

void __cdecl
juce::pnglibNamespace::png_read_filter_row_avg(long param_1,byte *param_2,byte *param_3)

{
  ushort *puVar1;
  byte *pbVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  long lVar5;
  undefined1 auVar6 [15];
  undefined1 auVar7 [15];
  undefined1 auVar8 [15];
  undefined1 auVar9 [15];
  undefined1 auVar10 [15];
  undefined1 auVar11 [15];
  undefined1 auVar12 [15];
  undefined1 auVar13 [15];
  undefined1 auVar14 [15];
  undefined1 auVar15 [15];
  undefined1 auVar16 [15];
  undefined1 auVar17 [15];
  undefined1 auVar18 [15];
  undefined1 auVar19 [15];
  undefined1 auVar20 [15];
  undefined1 auVar21 [15];
  undefined1 auVar22 [15];
  undefined1 auVar23 [15];
  undefined1 auVar24 [15];
  undefined1 auVar25 [15];
  undefined1 auVar26 [15];
  undefined1 auVar27 [15];
  undefined1 auVar28 [15];
  undefined1 auVar29 [15];
  undefined1 auVar30 [15];
  undefined1 auVar31 [15];
  undefined1 auVar32 [15];
  undefined1 auVar33 [15];
  undefined1 auVar34 [15];
  undefined1 auVar35 [15];
  undefined1 auVar36 [15];
  undefined1 auVar37 [15];
  undefined1 auVar38 [15];
  undefined1 auVar39 [15];
  undefined1 auVar40 [15];
  undefined1 auVar41 [15];
  undefined1 auVar42 [15];
  undefined1 auVar43 [15];
  undefined1 auVar44 [15];
  undefined1 auVar45 [15];
  undefined1 auVar46 [15];
  undefined1 auVar47 [15];
  byte bVar48;
  byte bVar49;
  byte bVar50;
  byte bVar51;
  byte bVar52;
  byte bVar53;
  byte bVar54;
  byte bVar55;
  byte bVar56;
  byte bVar57;
  byte bVar58;
  byte bVar59;
  byte bVar60;
  byte bVar61;
  byte bVar62;
  byte bVar63;
  byte bVar64;
  byte bVar65;
  byte bVar66;
  byte bVar67;
  byte bVar68;
  byte bVar69;
  byte bVar70;
  byte bVar71;
  byte bVar72;
  byte bVar73;
  byte bVar74;
  byte bVar75;
  byte bVar76;
  byte bVar77;
  byte bVar78;
  byte bVar79;
  byte bVar80;
  byte bVar81;
  byte bVar82;
  byte bVar83;
  byte bVar84;
  byte bVar85;
  byte bVar86;
  byte bVar87;
  byte bVar88;
  byte bVar89;
  byte bVar90;
  byte bVar91;
  byte bVar92;
  byte bVar93;
  byte bVar94;
  byte bVar95;
  byte bVar96;
  byte bVar97;
  byte bVar98;
  byte bVar99;
  byte bVar100;
  byte bVar101;
  byte bVar102;
  byte bVar103;
  byte bVar104;
  byte bVar105;
  byte bVar106;
  byte bVar107;
  byte bVar108;
  byte bVar109;
  byte bVar110;
  undefined1 auVar111 [15];
  unkuint9 Var112;
  undefined1 auVar113 [15];
  undefined1 auVar114 [11];
  undefined1 auVar115 [15];
  undefined1 auVar116 [15];
  unkuint9 Var117;
  undefined1 auVar118 [15];
  undefined1 auVar119 [11];
  undefined1 auVar120 [15];
  undefined1 auVar121 [15];
  unkuint9 Var122;
  undefined1 auVar123 [15];
  undefined1 auVar124 [11];
  undefined1 auVar125 [15];
  undefined1 auVar126 [15];
  unkuint9 Var127;
  undefined1 auVar128 [15];
  undefined1 auVar129 [11];
  undefined1 auVar130 [15];
  undefined1 auVar131 [15];
  undefined1 auVar132 [15];
  undefined1 auVar133 [11];
  undefined1 auVar134 [15];
  undefined1 auVar135 [15];
  undefined1 auVar136 [15];
  undefined1 auVar137 [11];
  undefined1 auVar138 [15];
  ulong uVar139;
  long lVar140;
  ulong uVar141;
  byte *pbVar142;
  long lVar143;
  ulong uVar144;
  ulong uVar145;
  ulong uVar146;
  ulong uVar147;
  ulong uVar148;
  undefined1 auVar149 [16];
  undefined1 auVar150 [16];
  undefined1 auVar151 [16];
  undefined1 auVar152 [16];
  undefined1 auVar153 [16];
  ushort uVar154;
  ushort uVar155;
  ushort uVar156;
  ushort uVar157;
  ushort uVar158;
  ushort uVar159;
  ushort uVar160;
  ushort uVar161;
  ushort uVar162;
  ushort uVar163;
  ushort uVar164;
  ushort uVar165;
  ushort uVar166;
  ushort uVar167;
  ushort uVar168;
  ushort uVar169;
  ushort uVar170;
  ushort uVar171;
  ushort uVar172;
  ushort uVar173;
  ushort uVar174;
  ushort uVar175;
  ushort uVar176;
  ushort uVar177;
  ushort uVar178;
  ushort uVar179;
  ushort uVar180;
  ushort uVar181;
  ushort uVar182;
  ushort uVar183;
  ushort uVar184;
  ushort uVar185;
  
  auVar4 = _DAT_005ddb60;
  uVar147 = (ulong)*(byte *)(param_1 + 0x13) + 7 >> 3;
  lVar5 = *(long *)(param_1 + 8);
  uVar145 = lVar5 - uVar147;
  if ((ulong)*(byte *)(param_1 + 0x13) != 0) {
    uVar144 = 1;
    if (1 < uVar147) {
      uVar144 = uVar147;
    }
    if ((uVar144 < 0x10) || ((param_2 < param_3 + uVar144 && (param_3 < param_2 + uVar144)))) {
      uVar146 = 0;
    }
    else {
      uVar146 = (ulong)((uint)uVar144 & 0xfffffff0);
      uVar139 = (uVar146 - 0x10 >> 4) + 1;
      uVar148 = (ulong)((uint)uVar139 & 3);
      if (uVar146 - 0x10 < 0x30) {
        lVar143 = 0;
      }
      else {
        uVar139 = uVar139 & 0xfffffffffffffffc;
        lVar143 = 0;
        do {
          puVar1 = (ushort *)(param_3 + lVar143);
          auVar149._0_2_ = *puVar1 >> 1;
          auVar149._2_2_ = puVar1[1] >> 1;
          auVar149._4_2_ = puVar1[2] >> 1;
          auVar149._6_2_ = puVar1[3] >> 1;
          auVar149._8_2_ = puVar1[4] >> 1;
          auVar149._10_2_ = puVar1[5] >> 1;
          auVar149._12_2_ = puVar1[6] >> 1;
          auVar149._14_2_ = puVar1[7] >> 1;
          auVar149 = auVar149 & auVar4;
          pbVar142 = param_2 + lVar143;
          bVar48 = pbVar142[1];
          bVar49 = pbVar142[2];
          bVar50 = pbVar142[3];
          bVar51 = pbVar142[4];
          bVar52 = pbVar142[5];
          bVar53 = pbVar142[6];
          bVar54 = pbVar142[7];
          bVar55 = pbVar142[8];
          bVar56 = pbVar142[9];
          bVar57 = pbVar142[10];
          bVar58 = pbVar142[0xb];
          bVar59 = pbVar142[0xc];
          bVar60 = pbVar142[0xd];
          bVar61 = pbVar142[0xe];
          bVar62 = pbVar142[0xf];
          pbVar2 = param_2 + lVar143 + 0x10;
          bVar63 = *pbVar2;
          bVar64 = pbVar2[1];
          bVar65 = pbVar2[2];
          bVar66 = pbVar2[3];
          bVar67 = pbVar2[4];
          bVar68 = pbVar2[5];
          bVar69 = pbVar2[6];
          bVar70 = pbVar2[7];
          bVar71 = pbVar2[8];
          bVar72 = pbVar2[9];
          bVar73 = pbVar2[10];
          bVar74 = pbVar2[0xb];
          bVar75 = pbVar2[0xc];
          bVar76 = pbVar2[0xd];
          bVar77 = pbVar2[0xe];
          bVar78 = pbVar2[0xf];
          pbVar2 = param_2 + lVar143 + 0x20;
          bVar79 = *pbVar2;
          bVar80 = pbVar2[1];
          bVar81 = pbVar2[2];
          bVar82 = pbVar2[3];
          bVar83 = pbVar2[4];
          bVar84 = pbVar2[5];
          bVar85 = pbVar2[6];
          bVar86 = pbVar2[7];
          bVar87 = pbVar2[8];
          bVar88 = pbVar2[9];
          bVar89 = pbVar2[10];
          bVar90 = pbVar2[0xb];
          bVar91 = pbVar2[0xc];
          bVar92 = pbVar2[0xd];
          bVar93 = pbVar2[0xe];
          bVar94 = pbVar2[0xf];
          pbVar2 = param_2 + lVar143 + 0x30;
          bVar95 = *pbVar2;
          bVar96 = pbVar2[1];
          bVar97 = pbVar2[2];
          bVar98 = pbVar2[3];
          bVar99 = pbVar2[4];
          bVar100 = pbVar2[5];
          bVar101 = pbVar2[6];
          bVar102 = pbVar2[7];
          bVar103 = pbVar2[8];
          bVar104 = pbVar2[9];
          bVar105 = pbVar2[10];
          bVar106 = pbVar2[0xb];
          bVar107 = pbVar2[0xc];
          bVar108 = pbVar2[0xd];
          bVar109 = pbVar2[0xe];
          bVar110 = pbVar2[0xf];
          pbVar2 = param_2 + lVar143;
          *pbVar2 = *pbVar142 + auVar149[0];
          pbVar2[1] = bVar48 + auVar149[1];
          pbVar2[2] = bVar49 + auVar149[2];
          pbVar2[3] = bVar50 + auVar149[3];
          pbVar2[4] = bVar51 + auVar149[4];
          pbVar2[5] = bVar52 + auVar149[5];
          pbVar2[6] = bVar53 + auVar149[6];
          pbVar2[7] = bVar54 + auVar149[7];
          pbVar2[8] = bVar55 + auVar149[8];
          pbVar2[9] = bVar56 + auVar149[9];
          pbVar2[10] = bVar57 + auVar149[10];
          pbVar2[0xb] = bVar58 + auVar149[0xb];
          pbVar2[0xc] = bVar59 + auVar149[0xc];
          pbVar2[0xd] = bVar60 + auVar149[0xd];
          pbVar2[0xe] = bVar61 + auVar149[0xe];
          pbVar2[0xf] = bVar62 + auVar149[0xf];
          puVar1 = (ushort *)(param_3 + lVar143 + 0x10);
          auVar152._0_2_ = *puVar1 >> 1;
          auVar152._2_2_ = puVar1[1] >> 1;
          auVar152._4_2_ = puVar1[2] >> 1;
          auVar152._6_2_ = puVar1[3] >> 1;
          auVar152._8_2_ = puVar1[4] >> 1;
          auVar152._10_2_ = puVar1[5] >> 1;
          auVar152._12_2_ = puVar1[6] >> 1;
          auVar152._14_2_ = puVar1[7] >> 1;
          auVar152 = auVar152 & auVar4;
          pbVar142 = param_2 + lVar143 + 0x10;
          *pbVar142 = auVar152[0] + bVar63;
          pbVar142[1] = auVar152[1] + bVar64;
          pbVar142[2] = auVar152[2] + bVar65;
          pbVar142[3] = auVar152[3] + bVar66;
          pbVar142[4] = auVar152[4] + bVar67;
          pbVar142[5] = auVar152[5] + bVar68;
          pbVar142[6] = auVar152[6] + bVar69;
          pbVar142[7] = auVar152[7] + bVar70;
          pbVar142[8] = auVar152[8] + bVar71;
          pbVar142[9] = auVar152[9] + bVar72;
          pbVar142[10] = auVar152[10] + bVar73;
          pbVar142[0xb] = auVar152[0xb] + bVar74;
          pbVar142[0xc] = auVar152[0xc] + bVar75;
          pbVar142[0xd] = auVar152[0xd] + bVar76;
          pbVar142[0xe] = auVar152[0xe] + bVar77;
          pbVar142[0xf] = auVar152[0xf] + bVar78;
          puVar1 = (ushort *)(param_3 + lVar143 + 0x20);
          auVar150._0_2_ = *puVar1 >> 1;
          auVar150._2_2_ = puVar1[1] >> 1;
          auVar150._4_2_ = puVar1[2] >> 1;
          auVar150._6_2_ = puVar1[3] >> 1;
          auVar150._8_2_ = puVar1[4] >> 1;
          auVar150._10_2_ = puVar1[5] >> 1;
          auVar150._12_2_ = puVar1[6] >> 1;
          auVar150._14_2_ = puVar1[7] >> 1;
          auVar150 = auVar150 & auVar4;
          pbVar142 = param_2 + lVar143 + 0x20;
          *pbVar142 = auVar150[0] + bVar79;
          pbVar142[1] = auVar150[1] + bVar80;
          pbVar142[2] = auVar150[2] + bVar81;
          pbVar142[3] = auVar150[3] + bVar82;
          pbVar142[4] = auVar150[4] + bVar83;
          pbVar142[5] = auVar150[5] + bVar84;
          pbVar142[6] = auVar150[6] + bVar85;
          pbVar142[7] = auVar150[7] + bVar86;
          pbVar142[8] = auVar150[8] + bVar87;
          pbVar142[9] = auVar150[9] + bVar88;
          pbVar142[10] = auVar150[10] + bVar89;
          pbVar142[0xb] = auVar150[0xb] + bVar90;
          pbVar142[0xc] = auVar150[0xc] + bVar91;
          pbVar142[0xd] = auVar150[0xd] + bVar92;
          pbVar142[0xe] = auVar150[0xe] + bVar93;
          pbVar142[0xf] = auVar150[0xf] + bVar94;
          puVar1 = (ushort *)(param_3 + lVar143 + 0x30);
          auVar151._0_2_ = *puVar1 >> 1;
          auVar151._2_2_ = puVar1[1] >> 1;
          auVar151._4_2_ = puVar1[2] >> 1;
          auVar151._6_2_ = puVar1[3] >> 1;
          auVar151._8_2_ = puVar1[4] >> 1;
          auVar151._10_2_ = puVar1[5] >> 1;
          auVar151._12_2_ = puVar1[6] >> 1;
          auVar151._14_2_ = puVar1[7] >> 1;
          auVar151 = auVar151 & auVar4;
          pbVar142 = param_2 + lVar143 + 0x30;
          *pbVar142 = auVar151[0] + bVar95;
          pbVar142[1] = auVar151[1] + bVar96;
          pbVar142[2] = auVar151[2] + bVar97;
          pbVar142[3] = auVar151[3] + bVar98;
          pbVar142[4] = auVar151[4] + bVar99;
          pbVar142[5] = auVar151[5] + bVar100;
          pbVar142[6] = auVar151[6] + bVar101;
          pbVar142[7] = auVar151[7] + bVar102;
          pbVar142[8] = auVar151[8] + bVar103;
          pbVar142[9] = auVar151[9] + bVar104;
          pbVar142[10] = auVar151[10] + bVar105;
          pbVar142[0xb] = auVar151[0xb] + bVar106;
          pbVar142[0xc] = auVar151[0xc] + bVar107;
          pbVar142[0xd] = auVar151[0xd] + bVar108;
          pbVar142[0xe] = auVar151[0xe] + bVar109;
          pbVar142[0xf] = auVar151[0xf] + bVar110;
          lVar143 = lVar143 + 0x40;
          uVar139 = uVar139 - 4;
        } while (uVar139 != 0);
      }
      auVar4 = _DAT_005ddb60;
      if (uVar148 != 0) {
        lVar140 = 0;
        do {
          pbVar142 = param_2 + lVar140 + lVar143;
          bVar48 = pbVar142[1];
          bVar49 = pbVar142[2];
          bVar50 = pbVar142[3];
          bVar51 = pbVar142[4];
          bVar52 = pbVar142[5];
          bVar53 = pbVar142[6];
          bVar54 = pbVar142[7];
          bVar55 = pbVar142[8];
          bVar56 = pbVar142[9];
          bVar57 = pbVar142[10];
          bVar58 = pbVar142[0xb];
          bVar59 = pbVar142[0xc];
          bVar60 = pbVar142[0xd];
          bVar61 = pbVar142[0xe];
          bVar62 = pbVar142[0xf];
          puVar1 = (ushort *)(param_3 + lVar140 + lVar143);
          auVar153._0_2_ = *puVar1 >> 1;
          auVar153._2_2_ = puVar1[1] >> 1;
          auVar153._4_2_ = puVar1[2] >> 1;
          auVar153._6_2_ = puVar1[3] >> 1;
          auVar153._8_2_ = puVar1[4] >> 1;
          auVar153._10_2_ = puVar1[5] >> 1;
          auVar153._12_2_ = puVar1[6] >> 1;
          auVar153._14_2_ = puVar1[7] >> 1;
          auVar153 = auVar153 & auVar4;
          pbVar2 = param_2 + lVar140 + lVar143;
          *pbVar2 = auVar153[0] + *pbVar142;
          pbVar2[1] = auVar153[1] + bVar48;
          pbVar2[2] = auVar153[2] + bVar49;
          pbVar2[3] = auVar153[3] + bVar50;
          pbVar2[4] = auVar153[4] + bVar51;
          pbVar2[5] = auVar153[5] + bVar52;
          pbVar2[6] = auVar153[6] + bVar53;
          pbVar2[7] = auVar153[7] + bVar54;
          pbVar2[8] = auVar153[8] + bVar55;
          pbVar2[9] = auVar153[9] + bVar56;
          pbVar2[10] = auVar153[10] + bVar57;
          pbVar2[0xb] = auVar153[0xb] + bVar58;
          pbVar2[0xc] = auVar153[0xc] + bVar59;
          pbVar2[0xd] = auVar153[0xd] + bVar60;
          pbVar2[0xe] = auVar153[0xe] + bVar61;
          pbVar2[0xf] = auVar153[0xf] + bVar62;
          lVar140 = lVar140 + 0x10;
        } while (uVar148 * 0x10 != lVar140);
      }
      param_2 = param_2 + uVar146;
      param_3 = param_3 + uVar146;
      if (uVar144 == uVar146) goto LAB_003aa844;
    }
    uVar148 = ~uVar146;
    uVar139 = uVar144 & 3;
    if (uVar139 != 0) {
      uVar141 = uVar139;
      do {
        *param_2 = *param_2 + (*param_3 >> 1);
        param_3 = param_3 + 1;
        param_2 = param_2 + 1;
        uVar141 = uVar141 - 1;
      } while (uVar141 != 0);
      uVar146 = uVar146 | uVar139;
    }
    if (2 < uVar148 + uVar144) {
      lVar143 = uVar144 - uVar146;
      do {
        *param_2 = *param_2 + (*param_3 >> 1);
        param_2[1] = param_2[1] + (param_3[1] >> 1);
        param_2[2] = param_2[2] + (param_3[2] >> 1);
        param_2[3] = param_2[3] + (param_3[3] >> 1);
        param_3 = param_3 + 4;
        param_2 = param_2 + 4;
        lVar143 = lVar143 + -4;
      } while (lVar143 != 0);
    }
  }
LAB_003aa844:
  if (uVar145 == 0) {
    return;
  }
  pbVar142 = param_2;
  if (uVar145 < 8) {
    uVar144 = 0;
  }
  else {
    uVar144 = 0;
    if ((param_3 + uVar145 <= param_2 || param_2 + uVar145 <= param_3) &&
       (param_2 + lVar5 + uVar147 * -2 <= param_2 || param_2 + uVar145 <= param_2 + -uVar147)) {
      if (uVar145 < 0x20) {
        uVar146 = 0;
      }
      else {
        uVar144 = uVar145 & 0xffffffffffffffe0;
        uVar146 = 0;
        do {
          pbVar142 = param_2 + uVar146;
          bVar48 = pbVar142[1];
          bVar49 = pbVar142[2];
          bVar50 = pbVar142[3];
          bVar51 = pbVar142[4];
          bVar52 = pbVar142[5];
          bVar53 = pbVar142[6];
          bVar54 = pbVar142[7];
          bVar55 = pbVar142[8];
          bVar56 = pbVar142[9];
          bVar57 = pbVar142[10];
          bVar58 = pbVar142[0xb];
          bVar59 = pbVar142[0xc];
          bVar60 = pbVar142[0xd];
          bVar61 = pbVar142[0xe];
          bVar62 = pbVar142[0xf];
          pbVar2 = param_2 + uVar146 + 0x10;
          bVar63 = *pbVar2;
          bVar64 = pbVar2[1];
          bVar65 = pbVar2[2];
          bVar66 = pbVar2[3];
          bVar67 = pbVar2[4];
          bVar68 = pbVar2[5];
          bVar69 = pbVar2[6];
          bVar70 = pbVar2[7];
          bVar71 = pbVar2[8];
          bVar72 = pbVar2[9];
          bVar73 = pbVar2[10];
          bVar74 = pbVar2[0xb];
          bVar75 = pbVar2[0xc];
          bVar76 = pbVar2[0xd];
          bVar77 = pbVar2[0xe];
          bVar78 = pbVar2[0xf];
          auVar4 = *(undefined1 (*) [16])(param_3 + uVar146);
          auVar149 = *(undefined1 (*) [16])(param_3 + uVar146 + 0x10);
          auVar6[0xd] = 0;
          auVar6._0_13_ = auVar4._0_13_;
          auVar6[0xe] = auVar4[7];
          auVar12[0xc] = auVar4[6];
          auVar12._0_12_ = auVar4._0_12_;
          auVar12._13_2_ = auVar6._13_2_;
          auVar18[0xb] = 0;
          auVar18._0_11_ = auVar4._0_11_;
          auVar18._12_3_ = auVar12._12_3_;
          auVar24[10] = auVar4[5];
          auVar24._0_10_ = auVar4._0_10_;
          auVar24._11_4_ = auVar18._11_4_;
          auVar30[9] = 0;
          auVar30._0_9_ = auVar4._0_9_;
          auVar30._10_5_ = auVar24._10_5_;
          auVar36[8] = auVar4[4];
          auVar36._0_8_ = auVar4._0_8_;
          auVar36._9_6_ = auVar30._9_6_;
          auVar111._7_8_ = 0;
          auVar111._0_7_ = auVar36._8_7_;
          Var112 = CONCAT81(SUB158(auVar111 << 0x40,7),auVar4[3]);
          auVar113._9_6_ = 0;
          auVar113._0_9_ = Var112;
          auVar114._1_10_ = SUB1510(auVar113 << 0x30,5);
          auVar114[0] = auVar4[2];
          auVar115._11_4_ = 0;
          auVar115._0_11_ = auVar114;
          auVar42[2] = auVar4[1];
          auVar42._0_2_ = auVar4._0_2_;
          auVar42._3_12_ = SUB1512(auVar115 << 0x20,3);
          auVar7[0xd] = 0;
          auVar7._0_13_ = auVar149._0_13_;
          auVar7[0xe] = auVar149[7];
          auVar13[0xc] = auVar149[6];
          auVar13._0_12_ = auVar149._0_12_;
          auVar13._13_2_ = auVar7._13_2_;
          auVar19[0xb] = 0;
          auVar19._0_11_ = auVar149._0_11_;
          auVar19._12_3_ = auVar13._12_3_;
          auVar25[10] = auVar149[5];
          auVar25._0_10_ = auVar149._0_10_;
          auVar25._11_4_ = auVar19._11_4_;
          auVar31[9] = 0;
          auVar31._0_9_ = auVar149._0_9_;
          auVar31._10_5_ = auVar25._10_5_;
          auVar37[8] = auVar149[4];
          auVar37._0_8_ = auVar149._0_8_;
          auVar37._9_6_ = auVar31._9_6_;
          auVar116._7_8_ = 0;
          auVar116._0_7_ = auVar37._8_7_;
          Var117 = CONCAT81(SUB158(auVar116 << 0x40,7),auVar149[3]);
          auVar118._9_6_ = 0;
          auVar118._0_9_ = Var117;
          auVar119._1_10_ = SUB1510(auVar118 << 0x30,5);
          auVar119[0] = auVar149[2];
          auVar120._11_4_ = 0;
          auVar120._0_11_ = auVar119;
          auVar43[2] = auVar149[1];
          auVar43._0_2_ = auVar149._0_2_;
          auVar43._3_12_ = SUB1512(auVar120 << 0x20,3);
          auVar150 = *(undefined1 (*) [16])(param_2 + (uVar146 - uVar147));
          auVar151 = *(undefined1 (*) [16])(param_2 + uVar146 + (0x10 - uVar147));
          auVar8[0xd] = 0;
          auVar8._0_13_ = auVar150._0_13_;
          auVar8[0xe] = auVar150[7];
          auVar14[0xc] = auVar150[6];
          auVar14._0_12_ = auVar150._0_12_;
          auVar14._13_2_ = auVar8._13_2_;
          auVar20[0xb] = 0;
          auVar20._0_11_ = auVar150._0_11_;
          auVar20._12_3_ = auVar14._12_3_;
          auVar26[10] = auVar150[5];
          auVar26._0_10_ = auVar150._0_10_;
          auVar26._11_4_ = auVar20._11_4_;
          auVar32[9] = 0;
          auVar32._0_9_ = auVar150._0_9_;
          auVar32._10_5_ = auVar26._10_5_;
          auVar38[8] = auVar150[4];
          auVar38._0_8_ = auVar150._0_8_;
          auVar38._9_6_ = auVar32._9_6_;
          auVar121._7_8_ = 0;
          auVar121._0_7_ = auVar38._8_7_;
          Var122 = CONCAT81(SUB158(auVar121 << 0x40,7),auVar150[3]);
          auVar123._9_6_ = 0;
          auVar123._0_9_ = Var122;
          auVar124._1_10_ = SUB1510(auVar123 << 0x30,5);
          auVar124[0] = auVar150[2];
          auVar125._11_4_ = 0;
          auVar125._0_11_ = auVar124;
          auVar44[2] = auVar150[1];
          auVar44._0_2_ = auVar150._0_2_;
          auVar44._3_12_ = SUB1512(auVar125 << 0x20,3);
          auVar9[0xd] = 0;
          auVar9._0_13_ = auVar151._0_13_;
          auVar9[0xe] = auVar151[7];
          auVar15[0xc] = auVar151[6];
          auVar15._0_12_ = auVar151._0_12_;
          auVar15._13_2_ = auVar9._13_2_;
          auVar21[0xb] = 0;
          auVar21._0_11_ = auVar151._0_11_;
          auVar21._12_3_ = auVar15._12_3_;
          auVar27[10] = auVar151[5];
          auVar27._0_10_ = auVar151._0_10_;
          auVar27._11_4_ = auVar21._11_4_;
          auVar33[9] = 0;
          auVar33._0_9_ = auVar151._0_9_;
          auVar33._10_5_ = auVar27._10_5_;
          auVar39[8] = auVar151[4];
          auVar39._0_8_ = auVar151._0_8_;
          auVar39._9_6_ = auVar33._9_6_;
          auVar126._7_8_ = 0;
          auVar126._0_7_ = auVar39._8_7_;
          Var127 = CONCAT81(SUB158(auVar126 << 0x40,7),auVar151[3]);
          auVar128._9_6_ = 0;
          auVar128._0_9_ = Var127;
          auVar129._1_10_ = SUB1510(auVar128 << 0x30,5);
          auVar129[0] = auVar151[2];
          auVar130._11_4_ = 0;
          auVar130._0_11_ = auVar129;
          auVar45[2] = auVar151[1];
          auVar45._0_2_ = auVar151._0_2_;
          auVar45._3_12_ = SUB1512(auVar130 << 0x20,3);
          uVar155 = (ushort)((ushort)auVar150[8] + (ushort)auVar4[8]) >> 1;
          uVar157 = (ushort)((ushort)auVar150[9] + (ushort)auVar4[9]) >> 1;
          uVar159 = (ushort)((ushort)auVar150[10] + (ushort)auVar4[10]) >> 1;
          uVar161 = (ushort)((ushort)auVar150[0xb] + (ushort)auVar4[0xb]) >> 1;
          uVar163 = (ushort)((ushort)auVar150[0xc] + (ushort)auVar4[0xc]) >> 1;
          uVar165 = (ushort)((ushort)auVar150[0xd] + (ushort)auVar4[0xd]) >> 1;
          uVar167 = (ushort)((ushort)auVar150[0xe] + (ushort)auVar4[0xe]) >> 1;
          uVar169 = (ushort)((ushort)auVar150[0xf] + (ushort)auVar4[0xf]) >> 1;
          uVar154 = (ushort)((auVar150._0_2_ & 0xff) + (auVar4._0_2_ & 0xff)) >> 1;
          uVar156 = (ushort)(auVar44._2_2_ + auVar42._2_2_) >> 1;
          uVar158 = (ushort)(auVar124._0_2_ + auVar114._0_2_) >> 1;
          uVar160 = (ushort)((short)Var122 + (short)Var112) >> 1;
          uVar162 = (ushort)(auVar38._8_2_ + auVar36._8_2_) >> 1;
          uVar164 = (ushort)(auVar26._10_2_ + auVar24._10_2_) >> 1;
          uVar166 = (ushort)(auVar14._12_2_ + auVar12._12_2_) >> 1;
          uVar168 = (ushort)((auVar8._13_2_ >> 8) + (auVar6._13_2_ >> 8)) >> 1;
          uVar178 = (ushort)((ushort)auVar151[8] + (ushort)auVar149[8]) >> 1;
          uVar179 = (ushort)((ushort)auVar151[9] + (ushort)auVar149[9]) >> 1;
          uVar180 = (ushort)((ushort)auVar151[10] + (ushort)auVar149[10]) >> 1;
          uVar181 = (ushort)((ushort)auVar151[0xb] + (ushort)auVar149[0xb]) >> 1;
          uVar182 = (ushort)((ushort)auVar151[0xc] + (ushort)auVar149[0xc]) >> 1;
          uVar183 = (ushort)((ushort)auVar151[0xd] + (ushort)auVar149[0xd]) >> 1;
          uVar184 = (ushort)((ushort)auVar151[0xe] + (ushort)auVar149[0xe]) >> 1;
          uVar185 = (ushort)((ushort)auVar151[0xf] + (ushort)auVar149[0xf]) >> 1;
          uVar170 = (ushort)((auVar151._0_2_ & 0xff) + (auVar149._0_2_ & 0xff)) >> 1;
          uVar171 = (ushort)(auVar45._2_2_ + auVar43._2_2_) >> 1;
          uVar172 = (ushort)(auVar129._0_2_ + auVar119._0_2_) >> 1;
          uVar173 = (ushort)((short)Var127 + (short)Var117) >> 1;
          uVar174 = (ushort)(auVar39._8_2_ + auVar37._8_2_) >> 1;
          uVar175 = (ushort)(auVar27._10_2_ + auVar25._10_2_) >> 1;
          uVar176 = (ushort)(auVar15._12_2_ + auVar13._12_2_) >> 1;
          uVar177 = (ushort)((auVar9._13_2_ >> 8) + (auVar7._13_2_ >> 8)) >> 1;
          pbVar2 = param_2 + uVar146;
          *pbVar2 = ((uVar154 != 0) * (uVar154 < 0x100) * (char)uVar154 - (0xff < uVar154)) +
                    *pbVar142;
          pbVar2[1] = ((uVar156 != 0) * (uVar156 < 0x100) * (char)uVar156 - (0xff < uVar156)) +
                      bVar48;
          pbVar2[2] = ((uVar158 != 0) * (uVar158 < 0x100) * (char)uVar158 - (0xff < uVar158)) +
                      bVar49;
          pbVar2[3] = ((uVar160 != 0) * (uVar160 < 0x100) * (char)uVar160 - (0xff < uVar160)) +
                      bVar50;
          pbVar2[4] = ((uVar162 != 0) * (uVar162 < 0x100) * (char)uVar162 - (0xff < uVar162)) +
                      bVar51;
          pbVar2[5] = ((uVar164 != 0) * (uVar164 < 0x100) * (char)uVar164 - (0xff < uVar164)) +
                      bVar52;
          pbVar2[6] = ((uVar166 != 0) * (uVar166 < 0x100) * (char)uVar166 - (0xff < uVar166)) +
                      bVar53;
          pbVar2[7] = ((uVar168 != 0) * (uVar168 < 0x100) * (char)uVar168 - (0xff < uVar168)) +
                      bVar54;
          pbVar2[8] = ((uVar155 != 0) * (uVar155 < 0x100) * (char)uVar155 - (0xff < uVar155)) +
                      bVar55;
          pbVar2[9] = ((uVar157 != 0) * (uVar157 < 0x100) * (char)uVar157 - (0xff < uVar157)) +
                      bVar56;
          pbVar2[10] = ((uVar159 != 0) * (uVar159 < 0x100) * (char)uVar159 - (0xff < uVar159)) +
                       bVar57;
          pbVar2[0xb] = ((uVar161 != 0) * (uVar161 < 0x100) * (char)uVar161 - (0xff < uVar161)) +
                        bVar58;
          pbVar2[0xc] = ((uVar163 != 0) * (uVar163 < 0x100) * (char)uVar163 - (0xff < uVar163)) +
                        bVar59;
          pbVar2[0xd] = ((uVar165 != 0) * (uVar165 < 0x100) * (char)uVar165 - (0xff < uVar165)) +
                        bVar60;
          pbVar2[0xe] = ((uVar167 != 0) * (uVar167 < 0x100) * (char)uVar167 - (0xff < uVar167)) +
                        bVar61;
          pbVar2[0xf] = ((uVar169 != 0) * (uVar169 < 0x100) * (char)uVar169 - (0xff < uVar169)) +
                        bVar62;
          pbVar142 = param_2 + uVar146 + 0x10;
          *pbVar142 = ((uVar170 != 0) * (uVar170 < 0x100) * (char)uVar170 - (0xff < uVar170)) +
                      bVar63;
          pbVar142[1] = ((uVar171 != 0) * (uVar171 < 0x100) * (char)uVar171 - (0xff < uVar171)) +
                        bVar64;
          pbVar142[2] = ((uVar172 != 0) * (uVar172 < 0x100) * (char)uVar172 - (0xff < uVar172)) +
                        bVar65;
          pbVar142[3] = ((uVar173 != 0) * (uVar173 < 0x100) * (char)uVar173 - (0xff < uVar173)) +
                        bVar66;
          pbVar142[4] = ((uVar174 != 0) * (uVar174 < 0x100) * (char)uVar174 - (0xff < uVar174)) +
                        bVar67;
          pbVar142[5] = ((uVar175 != 0) * (uVar175 < 0x100) * (char)uVar175 - (0xff < uVar175)) +
                        bVar68;
          pbVar142[6] = ((uVar176 != 0) * (uVar176 < 0x100) * (char)uVar176 - (0xff < uVar176)) +
                        bVar69;
          pbVar142[7] = ((uVar177 != 0) * (uVar177 < 0x100) * (char)uVar177 - (0xff < uVar177)) +
                        bVar70;
          pbVar142[8] = ((uVar178 != 0) * (uVar178 < 0x100) * (char)uVar178 - (0xff < uVar178)) +
                        bVar71;
          pbVar142[9] = ((uVar179 != 0) * (uVar179 < 0x100) * (char)uVar179 - (0xff < uVar179)) +
                        bVar72;
          pbVar142[10] = ((uVar180 != 0) * (uVar180 < 0x100) * (char)uVar180 - (0xff < uVar180)) +
                         bVar73;
          pbVar142[0xb] =
               ((uVar181 != 0) * (uVar181 < 0x100) * (char)uVar181 - (0xff < uVar181)) + bVar74;
          pbVar142[0xc] =
               ((uVar182 != 0) * (uVar182 < 0x100) * (char)uVar182 - (0xff < uVar182)) + bVar75;
          pbVar142[0xd] =
               ((uVar183 != 0) * (uVar183 < 0x100) * (char)uVar183 - (0xff < uVar183)) + bVar76;
          pbVar142[0xe] =
               ((uVar184 != 0) * (uVar184 < 0x100) * (char)uVar184 - (0xff < uVar184)) + bVar77;
          pbVar142[0xf] =
               ((uVar185 != 0) * (uVar185 < 0x100) * (char)uVar185 - (0xff < uVar185)) + bVar78;
          uVar146 = uVar146 + 0x20;
        } while (uVar144 != uVar146);
        if (uVar145 == uVar144) {
          return;
        }
        uVar146 = uVar144;
        if ((uVar145 & 0x18) == 0) {
          param_3 = param_3 + uVar144;
          pbVar142 = param_2 + uVar144;
          goto LAB_003aa85f;
        }
      }
      uVar144 = uVar145 & 0xfffffffffffffff8;
      pbVar142 = param_2 + uVar144;
      do {
        uVar3 = *(undefined8 *)(param_2 + uVar146);
        uVar139 = *(ulong *)(param_3 + uVar146);
        auVar10._8_6_ = 0;
        auVar10._0_8_ = uVar139;
        auVar10[0xe] = (char)(uVar139 >> 0x38);
        auVar16._8_4_ = 0;
        auVar16._0_8_ = uVar139;
        auVar16[0xc] = (char)(uVar139 >> 0x30);
        auVar16._13_2_ = auVar10._13_2_;
        auVar22._8_4_ = 0;
        auVar22._0_8_ = uVar139;
        auVar22._12_3_ = auVar16._12_3_;
        auVar28._8_2_ = 0;
        auVar28._0_8_ = uVar139;
        auVar28[10] = (char)(uVar139 >> 0x28);
        auVar28._11_4_ = auVar22._11_4_;
        auVar34._8_2_ = 0;
        auVar34._0_8_ = uVar139;
        auVar34._10_5_ = auVar28._10_5_;
        auVar40[8] = (char)(uVar139 >> 0x20);
        auVar40._0_8_ = uVar139;
        auVar40._9_6_ = auVar34._9_6_;
        auVar131._7_8_ = 0;
        auVar131._0_7_ = auVar40._8_7_;
        Var112 = CONCAT81(SUB158(auVar131 << 0x40,7),(char)(uVar139 >> 0x18));
        auVar132._9_6_ = 0;
        auVar132._0_9_ = Var112;
        auVar133._1_10_ = SUB1510(auVar132 << 0x30,5);
        auVar133[0] = (char)(uVar139 >> 0x10);
        auVar134._11_4_ = 0;
        auVar134._0_11_ = auVar133;
        auVar46[2] = (char)(uVar139 >> 8);
        auVar46._0_2_ = (ushort)uVar139;
        auVar46._3_12_ = SUB1512(auVar134 << 0x20,3);
        uVar148 = *(ulong *)(param_2 + -uVar147 + uVar146);
        auVar11._8_6_ = 0;
        auVar11._0_8_ = uVar148;
        auVar11[0xe] = (char)(uVar148 >> 0x38);
        auVar17._8_4_ = 0;
        auVar17._0_8_ = uVar148;
        auVar17[0xc] = (char)(uVar148 >> 0x30);
        auVar17._13_2_ = auVar11._13_2_;
        auVar23._8_4_ = 0;
        auVar23._0_8_ = uVar148;
        auVar23._12_3_ = auVar17._12_3_;
        auVar29._8_2_ = 0;
        auVar29._0_8_ = uVar148;
        auVar29[10] = (char)(uVar148 >> 0x28);
        auVar29._11_4_ = auVar23._11_4_;
        auVar35._8_2_ = 0;
        auVar35._0_8_ = uVar148;
        auVar35._10_5_ = auVar29._10_5_;
        auVar41[8] = (char)(uVar148 >> 0x20);
        auVar41._0_8_ = uVar148;
        auVar41._9_6_ = auVar35._9_6_;
        auVar135._7_8_ = 0;
        auVar135._0_7_ = auVar41._8_7_;
        Var117 = CONCAT81(SUB158(auVar135 << 0x40,7),(char)(uVar148 >> 0x18));
        auVar136._9_6_ = 0;
        auVar136._0_9_ = Var117;
        auVar137._1_10_ = SUB1510(auVar136 << 0x30,5);
        auVar137[0] = (char)(uVar148 >> 0x10);
        auVar138._11_4_ = 0;
        auVar138._0_11_ = auVar137;
        auVar47[2] = (char)(uVar148 >> 8);
        auVar47._0_2_ = (ushort)uVar148;
        auVar47._3_12_ = SUB1512(auVar138 << 0x20,3);
        uVar155 = (ushort)(((ushort)uVar148 & 0xff) + ((ushort)uVar139 & 0xff)) >> 1;
        uVar157 = (ushort)(auVar47._2_2_ + auVar46._2_2_) >> 1;
        uVar159 = (ushort)(auVar137._0_2_ + auVar133._0_2_) >> 1;
        uVar161 = (ushort)((short)Var117 + (short)Var112) >> 1;
        uVar163 = (ushort)(auVar41._8_2_ + auVar40._8_2_) >> 1;
        uVar165 = (ushort)(auVar29._10_2_ + auVar28._10_2_) >> 1;
        uVar167 = (ushort)(auVar17._12_2_ + auVar16._12_2_) >> 1;
        uVar169 = (ushort)((auVar11._13_2_ >> 8) + (auVar10._13_2_ >> 8)) >> 1;
        *(ulong *)(param_2 + uVar146) =
             CONCAT17(((uVar169 != 0) * (uVar169 < 0x100) * (char)uVar169 - (0xff < uVar169)) +
                      (char)((ulong)uVar3 >> 0x38),
                      CONCAT16(((uVar167 != 0) * (uVar167 < 0x100) * (char)uVar167 -
                               (0xff < uVar167)) + (char)((ulong)uVar3 >> 0x30),
                               CONCAT15(((uVar165 != 0) * (uVar165 < 0x100) * (char)uVar165 -
                                        (0xff < uVar165)) + (char)((ulong)uVar3 >> 0x28),
                                        CONCAT14(((uVar163 != 0) * (uVar163 < 0x100) * (char)uVar163
                                                 - (0xff < uVar163)) + (char)((ulong)uVar3 >> 0x20),
                                                 CONCAT13(((uVar161 != 0) * (uVar161 < 0x100) *
                                                           (char)uVar161 - (0xff < uVar161)) +
                                                          (char)((ulong)uVar3 >> 0x18),
                                                          CONCAT12(((uVar159 != 0) *
                                                                    (uVar159 < 0x100) *
                                                                    (char)uVar159 - (0xff < uVar159)
                                                                   ) + (char)((ulong)uVar3 >> 0x10),
                                                                   CONCAT11(((uVar157 != 0) *
                                                                             (uVar157 < 0x100) *
                                                                             (char)uVar157 -
                                                                            (0xff < uVar157)) +
                                                                            (char)((ulong)uVar3 >> 8
                                                                                  ),((uVar155 != 0)
                                                                                     * (uVar155 <
                                                                                       0x100) *
                                                                                     (char)uVar155 -
                                                                                    (0xff < uVar155)
                                                                                    ) + (char)uVar3)
                                                                  ))))));
        uVar146 = uVar146 + 8;
      } while (uVar144 != uVar146);
      if (uVar145 == uVar144) {
        return;
      }
      param_3 = param_3 + uVar144;
    }
  }
LAB_003aa85f:
  uVar146 = ~uVar144;
  if ((uVar145 & 1) != 0) {
    *pbVar142 = *pbVar142 + (char)((uint)pbVar142[-uVar147] + (uint)*param_3 >> 1);
    param_3 = param_3 + 1;
    pbVar142 = pbVar142 + 1;
    uVar144 = uVar144 | 1;
  }
  if (uVar146 + lVar5 != uVar147) {
    lVar143 = 0;
    do {
      pbVar142[lVar143] =
           pbVar142[lVar143] +
           (char)((uint)pbVar142[lVar143 - uVar147] + (uint)param_3[lVar143] >> 1);
      pbVar142[lVar143 + 1] =
           pbVar142[lVar143 + 1] +
           (char)((uint)pbVar142[lVar143 + (1 - uVar147)] + (uint)param_3[lVar143 + 1] >> 1);
      lVar143 = lVar143 + 2;
    } while ((lVar5 - uVar144) - uVar147 != lVar143);
  }
  return;
}


