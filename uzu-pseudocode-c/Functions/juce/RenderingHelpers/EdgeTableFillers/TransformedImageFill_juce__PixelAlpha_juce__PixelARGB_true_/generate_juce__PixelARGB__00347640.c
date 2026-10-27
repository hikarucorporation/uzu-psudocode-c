// Function : generate<juce::PixelARGB>
// Namespace: juce:RenderingHelpers:EdgeTableFillers:TransformedImageFill_juce__PixelAlpha_juce__PixelARGB_true_
// Entry    : 00347640
// Prototype: void generate<juce::PixelARGB>(TransformedImageFill<juce::PixelAlpha,juce::PixelARGB,true> * this, undefined4 * param_1, int param_2, int param_3)
// Body     : 00347640 - 00347958


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* void juce::RenderingHelpers::EdgeTableFillers::TransformedImageFill<juce::PixelAlpha,
   juce::PixelARGB, true>::generate<juce::PixelARGB>(juce::PixelARGB*, int, int) */

void __thiscall
juce::RenderingHelpers::EdgeTableFillers::
TransformedImageFill<juce::PixelAlpha,juce::PixelARGB,true>::generate<juce::PixelARGB>
          (TransformedImageFill<juce::PixelAlpha,juce::PixelARGB,true> *this,undefined4 *param_1,
          int param_2,int param_3)

