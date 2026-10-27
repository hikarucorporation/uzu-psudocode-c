// Function : generate<juce::PixelARGB>
// Namespace: juce:RenderingHelpers:EdgeTableFillers:TransformedImageFill_juce__PixelARGB_juce__PixelARGB_false_
// Entry    : 0034a430
// Prototype: void generate<juce::PixelARGB>(TransformedImageFill<juce::PixelARGB,juce::PixelARGB,false> * this, undefined4 * param_1, int param_2, int param_3)
// Body     : 0034a430 - 0034a89c


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* void juce::RenderingHelpers::EdgeTableFillers::TransformedImageFill<juce::PixelARGB,
   juce::PixelARGB, false>::generate<juce::PixelARGB>(juce::PixelARGB*, int, int) */

void __thiscall
juce::RenderingHelpers::EdgeTableFillers::
TransformedImageFill<juce::PixelARGB,juce::PixelARGB,false>::generate<juce::PixelARGB>
          (TransformedImageFill<juce::PixelARGB,juce::PixelARGB,false> *this,undefined4 *param_1,
          int param_2,int param_3)

{
  undefined4 uVar1;
  long *plVar2;
  short sVar3;
  ushort uVar4;
  short sVar5;
  short sVar6;
  char cVar10;
  char cVar9;
  char cVar8;
  char cVar7;
  undefined1 auVar11 [13];
  undefined1 auVar12 [13];
  undefined1 auVar13 [13];
  undefined1 auVar14 [13];
  undefined1 auVar15 [13];
  undefined1 auVar16 [13];
  undefined1 auVar17 [13];
  undefined1 auVar18 [13];
  undefined1 auVar19 [13];
  undefined1 auVar20 [15];
  undefined1 auVar21 [15];
  undefined1 auVar22 [15];
  undefined1 auVar23 [15];
  uint7 uVar24;
  undefined1 auVar25 [15];
  undefined1 auVar26 [15];
  undefined1 auVar27 [15];
  undefined1 auVar28 [13];
  undefined1 auVar29 [13];
  undefined1 auVar30 [13];
  undefined1 auVar31 [13];
  uint5 uVar32;
  uint5 uVar33;
  uint5 uVar34;
  uint5 uVar35;
  undefined1 auVar36 [16];
  int iVar37;
  int iVar38;
  int iVar39;
  int iVar40;
  int iVar41;
  int iVar42;
  int iVar43;
  int iVar44;
  uint uVar45;
  uint uVar46;
  uint uVar47;
  long lVar48;
  undefined4 *puVar49;
  uint uVar50;
  uint uVar51;
  int iVar52;
  ulong uVar53;
  long lVar54;
  ulong uVar55;
  long lVar56;
  uint uVar57;
  long lVar58;
  int iVar59;
  float fVar60;
  int iVar61;
  float fVar62;
  float fVar63;
  byte bVar65;
  int iVar64;
  short sVar66;
  int iVar67;
  undefined4 uVar69;
  undefined6 uVar70;
  undefined1 auVar71 [12];
  undefined1 auVar72 [16];
  int iVar68;
  undefined1 auVar73 [16];
  undefined1 auVar77 [16];
  undefined1 auVar76 [16];
  undefined1 auVar75 [16];
  undefined1 auVar74 [16];
  undefined1 auVar78 [16];
  float fVar79;
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  
  fVar62 = (float)param_2 + *(float *)(this + 0x40);
  fVar60 = (float)*(int *)(this + 0x68) + *(float *)(this + 0x40);
  fVar63 = *(float *)(this + 4) * fVar60;
  fVar60 = fVar60 * *(float *)(this + 0x10);
  fVar79 = (*(float *)(this + 8) + *(float *)this * ((float)param_3 + fVar62) + fVar63) *
           _DAT_005dd2d0;
  iVar61 = (int)((*(float *)(this + 8) + *(float *)this * fVar62 + fVar63) * _UNK_005dd2d4);
  *(int *)(this + 0x1c) = param_3;
  lVar58 = (long)((int)fVar79 - iVar61);
  uVar53 = lVar58 / (long)param_3;
  uVar55 = lVar58 % (long)param_3;
  iVar43 = (int)uVar55;
  uVar55 = uVar55 & 0xffffffff;
  iVar42 = (int)uVar53;
  uVar53 = uVar53 & 0xffffffff;
  *(int *)(this + 0x20) = iVar42;
  *(int *)(this + 0x28) = iVar43;
  if (iVar43 < 1) {
    uVar55 = (ulong)(uint)(iVar43 + param_3);
    *(int *)(this + 0x28) = iVar43 + param_3;
    uVar51 = iVar42 - 1;
    uVar53 = (ulong)uVar51;
    *(uint *)(this + 0x20) = uVar51;
  }
  fVar63 = (*(float *)(this + 0x14) + *(float *)(this + 0xc) * ((float)param_3 + fVar62) + fVar60) *
           _DAT_005dd2d0;
  iVar59 = (int)((*(float *)(this + 0x14) + *(float *)(this + 0xc) * fVar62 + fVar60) *
                _UNK_005dd2d4);
  *(int *)(this + 0x30) = param_3;
  iVar42 = (int)fVar63 - iVar59;
  iVar43 = iVar42 / param_3;
  iVar42 = iVar42 % param_3;
  *(int *)(this + 0x34) = iVar43;
  *(int *)(this + 0x3c) = iVar42;
  *(int *)(this + 0x2c) = iVar59 + *(int *)(this + 0x44);
  if (iVar42 < 1) {
    iVar42 = iVar42 + param_3;
    *(int *)(this + 0x3c) = iVar42;
    *(int *)(this + 0x34) = iVar43 + -1;
  }
  uVar51 = *(int *)(this + 0x44) + iVar61;
  iVar43 = (int)uVar55 - param_3;
  *(int *)(this + 0x38) = iVar42 - param_3;
  iVar41 = _UNK_005dd3dc;
  iVar40 = _UNK_005dd3d8;
  iVar39 = _UNK_005dd3d4;
  iVar38 = _DAT_005dd3d0;
  iVar37 = _UNK_005dd3cc;
  iVar59 = _UNK_005dd3c8;
  iVar61 = _UNK_005dd3c4;
  iVar42 = _DAT_005dd3c0;
  auVar36 = _DAT_005dd240;
  do {
    iVar52 = (int)uVar53 + uVar51;
    iVar44 = iVar43 + (int)uVar55;
    *(int *)(this + 0x24) = iVar44;
    *(int *)(this + 0x18) = iVar52;
    if (iVar44 != 0 && SCARRY4(iVar43,(int)uVar55) == iVar44 < 0) {
      *(int *)(this + 0x24) = iVar44 - *(int *)(this + 0x1c);
      *(int *)(this + 0x18) = iVar52 + 1;
    }
    uVar57 = *(uint *)(this + 0x2c);
    iVar43 = *(int *)(this + 0x38);
    iVar44 = iVar43 + *(int *)(this + 0x3c);
    *(int *)(this + 0x38) = iVar44;
    *(uint *)(this + 0x2c) = *(int *)(this + 0x34) + uVar57;
    if (iVar44 != 0 && SCARRY4(iVar43,*(int *)(this + 0x3c)) == iVar44 < 0) {
      *(int *)(this + 0x38) = iVar44 - *(int *)(this + 0x30);
      *(uint *)(this + 0x2c) = *(int *)(this + 0x34) + uVar57 + 1;
    }
    uVar45 = (int)uVar51 >> 8;
    uVar47 = (int)uVar57 >> 8;
    uVar46 = *(uint *)(this + 0x60);
    if (*(int *)(this + 0x5c) == 0) {
      uVar50 = *(uint *)(this + 100);
LAB_0034a760:
      if ((int)uVar45 < 0) {
        uVar45 = 0;
      }
      if ((int)uVar47 < 0) {
        uVar47 = 0;
      }
      if ((int)uVar46 < (int)uVar45) {
        uVar45 = uVar46;
      }
      if ((int)uVar50 < (int)uVar47) {
        uVar47 = uVar50;
      }
      plVar2 = *(long **)(this + 0x50);
      *param_1 = *(undefined4 *)
                  ((long)(int)plVar2[3] * (long)(int)uVar45 +
                  (long)*(int *)((long)plVar2 + 0x14) * (long)(int)uVar47 + *plVar2);
    }
    else {
      uVar50 = *(uint *)(this + 100);
      if (uVar45 < uVar46) {
        if (uVar50 <= uVar47) {
          plVar2 = *(long **)(this + 0x50);
          lVar58 = *plVar2;
          if ((int)uVar57 < 0) {
            lVar56 = (long)(int)plVar2[3];
            lVar54 = (int)uVar45 * lVar56;
            lVar48 = lVar58 + lVar54;
            uVar69 = *(undefined4 *)(lVar58 + lVar54);
          }
          else {
            lVar58 = lVar58 + (long)*(int *)((long)plVar2 + 0x14) * (long)(int)uVar50;
            lVar56 = (long)(int)plVar2[3];
            lVar54 = (int)uVar45 * lVar56;
            lVar48 = lVar58 + lVar54;
            uVar69 = *(undefined4 *)(lVar54 + lVar58);
          }
          uVar24 = CONCAT52((int5)(CONCAT43((int)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)((
                                                  uint)uVar69 >> 0x18) << 0x30) >> 0x28),
                                                  CONCAT14((char)((uint)uVar69 >> 0x10),uVar69)) >>
                                                  0x20),uVar69) >> 0x18),
                                            CONCAT12((char)((uint)uVar69 >> 8),(short)uVar69)) >>
                                  0x10),(short)uVar69);
          uVar69 = *(undefined4 *)(lVar56 + lVar48);
          uVar57 = uVar51;
