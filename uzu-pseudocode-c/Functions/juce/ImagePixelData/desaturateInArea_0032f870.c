// Function : desaturateInArea
// Namespace: juce:ImagePixelData
// Entry    : 0032f870
// Prototype: undefined desaturateInArea(long * param_1, undefined4 param_2, undefined8 param_3)
// Body     : 0032f870 - 0032fc05


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::ImagePixelData::desaturateInArea(juce::Rectangle<int>) */

void __cdecl juce::ImagePixelData::desaturateInArea(long *param_1,undefined4 param_2,ulong param_3)

{
  long *plVar1;
  ulong uVar2;
  ulong uVar3;
  undefined1 auVar4 [16];
  byte bVar5;
  char cVar21;
  char cVar20;
  char cVar19;
  char cVar18;
  char cVar17;
  char cVar16;
  char cVar15;
  char cVar14;
  char cVar13;
  char cVar12;
  char cVar11;
  char cVar10;
  char cVar9;
  char cVar8;
  char cVar7;
  char cVar6;
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
  undefined1 auVar48 [15];
  undefined1 auVar49 [15];
  undefined1 auVar50 [15];
  undefined1 auVar51 [15];
  undefined1 auVar52 [15];
  undefined1 auVar53 [15];
  undefined1 auVar54 [15];
  undefined1 auVar55 [15];
  undefined1 auVar56 [15];
  undefined1 auVar57 [15];
  undefined1 auVar58 [15];
  undefined1 auVar59 [15];
  undefined1 auVar60 [15];
  undefined1 auVar61 [15];
  undefined1 auVar62 [15];
  undefined1 auVar63 [15];
  undefined1 auVar64 [15];
  unkuint9 Var65;
  undefined1 auVar66 [15];
  undefined1 auVar67 [11];
  undefined1 auVar68 [15];
  undefined1 auVar69 [15];
  unkuint9 Var70;
  undefined1 auVar71 [15];
  undefined1 auVar72 [11];
  undefined1 auVar73 [15];
  undefined1 auVar74 [15];
  unkuint9 Var75;
  undefined1 auVar76 [15];
  undefined1 auVar77 [11];
  undefined1 auVar78 [15];
  undefined1 auVar79 [15];
  undefined1 auVar80 [15];
  undefined1 auVar81 [11];
  undefined1 auVar82 [15];
  undefined1 auVar83 [15];
  undefined1 auVar84 [15];
  undefined1 auVar85 [11];
  undefined1 auVar86 [15];
  undefined1 auVar87 [15];
  undefined1 auVar88 [15];
  undefined1 auVar89 [11];
  undefined1 auVar90 [15];
  ulong uVar91;
  undefined1 auVar92 [16];
  ushort uVar93;
  ushort uVar94;
  ushort uVar95;
  ushort uVar96;
  ushort uVar97;
  ushort uVar98;
  ushort uVar99;
  ushort uVar100;
  ulong uVar101;
  ulong uVar102;
  ulong uVar103;
  undefined1 (*pauVar104) [16];
  undefined1 uVar105;
  long lVar106;
  long lVar107;
  long lVar108;
  long lVar109;
  ulong uVar110;
  undefined1 (*pauVar111) [16];
  ushort uVar112;
  ushort uVar118;
  undefined8 uVar113;
  ushort uVar116;
  ushort uVar117;
  ushort uVar119;
  ushort uVar120;
  ushort uVar121;
  undefined1 auVar114 [16];
  ushort uVar122;
  undefined1 auVar115 [16];
  ushort uVar123;
  ushort uVar126;
  ushort uVar127;
  ushort uVar128;
  ushort uVar129;
  ushort uVar130;
  ushort uVar131;
  undefined1 auVar124 [16];
  undefined1 auVar125 [16];
  ushort uVar132;
  long local_70 [2];
  int local_60;
  int local_5c;
  int local_58;
  undefined8 local_54;
  long *local_48;
  long local_40;
  ulong local_38;
  
  if (*(int *)((long)param_1 + 0xc) - 1U < 2) {
    LOCK();
    *(int *)(param_1 + 1) = (int)param_1[1] + 1;
    UNLOCK();
    local_48 = (long *)0x0;
                    /* try { // try from 0032f8ba to 0032f8c9 has its CatchHandler @ 0032fc06 */
    local_54 = param_3;
    (**(code **)(*param_1 + 0x38))(param_1,local_70,param_2);
    LOCK();
    plVar1 = param_1 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    uVar91 = local_54;
    if ((int)*plVar1 == 0) {
      (**(code **)(*param_1 + 8))(param_1);
      uVar91 = local_54;
    }
    uVar100 = _UNK_005dd39e;
    uVar99 = _UNK_005dd39c;
    uVar98 = _UNK_005dd39a;
    uVar97 = _UNK_005dd398;
    uVar96 = _UNK_005dd396;
    uVar95 = _UNK_005dd394;
    uVar94 = _UNK_005dd392;
    uVar93 = _DAT_005dd390;
    auVar92 = _DAT_005dd380;
    local_54._4_4_ = (uint)(uVar91 >> 0x20);
    local_54._0_4_ = (uint)uVar91;
    if (local_60 == 1) {
      if ((0xffffffff < (long)uVar91) && (uVar101 = uVar91 & 0xffffffff, 0 < (int)(uint)local_54)) {
        lVar109 = (long)local_58;
        uVar102 = (ulong)((uint)local_54 & 0xfffffff0);
        local_38 = (ulong)((uint)local_54 & 0xfffffff8);
        pauVar111 = (undefined1 (*) [16])(local_70[0] + 2);
        local_40 = -local_38;
        uVar110 = 0;
        do {
          if (local_58 == 1 && 7 < (uint)local_54) {
            if ((uint)local_54 < 0x10) {
              uVar103 = 0;
LAB_0032fa65:
              lVar106 = local_40 + uVar103;
              lVar107 = uVar103 * lVar109;
              pauVar104 = pauVar111;
              do {
                uVar103 = *(ulong *)(*pauVar104 + lVar107);
                auVar22._8_6_ = 0;
                auVar22._0_8_ = uVar103;
                auVar22[0xe] = (char)(uVar103 >> 0x38);
                auVar28._8_4_ = 0;
                auVar28._0_8_ = uVar103;
                auVar28[0xc] = (char)(uVar103 >> 0x30);
                auVar28._13_2_ = auVar22._13_2_;
                auVar34._8_4_ = 0;
                auVar34._0_8_ = uVar103;
                auVar34._12_3_ = auVar28._12_3_;
                auVar40._8_2_ = 0;
                auVar40._0_8_ = uVar103;
                auVar40[10] = (char)(uVar103 >> 0x28);
                auVar40._11_4_ = auVar34._11_4_;
                auVar46._8_2_ = 0;
                auVar46._0_8_ = uVar103;
                auVar46._10_5_ = auVar40._10_5_;
                auVar52[8] = (char)(uVar103 >> 0x20);
                auVar52._0_8_ = uVar103;
                auVar52._9_6_ = auVar46._9_6_;
                auVar64._7_8_ = 0;
                auVar64._0_7_ = auVar52._8_7_;
                Var65 = CONCAT81(SUB158(auVar64 << 0x40,7),(char)(uVar103 >> 0x18));
                auVar66._9_6_ = 0;
                auVar66._0_9_ = Var65;
                auVar67._1_10_ = SUB1510(auVar66 << 0x30,5);
                auVar67[0] = (char)(uVar103 >> 0x10);
                auVar68._11_4_ = 0;
                auVar68._0_11_ = auVar67;
                auVar58[2] = (char)(uVar103 >> 8);
                auVar58._0_2_ = (ushort)uVar103;
                auVar58._3_12_ = SUB1512(auVar68 << 0x20,3);
                uVar2 = *(ulong *)(pauVar104[-1] + lVar107 + 0xf);
                auVar23._8_6_ = 0;
                auVar23._0_8_ = uVar2;
                auVar23[0xe] = (char)(uVar2 >> 0x38);
                auVar29._8_4_ = 0;
                auVar29._0_8_ = uVar2;
                auVar29[0xc] = (char)(uVar2 >> 0x30);
                auVar29._13_2_ = auVar23._13_2_;
                auVar35._8_4_ = 0;
                auVar35._0_8_ = uVar2;
                auVar35._12_3_ = auVar29._12_3_;
                auVar41._8_2_ = 0;
                auVar41._0_8_ = uVar2;
                auVar41[10] = (char)(uVar2 >> 0x28);
                auVar41._11_4_ = auVar35._11_4_;
                auVar47._8_2_ = 0;
                auVar47._0_8_ = uVar2;
                auVar47._10_5_ = auVar41._10_5_;
                auVar53[8] = (char)(uVar2 >> 0x20);
                auVar53._0_8_ = uVar2;
                auVar53._9_6_ = auVar47._9_6_;
                auVar69._7_8_ = 0;
                auVar69._0_7_ = auVar53._8_7_;
                Var70 = CONCAT81(SUB158(auVar69 << 0x40,7),(char)(uVar2 >> 0x18));
                auVar71._9_6_ = 0;
                auVar71._0_9_ = Var70;
                auVar72._1_10_ = SUB1510(auVar71 << 0x30,5);
                auVar72[0] = (char)(uVar2 >> 0x10);
                auVar73._11_4_ = 0;
                auVar73._0_11_ = auVar72;
                auVar59[2] = (char)(uVar2 >> 8);
                auVar59._0_2_ = (ushort)uVar2;
                auVar59._3_12_ = SUB1512(auVar73 << 0x20,3);
                uVar3 = *(ulong *)(pauVar104[-1] + lVar107 + 0xe);
                auVar24._8_6_ = 0;
                auVar24._0_8_ = uVar3;
                auVar24[0xe] = (char)(uVar3 >> 0x38);
                auVar30._8_4_ = 0;
                auVar30._0_8_ = uVar3;
                auVar30[0xc] = (char)(uVar3 >> 0x30);
                auVar30._13_2_ = auVar24._13_2_;
                auVar36._8_4_ = 0;
                auVar36._0_8_ = uVar3;
                auVar36._12_3_ = auVar30._12_3_;
                auVar42._8_2_ = 0;
                auVar42._0_8_ = uVar3;
                auVar42[10] = (char)(uVar3 >> 0x28);
                auVar42._11_4_ = auVar36._11_4_;
                auVar48._8_2_ = 0;
                auVar48._0_8_ = uVar3;
                auVar48._10_5_ = auVar42._10_5_;
                auVar54[8] = (char)(uVar3 >> 0x20);
                auVar54._0_8_ = uVar3;
                auVar54._9_6_ = auVar48._9_6_;
                auVar74._7_8_ = 0;
                auVar74._0_7_ = auVar54._8_7_;
                Var75 = CONCAT81(SUB158(auVar74 << 0x40,7),(char)(uVar3 >> 0x18));
                auVar76._9_6_ = 0;
                auVar76._0_9_ = Var75;
                auVar77._1_10_ = SUB1510(auVar76 << 0x30,5);
                auVar77[0] = (char)(uVar3 >> 0x10);
                auVar78._11_4_ = 0;
                auVar78._0_11_ = auVar77;
                auVar60[2] = (char)(uVar3 >> 8);
                auVar60._0_2_ = (ushort)uVar3;
                auVar60._3_12_ = SUB1512(auVar78 << 0x20,3);
                auVar114._0_2_ =
                     ((ushort)uVar3 & 0xff) + ((ushort)uVar2 & 0xff) + ((ushort)uVar103 & 0xff);
                auVar114._2_2_ = auVar60._2_2_ + auVar59._2_2_ + auVar58._2_2_;
                auVar114._4_2_ = auVar77._0_2_ + auVar72._0_2_ + auVar67._0_2_;
                auVar114._6_2_ = (short)Var75 + (short)Var70 + (short)Var65;
                auVar114._8_2_ = auVar54._8_2_ + auVar53._8_2_ + auVar52._8_2_;
                auVar114._10_2_ = auVar42._10_2_ + auVar41._10_2_ + auVar40._10_2_;
                auVar114._12_2_ = auVar30._12_2_ + auVar29._12_2_ + auVar28._12_2_;
                auVar114._14_2_ =
                     (auVar24._13_2_ >> 8) + (auVar23._13_2_ >> 8) + (auVar22._13_2_ >> 8);
                auVar114 = pmulhuw(auVar114,auVar92);
                uVar112 = auVar114._0_2_ >> 1 & uVar93;
                uVar116 = auVar114._2_2_ >> 1 & uVar94;
                uVar117 = auVar114._4_2_ >> 1 & uVar95;
                uVar118 = auVar114._6_2_ >> 1 & uVar96;
                uVar119 = auVar114._8_2_ >> 1 & uVar97;
                uVar120 = auVar114._10_2_ >> 1 & uVar98;
                uVar121 = auVar114._12_2_ >> 1 & uVar99;
                uVar122 = auVar114._14_2_ >> 1 & uVar100;
                uVar113 = CONCAT17((uVar122 != 0) * (uVar122 < 0x100) * (char)uVar122 -
                                   (0xff < uVar122),
                                   CONCAT16((uVar121 != 0) * (uVar121 < 0x100) * (char)uVar121 -
                                            (0xff < uVar121),
                                            CONCAT15((uVar120 != 0) * (uVar120 < 0x100) *
                                                     (char)uVar120 - (0xff < uVar120),
                                                     CONCAT14((uVar119 != 0) * (uVar119 < 0x100) *
                                                              (char)uVar119 - (0xff < uVar119),
                                                              CONCAT13((uVar118 != 0) *
                                                                       (uVar118 < 0x100) *
                                                                       (char)uVar118 -
                                                                       (0xff < uVar118),
                                                                       CONCAT12((uVar117 != 0) *
                                                                                (uVar117 < 0x100) *
                                                                                (char)uVar117 -
                                                                                (0xff < uVar117),
                                                                                CONCAT11((uVar116 !=
                                                                                         0) * (
                                                  uVar116 < 0x100) * (char)uVar116 -
                                                  (0xff < uVar116),
                                                  (uVar112 != 0) * (uVar112 < 0x100) * (char)uVar112
                                                  - (0xff < uVar112))))))));
                *(undefined8 *)(pauVar104[-1] + lVar107 + 0xe) = uVar113;
                *(undefined8 *)(pauVar104[-1] + lVar107 + 0xf) = uVar113;
                *(undefined8 *)(*pauVar104 + lVar107) = uVar113;
                pauVar104 = (undefined1 (*) [16])(*pauVar104 + lVar109 * 8);
                lVar106 = lVar106 + 8;
              } while (lVar106 != 0);
              uVar103 = local_38;
              if (local_38 != uVar101) goto LAB_0032faf2;
            }
            else {
              uVar103 = uVar102;
              pauVar104 = pauVar111;
              do {
                auVar114 = *(undefined1 (*) [16])(pauVar104[-1] + 0xe);
                auVar125 = *(undefined1 (*) [16])(pauVar104[-1] + 0xf);
                auVar4 = *pauVar104;
                auVar25[0xd] = 0;
                auVar25._0_13_ = auVar4._0_13_;
                auVar25[0xe] = auVar4[7];
                auVar31[0xc] = auVar4[6];
                auVar31._0_12_ = auVar4._0_12_;
                auVar31._13_2_ = auVar25._13_2_;
                auVar37[0xb] = 0;
                auVar37._0_11_ = auVar4._0_11_;
                auVar37._12_3_ = auVar31._12_3_;
                auVar43[10] = auVar4[5];
                auVar43._0_10_ = auVar4._0_10_;
                auVar43._11_4_ = auVar37._11_4_;
                auVar49[9] = 0;
                auVar49._0_9_ = auVar4._0_9_;
                auVar49._10_5_ = auVar43._10_5_;
                auVar55[8] = auVar4[4];
                auVar55._0_8_ = auVar4._0_8_;
                auVar55._9_6_ = auVar49._9_6_;
                auVar79._7_8_ = 0;
                auVar79._0_7_ = auVar55._8_7_;
                Var65 = CONCAT81(SUB158(auVar79 << 0x40,7),auVar4[3]);
                auVar80._9_6_ = 0;
                auVar80._0_9_ = Var65;
                auVar81._1_10_ = SUB1510(auVar80 << 0x30,5);
                auVar81[0] = auVar4[2];
                auVar82._11_4_ = 0;
                auVar82._0_11_ = auVar81;
                auVar61[2] = auVar4[1];
                auVar61._0_2_ = auVar4._0_2_;
                auVar61._3_12_ = SUB1512(auVar82 << 0x20,3);
                auVar26[0xd] = 0;
                auVar26._0_13_ = auVar125._0_13_;
                auVar26[0xe] = auVar125[7];
                auVar32[0xc] = auVar125[6];
                auVar32._0_12_ = auVar125._0_12_;
                auVar32._13_2_ = auVar26._13_2_;
                auVar38[0xb] = 0;
                auVar38._0_11_ = auVar125._0_11_;
                auVar38._12_3_ = auVar32._12_3_;
                auVar44[10] = auVar125[5];
                auVar44._0_10_ = auVar125._0_10_;
                auVar44._11_4_ = auVar38._11_4_;
                auVar50[9] = 0;
                auVar50._0_9_ = auVar125._0_9_;
                auVar50._10_5_ = auVar44._10_5_;
                auVar56[8] = auVar125[4];
                auVar56._0_8_ = auVar125._0_8_;
                auVar56._9_6_ = auVar50._9_6_;
                auVar83._7_8_ = 0;
                auVar83._0_7_ = auVar56._8_7_;
                Var70 = CONCAT81(SUB158(auVar83 << 0x40,7),auVar125[3]);
                auVar84._9_6_ = 0;
                auVar84._0_9_ = Var70;
                auVar85._1_10_ = SUB1510(auVar84 << 0x30,5);
                auVar85[0] = auVar125[2];
                auVar86._11_4_ = 0;
                auVar86._0_11_ = auVar85;
                auVar62[2] = auVar125[1];
                auVar62._0_2_ = auVar125._0_2_;
                auVar62._3_12_ = SUB1512(auVar86 << 0x20,3);
                auVar27[0xd] = 0;
                auVar27._0_13_ = auVar114._0_13_;
                auVar27[0xe] = auVar114[7];
                auVar33[0xc] = auVar114[6];
                auVar33._0_12_ = auVar114._0_12_;
                auVar33._13_2_ = auVar27._13_2_;
                auVar39[0xb] = 0;
                auVar39._0_11_ = auVar114._0_11_;
                auVar39._12_3_ = auVar33._12_3_;
                auVar45[10] = auVar114[5];
                auVar45._0_10_ = auVar114._0_10_;
                auVar45._11_4_ = auVar39._11_4_;
                auVar51[9] = 0;
                auVar51._0_9_ = auVar114._0_9_;
                auVar51._10_5_ = auVar45._10_5_;
                auVar57[8] = auVar114[4];
                auVar57._0_8_ = auVar114._0_8_;
                auVar57._9_6_ = auVar51._9_6_;
                auVar87._7_8_ = 0;
                auVar87._0_7_ = auVar57._8_7_;
                Var75 = CONCAT81(SUB158(auVar87 << 0x40,7),auVar114[3]);
                auVar88._9_6_ = 0;
                auVar88._0_9_ = Var75;
                auVar89._1_10_ = SUB1510(auVar88 << 0x30,5);
                auVar89[0] = auVar114[2];
                auVar90._11_4_ = 0;
                auVar90._0_11_ = auVar89;
                auVar63[2] = auVar114[1];
                auVar63._0_2_ = auVar114._0_2_;
                auVar63._3_12_ = SUB1512(auVar90 << 0x20,3);
                auVar124._0_2_ =
                     (auVar114._0_2_ & 0xff) + (auVar125._0_2_ & 0xff) + (auVar4._0_2_ & 0xff);
                auVar124._2_2_ = auVar63._2_2_ + auVar62._2_2_ + auVar61._2_2_;
                auVar124._4_2_ = auVar89._0_2_ + auVar85._0_2_ + auVar81._0_2_;
                auVar124._6_2_ = (short)Var75 + (short)Var70 + (short)Var65;
                auVar124._8_2_ = auVar57._8_2_ + auVar56._8_2_ + auVar55._8_2_;
                auVar124._10_2_ = auVar45._10_2_ + auVar44._10_2_ + auVar43._10_2_;
                auVar124._12_2_ = auVar33._12_2_ + auVar32._12_2_ + auVar31._12_2_;
                auVar124._14_2_ =
                     (auVar27._13_2_ >> 8) + (auVar26._13_2_ >> 8) + (auVar25._13_2_ >> 8);
                auVar115._0_2_ = (ushort)auVar114[8] + (ushort)auVar125[8] + (ushort)auVar4[8];
                auVar115._2_2_ = (ushort)auVar114[9] + (ushort)auVar125[9] + (ushort)auVar4[9];
                auVar115._4_2_ = (ushort)auVar114[10] + (ushort)auVar125[10] + (ushort)auVar4[10];
                auVar115._6_2_ = (ushort)auVar114[0xb] + (ushort)auVar125[0xb] + (ushort)auVar4[0xb]
                ;
                auVar115._8_2_ = (ushort)auVar114[0xc] + (ushort)auVar125[0xc] + (ushort)auVar4[0xc]
                ;
                auVar115._10_2_ =
                     (ushort)auVar114[0xd] + (ushort)auVar125[0xd] + (ushort)auVar4[0xd];
                auVar115._12_2_ =
                     (ushort)auVar114[0xe] + (ushort)auVar125[0xe] + (ushort)auVar4[0xe];
                auVar115._14_2_ =
                     (ushort)auVar114[0xf] + (ushort)auVar125[0xf] + (ushort)auVar4[0xf];
                auVar125 = pmulhuw(auVar124,auVar92);
                auVar114 = pmulhuw(auVar115,auVar92);
                uVar112 = auVar114._0_2_ >> 1 & uVar93;
                uVar116 = auVar114._2_2_ >> 1 & uVar94;
                uVar117 = auVar114._4_2_ >> 1 & uVar95;
                uVar118 = auVar114._6_2_ >> 1 & uVar96;
                uVar119 = auVar114._8_2_ >> 1 & uVar97;
                uVar120 = auVar114._10_2_ >> 1 & uVar98;
                uVar121 = auVar114._12_2_ >> 1 & uVar99;
                uVar122 = auVar114._14_2_ >> 1 & uVar100;
                uVar123 = auVar125._0_2_ >> 1 & uVar93;
                uVar126 = auVar125._2_2_ >> 1 & uVar94;
                uVar127 = auVar125._4_2_ >> 1 & uVar95;
                uVar128 = auVar125._6_2_ >> 1 & uVar96;
                uVar129 = auVar125._8_2_ >> 1 & uVar97;
                uVar130 = auVar125._10_2_ >> 1 & uVar98;
                uVar131 = auVar125._12_2_ >> 1 & uVar99;
                uVar132 = auVar125._14_2_ >> 1 & uVar100;
                cVar6 = (uVar123 != 0) * (uVar123 < 0x100) * (char)uVar123 - (0xff < uVar123);
                cVar7 = (uVar126 != 0) * (uVar126 < 0x100) * (char)uVar126 - (0xff < uVar126);
                cVar8 = (uVar127 != 0) * (uVar127 < 0x100) * (char)uVar127 - (0xff < uVar127);
                cVar9 = (uVar128 != 0) * (uVar128 < 0x100) * (char)uVar128 - (0xff < uVar128);
                cVar10 = (uVar129 != 0) * (uVar129 < 0x100) * (char)uVar129 - (0xff < uVar129);
                cVar11 = (uVar130 != 0) * (uVar130 < 0x100) * (char)uVar130 - (0xff < uVar130);
                cVar12 = (uVar131 != 0) * (uVar131 < 0x100) * (char)uVar131 - (0xff < uVar131);
                cVar13 = (uVar132 != 0) * (uVar132 < 0x100) * (char)uVar132 - (0xff < uVar132);
                cVar14 = (uVar112 != 0) * (uVar112 < 0x100) * (char)uVar112 - (0xff < uVar112);
                cVar15 = (uVar116 != 0) * (uVar116 < 0x100) * (char)uVar116 - (0xff < uVar116);
                cVar16 = (uVar117 != 0) * (uVar117 < 0x100) * (char)uVar117 - (0xff < uVar117);
                cVar17 = (uVar118 != 0) * (uVar118 < 0x100) * (char)uVar118 - (0xff < uVar118);
                cVar18 = (uVar119 != 0) * (uVar119 < 0x100) * (char)uVar119 - (0xff < uVar119);
                cVar19 = (uVar120 != 0) * (uVar120 < 0x100) * (char)uVar120 - (0xff < uVar120);
                cVar20 = (uVar121 != 0) * (uVar121 < 0x100) * (char)uVar121 - (0xff < uVar121);
                cVar21 = (uVar122 != 0) * (uVar122 < 0x100) * (char)uVar122 - (0xff < uVar122);
                pauVar104[-1][0xe] = cVar6;
                pauVar104[-1][0xf] = cVar7;
                (*pauVar104)[0] = cVar8;
                (*pauVar104)[1] = cVar9;
                (*pauVar104)[2] = cVar10;
                (*pauVar104)[3] = cVar11;
                (*pauVar104)[4] = cVar12;
                (*pauVar104)[5] = cVar13;
                (*pauVar104)[6] = cVar14;
                (*pauVar104)[7] = cVar15;
                (*pauVar104)[8] = cVar16;
                (*pauVar104)[9] = cVar17;
                (*pauVar104)[10] = cVar18;
                (*pauVar104)[0xb] = cVar19;
                (*pauVar104)[0xc] = cVar20;
                (*pauVar104)[0xd] = cVar21;
                pauVar104[-1][0xf] = cVar6;
                (*pauVar104)[0] = cVar7;
                (*pauVar104)[1] = cVar8;
                (*pauVar104)[2] = cVar9;
                (*pauVar104)[3] = cVar10;
                (*pauVar104)[4] = cVar11;
                (*pauVar104)[5] = cVar12;
                (*pauVar104)[6] = cVar13;
                (*pauVar104)[7] = cVar14;
                (*pauVar104)[8] = cVar15;
                (*pauVar104)[9] = cVar16;
                (*pauVar104)[10] = cVar17;
                (*pauVar104)[0xb] = cVar18;
                (*pauVar104)[0xc] = cVar19;
                (*pauVar104)[0xd] = cVar20;
                (*pauVar104)[0xe] = cVar21;
                (*pauVar104)[0] = cVar6;
                (*pauVar104)[1] = cVar7;
                (*pauVar104)[2] = cVar8;
                (*pauVar104)[3] = cVar9;
                (*pauVar104)[4] = cVar10;
                (*pauVar104)[5] = cVar11;
                (*pauVar104)[6] = cVar12;
                (*pauVar104)[7] = cVar13;
                (*pauVar104)[8] = cVar14;
                (*pauVar104)[9] = cVar15;
                (*pauVar104)[10] = cVar16;
                (*pauVar104)[0xb] = cVar17;
                (*pauVar104)[0xc] = cVar18;
                (*pauVar104)[0xd] = cVar19;
                (*pauVar104)[0xe] = cVar20;
                (*pauVar104)[0xf] = cVar21;
                pauVar104 = pauVar104 + lVar109;
                uVar103 = uVar103 - 0x10;
              } while (uVar103 != 0);
              if (uVar102 != uVar101) {
                uVar103 = uVar102;
                if ((uVar91 & 8) == 0) goto LAB_0032faf2;
                goto LAB_0032fa65;
              }
            }
          }
          else {
            uVar103 = 0;
LAB_0032faf2:
            lVar107 = uVar101 - uVar103;
            lVar106 = uVar103 * lVar109;
            pauVar104 = pauVar111;
            do {
              uVar105 = (undefined1)
                        (((uint)(byte)pauVar104[-1][lVar106 + 0xe] +
                         (uint)(byte)pauVar104[-1][lVar106 + 0xf] +
                         (uint)(byte)(*pauVar104)[lVar106]) / 3);
              pauVar104[-1][lVar106 + 0xe] = uVar105;
              pauVar104[-1][lVar106 + 0xf] = uVar105;
              (*pauVar104)[lVar106] = uVar105;
              pauVar104 = (undefined1 (*) [16])(*pauVar104 + lVar109);
              lVar107 = lVar107 + -1;
            } while (lVar107 != 0);
          }
          uVar110 = uVar110 + 1;
          pauVar111 = (undefined1 (*) [16])(*pauVar111 + local_5c);
        } while (uVar110 != local_54._4_4_);
      }
    }
    else if (((local_60 == 2) && (0xffffffff < (long)uVar91)) &&
            (uVar101 = uVar91 & 0xffffffff, 0 < (int)(uint)local_54)) {
      lVar109 = 0;
      do {
        if (0 < (int)uVar101) {
          lVar107 = 0;
          do {
            lVar108 = local_5c * lVar109 + local_70[0];
            lVar106 = local_58 * lVar107;
            bVar5 = *(byte *)(lVar106 + 3 + lVar108);
            if ((byte)(bVar5 + 1) < 2) {
              uVar105 = (undefined1)
                        (((uint)*(byte *)(lVar108 + lVar106) +
                         (uint)*(byte *)(lVar108 + 1 + lVar106) +
                         (uint)*(byte *)(lVar108 + 2 + lVar106)) / 3);
            }
            else {
              uVar105 = (undefined1)
                        (((((uint)*(byte *)(lVar108 + lVar106) +
                           (uint)*(byte *)(lVar108 + 1 + lVar106) +
                           (uint)*(byte *)(lVar108 + 2 + lVar106)) * 0xff) / ((uint)bVar5 * 3)) *
                         (uint)bVar5 + 0x7f >> 8);
            }
            *(undefined1 *)(lVar108 + lVar106) = uVar105;
            *(undefined1 *)(lVar108 + 1 + lVar106) = uVar105;
            *(undefined1 *)(lVar108 + 2 + lVar106) = uVar105;
            lVar107 = lVar107 + 1;
            uVar101 = (ulong)(int)(uint)local_54;
          } while (lVar107 < (long)uVar101);
        }
        lVar109 = lVar109 + 1;
      } while (lVar109 < (int)local_54._4_4_);
    }
    if (local_48 != (long *)0x0) {
      local_54 = uVar91;
      (**(code **)(*local_48 + 8))();
    }
  }
  return;
}


