// Function : drawTreeviewPlusMinusBox
// Namespace: juce:LookAndFeel_V3
// Entry    : 001ed5c0
// Prototype: undefined drawTreeviewPlusMinusBox(undefined8 param_1_00, Graphics * param_2, undefined8 * param_3, uint param_4, int param_5, char param_6)
// Body     : 001ed5c0 - 001ed8ff


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* juce::LookAndFeel_V3::drawTreeviewPlusMinusBox(juce::Graphics&, juce::Rectangle<float> const&,
   juce::Colour, bool, bool) */

void __thiscall
juce::LookAndFeel_V3::drawTreeviewPlusMinusBox
          (undefined8 param_1_00,Graphics *param_2,undefined8 *param_3,uint param_4,int param_5,
          char param_6)

{
  char cVar1;
  float *pfVar2;
  uint *puVar3;
  uint uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  float fVar10;
  float fVar11;
  float *local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined1 local_48;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  
  local_58 = 0;
  uStack_50 = 0;
  local_68 = (float *)0x0;
  uStack_60 = 0;
  local_48 = 1;
  if (param_5 == 0) {
    fVar5 = 0.0;
    fVar6 = DAT_005d9044;
  }
  else {
    fVar6 = 0.0;
    fVar5 = DAT_005d9044;
  }
  Path::addTriangle(0.0,0.0,DAT_005d9038,fVar6,fVar5,DAT_005d9038,(Path *)&local_68);
  fVar6 = (float)(param_4 >> 0x10 & 0xff) / DAT_005de3b0;
  fVar7 = (float)(param_4 >> 8 & 0xff) / DAT_005de3b0;
  fVar5 = (float)(param_4 & 0xff) / DAT_005de3b0;
  fVar5 = fVar5 * fVar5 * _DAT_005de3bc +
          fVar6 * fVar6 * _DAT_005de3b8 + fVar7 * fVar7 * _DAT_005de3b4;
  if (fVar5 < DAT_005d9058) {
    fVar5 = sqrtf(fVar5);
  }
  else {
    fVar5 = SQRT(fVar5);
  }
  puVar3 = &_ZN4juce7ColoursL5whiteE_474;
  if (DAT_005d9044 <= fVar5) {
    puVar3 = &_ZN4juce7ColoursL5blackE_344;
  }
  uVar4 = 0x4c000000;
  if (param_6 != '\0') {
    uVar4 = 0x80000000;
  }
                    /* try { // try from 001ed6c4 to 001ed6cb has its CatchHandler @ 001ed902 */
  Graphics::setColour(param_2,*puVar3 & 0xffffff | uVar4);
  fVar5 = *(float *)(param_3 + 1) + DAT_0065b5a8;
  if (fVar5 <= 0.0) {
    fVar5 = 0.0;
  }
  local_40 = DAT_005d9038;
  local_30 = DAT_005d9038;
  if (0.0 < fVar5) {
    fVar7 = DAT_0065b200 * *(float *)((long)param_3 + 0xc);
    fVar6 = *(float *)((long)param_3 + 0xc) - (fVar7 + fVar7);
    if (fVar6 <= 0.0) {
      fVar6 = 0.0;
    }
    local_3c = 0.0;
    if (0.0 < fVar6) {
      fVar11 = local_58._4_4_ - (float)local_58;
      if (0.0 < fVar11) {
        fVar10 = uStack_50._4_4_ - (float)uStack_50;
        local_38 = 0.0;
        local_34 = 0.0;
        local_2c = 0.0;
        if (0.0 < fVar10) {
          auVar8._4_4_ = fVar6;
          auVar8._0_4_ = fVar10;
          auVar8._8_8_ = 0;
          auVar9._4_4_ = fVar5;
          auVar9._0_4_ = fVar11;
          auVar9._8_8_ = 0;
          auVar9 = divps(auVar8,auVar9);
          local_30 = auVar9._0_4_;
          if (local_30 <= auVar9._4_4_) {
            local_30 = local_30 * fVar5;
            local_40 = fVar5;
          }
          else {
            local_40 = fVar6 / local_30;
            local_30 = fVar6;
          }
          local_40 = local_40 / fVar11;
          local_30 = local_30 / fVar10;
          local_3c = local_40 * 0.0;
          local_38 = (fVar11 * DAT_005d98c8 - (float)local_58) * local_40 +
                     fVar5 * DAT_005d9044 + _DAT_005dcdc0 + (float)*param_3;
          local_34 = local_30 * 0.0;
          local_2c = (DAT_005d98c8 * fVar10 - (float)uStack_50) * local_30 +
                     fVar6 * DAT_005d9044 + fVar7 + (float)((ulong)*param_3 >> 0x20);
        }
        goto LAB_001ed82d;
      }
    }
  }
  local_38 = 0.0;
  local_3c = 0.0;
  local_34 = 0.0;
  local_2c = 0.0;
LAB_001ed82d:
                    /* try { // try from 001ed859 to 001ed8e1 has its CatchHandler @ 001ed900 */
  cVar1 = (**(code **)(**(long **)(param_2 + 8) + 0x68))();
  if (cVar1 == '\0') {
    if ((long)uStack_60._4_4_ != 0) {
      pfVar2 = local_68;
      do {
        fVar5 = *pfVar2;
        if ((fVar5 != DAT_005de3d0) || (NAN(fVar5) || NAN(DAT_005de3d0))) {
          if ((fVar5 != DAT_005de3d4) || (NAN(fVar5) || NAN(DAT_005de3d4))) {
            if (((fVar5 != DAT_005de3d8) || (NAN(fVar5) || NAN(DAT_005de3d8))) &&
               ((fVar5 != DAT_005de3dc || (NAN(fVar5) || NAN(DAT_005de3dc))))) goto LAB_001ed8a4;
          }
          (**(code **)(**(long **)(param_2 + 8) + 200))(*(long **)(param_2 + 8),&local_68,&local_40)
          ;
          break;
        }
        pfVar2 = pfVar2 + 2;
LAB_001ed8a4:
        pfVar2 = pfVar2 + 1;
      } while (pfVar2 != local_68 + uStack_60._4_4_);
    }
  }
  uStack_60 = uStack_60 & 0xffffffff;
  free(local_68);
  return;
}


