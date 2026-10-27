// Function : drawPopupMenuItemWithOptions
// Namespace: juce:LookAndFeel_V2
// Entry    : 00202660
// Prototype: undefined drawPopupMenuItemWithOptions(LookAndFeel_V2 * this, undefined8 param_1, undefined8 param_2, undefined1 param_3, long param_4)
// Body     : 00202660 - 0020284f


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* non-virtual thunk to juce::LookAndFeel_V2::drawPopupMenuItemWithOptions(juce::Graphics&,
   juce::Rectangle<int> const&, bool, juce::PopupMenu::Item const&, juce::PopupMenu::Options const&)
    */

void __thiscall
juce::LookAndFeel_V2::drawPopupMenuItemWithOptions
          (LookAndFeel_V2 *this,undefined8 param_1,undefined8 param_2,undefined1 param_3,
          long param_4)

{
  long *plVar1;
  long lVar2;
  undefined1 auVar3 [15];
  undefined1 auVar4 [14];
  undefined1 auVar5 [14];
  undefined1 auVar6 [15];
  undefined1 auVar7 [15];
  undefined1 auVar8 [15];
  undefined1 auVar9 [15];
  undefined1 auVar10 [15];
  undefined1 auVar11 [14];
  undefined1 auVar12 [15];
  undefined1 auVar13 [14];
  undefined1 auVar14 [15];
  undefined1 auVar15 [15];
  undefined1 auVar16 [15];
  undefined1 auVar17 [15];
  undefined1 auVar18 [15];
  undefined1 auVar19 [15];
  undefined1 auVar20 [15];
  undefined1 auVar21 [15];
  undefined1 auVar22 [15];
  unkuint9 Var23;
  undefined1 auVar24 [15];
  undefined1 auVar25 [11];
  undefined1 auVar26 [15];
  undefined1 auVar27 [14];
  undefined1 auVar28 [15];
  undefined1 auVar29 [15];
  undefined1 auVar30 [11];
  undefined1 auVar31 [15];
  undefined1 auVar32 [14];
  uint6 uVar33;
  long lVar34;
  ulong uVar35;
  long lVar36;
  undefined1 *puVar37;
  long lVar38;
  ulong uVar39;
  ulong uVar40;
  int iVar41;
  uint uVar42;
  int iVar43;
  int iVar44;
  int iVar45;
  int iVar46;
  int iVar47;
  int iVar48;
  int iVar49;
  undefined1 auVar50 [15];
  undefined1 auVar51 [15];
  
  lVar38 = param_4 + 0x60;
  plVar1 = *(long **)(param_4 + 0x30);
  if (plVar1 == (long *)0x0) {
    uVar42 = 0;
    goto LAB_00202801;
  }
  if (*(int *)(param_4 + 8) == 0) {
    uVar42 = 1;
    goto LAB_00202801;
  }
  uVar42 = 0;
  if ((long)*(int *)((long)plVar1 + 0xc) == 0) goto LAB_00202801;
  lVar2 = *plVar1;
  lVar36 = (long)*(int *)((long)plVar1 + 0xc) * 0x70;
  uVar40 = lVar36 - 0x70;
  lVar34 = lVar2;
  if (uVar40 < 0x310) {
LAB_002027d3:
    do {
      uVar42 = uVar42 + (*(byte *)(lVar34 + 0x66) ^ 1);
      lVar34 = lVar34 + 0x70;
    } while (lVar34 != lVar2 + lVar36);
  }
  else {
    uVar35 = uVar40 / 0x70 + 1;
    uVar39 = uVar35 & 0xfffffffffffffff8;
    puVar37 = (undefined1 *)(lVar2 + 0x376);
    iVar46 = 0;
    iVar47 = 0;
    iVar48 = 0;
    iVar49 = 0;
    iVar41 = 0;
    iVar43 = 0;
    iVar44 = 0;
    iVar45 = 0;
    uVar40 = uVar39;
    do {
      auVar50 = ZEXT415(CONCAT22(CONCAT11(puVar37[-0x1c0],puVar37[-0x230]),
                                 CONCAT11(puVar37[-0x2a0],puVar37[-0x310]))) ^ DAT_005dcdf0._0_15_;
      auVar51 = ZEXT415(CONCAT22(CONCAT11(*puVar37,puVar37[-0x70]),
                                 CONCAT11(puVar37[-0xe0],puVar37[-0x150]))) ^ DAT_005dcdf0._0_15_;
      auVar3[0xd] = 0;
      auVar3._0_13_ = auVar50._0_13_;
      auVar3[0xe] = auVar50[7];
      auVar6[0xc] = auVar50[6];
      auVar6._0_12_ = auVar50._0_12_;
      auVar6._13_2_ = auVar3._13_2_;
      auVar8[0xb] = 0;
      auVar8._0_11_ = auVar50._0_11_;
      auVar8._12_3_ = auVar6._12_3_;
      auVar10[10] = auVar50[5];
      auVar10._0_10_ = auVar50._0_10_;
      auVar10._11_4_ = auVar8._11_4_;
      auVar14[9] = 0;
      auVar14._0_9_ = auVar50._0_9_;
      auVar14._10_5_ = auVar10._10_5_;
      auVar16[8] = auVar50[4];
      auVar16._0_8_ = auVar50._0_8_;
      auVar16._9_6_ = auVar14._9_6_;
      auVar22._7_8_ = 0;
      auVar22._0_7_ = auVar16._8_7_;
      Var23 = CONCAT81(SUB158(auVar22 << 0x40,7),auVar50[3]);
      auVar24._9_6_ = 0;
      auVar24._0_9_ = Var23;
      auVar25._1_10_ = SUB1510(auVar24 << 0x30,5);
      auVar25[0] = auVar50[2];
      auVar26._11_4_ = 0;
      auVar26._0_11_ = auVar25;
      auVar18[2] = auVar50[1];
      auVar18._0_2_ = auVar50._0_2_;
      auVar18._3_12_ = SUB1512(auVar26 << 0x20,3);
      auVar20._2_13_ = auVar18._2_13_;
      auVar20._0_2_ = auVar50._0_2_ & 0xff;
      auVar4._10_2_ = 0;
      auVar4._0_10_ = auVar20._0_10_;
      auVar4._12_2_ = (short)Var23;
      uVar33 = CONCAT42(auVar4._10_4_,auVar25._0_2_);
      auVar27._6_8_ = 0;
      auVar27._0_6_ = uVar33;
      auVar11._4_2_ = auVar18._2_2_;
      auVar11._0_4_ = auVar20._0_4_;
      auVar11._6_8_ = SUB148(auVar27 << 0x40,6);
      iVar46 = iVar46 + (auVar20._0_4_ & 0xffff);
      iVar47 = iVar47 + auVar11._4_4_;
      iVar48 = iVar48 + (int)uVar33;
      iVar49 = iVar49 + (auVar4._10_4_ >> 0x10);
      auVar50[0xd] = 0;
      auVar50._0_13_ = auVar51._0_13_;
      auVar50[0xe] = auVar51[7];
      auVar7[0xc] = auVar51[6];
      auVar7._0_12_ = auVar51._0_12_;
      auVar7._13_2_ = auVar50._13_2_;
      auVar9[0xb] = 0;
      auVar9._0_11_ = auVar51._0_11_;
      auVar9._12_3_ = auVar7._12_3_;
      auVar12[10] = auVar51[5];
      auVar12._0_10_ = auVar51._0_10_;
      auVar12._11_4_ = auVar9._11_4_;
      auVar15[9] = 0;
      auVar15._0_9_ = auVar51._0_9_;
      auVar15._10_5_ = auVar12._10_5_;
      auVar17[8] = auVar51[4];
      auVar17._0_8_ = auVar51._0_8_;
      auVar17._9_6_ = auVar15._9_6_;
      auVar28._7_8_ = 0;
      auVar28._0_7_ = auVar17._8_7_;
      Var23 = CONCAT81(SUB158(auVar28 << 0x40,7),auVar51[3]);
      auVar29._9_6_ = 0;
      auVar29._0_9_ = Var23;
      auVar30._1_10_ = SUB1510(auVar29 << 0x30,5);
      auVar30[0] = auVar51[2];
      auVar31._11_4_ = 0;
      auVar31._0_11_ = auVar30;
      auVar19[2] = auVar51[1];
      auVar19._0_2_ = auVar51._0_2_;
      auVar19._3_12_ = SUB1512(auVar31 << 0x20,3);
      auVar21._2_13_ = auVar19._2_13_;
      auVar21._0_2_ = auVar51._0_2_ & 0xff;
      auVar5._10_2_ = 0;
      auVar5._0_10_ = auVar21._0_10_;
      auVar5._12_2_ = (short)Var23;
      uVar33 = CONCAT42(auVar5._10_4_,auVar30._0_2_);
      auVar32._6_8_ = 0;
      auVar32._0_6_ = uVar33;
      auVar13._4_2_ = auVar19._2_2_;
      auVar13._0_4_ = auVar21._0_4_;
      auVar13._6_8_ = SUB148(auVar32 << 0x40,6);
      iVar41 = iVar41 + (auVar21._0_4_ & 0xffff);
      iVar43 = iVar43 + auVar13._4_4_;
      iVar44 = iVar44 + (int)uVar33;
      iVar45 = iVar45 + (auVar5._10_4_ >> 0x10);
      puVar37 = puVar37 + 0x380;
      uVar40 = uVar40 - 8;
    } while (uVar40 != 0);
    uVar42 = iVar45 + iVar49 + iVar43 + iVar47 + iVar44 + iVar48 + iVar41 + iVar46;
    if (uVar35 != uVar39) {
      lVar34 = uVar39 * 0x70 + lVar2;
      goto LAB_002027d3;
    }
  }
  uVar42 = (uint)(uVar42 != 0);
LAB_00202801:
  if (*(int *)(param_4 + 0x60) == 0) {
    lVar38 = 0;
  }
  (**(code **)(*(long *)(this + -0x40) + 0x1b8))
            (this + -0x40,param_1,param_2,*(undefined1 *)(param_4 + 0x66),
             *(undefined1 *)(param_4 + 100),param_3,*(undefined1 *)(param_4 + 0x65),uVar42,param_4,
             param_4 + 0x58,*(undefined8 *)(param_4 + 0x38),lVar38);
  return;
}


