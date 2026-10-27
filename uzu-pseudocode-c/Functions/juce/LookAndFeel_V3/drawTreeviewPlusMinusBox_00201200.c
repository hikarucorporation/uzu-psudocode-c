// Function : drawTreeviewPlusMinusBox
// Namespace: juce:LookAndFeel_V3
// Entry    : 00201200
// Prototype: undefined drawTreeviewPlusMinusBox(undefined8 param_1_00, Graphics * param_2, undefined8 * param_3, undefined8 param_4, undefined8 param_5, char param_6)
// Body     : 00201200 - 00201204


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* non-virtual thunk to juce::LookAndFeel_V3::drawTreeviewPlusMinusBox(juce::Graphics&,
   juce::Rectangle<float> const&, juce::Colour, bool, bool) */

void __thiscall
juce::LookAndFeel_V3::drawTreeviewPlusMinusBox
          (undefined8 param_1_00,Graphics *param_2,undefined8 *param_3,undefined8 param_4,
          undefined8 param_5,char param_6)

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
  float *pfStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 uStack_48;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  
  uStack_58 = 0;
  uStack_50 = 0;
  pfStack_68 = (float *)0x0;
  uStack_60 = 0;
  uStack_48 = 1;
  if ((int)param_5 == 0) {
    fVar5 = 0.0;
    fVar6 = DAT_005d9044;
  }
  else {
    fVar6 = 0.0;
    fVar5 = DAT_005d9044;
  }
  Path::addTriangle(0.0,0.0,DAT_005d9038,fVar6,fVar5,DAT_005d9038,(Path *)&pfStack_68);
  fVar6 = (float)((uint)param_4 >> 0x10 & 0xff) / DAT_005de3b0;
  fVar7 = (float)((uint)param_4 >> 8 & 0xff) / DAT_005de3b0;
  fVar5 = (float)((uint)param_4 & 0xff) / DAT_005de3b0;
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
  Graphics::setColour(param_2,*puVar3 & 0xffffff | uVar4);
  fVar5 = *(float *)(param_3 + 1) + DAT_0065b5a8;
  if (fVar5 <= 0.0) {
    fVar5 = 0.0;
  }
  fStack_40 = DAT_005d9038;
  fStack_30 = DAT_005d9038;
  if (0.0 < fVar5) {
    fVar7 = DAT_0065b200 * *(float *)((long)param_3 + 0xc);
    fVar6 = *(float *)((long)param_3 + 0xc) - (fVar7 + fVar7);
    if (fVar6 <= 0.0) {
      fVar6 = 0.0;
    }
    fStack_3c = 0.0;
    if (0.0 < fVar6) {
      fVar11 = uStack_58._4_4_ - (float)uStack_58;
      if (0.0 < fVar11) {
        fVar10 = uStack_50._4_4_ - (float)uStack_50;
        fStack_38 = 0.0;
        fStack_34 = 0.0;
        fStack_2c = 0.0;
        if (0.0 < fVar10) {
          auVar8._4_4_ = fVar6;
          auVar8._0_4_ = fVar10;
          auVar8._8_8_ = 0;
          auVar9._4_4_ = fVar5;
          auVar9._0_4_ = fVar11;
          auVar9._8_8_ = 0;
          auVar9 = divps(auVar8,auVar9);
          fStack_30 = auVar9._0_4_;
          if (fStack_30 <= auVar9._4_4_) {
            fStack_30 = fStack_30 * fVar5;
            fStack_40 = fVar5;
          }
          else {
            fStack_40 = fVar6 / fStack_30;
            fStack_30 = fVar6;
          }
          fStack_40 = fStack_40 / fVar11;
          fStack_30 = fStack_30 / fVar10;
          fStack_3c = fStack_40 * 0.0;
          fStack_38 = (fVar11 * DAT_005d98c8 - (float)uStack_58) * fStack_40 +
                      fVar5 * DAT_005d9044 + _DAT_005dcdc0 + (float)*param_3;
          fStack_34 = fStack_30 * 0.0;
          fStack_2c = (DAT_005d98c8 * fVar10 - (float)uStack_50) * fStack_30 +
                      fVar6 * DAT_005d9044 + fVar7 + (float)((ulong)*param_3 >> 0x20);
        }
        goto LAB_001ed82d;
      }
    }
  }
  fStack_38 = 0.0;
  fStack_3c = 0.0;
  fStack_34 = 0.0;
  fStack_2c = 0.0;
LAB_001ed82d:
  cVar1 = (**(code **)(**(long **)(param_2 + 8) + 0x68))();
  if (cVar1 == '\0') {
    if ((long)uStack_60._4_4_ != 0) {
      pfVar2 = pfStack_68;
      do {
        fVar5 = *pfVar2;
        if ((fVar5 != DAT_005de3d0) || (NAN(fVar5) || NAN(DAT_005de3d0))) {
          if ((fVar5 != DAT_005de3d4) || (NAN(fVar5) || NAN(DAT_005de3d4))) {
            if (((fVar5 != DAT_005de3d8) || (NAN(fVar5) || NAN(DAT_005de3d8))) &&
               ((fVar5 != DAT_005de3dc || (NAN(fVar5) || NAN(DAT_005de3dc))))) goto LAB_001ed8a4;
          }
          (**(code **)(**(long **)(param_2 + 8) + 200))
                    (*(long **)(param_2 + 8),&pfStack_68,&fStack_40);
          break;
        }
        pfVar2 = pfVar2 + 2;
LAB_001ed8a4:
        pfVar2 = pfVar2 + 1;
      } while (pfVar2 != pfStack_68 + uStack_60._4_4_);
    }
  }
  uStack_60 = uStack_60 & 0xffffffff;
  free(pfStack_68);
  return;
}


