// Function : drawRotarySlider
// Namespace: juce:LookAndFeel_V4
// Entry    : 001f4ec0
// Prototype: undefined drawRotarySlider(float param_1, float param_2, float param_3, undefined8 param_4_00, Graphics * param_5, int param_6, int param_7, int param_8, int param_9, Component * param_10)
// Body     : 001f4ec0 - 001f5318


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* juce::LookAndFeel_V4::drawRotarySlider(juce::Graphics&, int, int, int, int, float, float, float,
   juce::Slider&) */

void __thiscall
juce::LookAndFeel_V4::drawRotarySlider
          (float param_1,float param_2,float param_3,undefined8 param_4_00,Graphics *param_5,
          int param_6,int param_7,int param_8,int param_9,Component *param_10)

{
  undefined8 __ptr;
  undefined1 auVar1 [16];
  char cVar2;
  ulong uVar3;
  ulong uVar4;
  float *pfVar5;
  Component *pCVar6;
  undefined1 auVar7 [8];
  float fVar8;
  undefined1 auVar9 [16];
  float fVar10;
  undefined1 local_118 [8];
  float fStack_110;
  float fStack_10c;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined1 local_f8;
  float local_e8;
  undefined1 local_d8 [16];
  undefined1 local_c8 [16];
  undefined1 local_b8;
  float local_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  undefined1 local_98 [16];
  undefined8 local_88;
  float local_78 [4];
  float local_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float local_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float local_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  
  local_e8 = param_2;
  uVar3 = Component::findColour(param_10,0x1001312,'\0');
  uVar4 = Component::findColour(param_10,0x1001311,'\0');
  auVar9._0_4_ = (float)param_8 + _DAT_005dce20;
  auVar9._4_4_ = (float)param_9 + _UNK_005dce24;
  auVar9._8_4_ = _UNK_005dce28 + 0.0;
  auVar9._12_4_ = _UNK_005dce2c + 0.0;
  auVar9 = maxps(auVar9,(undefined1  [16])0x0);
  fVar8 = auVar9._0_4_;
  fStack_a4 = auVar9._4_4_;
  fVar10 = fStack_a4;
  if (fVar8 <= fStack_a4) {
    fVar10 = fVar8;
  }
  local_a8 = fVar10 * DAT_005d9044 * DAT_005d9044;
  if (DAT_00651f38 <= local_a8) {
    local_a8 = DAT_00651f38;
  }
  local_68 = fVar10 * DAT_005d9044 - DAT_005d9044 * local_a8;
  local_c8 = (undefined1  [16])0x0;
  local_d8 = (undefined1  [16])0x0;
  local_b8 = 1;
  local_58 = fVar8 * _DAT_005d9920 + (float)param_6 + _DAT_005dce30;
  fStack_54 = fStack_a4 * _UNK_005d9924 + (float)param_7 + _UNK_005dce34;
  fStack_50 = auVar9._8_4_ * _UNK_005d9928 + _UNK_005dce38 + 0.0;
  fStack_4c = auVar9._12_4_ * _UNK_005d992c + _UNK_005dce3c + 0.0;
  fStack_a0 = fStack_a4;
  fStack_9c = fStack_a4;
  fStack_64 = fStack_a4;
  fStack_60 = fStack_a4;
  fStack_5c = fStack_a4;
  local_48 = fStack_54;
  fStack_44 = fStack_54;
  fStack_40 = fStack_54;
  fStack_3c = fStack_54;
  Path::addCentredArc(local_58,fStack_54,local_68,local_68,0.0,local_e8,param_3,(Path *)local_d8,
                      '\x01');
                    /* try { // try from 001f4feb to 001f4ff6 has its CatchHandler @ 001f5334 */
  Graphics::setColour(param_5,(int)uVar3);
  local_98._4_8_ = 0x200000001;
  local_98._0_4_ = local_a8;
  _local_118 = ZEXT416(DAT_005d9038);
  local_108 = 0x3f800000;
                    /* try { // try from 001f5037 to 001f50e7 has its CatchHandler @ 001f5336 */
  cVar2 = (**(code **)(**(long **)(param_5 + 8) + 0x68))();
  if ((cVar2 == '\0') && ((long)(int)local_d8._12_4_ != 0)) {
    pfVar5 = (float *)local_d8._0_8_;
    do {
      fVar10 = *pfVar5;
      if ((fVar10 != DAT_005de3d0) || (NAN(fVar10) || NAN(DAT_005de3d0))) {
        if ((fVar10 != DAT_005de3d4) || (NAN(fVar10) || NAN(DAT_005de3d4))) {
          if (((fVar10 != DAT_005de3d8) || (NAN(fVar10) || NAN(DAT_005de3d8))) &&
             ((fVar10 != DAT_005de3dc || (NAN(fVar10) || NAN(DAT_005de3dc))))) goto LAB_001f5094;
        }
        (**(code **)(**(long **)(param_5 + 8) + 0xd8))
                  (*(long **)(param_5 + 8),local_d8,local_98,local_118);
        break;
      }
      pfVar5 = pfVar5 + 2;
LAB_001f5094:
      pfVar5 = pfVar5 + 1;
    } while (pfVar5 != (float *)(local_d8._0_8_ + (long)(int)local_d8._12_4_ * 4));
  }
  fVar10 = param_1 * (param_3 - local_e8) + local_e8;
  pCVar6 = param_10;
  do {
    if ((*(ushort *)(pCVar6 + 0xe8) & 0x8000) != 0) goto LAB_001f5257;
    pCVar6 = *(Component **)(pCVar6 + 0x30);
  } while (pCVar6 != (Component *)0x0);
  local_108 = 0;
  uStack_100 = 0;
  _local_118 = ZEXT816(0);
  local_f8 = 1;
  Path::addCentredArc(local_58,local_48,local_68,local_68,0.0,local_e8,fVar10,(Path *)local_118,
                      '\x01');
                    /* try { // try from 001f5161 to 001f516c has its CatchHandler @ 001f531b */
  Graphics::setColour(param_5,(int)uVar4);
  local_78[0] = local_a8;
  local_78[1] = 1.4013e-45;
  local_78[2] = 2.8026e-45;
  local_98 = ZEXT416(DAT_005d9038);
  local_88 = 0x3f800000;
                    /* try { // try from 001f51a9 to 001f523e has its CatchHandler @ 001f5319 */
  cVar2 = (**(code **)(**(long **)(param_5 + 8) + 0x68))();
  if ((cVar2 == '\0') && ((long)(int)fStack_10c != 0)) {
    pfVar5 = (float *)((long)local_118 + (long)(int)fStack_10c * 4);
    auVar7 = local_118;
    do {
      fVar8 = *(float *)auVar7;
      if ((fVar8 != DAT_005de3d0) || (NAN(fVar8) || NAN(DAT_005de3d0))) {
        if ((fVar8 != DAT_005de3d4) || (NAN(fVar8) || NAN(DAT_005de3d4))) {
          if (((fVar8 != DAT_005de3d8) || (NAN(fVar8) || NAN(DAT_005de3d8))) &&
             ((fVar8 != DAT_005de3dc || (NAN(fVar8) || NAN(DAT_005de3dc))))) goto LAB_001f51f4;
        }
        (**(code **)(**(long **)(param_5 + 8) + 0xd8))
                  (*(long **)(param_5 + 8),local_118,local_78,local_98);
        break;
      }
      auVar7 = (undefined1  [8])((long)auVar7 + 8);
LAB_001f51f4:
      auVar7 = (undefined1  [8])((long)auVar7 + 4);
    } while (auVar7 != (undefined1  [8])pfVar5);
  }
  fStack_10c = 0.0;
  auVar9 = _local_118;
  auVar7 = local_118;
  _local_118 = auVar9;
  free((void *)auVar7);
LAB_001f5257:
  fVar10 = fVar10 + _DAT_005de42c;
  local_e8 = cosf(fVar10);
  fVar10 = sinf(fVar10);
                    /* try { // try from 001f5282 to 001f529a has its CatchHandler @ 001f5338 */
  uVar3 = Component::findColour(param_10,0x1001300,'\0');
  Graphics::setColour(param_5,(int)uVar3);
  fStack_110 = local_a8 + local_a8;
  local_118._4_4_ = (fVar10 * local_68 + fStack_54) - DAT_005d9044 * fStack_110;
  local_118._0_4_ = (local_e8 * local_68 + local_58) - DAT_005d9044 * fStack_110;
  fStack_10c = fStack_110;
                    /* try { // try from 001f52ea to 001f52f4 has its CatchHandler @ 001f5332 */
  (**(code **)(**(long **)(param_5 + 8) + 0x130))(*(long **)(param_5 + 8),local_118);
  auVar9 = local_d8;
  local_d8._12_4_ = 0;
  auVar1 = local_d8;
  local_d8._0_8_ = auVar9._0_8_;
  __ptr = local_d8._0_8_;
  local_d8 = auVar1;
  free((void *)__ptr);
  return;
}