{
  undefined4 uVar1;
  long *plVar2;
  short sVar3;
  char cVar6;
  char cVar5;
  byte bVar4;
  undefined1 auVar7 [13];
  undefined1 auVar8 [13];
  undefined1 auVar9 [13];
  undefined1 auVar10 [13];
  undefined1 auVar11 [13];
  undefined1 auVar12 [13];
  undefined1 auVar13 [13];
  undefined1 auVar14 [13];
  undefined1 auVar15 [13];
  uint7 uVar16;
  undefined1 auVar17 [13];
  undefined1 auVar18 [13];
  undefined1 auVar19 [13];
  undefined1 auVar20 [13];
  uint5 uVar21;
  uint5 uVar22;
  uint5 uVar23;
  uint5 uVar24;
  short sVar25;
  undefined1 auVar26 [16];
  int iVar27;
  int iVar28;
  int iVar29;
  int iVar30;
  undefined4 *puVar31;
  uint uVar32;
  uint uVar33;
  uint uVar34;
  uint uVar35;
  int iVar36;
  ulong uVar37;
  long lVar38;
  ulong uVar39;
  long lVar40;
  uint uVar41;
  int iVar42;
  float fVar43;
  int iVar44;
  float fVar45;
  byte bVar46;
  float fVar47;
  int iVar48;
  int iVar49;
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  float fVar52;
  
  fVar45 = (float)param_2 + *(float *)(this + 0x40);
  fVar43 = (float)*(int *)(this + 0x68) + *(float *)(this + 0x40);
  fVar47 = *(float *)(this + 4) * fVar43;
  fVar43 = fVar43 * *(float *)(this + 0x10);
  fVar52 = (*(float *)(this + 8) + *(float *)this * ((float)param_3 + fVar45) + fVar47) *
           _DAT_005dd2d0;
  iVar44 = (int)((*(float *)(this + 8) + *(float *)this * fVar45 + fVar47) * _UNK_005dd2d4);
  *(int *)(this + 0x1c) = param_3;
  lVar38 = (long)((int)fVar52 - iVar44);
  uVar37 = lVar38 / (long)param_3;
  uVar39 = lVar38 % (long)param_3;
  iVar29 = (int)uVar39;
  uVar39 = uVar39 & 0xffffffff;
  iVar28 = (int)uVar37;
  uVar37 = uVar37 & 0xffffffff;
  *(int *)(this + 0x20) = iVar28;
  *(int *)(this + 0x28) = iVar29;
  if (iVar29 < 1) {
    uVar39 = (ulong)(uint)(iVar29 + param_3);
    *(int *)(this + 0x28) = iVar29 + param_3;
    uVar35 = iVar28 - 1;
    uVar37 = (ulong)uVar35;
    *(uint *)(this + 0x20) = uVar35;
  }
  fVar47 = (*(float *)(this + 0x14) + *(float *)(this + 0xc) * ((float)param_3 + fVar45) + fVar43) *
           _DAT_005dd2d0;
  iVar42 = (int)((*(float *)(this + 0x14) + *(float *)(this + 0xc) * fVar45 + fVar43) *
                _UNK_005dd2d4);
  *(int *)(this + 0x30) = param_3;
  iVar28 = (int)fVar47 - iVar42;
  iVar29 = iVar28 / param_3;
  iVar28 = iVar28 % param_3;
  *(int *)(this + 0x34) = iVar29;
  *(int *)(this + 0x3c) = iVar28;
  *(int *)(this + 0x2c) = iVar42 + *(int *)(this + 0x44);
  if (iVar28 < 1) {
    iVar28 = iVar28 + param_3;
    *(int *)(this + 0x3c) = iVar28;
    *(int *)(this + 0x34) = iVar29 + -1;
  }
  uVar35 = *(int *)(this + 0x44) + iVar44;
  iVar29 = (int)uVar39 - param_3;
  *(int *)(this + 0x38) = iVar28 - param_3;
  iVar27 = _UNK_005dd3cc;
  iVar42 = _UNK_005dd3c8;
  iVar44 = _UNK_005dd3c4;
  iVar28 = _DAT_005dd3c0;
  auVar26 = _DAT_005dd240;
  while( true ) {
    iVar36 = (int)uVar37 + uVar35;
    iVar30 = iVar29 + (int)uVar39;
    *(int *)(this + 0x24) = iVar30;
    *(int *)(this + 0x18) = iVar36;
    if (iVar30 != 0 && SCARRY4(iVar29,(int)uVar39) == iVar30 < 0) {
      *(int *)(this + 0x24) = iVar30 - *(int *)(this + 0x1c);
      *(int *)(this + 0x18) = iVar36 + 1;
    }
    uVar41 = *(uint *)(this + 0x2c);
    iVar29 = *(int *)(this + 0x38);
    iVar30 = iVar29 + *(int *)(this + 0x3c);
    *(int *)(this + 0x38) = iVar30;
    *(uint *)(this + 0x2c) = *(int *)(this + 0x34) + uVar41;
    if (iVar30 != 0 && SCARRY4(iVar29,*(int *)(this + 0x3c)) == iVar30 < 0) {
      *(int *)(this + 0x38) = iVar30 - *(int *)(this + 0x30);
      *(uint *)(this + 0x2c) = *(int *)(this + 0x34) + uVar41 + 1;
    }
    plVar2 = *(long **)(this + 0x50);
    iVar29 = (int)(CONCAT44((int)uVar35 >> 0x1f,(int)uVar35 >> 8) %
                  (long)(int)*(uint *)((long)plVar2 + 0x1c));
    uVar32 = (iVar29 >> 0x1f & *(uint *)((long)plVar2 + 0x1c)) + iVar29;
    iVar29 = (int)(CONCAT44((int)uVar41 >> 0x1f,(int)uVar41 >> 8) % (long)(int)*(uint *)(plVar2 + 4)
                  );
    uVar33 = (iVar29 >> 0x1f & *(uint *)(plVar2 + 4)) + iVar29;
    lVar38 = (long)*(int *)((long)plVar2 + 0x14);
    lVar40 = (long)(int)plVar2[3];
    puVar31 = (undefined4 *)((int)uVar32 * lVar40 + (int)uVar33 * lVar38 + *plVar2);
    if (((*(int *)(this + 0x5c) == 0) || (*(uint *)(this + 0x60) <= uVar32)) ||
       (*(uint *)(this + 100) <= uVar33)) {
      *param_1 = *puVar31;
    }
    else {
      uVar35 = uVar35 & 0xff;
      uVar41 = uVar41 & 0xff;
      uVar32 = (0x100 - uVar41) * (0x100 - uVar35);
      uVar1 = *puVar31;
      bVar46 = (byte)((uint)uVar1 >> 0x18);
      uVar16 = (uint7)(ushort)uVar1 & 0xffffffffff00ff;
      auVar7._7_5_ = 0;
      auVar7._0_7_ = uVar16;
      auVar7[0xc] = bVar46;
      uVar21 = CONCAT32(auVar7._10_3_,(ushort)(byte)((uint)uVar1 >> 0x10));
      auVar17._5_8_ = 0;
      auVar17._0_5_ = uVar21;
      iVar30 = (int)uVar16;
      auVar8[4] = (char)((uint)uVar1 >> 8);
      auVar8._0_4_ = iVar30;
      auVar8[5] = 0;
      auVar8._6_7_ = SUB137(auVar17 << 0x40,6);
      auVar9[0xc] = bVar46;
      auVar9._0_12_ = ZEXT112(bVar46) << 0x40;
      uVar34 = (0x100 - uVar41) * uVar35;
      uVar1 = *(undefined4 *)((long)puVar31 + lVar40);
      uVar16 = (uint7)(ushort)uVar1 & 0xffffffffff00ff;
      auVar10._7_5_ = 0;
      auVar10._0_7_ = uVar16;
      auVar10[0xc] = (char)((uint)uVar1 >> 0x18);
      uVar22 = CONCAT32(auVar10._10_3_,(ushort)(byte)((uint)uVar1 >> 0x10));
      auVar18._5_8_ = 0;
      auVar18._0_5_ = uVar22;
      iVar48 = (int)uVar16;
      auVar11[4] = (char)((uint)uVar1 >> 8);
      auVar11._0_4_ = iVar48;
      auVar11[5] = 0;
      auVar11._6_7_ = SUB137(auVar18 << 0x40,6);
      uVar33 = uVar35 * uVar41;
      uVar1 = *(undefined4 *)((long)puVar31 + lVar38 + lVar40);
      uVar16 = (uint7)(ushort)uVar1 & 0xffffffffff00ff;
      auVar12._7_5_ = 0;
      auVar12._0_7_ = uVar16;
      auVar12[0xc] = (char)((uint)uVar1 >> 0x18);
      uVar23 = CONCAT32(auVar12._10_3_,(ushort)(byte)((uint)uVar1 >> 0x10));
      auVar19._5_8_ = 0;
      auVar19._0_5_ = uVar23;
      iVar36 = (int)uVar16;
      auVar13[4] = (char)((uint)uVar1 >> 8);
      auVar13._0_4_ = iVar36;
      auVar13[5] = 0;
      auVar13._6_7_ = SUB137(auVar19 << 0x40,6);
      iVar29 = (0x100 - uVar35) * uVar41;
      uVar1 = *(undefined4 *)((long)puVar31 + lVar38);
      uVar16 = (uint7)(ushort)uVar1 & 0xffffffffff00ff;
      auVar14._7_5_ = 0;
      auVar14._0_7_ = uVar16;
      auVar14[0xc] = (char)((uint)uVar1 >> 0x18);
      uVar24 = CONCAT32(auVar14._10_3_,(ushort)(byte)((uint)uVar1 >> 0x10));
      auVar20._5_8_ = 0;
      auVar20._0_5_ = uVar24;
      iVar49 = (int)uVar16;
      auVar15[4] = (char)((uint)uVar1 >> 8);
      auVar15._0_4_ = iVar49;
      auVar15[5] = 0;
      auVar15._6_7_ = SUB137(auVar20 << 0x40,6);
      auVar51._4_4_ = iVar29;
      auVar51._0_4_ = iVar29;
      auVar51._8_4_ = iVar29;
      auVar51._12_4_ = iVar29;
      auVar50._0_4_ =
           iVar29 * iVar49 + iVar36 * uVar33 + iVar48 * uVar34 + iVar30 * uVar32 + iVar28 >> 0x10;
      auVar50._4_4_ =
           auVar15._4_4_ * iVar29 +
           auVar13._4_4_ * uVar33 + auVar11._4_4_ * uVar34 + auVar8._4_4_ * uVar32 + iVar44 >> 0x10;
      auVar50._8_4_ =
           (uint)((int)((auVar51._8_8_ & 0xffffffff) * ((ulong)uVar24 & 0xffffffff)) +
                  (int)(((ulong)uVar23 & 0xffffffff) * (ulong)uVar33) +
                  (int)(((ulong)uVar22 & 0xffffffff) * (ulong)uVar34) +
                  (int)(((ulong)uVar21 & 0xffffffff) * (ulong)uVar32) + iVar42) >> 0x10;
      auVar50._12_4_ =
           (uint)(uint3)(auVar14._10_3_ >> 0x10) * iVar29 +
           (uint3)(auVar12._10_3_ >> 0x10) * uVar33 +
           (uint3)(auVar10._10_3_ >> 0x10) * uVar34 +
           (int)(((ulong)auVar9._8_5_ & 0xffffffff) * (ulong)uVar32) + iVar27 >> 0x10;
      auVar50 = auVar50 & auVar26;
      sVar3 = auVar50._0_2_;
      bVar46 = (0 < sVar3) * (sVar3 < 0x100) * auVar50[0] - (0xff < sVar3);
      sVar3 = auVar50._4_2_;
      bVar4 = (0 < sVar3) * (sVar3 < 0x100) * auVar50[4] - (0xff < sVar3);
      sVar3 = auVar50._8_2_;
      cVar5 = (0 < sVar3) * (sVar3 < 0x100) * auVar50[8] - (0xff < sVar3);
      sVar3 = auVar50._10_2_;
      sVar25 = CONCAT11((0 < sVar3) * (sVar3 < 0x100) * auVar50[10] - (0xff < sVar3),cVar5);
      sVar3 = auVar50._12_2_;
      cVar6 = (0 < sVar3) * (sVar3 < 0x100) * auVar50[0xc] - (0xff < sVar3);
      sVar3 = auVar50._14_2_;
      sVar3 = (short)(CONCAT13((0 < sVar3) * (sVar3 < 0x100) * auVar50[0xe] - (0xff < sVar3),
                               CONCAT12(cVar6,sVar25)) >> 0x10);
      *param_1 = CONCAT13((0 < sVar3) * (sVar3 < 0x100) * cVar6 - (0xff < sVar3),
                          CONCAT12((0 < sVar25) * (sVar25 < 0x100) * cVar5 - (0xff < sVar25),
                                   CONCAT11((bVar4 != 0) * (bVar4 < 0x100) * bVar4 - (0xff < bVar4),
                                            (bVar46 != 0) * (bVar46 < 0x100) * bVar46 -
                                            (0xff < bVar46))));
    }
    if (param_3 < 2) break;
    param_3 = param_3 + -1;
    param_1 = param_1 + 1;
    uVar35 = *(uint *)(this + 0x18);
    uVar37 = (ulong)*(uint *)(this + 0x20);
    uVar39 = (ulong)*(uint *)(this + 0x28);
    iVar29 = *(int *)(this + 0x24);
  }
  return;
}


