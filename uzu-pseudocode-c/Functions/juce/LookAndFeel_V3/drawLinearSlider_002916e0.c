// Function : drawLinearSlider
// Namespace: juce:LookAndFeel_V3
// Entry    : 002916e0
// Prototype: undefined drawLinearSlider(float param_1, long * param_2, Graphics * param_3_00, int param_4, int param_5, int param_6, int param_7, uint param_8, Component * param_9)
// Body     : 002916e0 - 00291c5b


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::LookAndFeel_V3::drawLinearSlider(juce::Graphics&, int, int, int, int, float, float, float,
   juce::Slider::SliderStyle, juce::Slider&) */

void __cdecl
juce::LookAndFeel_V3::drawLinearSlider
          (float param_1,long *param_2,Graphics *param_3_00,int param_4,int param_5,int param_6,
          int param_7,uint param_8,Component *param_9)

{
  undefined1 auVar1 [12];
  undefined1 auVar2 [15];
  undefined1 auVar3 [14];
  undefined1 auVar4 [15];
  undefined1 auVar5 [15];
  undefined1 auVar6 [15];
  undefined1 auVar7 [14];
  undefined1 auVar8 [15];
  undefined1 auVar9 [15];
  undefined1 auVar10 [15];
  undefined1 auVar11 [15];
  undefined1 auVar12 [15];
  unkuint9 Var13;
  undefined1 auVar14 [15];
  undefined1 auVar15 [11];
  undefined1 auVar16 [15];
  undefined1 auVar17 [14];
  long *plVar18;
  Graphics *this;
  char cVar19;
  uint uVar20;
  ulong uVar21;
  float *pfVar22;
  Component *pCVar23;
  int iVar24;
  int iVar25;
  uint uVar26;
  float fVar27;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  uint uVar30;
  undefined1 auVar31 [15];
  uint uVar33;
  undefined1 auVar32 [16];
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  undefined1 local_d8 [16];
  ulong local_c8;
  undefined8 *local_c0;
  undefined4 local_b8;
  undefined4 local_b4;
  float *local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined1 local_88;
  ulong local_80;
  long *local_78;
  Graphics *local_70;
  float local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  float local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined1 local_48 [16];
  
  uVar21 = Component::findColour(param_9,0x1001200,'\0');
  Graphics::fillAll(param_3_00,(uint)uVar21);
  if ((param_8 & 0xfffffffe) != 2) {
    (**(code **)(*param_2 + 0x2c0))
              (param_2,param_3_00,param_4,param_5,param_6,param_7,(ulong)param_8,param_9);
                    /* WARNING: Could not recover jumptable at 0x00291868. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_2 + 0x2d0))(param_2,param_3_00,param_4,param_5,param_6,param_7);
    return;
  }
  fVar27 = (float)param_4;
  local_48 = ZEXT416((uint)fVar27);
  local_68 = (float)param_5;
  local_58 = (float)param_6;
  fVar38 = (float)param_7;
  local_98 = 0;
  uStack_90 = 0;
  local_a8 = (float *)0x0;
  uStack_a0 = 0;
  local_88 = 1;
  uStack_54 = 0;
  uStack_50 = 0;
  uStack_4c = 0;
  uStack_64 = 0;
  uStack_60 = 0;
  uStack_5c = 0;
  if (param_8 == 3) {
    fVar34 = (DAT_005d9038 + fVar38) - param_1;
    fVar35 = param_1;
    fVar36 = local_58;
  }
  else {
    fVar36 = param_1 - fVar27;
    fVar34 = fVar38;
    fVar35 = local_68;
  }
  local_78 = param_2;
  local_70 = param_3_00;
  Path::addRectangle(fVar27,fVar35,fVar36,fVar34,(Path *)&local_a8);
                    /* try { // try from 00291888 to 00291896 has its CatchHandler @ 00291c6b */
  uVar21 = Component::findColour(param_9,0x1001300,'\0');
  pCVar23 = param_9;
  do {
    fVar27 = DAT_005d9044;
    if ((*(ushort *)(pCVar23 + 0xe8) & 0x8000) != 0) break;
    pCVar23 = *(Component **)(pCVar23 + 0x30);
    fVar27 = DAT_005d9038;
  } while (pCVar23 != (Component *)0x0);
  local_80 = (ulong)param_8;
  uVar20 = Colour::withMultipliedSaturation(fVar27,(uint)uVar21);
  iVar24 = SUB84((double)((float)(uVar20 >> 0x18) * DAT_005de3cc) + DAT_005d9098,0);
  iVar25 = 0xff;
  if (iVar24 < 0xff) {
    iVar25 = iVar24;
  }
  auVar32._8_4_ = 0xffffffff;
  auVar32._0_8_ = 0xffffffffffffffff;
  auVar32._12_4_ = 0xffffffff;
  auVar31 = auVar32._0_15_ ^ ZEXT415(uVar20 >> 8);
  auVar2[0xd] = 0;
  auVar2._0_13_ = auVar31._0_13_;
  auVar2[0xe] = auVar31[7];
  auVar4[0xc] = auVar31[6];
  auVar4._0_12_ = auVar31._0_12_;
  auVar4._13_2_ = auVar2._13_2_;
  auVar5[0xb] = 0;
  auVar5._0_11_ = auVar31._0_11_;
  auVar5._12_3_ = auVar4._12_3_;
  auVar6[10] = auVar31[5];
  auVar6._0_10_ = auVar31._0_10_;
  auVar6._11_4_ = auVar5._11_4_;
  auVar8[9] = 0;
  auVar8._0_9_ = auVar31._0_9_;
  auVar8._10_5_ = auVar6._10_5_;
  auVar9[8] = auVar31[4];
  auVar9._0_8_ = auVar31._0_8_;
  auVar9._9_6_ = auVar8._9_6_;
  auVar12._7_8_ = 0;
  auVar12._0_7_ = auVar9._8_7_;
  Var13 = CONCAT81(SUB158(auVar12 << 0x40,7),auVar31[3]);
  auVar14._9_6_ = 0;
  auVar14._0_9_ = Var13;
  auVar15._1_10_ = SUB1510(auVar14 << 0x30,5);
  auVar15[0] = auVar31[2];
  auVar16._11_4_ = 0;
  auVar16._0_11_ = auVar15;
  auVar10[2] = auVar31[1];
  auVar10._0_2_ = auVar31._0_2_;
  auVar10._3_12_ = SUB1512(auVar16 << 0x20,3);
  auVar11._2_13_ = auVar10._2_13_;
  auVar11._0_2_ = auVar31._0_2_ & 0xff;
  auVar3._10_2_ = 0;
  auVar3._0_10_ = auVar11._0_10_;
  auVar3._12_2_ = (short)Var13;
  auVar17._2_4_ = auVar3._10_4_;
  auVar17._0_2_ = auVar15._0_2_;
  auVar17._6_8_ = 0;
  auVar7._4_2_ = auVar10._2_2_;
  auVar7._0_4_ = auVar11._0_4_;
  auVar7._6_8_ = SUB148(auVar17 << 0x40,6);
  fVar34 = (float)(byte)~(byte)uVar20 * _DAT_005de4b8 + DAT_005de3b0;
  uVar30 = (int)((float)(auVar11._0_4_ & 0xffff) * _DAT_005dd1a0 + _DAT_005dcd50) & _DAT_005dcd60;
  uVar33 = (int)((float)auVar7._4_4_ * _UNK_005dd1a4 + _UNK_005dcd54) & _UNK_005dcd64;
  uVar26 = iVar25 << 0x18;
  fVar39 = (float)(uVar20 >> 0x10 & 0xff);
  fVar37 = (float)(uVar20 >> 8 & 0xff);
  fVar35 = fVar39 * DAT_005de4b4;
  fVar36 = fVar37 * DAT_005de4b4;
  fVar27 = DAT_005de4b4 * (float)(uVar20 & 0xff);
  local_d8._0_12_ = ZEXT812(0);
  local_d8._12_4_ = fVar38;
  local_c8 = local_c8 & 0xffffffffffffff00;
  local_c0 = malloc(0x80);
  this = local_70;
  local_b8 = 8;
  *local_c0 = 0;
  *(uint *)(local_c0 + 1) = (int)fVar34 & 0xffU | uVar30 << 8 | uVar33 << 0x10 | uVar26;
  local_b4 = 2;
  local_c0[2] = 0x3ff0000000000000;
  *(uint *)(local_c0 + 3) =
       (int)fVar27 & 0xffU | ((int)fVar36 & 0xffU) << 8 | ((int)fVar35 & 0xffU) << 0x10 | uVar26;
                    /* try { // try from 00291a5e to 00291a72 has its CatchHandler @ 00291c5c */
  Graphics::setGradientFill(local_70,(undefined8 *)local_d8);
  free(local_c0);
                    /* try { // try from 00291a84 to 00291c31 has its CatchHandler @ 00291c6d */
  cVar19 = (**(code **)(**(long **)(this + 8) + 0x68))();
  plVar18 = local_78;
  uVar21 = local_80;
  if (cVar19 == '\0') {
    if ((long)uStack_a0._4_4_ != 0) {
      pfVar22 = local_a8;
      do {
        fVar27 = *pfVar22;
        if ((fVar27 != DAT_005de3d0) || (NAN(fVar27) || NAN(DAT_005de3d0))) {
          if ((fVar27 != DAT_005de3d4) || (NAN(fVar27) || NAN(DAT_005de3d4))) {
            if (((fVar27 != DAT_005de3d8) || (NAN(fVar27) || NAN(DAT_005de3d8))) &&
               ((fVar27 != DAT_005de3dc || (NAN(fVar27) || NAN(DAT_005de3dc))))) goto LAB_00291ae4;
          }
          local_d8 = ZEXT416((uint)DAT_005d9038);
          local_c8 = 0x3f800000;
          (**(code **)(**(long **)(this + 8) + 200))(*(long **)(this + 8),&local_a8,local_d8);
          break;
        }
        pfVar22 = pfVar22 + 2;
LAB_00291ae4:
        pfVar22 = pfVar22 + 1;
      } while (pfVar22 != local_a8 + uStack_a0._4_4_);
    }
  }
  Graphics::setColour(this,(int)((float)(uVar20 & 0xff) * DAT_005de424) & 0xffU |
                           ((int)(fVar37 * DAT_005de424) & 0xffU) << 8 |
                           uVar26 | ((int)(fVar39 * DAT_005de424) & 0xffU) << 0x10);
  if ((int)uVar21 == 3) {
    local_d8._4_4_ = param_1;
    local_d8._0_4_ = local_48._0_4_;
    auVar1._4_8_ = extraout_XMM0_Qb;
    auVar1._0_4_ = DAT_005d9960._4_4_;
    auVar28._0_8_ = auVar1._0_8_ << 0x20;
    auVar28._8_4_ = _UNK_005d9968;
    auVar28._12_4_ = _UNK_005d996c;
    auVar29._4_12_ = auVar28._4_12_;
    auVar29._0_4_ = local_58;
    local_d8._8_8_ = auVar29._0_8_;
    (**(code **)(**(long **)(this + 8) + 0xb8))(*(long **)(this + 8),local_d8);
  }
  else {
    local_d8._4_4_ = local_68;
    local_d8._0_4_ = param_1;
    local_d8._8_4_ = _DAT_005dd050;
    (**(code **)(**(long **)(this + 8) + 0xb8))(*(long **)(this + 8),local_d8);
  }
  (**(code **)(*plVar18 + 0x2c8))(plVar18,this,param_4,param_5,param_6,param_7,uVar21,param_9);
  uStack_a0 = uStack_a0 & 0xffffffff;
  free(local_a8);
  return;
}