LAB_0034a83c:
          uVar57 = uVar57 & 0xff;
          uVar24 = uVar24 & 0xffffff00ff00ff;
          auVar21._7_5_ = 0;
          auVar21._0_7_ = uVar24;
          auVar21[0xc] = (char)(uVar24 >> 0x30);
          auVar21[0xd] = 0;
          auVar21[0xe] = (char)((uint)uVar69 >> 0x18);
          auVar23._7_3_ = 0;
          auVar23._0_7_ = uVar24;
          auVar23[10] = (char)((uint)uVar69 >> 0x10);
          auVar23[0xb] = 0;
          auVar23._12_3_ = auVar21._12_3_;
          auVar26._10_5_ = auVar23._10_5_;
          auVar26._8_2_ = (short)(uVar24 >> 0x20);
          auVar26._0_8_ = (ulong)(byte)((uint)uVar69 >> 8) << 0x30;
          auVar27._6_9_ = auVar26._6_9_;
          auVar27._4_2_ = (short)(uVar24 >> 0x10);
          auVar27._0_4_ = CONCAT22((short)uVar69,(short)uVar24) & 0xffffff;
          auVar73 = pshuflw(ZEXT416(0x100 - uVar57),ZEXT416(0x100 - uVar57),0);
          auVar71 = auVar73._0_12_;
          goto LAB_0034a84e;
        }
        plVar2 = *(long **)(this + 0x50);
        lVar54 = (long)*(int *)((long)plVar2 + 0x14);
        lVar48 = (int)uVar47 * lVar54 + *plVar2;
        lVar56 = (long)(int)plVar2[3];
        lVar58 = lVar48 + (int)uVar45 * lVar56;
        uVar51 = uVar51 & 0xff;
        uVar57 = uVar57 & 0xff;
        uVar46 = (0x100 - uVar57) * (0x100 - uVar51);
        uVar69 = *(undefined4 *)((int)uVar45 * lVar56 + lVar48);
        bVar65 = (byte)((uint)uVar69 >> 0x18);
        uVar24 = (uint7)(ushort)uVar69 & 0xffffffffff00ff;
        auVar11._7_5_ = 0;
        auVar11._0_7_ = uVar24;
        auVar11[0xc] = bVar65;
        uVar32 = CONCAT32(auVar11._10_3_,(ushort)(byte)((uint)uVar69 >> 0x10));
        auVar28._5_8_ = 0;
        auVar28._0_5_ = uVar32;
        iVar52 = (int)uVar24;
        auVar12[4] = (char)((uint)uVar69 >> 8);
        auVar12._0_4_ = iVar52;
        auVar12[5] = 0;
        auVar12._6_7_ = SUB137(auVar28 << 0x40,6);
        auVar72._4_4_ = uVar46;
        auVar72._0_4_ = uVar46;
        auVar72._8_4_ = uVar46;
        auVar72._12_4_ = uVar46;
        auVar13[0xc] = bVar65;
        auVar13._0_12_ = ZEXT112(bVar65) << 0x40;
        iVar43 = (0x100 - uVar57) * uVar51;
        uVar69 = *(undefined4 *)(lVar56 + lVar58);
        uVar24 = (uint7)(ushort)uVar69 & 0xffffffffff00ff;
        auVar14._7_5_ = 0;
        auVar14._0_7_ = uVar24;
        auVar14[0xc] = (char)((uint)uVar69 >> 0x18);
        uVar33 = CONCAT32(auVar14._10_3_,(ushort)(byte)((uint)uVar69 >> 0x10));
        auVar29._5_8_ = 0;
        auVar29._0_5_ = uVar33;
        iVar67 = (int)uVar24;
        auVar15[4] = (char)((uint)uVar69 >> 8);
        auVar15._0_4_ = iVar67;
        auVar15[5] = 0;
        auVar15._6_7_ = SUB137(auVar29 << 0x40,6);
        auVar80._4_4_ = iVar43;
        auVar80._0_4_ = iVar43;
        auVar80._8_4_ = iVar43;
        auVar80._12_4_ = iVar43;
        lVar58 = lVar58 + lVar56;
        uVar45 = uVar51 * uVar57;
        uVar69 = *(undefined4 *)(lVar54 + lVar58);
        uVar24 = (uint7)(ushort)uVar69 & 0xffffffffff00ff;
        auVar16._7_5_ = 0;
        auVar16._0_7_ = uVar24;
        auVar16[0xc] = (char)((uint)uVar69 >> 0x18);
        uVar34 = CONCAT32(auVar16._10_3_,(ushort)(byte)((uint)uVar69 >> 0x10));
        auVar30._5_8_ = 0;
        auVar30._0_5_ = uVar34;
        iVar64 = (int)uVar24;
        auVar17[4] = (char)((uint)uVar69 >> 8);
        auVar17._0_4_ = iVar64;
        auVar17[5] = 0;
        auVar17._6_7_ = SUB137(auVar30 << 0x40,6);
        iVar44 = (0x100 - uVar51) * uVar57;
        uVar69 = *(undefined4 *)((lVar58 + lVar54) - lVar56);
        uVar24 = (uint7)(ushort)uVar69 & 0xffffffffff00ff;
        auVar18._7_5_ = 0;
        auVar18._0_7_ = uVar24;
        auVar18[0xc] = (char)((uint)uVar69 >> 0x18);
        uVar35 = CONCAT32(auVar18._10_3_,(ushort)(byte)((uint)uVar69 >> 0x10));
        auVar31._5_8_ = 0;
        auVar31._0_5_ = uVar35;
        iVar68 = (int)uVar24;
        auVar19[4] = (char)((uint)uVar69 >> 8);
        auVar19._0_4_ = iVar68;
        auVar19[5] = 0;
        auVar19._6_7_ = SUB137(auVar31 << 0x40,6);
        auVar81._4_4_ = iVar44;
        auVar81._0_4_ = iVar44;
        auVar81._8_4_ = iVar44;
        auVar81._12_4_ = iVar44;
        auVar78._0_4_ =
             iVar44 * iVar68 + uVar45 * iVar64 + iVar43 * iVar67 + uVar46 * iVar52 + iVar42 >> 0x10;
        auVar78._4_4_ =
             auVar19._4_4_ * iVar44 +
             auVar17._4_4_ * uVar45 + auVar15._4_4_ * iVar43 + auVar12._4_4_ * uVar46 + iVar61 >>
             0x10;
        auVar78._8_4_ =
             (uint)((int)((auVar81._8_8_ & 0xffffffff) * ((ulong)uVar35 & 0xffffffff)) +
                    (int)((ulong)uVar45 * ((ulong)uVar34 & 0xffffffff)) +
                    (int)((auVar80._8_8_ & 0xffffffff) * ((ulong)uVar33 & 0xffffffff)) +
                    (int)((auVar72._8_8_ & 0xffffffff) * ((ulong)uVar32 & 0xffffffff)) + iVar59) >>
             0x10;
        auVar78._12_4_ =
             (uint)(uint3)(auVar18._10_3_ >> 0x10) * iVar44 +
             (uint3)(auVar16._10_3_ >> 0x10) * uVar45 +
             (uint)(uint3)(auVar14._10_3_ >> 0x10) * iVar43 +
             (int)(((ulong)auVar13._8_5_ & 0xffffffff) * (ulong)uVar46) + iVar37 >> 0x10;
      }
      else {
        if (uVar50 <= uVar47) goto LAB_0034a760;
        plVar2 = *(long **)(this + 0x50);
        lVar58 = (long)*(int *)((long)plVar2 + 0x14);
        puVar49 = (undefined4 *)((int)uVar47 * lVar58 + *plVar2);
        if (-1 < (int)uVar51) {
          lVar48 = (long)(int)plVar2[3] * (long)(int)uVar46;
          uVar69 = *(undefined4 *)((long)puVar49 + lVar48);
          uVar24 = CONCAT52((int5)(CONCAT43((int)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)((
                                                  uint)uVar69 >> 0x18) << 0x30) >> 0x28),
                                                  CONCAT14((char)((uint)uVar69 >> 0x10),uVar69)) >>
                                                  0x20),uVar69) >> 0x18),
                                            CONCAT12((char)((uint)uVar69 >> 8),(short)uVar69)) >>
                                  0x10),(short)uVar69);
          uVar69 = *(undefined4 *)((long)puVar49 + lVar58 + lVar48);
          goto LAB_0034a83c;
        }
        uVar57 = uVar57 & 0xff;
        uVar69 = *puVar49;
        uVar1 = *(undefined4 *)((long)puVar49 + lVar58);
        auVar20[0xc] = (char)((uint)uVar69 >> 0x18);
        auVar20._0_12_ = ZEXT712(0);
        auVar20[0xd] = 0;
        auVar20[0xe] = (char)((uint)uVar1 >> 0x18);
        auVar22[10] = (char)((uint)uVar1 >> 0x10);
        auVar22._0_10_ = (unkuint10)0;
        auVar22[0xb] = 0;
        auVar22._12_3_ = auVar20._12_3_;
        auVar25[9] = 0;
        auVar25[8] = (byte)((uint)uVar69 >> 0x10);
        auVar25._10_5_ = auVar22._10_5_;
        auVar25._0_8_ = (ulong)(byte)((uint)uVar1 >> 8) << 0x30;
        auVar27[5] = 0;
        auVar27[4] = (byte)((uint)uVar69 >> 8);
        auVar27._6_9_ = auVar25._6_9_;
        auVar27._0_4_ = CONCAT22((short)uVar1,(short)uVar69) & 0xff00ff;
        auVar73 = pshuflw(ZEXT416(0x100 - uVar57),ZEXT416(0x100 - uVar57),0);
        auVar71 = auVar73._0_12_;
