// Function : drawScrollbar
// Namespace: juce:LookAndFeel_V4
// Entry    : 001e9dd0
// Prototype: undefined drawScrollbar(undefined8 param_1, Graphics * param_2, Component * param_3, int param_4, int param_5, undefined4 param_6, undefined4 param_7, char param_8, int param_9, undefined4 param_10, char param_11)
// Body     : 001e9dd0 - 001e9f32


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::LookAndFeel_V4::drawScrollbar(juce::Graphics&, juce::ScrollBar&, int, int, int, int, bool,
   int, int, bool, bool) */

void __cdecl
juce::LookAndFeel_V4::drawScrollbar
          (undefined8 param_1,Graphics *param_2,Component *param_3,int param_4,int param_5,
          undefined4 param_6,undefined4 param_7,char param_8,int param_9,undefined4 param_10,
          char param_11)

{
  undefined1 auVar1 [15];
  undefined1 auVar2 [14];
  undefined1 auVar3 [15];
  undefined1 auVar4 [15];
  undefined1 auVar5 [15];
  undefined1 auVar6 [14];
  undefined1 auVar7 [15];
  undefined1 auVar8 [15];
  undefined1 auVar9 [15];
  undefined1 auVar10 [15];
  undefined1 auVar11 [15];
  unkuint9 Var12;
  undefined1 auVar13 [15];
  undefined1 auVar14 [11];
  undefined1 auVar15 [15];
  undefined1 auVar16 [14];
  uint uVar17;
  ulong uVar18;
  undefined1 auVar19 [15];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 local_48 [16];
  undefined8 local_30;
  undefined8 uStack_28;
  
  if (param_8 == '\0') {
    local_48._0_8_ = CONCAT44(param_7,param_10);
    param_4 = param_9;
    param_9 = param_5;
  }
  else {
    local_48._0_8_ = CONCAT44(param_10,param_6);
  }
  local_48._8_8_ = 0;
  uVar18 = Component::findColour(param_3,0x1000400,'\0');
  uVar17 = (uint)uVar18;
  if (param_11 != '\0') {
    auVar21._8_4_ = 0xffffffff;
    auVar21._0_8_ = 0xffffffffffffffff;
    auVar21._12_4_ = 0xffffffff;
    auVar19 = auVar21._0_15_ ^ ZEXT415((uint)(uVar18 >> 8) & 0xffffff);
    auVar1[0xd] = 0;
    auVar1._0_13_ = auVar19._0_13_;
    auVar1[0xe] = auVar19[7];
    auVar3[0xc] = auVar19[6];
    auVar3._0_12_ = auVar19._0_12_;
    auVar3._13_2_ = auVar1._13_2_;
    auVar4[0xb] = 0;
    auVar4._0_11_ = auVar19._0_11_;
    auVar4._12_3_ = auVar3._12_3_;
    auVar5[10] = auVar19[5];
    auVar5._0_10_ = auVar19._0_10_;
    auVar5._11_4_ = auVar4._11_4_;
    auVar7[9] = 0;
    auVar7._0_9_ = auVar19._0_9_;
    auVar7._10_5_ = auVar5._10_5_;
    auVar8[8] = auVar19[4];
    auVar8._0_8_ = auVar19._0_8_;
    auVar8._9_6_ = auVar7._9_6_;
    auVar11._7_8_ = 0;
    auVar11._0_7_ = auVar8._8_7_;
    Var12 = CONCAT81(SUB158(auVar11 << 0x40,7),auVar19[3]);
    auVar13._9_6_ = 0;
    auVar13._0_9_ = Var12;
    auVar14._1_10_ = SUB1510(auVar13 << 0x30,5);
    auVar14[0] = auVar19[2];
    auVar15._11_4_ = 0;
    auVar15._0_11_ = auVar14;
    auVar9[2] = auVar19[1];
    auVar9._0_2_ = auVar19._0_2_;
    auVar9._3_12_ = SUB1512(auVar15 << 0x20,3);
    auVar10._2_13_ = auVar9._2_13_;
    auVar10._0_2_ = auVar19._0_2_ & 0xff;
    auVar2._10_2_ = 0;
    auVar2._0_10_ = auVar10._0_10_;
    auVar2._12_2_ = (short)Var12;
    auVar16._2_4_ = auVar2._10_4_;
    auVar16._0_2_ = auVar14._0_2_;
    auVar16._6_8_ = 0;
    auVar6._4_2_ = auVar9._2_2_;
    auVar6._0_4_ = auVar10._0_4_;
    auVar6._6_8_ = SUB148(auVar16 << 0x40,6);
    uVar17 = (int)((float)(byte)~(byte)uVar18 * _DAT_005de3e0 + DAT_005de3b0) & 0xffU |
             ((int)((float)(auVar10._0_4_ & 0xffff) * _DAT_005dcd70 + _DAT_005dcd50) & _DAT_005dcd60
             ) << 8 | ((int)((float)auVar6._4_4_ * _UNK_005dcd74 + _UNK_005dcd54) & _UNK_005dcd64)
                      << 0x10 | uVar17 & 0xff000000;
  }
  Graphics::setColour(param_2,uVar17);
  auVar20._0_4_ = -(uint)((int)DAT_00651fa0 < (int)local_48._0_8_);
  auVar20._4_4_ = -(uint)(DAT_00651fa0._4_4_ < (int)((ulong)local_48._0_8_ >> 0x20));
  auVar20._8_4_ = -(uint)(DAT_00651fa0._8_4_ < 0);
  auVar20._12_4_ = -(uint)(DAT_00651fa0._12_4_ < 0);
  auVar21 = ~auVar20 & _DAT_00651fa0 | local_48 & auVar20;
  local_30 = CONCAT44((float)(param_9 + 1),(float)(param_4 + 1));
  uStack_28 = CONCAT44((float)(auVar21._4_4_ + _UNK_005dcd84),(float)(auVar21._0_4_ + _DAT_005dcd80)
                      );
  (**(code **)(**(long **)(param_2 + 8) + 0x120))(*(long **)(param_2 + 8),&local_30);
  return;
}


