// Function : drawButtonBackground
// Namespace: juce:LookAndFeel_V3
// Entry    : 002930f0
// Prototype: undefined drawButtonBackground(undefined8 param_1_00, Graphics * param_2, long param_3, undefined8 * param_4, char param_5, char param_6)
// Body     : 002930f0 - 002930f4


/* WARNING: Heritage AFTER dead removal. Example location: XMM0_Qa : 0x00290d33 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* non-virtual thunk to juce::LookAndFeel_V3::drawButtonBackground(juce::Graphics&, juce::Button&,
   juce::Colour const&, bool, bool) */

void __thiscall
juce::LookAndFeel_V3::drawButtonBackground
          (undefined8 param_1_00,Graphics *param_2,long param_3,undefined8 *param_4,char param_5,
          char param_6)

{
  float fVar1;
  undefined1 auVar2 [14];
  undefined1 auVar3 [12];
  unkbyte10 Var4;
  undefined1 auVar5 [12];
  char cVar6;
  char extraout_AL;
  uint uVar7;
  undefined4 uVar8;
  uint uVar9;
  long lVar10;
  float *pfVar11;
  uint uVar12;
  byte bVar13;
  int iVar14;
  int iVar15;
  undefined1 uVar16;
  undefined1 extraout_XMM0_Ba;
  undefined1 extraout_XMM0_Ba_00;
  undefined1 extraout_XMM0_Ba_01;
  undefined1 uVar17;
  undefined1 extraout_XMM0_Bb;
  undefined1 extraout_XMM0_Bb_00;
  undefined1 extraout_XMM0_Bb_01;
  undefined1 uVar18;
  undefined1 extraout_XMM0_Bc;
  undefined1 extraout_XMM0_Bc_00;
  undefined1 extraout_XMM0_Bc_01;
  undefined1 uVar19;
  undefined1 extraout_XMM0_Bd;
  undefined1 extraout_XMM0_Bd_00;
  undefined1 extraout_XMM0_Bd_01;
  undefined1 extraout_XMM0_Be;
  undefined1 uVar20;
  undefined1 extraout_XMM0_Bf;
  undefined1 uVar21;
  undefined1 extraout_XMM0_Bg;
  undefined1 uVar22;
  undefined1 extraout_XMM0_Bh;
  undefined1 uVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined2 uVar44;
  undefined1 auVar29 [15];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar38 [16];
  undefined1 auVar37 [16];
  undefined1 auVar36 [16];
  undefined1 auVar35 [16];
  undefined1 auVar34 [16];
  undefined1 auVar33 [16];
  undefined1 auVar32 [16];
  undefined1 auVar41 [16];
  undefined1 auVar40 [16];
  undefined1 auVar39 [16];
  undefined1 auVar42 [16];
  float fVar43;
  uint auStack_d0 [2];
  undefined8 uStack_c8;
  undefined4 uStack_c0;
  undefined1 auStack_b8 [16];
  undefined8 uStack_a8;
  undefined8 *puStack_a0;
  undefined4 uStack_98;
  undefined4 uStack_94;
  float *pfStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 uStack_68;
  undefined1 auStack_58 [16];
  undefined1 auStack_48 [16];
  undefined1 auStack_38 [16];
  
  uVar16 = (undefined1)DAT_005de3e8;
  uVar17 = (undefined1)((uint)DAT_005de3e8 >> 8);
  uVar18 = (undefined1)((uint)DAT_005de3e8 >> 0x10);
  uVar19 = (undefined1)((uint)DAT_005de3e8 >> 0x18);
  for (lVar10 = Component::currentlyFocusedComponent; lVar10 != param_3;
      lVar10 = *(long *)(lVar10 + 0x30)) {
    if (lVar10 == 0) {
      uVar16 = (undefined1)DAT_005de3c8;
      uVar17 = (undefined1)((uint)DAT_005de3c8 >> 8);
      uVar18 = (undefined1)((uint)DAT_005de3c8 >> 0x10);
      uVar19 = (undefined1)((uint)DAT_005de3c8 >> 0x18);
      break;
    }
  }
  uVar7 = Colour::withMultipliedSaturation
                    ((float)CONCAT13(uVar19,CONCAT12(uVar18,CONCAT11(uVar17,uVar16))),
                     *(uint *)param_4);
  uVar16 = SUB41(DAT_005d9044,0);
  uVar17 = (undefined1)((uint)DAT_005d9044 >> 8);
  uVar18 = (undefined1)((uint)DAT_005d9044 >> 0x10);
  uVar19 = (undefined1)((uint)DAT_005d9044 >> 0x18);
  lVar10 = param_3;
  do {
    if ((*(ushort *)(lVar10 + 0xe8) & 0x8000) != 0) goto LAB_0029091b;
    lVar10 = *(long *)(lVar10 + 0x30);
  } while (lVar10 != 0);
  uVar16 = (undefined1)DAT_005de3c8;
  uVar17 = (undefined1)((uint)DAT_005de3c8 >> 8);
  uVar18 = (undefined1)((uint)DAT_005de3c8 >> 0x10);
  uVar19 = (undefined1)((uint)DAT_005de3c8 >> 0x18);
LAB_0029091b:
  uVar12 = SUB84((double)((float)(uVar7 >> 0x18) *
                         (float)CONCAT13(uVar19,CONCAT12(uVar18,CONCAT11(uVar17,uVar16)))) +
                 DAT_005d9098,0);
  uVar9 = 0xff;
  if ((int)uVar12 < 0xff) {
    uVar9 = uVar12;
  }
  auStack_d0[0] = uVar7 & 0xffffff | uVar9 << 0x18;
  if ((param_5 != '\0') || (uVar7 = auStack_d0[0], param_6 != '\0')) {
    if (param_6 == '\0') {
      uVar16 = (undefined1)DAT_005d9068;
      uVar17 = (undefined1)((uint)DAT_005d9068 >> 8);
      uVar18 = (undefined1)((uint)DAT_005d9068 >> 0x10);
      uVar19 = (undefined1)((uint)DAT_005d9068 >> 0x18);
    }
    else {
      uVar16 = (undefined1)DAT_005d9070;
      uVar17 = (undefined1)((uint)DAT_005d9070 >> 8);
      uVar18 = (undefined1)((uint)DAT_005d9070 >> 0x10);
      uVar19 = (undefined1)((uint)DAT_005d9070 >> 0x18);
    }
    uVar7 = Colour::contrasting((float)CONCAT13(uVar19,CONCAT12(uVar18,CONCAT11(uVar17,uVar16))),
                                (Colour *)auStack_d0);
    uVar12 = uVar7;
  }
  auStack_58._0_4_ = (float)(int)*(undefined8 *)(param_3 + 0x40) + _DAT_005d9910;
  auStack_58._4_4_ = (float)(int)((ulong)*(undefined8 *)(param_3 + 0x40) >> 0x20) + _UNK_005d9914;
  auStack_58._8_4_ = _UNK_005d9918 + 0.0;
  auStack_58._12_4_ = _UNK_005d991c + 0.0;
  iVar14 = -(uint)(0.0 < (float)auStack_58._0_4_);
  iVar15 = -(uint)(0.0 < auStack_58._4_4_);
  auVar28._4_4_ = iVar15;
  auVar28._0_4_ = iVar14;
  auVar28._8_4_ = iVar15;
  auVar28._12_4_ = iVar15;
  auVar27._8_8_ = auVar28._8_8_;
  auVar27._4_4_ = iVar14;
  auVar27._0_4_ = iVar14;
  uVar8 = movmskpd(uVar12,auVar27);
  if ((char)uVar8 == '\x03') {
    uVar9 = *(uint *)(param_3 + 0x1b0);
    uStack_78 = 0;
    uStack_70 = 0;
    pfStack_88 = (float *)0x0;
    uStack_80 = 0;
    uStack_68 = 1;
    auStack_48._4_4_ = auStack_58._4_4_;
    auStack_48._0_4_ = auStack_58._4_4_;
    auStack_48._8_4_ = auStack_58._4_4_;
    auStack_48._12_4_ = auStack_58._4_4_;
    Path::addRoundedRectangle
              (DAT_005d9044,DAT_005d9044,(float)auStack_58._0_4_,auStack_58._4_4_,DAT_005d94d4,
               DAT_005d94d4,(Path *)&pfStack_88,(uint)((uVar9 & 5) == 0),(uVar9 & 6) == 0,
               (uVar9 & 9) == 0,(uVar9 & 10) == 0);
    auStack_38 = ZEXT416(uVar7 >> 8);
    uVar12 = uVar7 >> 0x10 & 0xff;
    bVar13 = (byte)(uVar7 >> 8);
    uVar9 = (uint)bVar13;
    if ((uint)bVar13 < (uVar7 & 0xff)) {
      uVar9 = uVar7 & 0xff;
    }
    if (uVar9 <= uVar12) {
      uVar9 = uVar12;
    }
    if (uVar9 == 0) {
      uVar9 = CONCAT13(extraout_XMM0_Bd,
                       CONCAT12(extraout_XMM0_Bc,CONCAT11(extraout_XMM0_Bb,extraout_XMM0_Ba))) ^
              CONCAT13(extraout_XMM0_Bd,
                       CONCAT12(extraout_XMM0_Bc,CONCAT11(extraout_XMM0_Bb,extraout_XMM0_Ba)));
      uVar16 = (undefined1)uVar9;
      uVar17 = (undefined1)(uVar9 >> 8);
      uVar18 = (undefined1)(uVar9 >> 0x10);
      uVar19 = (undefined1)(uVar9 >> 0x18);
      uVar9 = CONCAT13(extraout_XMM0_Bh,
                       CONCAT12(extraout_XMM0_Bg,CONCAT11(extraout_XMM0_Bf,extraout_XMM0_Be))) ^
              CONCAT13(extraout_XMM0_Bh,
                       CONCAT12(extraout_XMM0_Bg,CONCAT11(extraout_XMM0_Bf,extraout_XMM0_Be)));
      uVar20 = (undefined1)uVar9;
      uVar21 = (undefined1)(uVar9 >> 8);
      uVar22 = (undefined1)(uVar9 >> 0x10);
      uVar23 = (undefined1)(uVar9 >> 0x18);
    }
    else {
      uVar12 = CONCAT13(extraout_XMM0_Bh,
                        CONCAT12(extraout_XMM0_Bg,CONCAT11(extraout_XMM0_Bf,extraout_XMM0_Be))) ^
               CONCAT13(extraout_XMM0_Bh,
                        CONCAT12(extraout_XMM0_Bg,CONCAT11(extraout_XMM0_Bf,extraout_XMM0_Be)));
      uVar20 = (undefined1)uVar12;
      uVar21 = (undefined1)(uVar12 >> 8);
      uVar22 = (undefined1)(uVar12 >> 0x10);
      uVar23 = (undefined1)(uVar12 >> 0x18);
      fVar1 = (float)uVar9 / DAT_005de3b0;
      uVar16 = SUB41(fVar1,0);
      uVar17 = (undefined1)((uint)fVar1 >> 8);
      uVar18 = (undefined1)((uint)fVar1 >> 0x10);
      uVar19 = (undefined1)((uint)fVar1 >> 0x18);
    }
    fVar1 = (float)CONCAT13(uVar19,CONCAT12(uVar18,CONCAT11(uVar17,uVar16)));
    auVar30._8_4_ = 0xffffffff;
    auVar30._0_8_ = 0xffffffffffffffff;
    auVar30._12_4_ = 0xffffffff;
    auVar29 = auVar30._0_15_ ^ ZEXT415(uVar7 >> 8);
    uVar9 = CONCAT13(uVar19,CONCAT12(uVar18,CONCAT11(uVar17,uVar16))) ^
            CONCAT13(uVar19,CONCAT12(uVar18,CONCAT11(uVar17,uVar16)));
    uVar12 = CONCAT13(uVar23,CONCAT12(uVar22,CONCAT11(uVar21,uVar20))) ^
             CONCAT13(uVar23,CONCAT12(uVar22,CONCAT11(uVar21,uVar20)));
    uVar16 = (undefined1)uVar12;
    uVar17 = (undefined1)(uVar12 >> 8);
    uVar18 = (undefined1)(uVar12 >> 0x10);
    uVar19 = (undefined1)(uVar12 >> 0x18);
    auVar38._0_14_ = auVar29._0_14_;
    auVar38[0xe] = auVar29[7];
    auVar38[0xf] = uVar19;
    auVar37._14_2_ = auVar38._14_2_;
    auVar37._0_13_ = auVar29._0_13_;
    auVar37[0xd] = uVar18;
    auVar36._13_3_ = auVar37._13_3_;
    auVar36._0_12_ = auVar29._0_12_;
    auVar36[0xc] = auVar29[6];
    auVar35._12_4_ = auVar36._12_4_;
    auVar35._0_11_ = auVar29._0_11_;
    auVar35[0xb] = uVar17;
    auVar34._11_5_ = auVar35._11_5_;
    auVar34._0_10_ = auVar29._0_10_;
    auVar34[10] = auVar29[5];
    auVar33._10_6_ = auVar34._10_6_;
    auVar33._0_9_ = auVar29._0_9_;
    auVar33[9] = uVar16;
    auVar32._9_7_ = auVar33._9_7_;
    auVar32._0_8_ = auVar29._0_8_;
    auVar32[8] = auVar29[4];
    Var4 = CONCAT91(CONCAT81(auVar32._8_8_,(char)(uVar9 >> 0x18)),auVar29[3]);
    auVar3._2_10_ = Var4;
    auVar3[1] = (char)(uVar9 >> 0x10);
    auVar3[0] = auVar29[2];
    auVar2._2_12_ = auVar3;
    auVar2[1] = (char)(uVar9 >> 8);
    auVar2[0] = auVar29[1];
    uVar44 = CONCAT11((char)uVar9,auVar29[0]);
    auVar31._2_14_ = auVar2;
    auVar41._0_12_ = auVar31._0_12_;
    auVar41._12_2_ = (short)Var4;
    auVar41._14_2_ = (short)(uVar12 >> 0x10);
    auVar40._12_4_ = auVar41._12_4_;
    auVar40._0_10_ = auVar31._0_10_;
    auVar40._10_2_ = (short)uVar12;
    auVar39._10_6_ = auVar40._10_6_;
    auVar39._0_8_ = auVar31._0_8_;
    auVar39._8_2_ = auVar3._0_2_;
    auVar5._4_8_ = auVar39._8_8_;
    auVar5._2_2_ = (short)(uVar9 >> 0x10);
    auVar5._0_2_ = auVar2._0_2_;
    auVar42._0_4_ = (int)((float)CONCAT22((short)uVar9,uVar44) * _DAT_005dcee0 + _DAT_005dcd50);
    auVar42._4_4_ = (int)((float)auVar5._0_4_ * _UNK_005dcee4 + _UNK_005dcd54);
    auVar42._8_4_ = (int)((float)auVar39._8_4_ * _UNK_005dcee8 + _UNK_005dcd58);
    auVar42._12_4_ = (int)((float)auVar40._12_4_ * _UNK_005dceec + _UNK_005dcd5c);
    fVar43 = (float)(byte)~(byte)uVar7 * _DAT_005de450 + DAT_005de3b0;
    auVar42 = auVar42 & _DAT_005dcd60;
    fVar24 = (float)(uVar7 >> 0x10 & 0xff) * DAT_005de3cc;
    fVar25 = (float)bVar13 * DAT_005de3cc;
    fVar26 = (float)(uVar7 & 0xff) * DAT_005de3cc;
    auStack_b8[4] = uVar16;
    auStack_b8._0_4_ = uVar9;
    auStack_b8[5] = uVar17;
    auStack_b8[6] = uVar18;
    auStack_b8[7] = uVar19;
    auStack_b8._8_4_ = 0;
    auStack_b8._12_4_ = auStack_58._4_4_;
    uStack_a8 = uStack_a8 & 0xffffffffffffff00;
    puStack_a0 = malloc(0x80);
    uStack_98 = 8;
    *puStack_a0 = 0;
    *(uint *)(puStack_a0 + 1) =
         (int)fVar43 & 0xffU | auVar42._0_4_ << 8 | auVar42._4_4_ << 0x10 | uVar7 & 0xff000000;
    uStack_94 = 2;
    puStack_a0[2] = 0x3ff0000000000000;
    *(uint *)(puStack_a0 + 3) =
         (int)fVar26 & 0xffU |
         ((int)fVar25 & 0xffU) << 8 | ((int)fVar24 & 0xffU) << 0x10 | uVar7 & 0xff000000;
    Graphics::setGradientFill(param_2,(undefined8 *)auStack_b8);
    free(puStack_a0);
    cVar6 = (**(code **)(**(long **)(param_2 + 8) + 0x68))();
    if (cVar6 == '\0') {
      if ((long)uStack_80._4_4_ != 0) {
        pfVar11 = pfStack_88;
        do {
          fVar24 = *pfVar11;
          if ((fVar24 != DAT_005de3d0) || (NAN(fVar24) || NAN(DAT_005de3d0))) {
            if ((fVar24 != DAT_005de3d4) || (NAN(fVar24) || NAN(DAT_005de3d4))) {
              if (((fVar24 != DAT_005de3d8) || (NAN(fVar24) || NAN(DAT_005de3d8))) &&
                 ((fVar24 != DAT_005de3dc || (NAN(fVar24) || NAN(DAT_005de3dc)))))
              goto LAB_00290c04;
            }
            auStack_b8 = ZEXT416((uint)DAT_005d9038);
            uStack_a8 = 0x3f800000;
            (**(code **)(**(long **)(param_2 + 8) + 200))
                      (*(long **)(param_2 + 8),&pfStack_88,auStack_b8);
            break;
          }
          pfVar11 = pfVar11 + 2;
LAB_00290c04:
          pfVar11 = pfVar11 + 1;
        } while (pfVar11 != pfStack_88 + uStack_80._4_4_);
      }
    }
    fVar24 = ((float)(uVar7 >> 0x18) / DAT_005de3b0) * DAT_005d98f0;
    auStack_58._0_4_ = fVar24;
    fVar1 = fVar1 * fVar24 * fVar1;
    uVar7 = 0;
    if ((0.0 < fVar1) && (uVar7 = 0xff000000, fVar1 < DAT_005d9038)) {
      uVar7 = SUB84((double)(fVar1 * DAT_005de3b0) + DAT_005d9098,0) << 0x18;
    }
    Graphics::setColour(param_2,_ZN4juce7ColoursL5whiteE_144 & 0xffffff | uVar7);
    uStack_c8 = 0x3f800000;
    uStack_c0 = 0;
    fVar1 = (DAT_005de4b0 + auStack_48._0_4_) / auStack_48._0_4_;
    auStack_b8._0_8_ = (ulong)DAT_005dd050;
    auStack_b8._8_4_ = 0;
    auStack_b8._12_4_ = fVar1 * 0.0;
    uStack_a8 = CONCAT44(fVar1,fVar1);
    (**(code **)(**(long **)(param_2 + 8) + 0x68))
              (CONCAT17(uVar19,CONCAT16(uVar18,CONCAT15(uVar17,CONCAT14(uVar16,CONCAT13(
                                                  extraout_XMM0_Bd_00,
                                                  CONCAT12(extraout_XMM0_Bc_00,
                                                           CONCAT11(extraout_XMM0_Bb_00,
                                                                    extraout_XMM0_Ba_00))))))),
               fVar1 * 0.0);
    uVar16 = extraout_XMM0_Ba_00;
    uVar17 = extraout_XMM0_Bb_00;
    uVar18 = extraout_XMM0_Bc_00;
    uVar19 = extraout_XMM0_Bd_00;
    if (extraout_AL == '\0') {
      if ((long)uStack_80._4_4_ != 0) {
        uVar16 = SUB41(DAT_005de3d0,0);
        uVar17 = (undefined1)((uint)DAT_005de3d0 >> 8);
        uVar18 = (undefined1)((uint)DAT_005de3d0 >> 0x10);
        uVar19 = (undefined1)((uint)DAT_005de3d0 >> 0x18);
        pfVar11 = pfStack_88;
        do {
          fVar1 = *pfVar11;
          if ((fVar1 != DAT_005de3d0) || (NAN(fVar1) || NAN(DAT_005de3d0))) {
            if ((fVar1 != DAT_005de3d4) || (NAN(fVar1) || NAN(DAT_005de3d4))) {
              if (((fVar1 != DAT_005de3d8) || (NAN(fVar1) || NAN(DAT_005de3d8))) &&
                 ((fVar1 != DAT_005de3dc || (NAN(fVar1) || NAN(DAT_005de3dc))))) goto LAB_00290d74;
            }
            (**(code **)(**(long **)(param_2 + 8) + 0xd8))
                      (*(long **)(param_2 + 8),&pfStack_88,&uStack_c8,auStack_b8);
            uVar16 = extraout_XMM0_Ba_01;
            uVar17 = extraout_XMM0_Bb_01;
            uVar18 = extraout_XMM0_Bc_01;
            uVar19 = extraout_XMM0_Bd_01;
            break;
          }
          pfVar11 = pfVar11 + 2;
LAB_00290d74:
          pfVar11 = pfVar11 + 1;
        } while (pfVar11 != pfStack_88 + uStack_80._4_4_);
      }
    }
    uVar7 = 0;
    if (((float)(CONCAT13(uVar19,CONCAT12(uVar18,CONCAT11(uVar17,uVar16))) ^
                CONCAT13(uVar19,CONCAT12(uVar18,CONCAT11(uVar17,uVar16)))) < (float)auStack_58._0_4_
        ) && (uVar7 = 0xff000000, (float)auStack_58._0_4_ < DAT_005d9038)) {
      uVar7 = SUB84((double)((float)auStack_58._0_4_ * DAT_005de3b0) + DAT_005d9098,0) << 0x18;
    }
    Graphics::setColour(param_2,_ZN4juce7ColoursL5blackE_14 & 0xffffff | uVar7);
    uStack_c8 = 0x3f800000;
    uStack_c0 = 0;
    auStack_b8 = ZEXT416((uint)DAT_005d9038);
    uStack_a8 = 0x3f800000;
    cVar6 = (**(code **)(**(long **)(param_2 + 8) + 0x68))();
    if (cVar6 == '\0') {
      if ((long)uStack_80._4_4_ != 0) {
        pfVar11 = pfStack_88;
        do {
          fVar1 = *pfVar11;
          if ((fVar1 != DAT_005de3d0) || (NAN(fVar1) || NAN(DAT_005de3d0))) {
            if ((fVar1 != DAT_005de3d4) || (NAN(fVar1) || NAN(DAT_005de3d4))) {
              if (((fVar1 != DAT_005de3d8) || (NAN(fVar1) || NAN(DAT_005de3d8))) &&
                 ((fVar1 != DAT_005de3dc || (NAN(fVar1) || NAN(DAT_005de3dc))))) goto LAB_00290e84;
            }
            (**(code **)(**(long **)(param_2 + 8) + 0xd8))
                      (*(long **)(param_2 + 8),&pfStack_88,&uStack_c8,auStack_b8);
            break;
          }
          pfVar11 = pfVar11 + 2;
LAB_00290e84:
          pfVar11 = pfVar11 + 1;
        } while (pfVar11 != pfStack_88 + uStack_80._4_4_);
      }
    }
    uStack_80 = uStack_80 & 0xffffffff;
    free(pfStack_88);
  }
  return;
}