LAB_0034a84e:
        auVar73[0xf] = 0;
        auVar73._0_15_ = auVar27;
        auVar78 = pshuflw(ZEXT416(uVar57),ZEXT416(uVar57),0);
        auVar77._12_2_ = auVar71._6_2_;
        auVar77._0_12_ = auVar71;
        auVar77._14_2_ = auVar78._6_2_;
        auVar76._12_4_ = auVar77._12_4_;
        auVar76._0_10_ = auVar71._0_10_;
        auVar76._10_2_ = auVar78._4_2_;
        auVar75._10_6_ = auVar76._10_6_;
        auVar75._0_8_ = auVar71._0_8_;
        auVar75._8_2_ = auVar71._4_2_;
        auVar74._8_8_ = auVar75._8_8_;
        auVar74._6_2_ = auVar78._2_2_;
        auVar74._4_2_ = auVar71._2_2_;
        auVar74._0_2_ = auVar71._0_2_;
        auVar74._2_2_ = auVar78._0_2_;
        auVar73 = pmaddwd(auVar74,auVar73);
        auVar78._0_4_ = (uint)(auVar73._0_4_ + iVar38) >> 8;
        auVar78._4_4_ = (uint)(auVar73._4_4_ + iVar39) >> 8;
        auVar78._8_4_ = (uint)(auVar73._8_4_ + iVar40) >> 8;
        auVar78._12_4_ = (uint)(auVar73._12_4_ + iVar41) >> 8;
      }
      auVar78 = auVar78 & auVar36;
      sVar3 = auVar78._0_2_;
      cVar7 = (0 < sVar3) * (sVar3 < 0x100) * auVar78[0] - (0xff < sVar3);
      uVar4 = auVar78._2_2_;
      sVar66 = CONCAT11((uVar4 != 0) * (uVar4 < 0x100) * auVar78[2] - (0xff < uVar4),cVar7);
      sVar3 = auVar78._4_2_;
      cVar8 = (0 < sVar3) * (sVar3 < 0x100) * auVar78[4] - (0xff < sVar3);
      uVar4 = auVar78._6_2_;
      uVar69 = CONCAT13((uVar4 != 0) * (uVar4 < 0x100) * auVar78[6] - (0xff < uVar4),
                        CONCAT12(cVar8,sVar66));
      sVar3 = auVar78._8_2_;
      cVar9 = (0 < sVar3) * (sVar3 < 0x100) * auVar78[8] - (0xff < sVar3);
      sVar3 = auVar78._10_2_;
      uVar70 = CONCAT15((0 < sVar3) * (sVar3 < 0x100) * auVar78[10] - (0xff < sVar3),
                        CONCAT14(cVar9,uVar69));
      sVar3 = auVar78._12_2_;
      cVar10 = (0 < sVar3) * (sVar3 < 0x100) * auVar78[0xc] - (0xff < sVar3);
      sVar6 = auVar78._14_2_;
      sVar3 = (short)((uint)uVar69 >> 0x10);
      sVar5 = (short)((uint6)uVar70 >> 0x20);
      sVar6 = (short)(CONCAT17((0 < sVar6) * (sVar6 < 0x100) * auVar78[0xe] - (0xff < sVar6),
                               CONCAT16(cVar10,uVar70)) >> 0x30);
      *param_1 = CONCAT13((0 < sVar6) * (sVar6 < 0x100) * cVar10 - (0xff < sVar6),
                          CONCAT12((0 < sVar5) * (sVar5 < 0x100) * cVar9 - (0xff < sVar5),
                                   CONCAT11((0 < sVar3) * (sVar3 < 0x100) * cVar8 - (0xff < sVar3),
                                            (0 < sVar66) * (sVar66 < 0x100) * cVar7 -
                                            (0xff < sVar66))));
    }
    if (param_3 < 2) {
      return;
    }
    param_3 = param_3 + -1;
    param_1 = param_1 + 1;
    uVar51 = *(uint *)(this + 0x18);
    uVar53 = (ulong)*(uint *)(this + 0x20);
    uVar55 = (ulong)*(uint *)(this + 0x28);
    iVar43 = *(int *)(this + 0x24);
  } while( true );
}


