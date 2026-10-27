// Function : withMultipliedSaturation
// Namespace: juce:Colour
// Entry    : 002ebb10
// Prototype: undefined withMultipliedSaturation(float param_1, uint param_2)
// Body     : 002ebb10 - 002ebc21


/* juce::Colour::withMultipliedSaturation(float) const */

void __thiscall juce::Colour::withMultipliedSaturation(float param_1,uint param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  bVar1 = (byte)(param_2 >> 8);
  uVar5 = param_2 >> 0x10 & 0xff;
  uVar2 = param_2 & 0xff;
  uVar7 = (uint)bVar1;
  if (bVar1 < uVar2) {
    uVar7 = uVar2;
  }
  uVar4 = uVar5;
  if (uVar5 < uVar7) {
    uVar4 = uVar7;
  }
  uVar6 = (uint)bVar1;
  uVar3 = uVar6;
  if (uVar2 < uVar6) {
    uVar3 = uVar2;
  }
  if (uVar4 == 0) {
    fVar10 = 0.0;
    fVar8 = 0.0;
    fVar9 = 0.0;
  }
  else {
    if (uVar5 <= uVar3) {
      uVar3 = uVar5;
    }
    fVar8 = (float)(int)(uVar4 - uVar3) / (float)uVar4;
    fVar9 = 0.0;
    if ((0.0 < fVar8) && (uVar4 != uVar3)) {
      fVar9 = DAT_005d9038 / (float)(int)(uVar4 - uVar3);
      fVar11 = (float)(int)(uVar4 - uVar6) * fVar9;
      fVar10 = (float)(int)(uVar4 - uVar2) * fVar9;
      if (uVar5 < uVar7) {
        fVar9 = fVar9 * (float)(int)(uVar4 - uVar5);
        if (uVar4 == uVar6) {
          fVar10 = (fVar9 + DAT_005d9078) - fVar10;
        }
        else {
          fVar10 = (fVar11 + DAT_005d94d4) - fVar9;
        }
      }
      else {
        fVar10 = fVar10 - fVar11;
      }
      fVar10 = fVar10 * DAT_0065d420;
      fVar9 = (float)(~-(uint)(fVar10 < 0.0) & (uint)fVar10 |
                     (uint)(DAT_005d9038 + fVar10) & -(uint)(fVar10 < 0.0));
    }
    fVar10 = (float)uVar4 / DAT_005de3b0;
  }
  fVar11 = fVar8 * param_1;
  if (DAT_005d9038 <= fVar8 * param_1) {
    fVar11 = DAT_005d9038;
  }
  ColourHelpers::HSB::toRGB(fVar9,fVar11,fVar10,param_2 >> 0x18);
  return;
}


