// Function : contrasting
// Namespace: juce:Colour
// Entry    : 002ebdb0
// Prototype: undefined contrasting(uint param_1, uint param_2)
// Body     : 002ebdb0 - 002ec110


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::Colour::contrasting(juce::Colour, juce::Colour) */

void __cdecl juce::Colour::contrasting(uint param_1,uint param_2)

{
  uint uVar1;
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
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  
  fVar10 = (float)(param_1 >> 0x10 & 0xff) / DAT_005de3b0;
  fVar8 = (float)(param_1 >> 8 & 0xff) / DAT_005de3b0;
  fVar9 = (float)(param_1 & 0xff) / DAT_005de3b0;
  fVar8 = fVar9 * fVar9 * _DAT_005de3bc +
          fVar10 * fVar10 * _DAT_005de3b8 + fVar8 * fVar8 * _DAT_005de3b4;
  if (fVar8 < 0.0) {
    fVar8 = sqrtf(fVar8);
  }
  else {
    fVar8 = SQRT(fVar8);
  }
  fVar10 = (float)(param_2 >> 0x10 & 0xff) / DAT_005de3b0;
  fVar12 = (float)(param_2 >> 8 & 0xff) / DAT_005de3b0;
  fVar9 = (float)(param_2 & 0xff) / DAT_005de3b0;
  fVar9 = fVar9 * fVar9 * _DAT_005de3bc +
          fVar10 * fVar10 * _DAT_005de3b8 + fVar12 * fVar12 * _DAT_005de3b4;
  if (fVar9 < 0.0) {
    fVar9 = sqrtf(fVar9);
  }
  else {
    fVar9 = SQRT(fVar9);
  }
  fVar12 = 0.0;
  fVar13 = 0.0;
  fVar10 = 0.0;
  do {
    fVar15 = (float)((uint)(fVar13 - fVar9) & _DAT_005d91c0);
    fVar16 = (float)((uint)(fVar13 - fVar8) & _UNK_005d91c4);
    fVar14 = _UNK_005dcc74 - fVar16;
    if (fVar15 <= _UNK_005dcc74 - fVar16) {
      fVar14 = fVar15;
    }
    fVar11 = _DAT_005dcc70 - fVar15;
    if (fVar14 <= _DAT_005dcc70 - fVar15) {
      fVar11 = fVar14;
    }
    if (fVar16 <= fVar11) {
      fVar11 = fVar16;
    }
    fVar14 = fVar11;
    if (fVar11 <= fVar10) {
      fVar14 = fVar10;
    }
    fVar12 = (float)(~-(uint)(fVar10 < fVar11) & (uint)fVar12 |
                    -(uint)(fVar10 < fVar11) & (uint)fVar13);
    fVar13 = fVar13 + DAT_005de538;
    fVar10 = fVar14;
  } while (fVar13 < DAT_005d9038);
  uVar3 = SUB84((double)((float)(param_2 >> 0x18) * DAT_005d9044) + DAT_005d9098,0);
  uVar7 = 0xff;
  if ((int)uVar3 < 0xff) {
    uVar7 = uVar3;
  }
  uVar3 = param_2 & 0xffffff;
  uVar6 = uVar3 >> 8;
  uVar5 = uVar3 >> 0x10;
  if (param_1 < 0x1000000) {
    uVar7 = uVar7 & 0xff;
  }
  else {
    uVar1 = ~(uVar7 << 0x18) >> 0x18;
    uVar7 = (param_1 >> 0x18 ^ 0xff) * uVar1 >> 8 ^ 0xff;
    uVar1 = (uVar1 * (param_1 >> 0x18)) / uVar7;
    uVar5 = uVar5 + (((param_1 >> 0x10 & 0xff) - uVar5) * uVar1 >> 8);
    uVar6 = uVar6 + (((param_1 >> 8 & 0xff) - (uVar6 & 0xff)) * uVar1 >> 8);
    uVar3 = uVar3 + (((param_1 & 0xff) - (param_2 & 0xff)) * uVar1 >> 8);
  }
  uVar3 = uVar3 & 0xff;
  uVar5 = uVar5 & 0xff;
  uVar6 = uVar6 & 0xff;
  uVar1 = uVar6;
  if (uVar6 < uVar3) {
    uVar1 = uVar3;
  }
  uVar4 = uVar5;
  if (uVar5 < uVar1) {
    uVar4 = uVar1;
  }
  uVar2 = uVar6;
  if (uVar3 < uVar6) {
    uVar2 = uVar3;
  }
  if (uVar4 == 0) {
    fVar9 = 0.0;
    fVar8 = 0.0;
  }
  else {
    if (uVar5 <= uVar2) {
      uVar2 = uVar5;
    }
    fVar9 = (float)(int)(uVar4 - uVar2) / (float)uVar4;
    fVar8 = 0.0;
    if ((0.0 < fVar9) && (uVar4 != uVar2)) {
      fVar13 = DAT_005d9038 / (float)(int)(uVar4 - uVar2);
      fVar8 = (float)(int)(uVar4 - uVar6) * fVar13;
      fVar10 = (float)(int)(uVar4 - uVar3) * fVar13;
      if (uVar5 < uVar1) {
        fVar13 = fVar13 * (float)(int)(uVar4 - uVar5);
        if (uVar4 == uVar6) {
          fVar10 = (fVar13 + DAT_005d9078) - fVar10;
        }
        else {
          fVar10 = (fVar8 + DAT_005d94d4) - fVar13;
        }
      }
      else {
        fVar10 = fVar10 - fVar8;
      }
      fVar10 = fVar10 * DAT_0065d420;
      fVar8 = (float)(~-(uint)(fVar10 < 0.0) & (uint)fVar10 |
                     (uint)(DAT_005d9038 + fVar10) & -(uint)(fVar10 < 0.0));
    }
  }
  ColourHelpers::HSB::toRGB(fVar8,fVar9,fVar12,uVar7);
  return;
}


