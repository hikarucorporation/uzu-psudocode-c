// Function : addSubMenu
// Namespace: juce:PopupMenu
// Entry    : 002d8680
// Prototype: undefined addSubMenu(PopupMenu * this, undefined8 * param_1, long * param_2, int param_3)
// Body     : 002d8680 - 002d8af7


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* juce::PopupMenu::addSubMenu(juce::String, juce::PopupMenu, bool) */

void __thiscall
juce::PopupMenu::addSubMenu(PopupMenu *this,undefined8 *param_1,long *param_2,int param_3)

{
  undefined8 uVar1;
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
  undefined1 auVar33 [16];
  uint6 uVar34;
  long lVar35;
  long lVar36;
  int iVar37;
  ulong uVar38;
  long lVar39;
  undefined1 *puVar40;
  ulong uVar41;
  ulong uVar42;
  int iVar43;
  uint uVar44;
  int iVar45;
  int iVar46;
  int iVar47;
  int iVar48;
  int iVar49;
  int iVar50;
  int iVar51;
  undefined1 auVar52 [15];
  undefined1 auVar53 [15];
  undefined1 *local_110;
  undefined4 local_108;
  undefined1 local_100 [16];
  undefined1 local_f0 [16];
  long *local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined1 local_c8 [16];
  undefined1 *local_b8;
  undefined8 local_b0;
  undefined1 local_a8;
  undefined1 *local_a0;
  undefined4 local_98;
  undefined1 local_90 [16];
  undefined1 local_80 [16];
  undefined1 local_70 [16];
  undefined1 local_60 [16];
  undefined8 local_50;
  undefined1 *local_48;
  undefined4 local_40;
  undefined1 uStack_3c;
  undefined1 uStack_3b;
  undefined2 uStack_3a;
  undefined1 uStack_38;
  
  uVar1 = *param_1;
  *param_1 = &DAT_0061ac58;
  lVar2 = *param_2;
  *param_2 = 0;
  lVar35 = param_2[1];
  iVar37 = *(int *)((long)param_2 + 0xc);
  param_2[1] = 0;
  lVar39 = param_2[2];
  param_2[2] = 0;
  local_90 = (undefined1  [16])0x0;
  local_80 = (undefined1  [16])0x0;
  local_70 = (undefined1  [16])0x0;
  local_60 = (undefined1  [16])0x0;
  local_50 = 0;
  local_48 = &DAT_0061ac58;
  local_40 = 0;
  uStack_3b = 0;
  uStack_3a = 0;
  uStack_38 = 0;
  local_98 = 0;
  uVar44 = 0;
  if ((param_3 == 0) || (iVar37 == 0)) goto LAB_002d8898;
  uVar41 = (long)iVar37 * 0x70 - 0x70;
  lVar36 = lVar2;
  if (uVar41 < 0x310) {
LAB_002d887c:
    do {
      uVar44 = uVar44 + (*(byte *)(lVar36 + 0x66) ^ 1);
      lVar36 = lVar36 + 0x70;
    } while (lVar36 != (long)iVar37 * 0x70 + lVar2);
  }
  else {
    uVar38 = uVar41 / 0x70 + 1;
    uVar42 = uVar38 & 0xfffffffffffffff8;
    puVar40 = (undefined1 *)(lVar2 + 0x376);
    iVar48 = 0;
    iVar49 = 0;
    iVar50 = 0;
    iVar51 = 0;
    iVar43 = 0;
    iVar45 = 0;
    iVar46 = 0;
    iVar47 = 0;
    uVar41 = uVar42;
    do {
      auVar52 = ZEXT415(CONCAT22(CONCAT11(puVar40[-0x1c0],puVar40[-0x230]),
                                 CONCAT11(puVar40[-0x2a0],puVar40[-0x310]))) ^ DAT_005dcdf0._0_15_;
      auVar53 = ZEXT415(CONCAT22(CONCAT11(*puVar40,puVar40[-0x70]),
                                 CONCAT11(puVar40[-0xe0],puVar40[-0x150]))) ^ DAT_005dcdf0._0_15_;
      auVar3[0xd] = 0;
      auVar3._0_13_ = auVar52._0_13_;
      auVar3[0xe] = auVar52[7];
      auVar6[0xc] = auVar52[6];
      auVar6._0_12_ = auVar52._0_12_;
      auVar6._13_2_ = auVar3._13_2_;
      auVar8[0xb] = 0;
      auVar8._0_11_ = auVar52._0_11_;
      auVar8._12_3_ = auVar6._12_3_;
      auVar10[10] = auVar52[5];
      auVar10._0_10_ = auVar52._0_10_;
      auVar10._11_4_ = auVar8._11_4_;
      auVar14[9] = 0;
      auVar14._0_9_ = auVar52._0_9_;
      auVar14._10_5_ = auVar10._10_5_;
      auVar16[8] = auVar52[4];
      auVar16._0_8_ = auVar52._0_8_;
      auVar16._9_6_ = auVar14._9_6_;
      auVar22._7_8_ = 0;
      auVar22._0_7_ = auVar16._8_7_;
      Var23 = CONCAT81(SUB158(auVar22 << 0x40,7),auVar52[3]);
      auVar24._9_6_ = 0;
      auVar24._0_9_ = Var23;
      auVar25._1_10_ = SUB1510(auVar24 << 0x30,5);
      auVar25[0] = auVar52[2];
      auVar26._11_4_ = 0;
      auVar26._0_11_ = auVar25;
      auVar18[2] = auVar52[1];
      auVar18._0_2_ = auVar52._0_2_;
      auVar18._3_12_ = SUB1512(auVar26 << 0x20,3);
      auVar20._2_13_ = auVar18._2_13_;
      auVar20._0_2_ = auVar52._0_2_ & 0xff;
      auVar4._10_2_ = 0;
      auVar4._0_10_ = auVar20._0_10_;
      auVar4._12_2_ = (short)Var23;
      uVar34 = CONCAT42(auVar4._10_4_,auVar25._0_2_);
      auVar27._6_8_ = 0;
      auVar27._0_6_ = uVar34;
      auVar11._4_2_ = auVar18._2_2_;
      auVar11._0_4_ = auVar20._0_4_;
      auVar11._6_8_ = SUB148(auVar27 << 0x40,6);
      iVar48 = iVar48 + (auVar20._0_4_ & 0xffff);
      iVar49 = iVar49 + auVar11._4_4_;
      iVar50 = iVar50 + (int)uVar34;
      iVar51 = iVar51 + (auVar4._10_4_ >> 0x10);
      auVar52[0xd] = 0;
      auVar52._0_13_ = auVar53._0_13_;
      auVar52[0xe] = auVar53[7];
      auVar7[0xc] = auVar53[6];
      auVar7._0_12_ = auVar53._0_12_;
      auVar7._13_2_ = auVar52._13_2_;
      auVar9[0xb] = 0;
      auVar9._0_11_ = auVar53._0_11_;
      auVar9._12_3_ = auVar7._12_3_;
      auVar12[10] = auVar53[5];
      auVar12._0_10_ = auVar53._0_10_;
      auVar12._11_4_ = auVar9._11_4_;
      auVar15[9] = 0;
      auVar15._0_9_ = auVar53._0_9_;
      auVar15._10_5_ = auVar12._10_5_;
      auVar17[8] = auVar53[4];
      auVar17._0_8_ = auVar53._0_8_;
      auVar17._9_6_ = auVar15._9_6_;
      auVar28._7_8_ = 0;
      auVar28._0_7_ = auVar17._8_7_;
      Var23 = CONCAT81(SUB158(auVar28 << 0x40,7),auVar53[3]);
      auVar29._9_6_ = 0;
      auVar29._0_9_ = Var23;
      auVar30._1_10_ = SUB1510(auVar29 << 0x30,5);
      auVar30[0] = auVar53[2];
      auVar31._11_4_ = 0;
      auVar31._0_11_ = auVar30;
      auVar19[2] = auVar53[1];
      auVar19._0_2_ = auVar53._0_2_;
      auVar19._3_12_ = SUB1512(auVar31 << 0x20,3);
      auVar21._2_13_ = auVar19._2_13_;
      auVar21._0_2_ = auVar53._0_2_ & 0xff;
      auVar5._10_2_ = 0;
      auVar5._0_10_ = auVar21._0_10_;
      auVar5._12_2_ = (short)Var23;
      uVar34 = CONCAT42(auVar5._10_4_,auVar30._0_2_);
      auVar32._6_8_ = 0;
      auVar32._0_6_ = uVar34;
      auVar13._4_2_ = auVar19._2_2_;
      auVar13._0_4_ = auVar21._0_4_;
      auVar13._6_8_ = SUB148(auVar32 << 0x40,6);
      iVar43 = iVar43 + (auVar21._0_4_ & 0xffff);
      iVar45 = iVar45 + auVar13._4_4_;
      iVar46 = iVar46 + (int)uVar34;
      iVar47 = iVar47 + (auVar5._10_4_ >> 0x10);
      puVar40 = puVar40 + 0x380;
      uVar41 = uVar41 - 8;
    } while (uVar41 != 0);
    uVar44 = iVar47 + iVar51 + iVar45 + iVar49 + iVar46 + iVar50 + iVar43 + iVar48;
    if (uVar38 != uVar42) {
      lVar36 = uVar42 * 0x70 + lVar2;
      goto LAB_002d887c;
    }
  }
  uVar44 = (uint)(uVar44 != 0);
LAB_002d8898:
  uStack_3c = (undefined1)uVar44;
  local_a0 = (undefined1 *)uVar1;
                    /* try { // try from 002d88a0 to 002d88a9 has its CatchHandler @ 002d8af8 */
  local_e0 = operator_new(0x18);
  *local_e0 = lVar2;
  *(int *)(local_e0 + 1) = (int)lVar35;
  *(int *)((long)local_e0 + 0xc) = iVar37;
  local_e0[2] = lVar39;
  uStack_3b = 0;
  local_a0 = &DAT_0061ac58;
  local_108 = 0;
  local_100 = (undefined1  [16])0x0;
  local_f0 = (undefined1  [16])0x0;
  local_70 = (undefined1  [16])0x0;
  local_d8 = 0;
  local_d0 = 0;
  local_60 = (undefined1  [16])0x0;
  local_c8 = (undefined1  [16])0x0;
  local_b8 = &DAT_0061ac58;
  local_48 = &DAT_0061ac58;
  local_a8 = uStack_38;
  local_b0 = CONCAT26(uStack_3a,(uint6)CONCAT14(uStack_3c,local_40));
  iVar37 = *(int *)(this + 0xc);
  if ((int)*(uint *)(this + 8) <= iVar37) {
    uVar44 = iVar37 + ((iVar37 - (iVar37 + 1 >> 0x1f)) + 1 >> 1) + 9U & 0xfffffff8;
    if (*(uint *)(this + 8) != uVar44) {
      local_110 = (undefined1 *)uVar1;
      if ((int)uVar44 < 1) {
        free(*(void **)this);
        *(undefined8 *)this = 0;
      }
      else {
        ArrayBase<juce::PopupMenu::Item,juce::DummyCriticalSection>::setAllocatedSizeInternal
                  ((ArrayBase<juce::PopupMenu::Item,juce::DummyCriticalSection> *)this,uVar44);
      }
    }
    *(uint *)(this + 8) = uVar44;
    iVar37 = *(int *)(this + 0xc);
  }
  *(int *)(this + 0xc) = iVar37 + 1;
  lVar2 = *(long *)this;
  lVar39 = (long)iVar37 * 0x70;
  *(undefined8 *)(lVar2 + lVar39) = uVar1;
  local_110 = &DAT_0061ac58;
  *(undefined4 *)(lVar2 + 8 + lVar39) = 0;
  *(undefined1 (*) [16])(lVar2 + 0x10 + lVar39) = (undefined1  [16])0x0;
  *(undefined8 *)(lVar2 + 0x20 + lVar39) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar39) = local_f0._8_8_;
  if (local_f0._0_8_ != 0) {
    *(undefined8 *)(lVar2 + lVar39 + 0x10) = local_100._0_8_;
    *(undefined8 *)(lVar2 + lVar39 + 0x18) = local_100._8_8_;
    *(undefined8 *)(lVar2 + 0x20 + lVar39) = local_f0._0_8_;
    local_f0 = (undefined1  [16])0x0;
  }
  *(long **)(lVar2 + 0x30 + lVar39) = local_e0;
  local_e0 = (long *)0x0;
  *(undefined8 *)(lVar2 + 0x38 + lVar39) = local_d8;
  local_d8 = 0;
  *(undefined8 *)(lVar2 + 0x40 + lVar39) = local_d0;
  local_d0 = 0;
  *(undefined8 *)(lVar2 + 0x48 + lVar39) = local_c8._0_8_;
  uVar1 = local_c8._8_8_;
  auVar33._8_8_ = 0;
  auVar33._0_8_ = local_c8._8_8_;
  local_c8 = auVar33 << 0x40;
  *(undefined8 *)(lVar2 + 0x50 + lVar39) = uVar1;
  *(undefined1 **)(lVar2 + 0x58 + lVar39) = local_b8;
  local_b8 = &DAT_0061ac58;
  *(undefined1 *)(lVar2 + 0x68 + lVar39) = local_a8;
  *(undefined8 *)(lVar2 + 0x60 + lVar39) = local_b0;
  Item::~Item((Item *)&local_110);
  Item::~Item((Item *)&local_a0);
  return;
}


