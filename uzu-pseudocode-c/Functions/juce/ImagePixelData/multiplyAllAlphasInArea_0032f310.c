// Function : multiplyAllAlphasInArea
// Namespace: juce:ImagePixelData
// Entry    : 0032f310
// Prototype: undefined multiplyAllAlphasInArea(float param_1, long * param_2, ulong param_3, undefined8 param_4)
// Body     : 0032f310 - 0032f819


/* WARNING: Removing unreachable block (ram,0x0032f7f6) */
/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::ImagePixelData::multiplyAllAlphasInArea(juce::Rectangle<int>, float) */

void __cdecl
juce::ImagePixelData::multiplyAllAlphasInArea
          (float param_1,long *param_2,ulong param_3,ulong param_4)

{
  long *plVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  short sVar9;
  short sVar10;
  short sVar11;
  short sVar12;
  short sVar13;
  short sVar14;
  short sVar15;
  short sVar16;
  short sVar17;
  undefined1 auVar18 [15];
  undefined1 auVar19 [14];
  undefined1 auVar20 [15];
  undefined1 auVar21 [14];
  undefined1 auVar22 [15];
  undefined1 auVar23 [14];
  undefined1 auVar24 [15];
  undefined1 auVar25 [14];
  undefined1 auVar26 [15];
  undefined1 auVar27 [15];
  undefined1 auVar28 [15];
  undefined1 auVar29 [15];
  undefined1 auVar30 [15];
  undefined1 auVar31 [15];
  undefined1 auVar32 [15];
  undefined1 auVar33 [15];
  uint uVar34;
  undefined1 auVar35 [15];
  undefined1 auVar36 [14];
  undefined1 auVar37 [13];
  undefined1 auVar38 [13];
  undefined1 auVar39 [13];
  undefined1 auVar40 [15];
  undefined1 auVar41 [14];
  undefined1 auVar42 [13];
  undefined1 auVar43 [13];
  undefined1 auVar44 [13];
  undefined1 auVar45 [15];
  undefined1 auVar46 [14];
  undefined1 auVar47 [13];
  undefined1 auVar48 [13];
  undefined1 auVar49 [13];
  undefined1 auVar50 [15];
  undefined1 auVar51 [14];
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
  undefined1 auVar65 [15];
  undefined1 auVar66 [15];
  undefined1 auVar67 [15];
  undefined1 auVar68 [15];
  unkuint9 Var69;
  undefined1 auVar70 [15];
  undefined1 auVar71 [11];
  undefined1 auVar72 [15];
  undefined1 auVar73 [14];
  undefined1 auVar74 [13];
  undefined1 auVar75 [15];
  undefined1 auVar76 [15];
  undefined1 auVar77 [11];
  undefined1 auVar78 [15];
  undefined1 auVar79 [14];
  undefined1 auVar80 [13];
  undefined1 auVar81 [15];
  undefined1 auVar82 [15];
  undefined1 auVar83 [11];
  undefined1 auVar84 [15];
  undefined1 auVar85 [14];
  undefined1 auVar86 [13];
  undefined1 auVar87 [15];
  undefined1 auVar88 [15];
  undefined1 auVar89 [11];
  undefined1 auVar90 [15];
  undefined1 auVar91 [14];
  ulong uVar92;
  uint6 uVar93;
  int iVar94;
  long lVar95;
  long lVar96;
  undefined1 (*pauVar97) [16];
  ulong uVar98;
  ulong *puVar99;
  ulong uVar100;
  ulong uVar101;
  long lVar102;
  undefined1 (*pauVar103) [16];
  ulong uVar104;
  undefined1 auVar105 [16];
  undefined1 auVar106 [16];
  undefined1 auVar107 [16];
  undefined1 auVar108 [16];
  undefined1 auVar109 [16];
  uint uVar110;
  undefined1 auVar111 [16];
  undefined1 auVar112 [16];
  undefined1 auVar113 [16];
  undefined1 auVar114 [16];
  undefined1 auVar115 [16];
  undefined1 auVar116 [16];
  undefined1 auVar117 [16];
  undefined1 auVar118 [16];
  undefined1 auVar119 [16];
  undefined1 auVar120 [16];
  undefined1 auVar121 [16];
  undefined1 (*local_b8 [2]) [16];
  int local_a8;
  int local_a4;
  int local_a0;
  undefined8 local_9c;
  long *local_90;
  ulong local_88;
  ulong local_80;
  ulong local_78;
  ulong local_70;
  long local_68;
  ulong local_60;
  ulong local_58;
  long local_50;
  float local_48;
  
  if ((*(uint *)((long)param_2 + 0xc) & 0xfffffffe) == 2) {
    LOCK();
    *(int *)(param_2 + 1) = (int)param_2[1] + 1;
    UNLOCK();
    local_90 = (long *)0x0;
                    /* try { // try from 0032f365 to 0032f374 has its CatchHandler @ 0032f81a */
    local_48 = param_1;
    local_9c = param_4;
    (**(code **)(*param_2 + 0x38))(param_2,local_b8,param_3 & 0xffffffff,param_3 >> 0x20,2);
    LOCK();
    plVar1 = param_2 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    uVar92 = local_9c;
    if ((int)*plVar1 == 0) {
      (**(code **)(*param_2 + 8))(param_2);
      uVar92 = local_9c;
    }
    local_9c._4_4_ = (uint)(uVar92 >> 0x20);
    local_9c._0_4_ = (uint)uVar92;
    if (local_a8 == 3) {
      if ((0xffffffff < (long)uVar92) && (uVar98 = uVar92 & 0xffffffff, 0 < (int)(uint)local_9c)) {
        local_50 = (long)local_a4;
        lVar96 = (long)local_a0;
        local_88 = (ulong)((uint)local_9c & 0xfffffff0);
        local_70 = local_88 - 0x10;
        local_78 = (local_70 >> 4) + 1;
        local_80 = local_78 & 0xfffffffffffffffe;
        local_60 = (ulong)((uint)local_9c & 0xfffffff8);
        local_58 = -uVar98;
        local_68 = -local_60;
        uVar101 = 0;
        pauVar103 = local_b8[0];
        do {
          lVar102 = uVar101 * local_50;
          if (local_a0 == 1 && 7 < (uint)local_9c) {
            if ((uint)local_9c < 0x10) {
              uVar104 = 0;
LAB_0032f542:
              lVar95 = local_68 + uVar104;
              puVar99 = (ulong *)(*pauVar103 + uVar104 * lVar96);
              do {
                uVar104 = *puVar99;
                auVar18._8_6_ = 0;
                auVar18._0_8_ = uVar104;
                auVar18[0xe] = (char)(uVar104 >> 0x38);
                auVar26._8_4_ = 0;
                auVar26._0_8_ = uVar104;
                auVar26[0xc] = (char)(uVar104 >> 0x30);
                auVar26._13_2_ = auVar18._13_2_;
                auVar30._8_4_ = 0;
                auVar30._0_8_ = uVar104;
                auVar30._12_3_ = auVar26._12_3_;
                uVar34 = auVar30._11_4_;
                auVar35._8_2_ = 0;
                auVar35._0_8_ = uVar104;
                auVar35[10] = (char)(uVar104 >> 0x28);
                auVar35._11_4_ = uVar34;
                auVar52._8_2_ = 0;
                auVar52._0_8_ = uVar104;
                auVar52._10_5_ = auVar35._10_5_;
                auVar56[8] = (char)(uVar104 >> 0x20);
                auVar56._0_8_ = uVar104;
                auVar56._9_6_ = auVar52._9_6_;
                auVar68._7_8_ = 0;
                auVar68._0_7_ = auVar56._8_7_;
                Var69 = CONCAT81(SUB158(auVar68 << 0x40,7),(char)(uVar104 >> 0x18));
                auVar70._9_6_ = 0;
                auVar70._0_9_ = Var69;
                auVar71._1_10_ = SUB1510(auVar70 << 0x30,5);
                auVar71[0] = (char)(uVar104 >> 0x10);
                auVar72._11_4_ = 0;
                auVar72._0_11_ = auVar71;
                auVar60[2] = (char)(uVar104 >> 8);
                auVar60._0_2_ = (ushort)uVar104;
                auVar60._3_12_ = SUB1512(auVar72 << 0x20,3);
                auVar64._2_13_ = auVar60._2_13_;
                auVar64._0_2_ = (ushort)uVar104 & 0xff;
                auVar19._10_2_ = 0;
                auVar19._0_10_ = auVar64._0_10_;
                auVar19._12_2_ = (short)Var69;
                uVar93 = CONCAT42(auVar19._10_4_,auVar71._0_2_);
                auVar73._6_8_ = 0;
                auVar73._0_6_ = uVar93;
                auVar36._4_2_ = auVar60._2_2_;
                auVar36._0_4_ = auVar64._0_4_;
                auVar36._6_8_ = SUB148(auVar73 << 0x40,6);
                auVar111._0_4_ = (int)((float)auVar56._8_2_ * local_48);
                auVar111._4_4_ = (int)((float)auVar35._10_2_ * local_48);
                auVar111._8_4_ = (int)((float)(uVar34 >> 8 & 0xffff) * local_48);
                auVar111._12_4_ = (int)((float)(uVar34 >> 0x18) * local_48);
                auVar105._0_4_ = (int)((float)(auVar64._0_4_ & 0xffff) * local_48);
                auVar105._4_4_ = (int)((float)auVar36._4_4_ * local_48);
                auVar105._8_4_ = (int)((float)(int)uVar93 * local_48);
                auVar105._12_4_ = (int)((float)(auVar19._10_4_ >> 0x10) * local_48);
                auVar106 = packssdw(auVar105,auVar111);
                sVar2 = auVar106._0_2_;
                sVar3 = auVar106._2_2_;
                sVar4 = auVar106._4_2_;
                sVar5 = auVar106._6_2_;
                sVar6 = auVar106._8_2_;
                sVar7 = auVar106._10_2_;
                sVar8 = auVar106._12_2_;
                sVar9 = auVar106._14_2_;
                *puVar99 = CONCAT17((0 < sVar9) * (sVar9 < 0x100) * auVar106[0xe] - (0xff < sVar9),
                                    CONCAT16((0 < sVar8) * (sVar8 < 0x100) * auVar106[0xc] -
                                             (0xff < sVar8),
                                             CONCAT15((0 < sVar7) * (sVar7 < 0x100) * auVar106[10] -
                                                      (0xff < sVar7),
                                                      CONCAT14((0 < sVar6) * (sVar6 < 0x100) *
                                                               auVar106[8] - (0xff < sVar6),
                                                               CONCAT13((0 < sVar5) *
                                                                        (sVar5 < 0x100) *
                                                                        auVar106[6] - (0xff < sVar5)
                                                                        ,CONCAT12((0 < sVar4) *
                                                                                  (sVar4 < 0x100) *
                                                                                  auVar106[4] -
                                                                                  (0xff < sVar4),
                                                                                  CONCAT11((0 < 
                                                  sVar3) * (sVar3 < 0x100) * auVar106[2] -
                                                  (0xff < sVar3),
                                                  (0 < sVar2) * (sVar2 < 0x100) * auVar106[0] -
                                                  (0xff < sVar2))))))));
                puVar99 = puVar99 + lVar96;
                lVar95 = lVar95 + 8;
              } while (lVar95 != 0);
              uVar104 = local_60;
              if (local_60 != uVar98) goto LAB_0032f5b2;
            }
            else {
              if (local_70 == 0) {
                lVar95 = 0;
LAB_0032f753:
                auVar106 = *(undefined1 (*) [16])(*local_b8[0] + lVar95 * lVar96 + lVar102);
                uVar110 = CONCAT13(0,CONCAT12(auVar106[9],(ushort)auVar106[8]));
                auVar47[0xc] = auVar106[0xb];
                auVar47._0_12_ = ZEXT112(auVar106[0xc]) << 0x40;
                auVar48._10_3_ = auVar47._10_3_;
                auVar48._0_10_ = (unkuint10)auVar106[10] << 0x40;
                auVar86._5_8_ = 0;
                auVar86._0_5_ = auVar48._8_5_;
                auVar49[4] = auVar106[9];
                auVar49._0_4_ = uVar110;
                auVar49[5] = 0;
                auVar49._6_7_ = SUB137(auVar86 << 0x40,6);
                auVar24[0xd] = 0;
                auVar24._0_13_ = auVar106._0_13_;
                auVar24[0xe] = auVar106[7];
                auVar29[0xc] = auVar106[6];
                auVar29._0_12_ = auVar106._0_12_;
                auVar29._13_2_ = auVar24._13_2_;
                auVar33[0xb] = 0;
                auVar33._0_11_ = auVar106._0_11_;
                auVar33._12_3_ = auVar29._12_3_;
                uVar34 = auVar33._11_4_;
                auVar50[10] = auVar106[5];
                auVar50._0_10_ = auVar106._0_10_;
                auVar50._11_4_ = uVar34;
                auVar55[9] = 0;
                auVar55._0_9_ = auVar106._0_9_;
                auVar55._10_5_ = auVar50._10_5_;
                auVar59[8] = auVar106[4];
                auVar59._0_8_ = auVar106._0_8_;
                auVar59._9_6_ = auVar55._9_6_;
                auVar87._7_8_ = 0;
                auVar87._0_7_ = auVar59._8_7_;
                Var69 = CONCAT81(SUB158(auVar87 << 0x40,7),auVar106[3]);
                auVar88._9_6_ = 0;
                auVar88._0_9_ = Var69;
                auVar89._1_10_ = SUB1510(auVar88 << 0x30,5);
                auVar89[0] = auVar106[2];
                auVar90._11_4_ = 0;
                auVar90._0_11_ = auVar89;
                auVar63[2] = auVar106[1];
                auVar63._0_2_ = auVar106._0_2_;
                auVar63._3_12_ = SUB1512(auVar90 << 0x20,3);
                auVar67._2_13_ = auVar63._2_13_;
                auVar67._0_2_ = auVar106._0_2_ & 0xff;
                auVar25._10_2_ = 0;
                auVar25._0_10_ = auVar67._0_10_;
                auVar25._12_2_ = (short)Var69;
                uVar93 = CONCAT42(auVar25._10_4_,auVar89._0_2_);
                auVar91._6_8_ = 0;
                auVar91._0_6_ = uVar93;
                auVar51._4_2_ = auVar63._2_2_;
                auVar51._0_4_ = auVar67._0_4_;
                auVar51._6_8_ = SUB148(auVar91 << 0x40,6);
                auVar120._0_4_ = (int)((float)auVar106[0xc] * local_48);
                auVar120._4_4_ = (int)((float)auVar106[0xd] * local_48);
                auVar120._8_4_ = (int)((float)auVar106[0xe] * local_48);
                auVar120._12_4_ = (int)((float)auVar106[0xf] * local_48);
                auVar115._0_4_ = (int)((float)(uVar110 & 0xffff) * local_48);
                auVar115._4_4_ = (int)((float)auVar49._4_4_ * local_48);
                auVar115._8_4_ = (int)((float)auVar48._8_4_ * local_48);
                auVar115._12_4_ = (int)((float)(uint3)(auVar47._10_3_ >> 0x10) * local_48);
                auVar112 = packssdw(auVar115,auVar120);
                auVar121._0_4_ = (int)((float)auVar59._8_2_ * local_48);
                auVar121._4_4_ = (int)((float)auVar50._10_2_ * local_48);
                auVar121._8_4_ = (int)((float)(uVar34 >> 8 & 0xffff) * local_48);
                auVar121._12_4_ = (int)((float)(uVar34 >> 0x18) * local_48);
                auVar108._0_4_ = (int)((float)(auVar67._0_4_ & 0xffff) * local_48);
                auVar108._4_4_ = (int)((float)auVar51._4_4_ * local_48);
                auVar108._8_4_ = (int)((float)(int)uVar93 * local_48);
                auVar108._12_4_ = (int)((float)(auVar25._10_4_ >> 0x10) * local_48);
                auVar106 = packssdw(auVar108,auVar121);
                sVar2 = auVar106._0_2_;
                sVar3 = auVar106._2_2_;
                auVar109[1] = (0 < sVar3) * (sVar3 < 0x100) * auVar106[2] - (0xff < sVar3);
                auVar109[0] = (0 < sVar2) * (sVar2 < 0x100) * auVar106[0] - (0xff < sVar2);
                sVar2 = auVar106._4_2_;
                auVar109[2] = (0 < sVar2) * (sVar2 < 0x100) * auVar106[4] - (0xff < sVar2);
                sVar2 = auVar106._6_2_;
                auVar109[3] = (0 < sVar2) * (sVar2 < 0x100) * auVar106[6] - (0xff < sVar2);
                sVar2 = auVar106._8_2_;
                auVar109[4] = (0 < sVar2) * (sVar2 < 0x100) * auVar106[8] - (0xff < sVar2);
                sVar2 = auVar106._10_2_;
                auVar109[5] = (0 < sVar2) * (sVar2 < 0x100) * auVar106[10] - (0xff < sVar2);
                sVar2 = auVar106._12_2_;
                auVar109[6] = (0 < sVar2) * (sVar2 < 0x100) * auVar106[0xc] - (0xff < sVar2);
                sVar2 = auVar106._14_2_;
                auVar109[7] = (0 < sVar2) * (sVar2 < 0x100) * auVar106[0xe] - (0xff < sVar2);
                sVar2 = auVar112._0_2_;
                auVar109[8] = (0 < sVar2) * (sVar2 < 0x100) * auVar112[0] - (0xff < sVar2);
                sVar2 = auVar112._2_2_;
                auVar109[9] = (0 < sVar2) * (sVar2 < 0x100) * auVar112[2] - (0xff < sVar2);
                sVar2 = auVar112._4_2_;
                auVar109[10] = (0 < sVar2) * (sVar2 < 0x100) * auVar112[4] - (0xff < sVar2);
                sVar2 = auVar112._6_2_;
                auVar109[0xb] = (0 < sVar2) * (sVar2 < 0x100) * auVar112[6] - (0xff < sVar2);
                sVar2 = auVar112._8_2_;
                auVar109[0xc] = (0 < sVar2) * (sVar2 < 0x100) * auVar112[8] - (0xff < sVar2);
                sVar2 = auVar112._10_2_;
                auVar109[0xd] = (0 < sVar2) * (sVar2 < 0x100) * auVar112[10] - (0xff < sVar2);
                sVar2 = auVar112._12_2_;
                auVar109[0xe] = (0 < sVar2) * (sVar2 < 0x100) * auVar112[0xc] - (0xff < sVar2);
                sVar2 = auVar112._14_2_;
                auVar109[0xf] = (0 < sVar2) * (sVar2 < 0x100) * auVar112[0xe] - (0xff < sVar2);
                *(undefined1 (*) [16])(*local_b8[0] + lVar95 * lVar96 + lVar102) = auVar109;
              }
              else {
                lVar95 = 0;
                pauVar97 = pauVar103;
                uVar104 = local_80;
                do {
                  auVar106 = *pauVar97;
                  uVar110 = CONCAT13(0,CONCAT12(auVar106[9],(ushort)auVar106[8]));
                  auVar37[0xc] = auVar106[0xb];
                  auVar37._0_12_ = ZEXT112(auVar106[0xc]) << 0x40;
                  auVar38._10_3_ = auVar37._10_3_;
                  auVar38._0_10_ = (unkuint10)auVar106[10] << 0x40;
                  auVar74._5_8_ = 0;
                  auVar74._0_5_ = auVar38._8_5_;
                  auVar39[4] = auVar106[9];
                  auVar39._0_4_ = uVar110;
                  auVar39[5] = 0;
                  auVar39._6_7_ = SUB137(auVar74 << 0x40,6);
                  auVar20[0xd] = 0;
                  auVar20._0_13_ = auVar106._0_13_;
                  auVar20[0xe] = auVar106[7];
                  auVar27[0xc] = auVar106[6];
                  auVar27._0_12_ = auVar106._0_12_;
                  auVar27._13_2_ = auVar20._13_2_;
                  auVar31[0xb] = 0;
                  auVar31._0_11_ = auVar106._0_11_;
                  auVar31._12_3_ = auVar27._12_3_;
                  uVar34 = auVar31._11_4_;
                  auVar40[10] = auVar106[5];
                  auVar40._0_10_ = auVar106._0_10_;
                  auVar40._11_4_ = uVar34;
                  auVar53[9] = 0;
                  auVar53._0_9_ = auVar106._0_9_;
                  auVar53._10_5_ = auVar40._10_5_;
                  auVar57[8] = auVar106[4];
                  auVar57._0_8_ = auVar106._0_8_;
                  auVar57._9_6_ = auVar53._9_6_;
                  auVar75._7_8_ = 0;
                  auVar75._0_7_ = auVar57._8_7_;
                  Var69 = CONCAT81(SUB158(auVar75 << 0x40,7),auVar106[3]);
                  auVar76._9_6_ = 0;
                  auVar76._0_9_ = Var69;
                  auVar77._1_10_ = SUB1510(auVar76 << 0x30,5);
                  auVar77[0] = auVar106[2];
                  auVar78._11_4_ = 0;
                  auVar78._0_11_ = auVar77;
                  auVar61[2] = auVar106[1];
                  auVar61._0_2_ = auVar106._0_2_;
                  auVar61._3_12_ = SUB1512(auVar78 << 0x20,3);
                  auVar65._2_13_ = auVar61._2_13_;
                  auVar65._0_2_ = auVar106._0_2_ & 0xff;
                  auVar21._10_2_ = 0;
                  auVar21._0_10_ = auVar65._0_10_;
                  auVar21._12_2_ = (short)Var69;
                  uVar93 = CONCAT42(auVar21._10_4_,auVar77._0_2_);
                  auVar79._6_8_ = 0;
                  auVar79._0_6_ = uVar93;
                  auVar41._4_2_ = auVar61._2_2_;
                  auVar41._0_4_ = auVar65._0_4_;
                  auVar41._6_8_ = SUB148(auVar79 << 0x40,6);
                  auVar116._0_4_ = (int)((float)auVar106[0xc] * local_48);
                  auVar116._4_4_ = (int)((float)auVar106[0xd] * local_48);
                  auVar116._8_4_ = (int)((float)auVar106[0xe] * local_48);
                  auVar116._12_4_ = (int)((float)auVar106[0xf] * local_48);
                  auVar114._0_4_ = (int)((float)(uVar110 & 0xffff) * local_48);
                  auVar114._4_4_ = (int)((float)auVar39._4_4_ * local_48);
                  auVar114._8_4_ = (int)((float)auVar38._8_4_ * local_48);
                  auVar114._12_4_ = (int)((float)(uint3)(auVar37._10_3_ >> 0x10) * local_48);
                  auVar112 = packssdw(auVar114,auVar116);
                  auVar117._0_4_ = (int)((float)auVar57._8_2_ * local_48);
                  auVar117._4_4_ = (int)((float)auVar40._10_2_ * local_48);
                  auVar117._8_4_ = (int)((float)(uVar34 >> 8 & 0xffff) * local_48);
                  auVar117._12_4_ = (int)((float)(uVar34 >> 0x18) * local_48);
                  auVar106._0_4_ = (int)((float)(auVar65._0_4_ & 0xffff) * local_48);
                  auVar106._4_4_ = (int)((float)auVar41._4_4_ * local_48);
                  auVar106._8_4_ = (int)((float)(int)uVar93 * local_48);
                  auVar106._12_4_ = (int)((float)(auVar21._10_4_ >> 0x10) * local_48);
                  auVar106 = packssdw(auVar106,auVar117);
                  sVar2 = auVar106._0_2_;
                  sVar3 = auVar106._2_2_;
                  sVar4 = auVar106._4_2_;
                  sVar5 = auVar106._6_2_;
                  sVar6 = auVar106._8_2_;
                  sVar7 = auVar106._10_2_;
                  sVar8 = auVar106._12_2_;
                  sVar9 = auVar106._14_2_;
                  sVar10 = auVar112._0_2_;
                  sVar11 = auVar112._2_2_;
                  sVar12 = auVar112._4_2_;
                  sVar13 = auVar112._6_2_;
                  sVar14 = auVar112._8_2_;
                  sVar15 = auVar112._10_2_;
                  sVar16 = auVar112._12_2_;
                  sVar17 = auVar112._14_2_;
                  (*pauVar97)[0] = (0 < sVar2) * (sVar2 < 0x100) * auVar106[0] - (0xff < sVar2);
                  (*pauVar97)[1] = (0 < sVar3) * (sVar3 < 0x100) * auVar106[2] - (0xff < sVar3);
                  (*pauVar97)[2] = (0 < sVar4) * (sVar4 < 0x100) * auVar106[4] - (0xff < sVar4);
                  (*pauVar97)[3] = (0 < sVar5) * (sVar5 < 0x100) * auVar106[6] - (0xff < sVar5);
                  (*pauVar97)[4] = (0 < sVar6) * (sVar6 < 0x100) * auVar106[8] - (0xff < sVar6);
                  (*pauVar97)[5] = (0 < sVar7) * (sVar7 < 0x100) * auVar106[10] - (0xff < sVar7);
                  (*pauVar97)[6] = (0 < sVar8) * (sVar8 < 0x100) * auVar106[0xc] - (0xff < sVar8);
                  (*pauVar97)[7] = (0 < sVar9) * (sVar9 < 0x100) * auVar106[0xe] - (0xff < sVar9);
                  (*pauVar97)[8] = (0 < sVar10) * (sVar10 < 0x100) * auVar112[0] - (0xff < sVar10);
                  (*pauVar97)[9] = (0 < sVar11) * (sVar11 < 0x100) * auVar112[2] - (0xff < sVar11);
                  (*pauVar97)[10] = (0 < sVar12) * (sVar12 < 0x100) * auVar112[4] - (0xff < sVar12);
                  (*pauVar97)[0xb] = (0 < sVar13) * (sVar13 < 0x100) * auVar112[6] - (0xff < sVar13)
                  ;
                  (*pauVar97)[0xc] = (0 < sVar14) * (sVar14 < 0x100) * auVar112[8] - (0xff < sVar14)
                  ;
                  (*pauVar97)[0xd] =
                       (0 < sVar15) * (sVar15 < 0x100) * auVar112[10] - (0xff < sVar15);
                  (*pauVar97)[0xe] =
                       (0 < sVar16) * (sVar16 < 0x100) * auVar112[0xc] - (0xff < sVar16);
                  (*pauVar97)[0xf] =
                       (0 < sVar17) * (sVar17 < 0x100) * auVar112[0xe] - (0xff < sVar17);
                  auVar106 = pauVar97[lVar96];
                  uVar110 = CONCAT13(0,CONCAT12(auVar106[9],(ushort)auVar106[8]));
                  auVar42[0xc] = auVar106[0xb];
                  auVar42._0_12_ = ZEXT112(auVar106[0xc]) << 0x40;
                  auVar43._10_3_ = auVar42._10_3_;
                  auVar43._0_10_ = (unkuint10)auVar106[10] << 0x40;
                  auVar80._5_8_ = 0;
                  auVar80._0_5_ = auVar43._8_5_;
                  auVar44[4] = auVar106[9];
                  auVar44._0_4_ = uVar110;
                  auVar44[5] = 0;
                  auVar44._6_7_ = SUB137(auVar80 << 0x40,6);
                  auVar22[0xd] = 0;
                  auVar22._0_13_ = auVar106._0_13_;
                  auVar22[0xe] = auVar106[7];
                  auVar28[0xc] = auVar106[6];
                  auVar28._0_12_ = auVar106._0_12_;
                  auVar28._13_2_ = auVar22._13_2_;
                  auVar32[0xb] = 0;
                  auVar32._0_11_ = auVar106._0_11_;
                  auVar32._12_3_ = auVar28._12_3_;
                  uVar34 = auVar32._11_4_;
                  auVar45[10] = auVar106[5];
                  auVar45._0_10_ = auVar106._0_10_;
                  auVar45._11_4_ = uVar34;
                  auVar54[9] = 0;
                  auVar54._0_9_ = auVar106._0_9_;
                  auVar54._10_5_ = auVar45._10_5_;
                  auVar58[8] = auVar106[4];
                  auVar58._0_8_ = auVar106._0_8_;
                  auVar58._9_6_ = auVar54._9_6_;
                  auVar81._7_8_ = 0;
                  auVar81._0_7_ = auVar58._8_7_;
                  Var69 = CONCAT81(SUB158(auVar81 << 0x40,7),auVar106[3]);
                  auVar82._9_6_ = 0;
                  auVar82._0_9_ = Var69;
                  auVar83._1_10_ = SUB1510(auVar82 << 0x30,5);
                  auVar83[0] = auVar106[2];
                  auVar84._11_4_ = 0;
                  auVar84._0_11_ = auVar83;
                  auVar62[2] = auVar106[1];
                  auVar62._0_2_ = auVar106._0_2_;
                  auVar62._3_12_ = SUB1512(auVar84 << 0x20,3);
                  auVar66._2_13_ = auVar62._2_13_;
                  auVar66._0_2_ = auVar106._0_2_ & 0xff;
                  auVar23._10_2_ = 0;
                  auVar23._0_10_ = auVar66._0_10_;
                  auVar23._12_2_ = (short)Var69;
                  uVar93 = CONCAT42(auVar23._10_4_,auVar83._0_2_);
                  auVar85._6_8_ = 0;
                  auVar85._0_6_ = uVar93;
                  auVar46._4_2_ = auVar62._2_2_;
                  auVar46._0_4_ = auVar66._0_4_;
                  auVar46._6_8_ = SUB148(auVar85 << 0x40,6);
                  auVar118._0_4_ = (int)((float)auVar106[0xc] * local_48);
                  auVar118._4_4_ = (int)((float)auVar106[0xd] * local_48);
                  auVar118._8_4_ = (int)((float)auVar106[0xe] * local_48);
                  auVar118._12_4_ = (int)((float)auVar106[0xf] * local_48);
                  auVar113._0_4_ = (int)((float)(uVar110 & 0xffff) * local_48);
                  auVar113._4_4_ = (int)((float)auVar44._4_4_ * local_48);
                  auVar113._8_4_ = (int)((float)auVar43._8_4_ * local_48);
                  auVar113._12_4_ = (int)((float)(uint3)(auVar42._10_3_ >> 0x10) * local_48);
                  auVar114 = packssdw(auVar113,auVar118);
                  auVar119._0_4_ = (int)((float)auVar58._8_2_ * local_48);
                  auVar119._4_4_ = (int)((float)auVar45._10_2_ * local_48);
                  auVar119._8_4_ = (int)((float)(uVar34 >> 8 & 0xffff) * local_48);
                  auVar119._12_4_ = (int)((float)(uVar34 >> 0x18) * local_48);
                  auVar112._0_4_ = (int)((float)(auVar66._0_4_ & 0xffff) * local_48);
                  auVar112._4_4_ = (int)((float)auVar46._4_4_ * local_48);
                  auVar112._8_4_ = (int)((float)(int)uVar93 * local_48);
                  auVar112._12_4_ = (int)((float)(auVar23._10_4_ >> 0x10) * local_48);
                  auVar106 = packssdw(auVar112,auVar119);
                  sVar2 = auVar106._0_2_;
                  sVar3 = auVar106._2_2_;
                  auVar107[1] = (0 < sVar3) * (sVar3 < 0x100) * auVar106[2] - (0xff < sVar3);
                  auVar107[0] = (0 < sVar2) * (sVar2 < 0x100) * auVar106[0] - (0xff < sVar2);
                  sVar2 = auVar106._4_2_;
                  auVar107[2] = (0 < sVar2) * (sVar2 < 0x100) * auVar106[4] - (0xff < sVar2);
                  sVar2 = auVar106._6_2_;
                  auVar107[3] = (0 < sVar2) * (sVar2 < 0x100) * auVar106[6] - (0xff < sVar2);
                  sVar2 = auVar106._8_2_;
                  auVar107[4] = (0 < sVar2) * (sVar2 < 0x100) * auVar106[8] - (0xff < sVar2);
                  sVar2 = auVar106._10_2_;
                  auVar107[5] = (0 < sVar2) * (sVar2 < 0x100) * auVar106[10] - (0xff < sVar2);
                  sVar2 = auVar106._12_2_;
                  auVar107[6] = (0 < sVar2) * (sVar2 < 0x100) * auVar106[0xc] - (0xff < sVar2);
                  sVar2 = auVar106._14_2_;
                  auVar107[7] = (0 < sVar2) * (sVar2 < 0x100) * auVar106[0xe] - (0xff < sVar2);
                  sVar2 = auVar114._0_2_;
                  auVar107[8] = (0 < sVar2) * (sVar2 < 0x100) * auVar114[0] - (0xff < sVar2);
                  sVar2 = auVar114._2_2_;
                  auVar107[9] = (0 < sVar2) * (sVar2 < 0x100) * auVar114[2] - (0xff < sVar2);
                  sVar2 = auVar114._4_2_;
                  auVar107[10] = (0 < sVar2) * (sVar2 < 0x100) * auVar114[4] - (0xff < sVar2);
                  sVar2 = auVar114._6_2_;
                  auVar107[0xb] = (0 < sVar2) * (sVar2 < 0x100) * auVar114[6] - (0xff < sVar2);
                  sVar2 = auVar114._8_2_;
                  auVar107[0xc] = (0 < sVar2) * (sVar2 < 0x100) * auVar114[8] - (0xff < sVar2);
                  sVar2 = auVar114._10_2_;
                  auVar107[0xd] = (0 < sVar2) * (sVar2 < 0x100) * auVar114[10] - (0xff < sVar2);
                  sVar2 = auVar114._12_2_;
                  auVar107[0xe] = (0 < sVar2) * (sVar2 < 0x100) * auVar114[0xc] - (0xff < sVar2);
                  sVar2 = auVar114._14_2_;
                  auVar107[0xf] = (0 < sVar2) * (sVar2 < 0x100) * auVar114[0xe] - (0xff < sVar2);
                  pauVar97[lVar96] = auVar107;
                  lVar95 = lVar95 + 0x20;
                  pauVar97 = pauVar97 + lVar96 * 2;
                  uVar104 = uVar104 - 2;
                } while (uVar104 != 0);
                if ((local_78 & 1) != 0) goto LAB_0032f753;
              }
              if (local_88 != uVar98) {
                uVar104 = local_88;
                if ((uVar92 & 8) == 0) goto LAB_0032f5b2;
                goto LAB_0032f542;
              }
            }
          }
          else {
            uVar104 = 0;
LAB_0032f5b2:
            uVar100 = uVar104;
            if ((uVar92 & 1) != 0) {
              (*local_b8[0])[uVar104 * lVar96 + lVar102] =
                   (char)(int)((float)(byte)(*local_b8[0])[uVar104 * lVar96 + lVar102] * local_48);
              uVar100 = uVar104 | 1;
            }
            if (~uVar104 != local_58) {
              lVar102 = uVar98 - uVar100;
              lVar95 = (uVar100 + 1) * lVar96;
              pauVar97 = pauVar103;
              do {
                (*pauVar97)[uVar100 * lVar96] =
                     (char)(int)((float)(byte)(*pauVar97)[uVar100 * lVar96] * local_48);
                (*pauVar97)[lVar95] = (char)(int)((float)(byte)(*pauVar97)[lVar95] * local_48);
                pauVar97 = (undefined1 (*) [16])(*pauVar97 + lVar96 * 2);
                lVar102 = lVar102 + -2;
              } while (lVar102 != 0);
            }
          }
          uVar101 = uVar101 + 1;
          pauVar103 = (undefined1 (*) [16])(*pauVar103 + local_50);
        } while (uVar101 != local_9c._4_4_);
      }
    }
    else if (((local_a8 == 2) && (0xffffffff < (long)uVar92)) &&
            (uVar98 = uVar92 & 0xffffffff, 0 < (int)(uint)local_9c)) {
      iVar94 = (int)(local_48 * DAT_005de3b0) + 1;
      lVar96 = 0;
      do {
        if (0 < (int)uVar98) {
          lVar102 = 0;
          do {
            *(uint *)(*local_b8[0] + local_a0 * lVar102 + local_a4 * lVar96) =
                 (*(uint *)(*local_b8[0] + local_a0 * lVar102 + local_a4 * lVar96) & 0xff00ff) *
                 iVar94 >> 8 & 0xff00ff |
                 (*(uint *)(*local_b8[0] + local_a0 * lVar102 + local_a4 * lVar96) >> 8 & 0xff00ff)
                 * iVar94 & 0xff00ff00;
            lVar102 = lVar102 + 1;
            uVar98 = (ulong)(int)(uint)local_9c;
          } while (lVar102 < (long)uVar98);
        }
        lVar96 = lVar96 + 1;
      } while (lVar96 < (int)local_9c._4_4_);
    }
    if (local_90 != (long *)0x0) {
      local_9c = uVar92;
      (**(code **)(*local_90 + 8))();
    }
  }
  return;
}


