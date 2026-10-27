// Function : contrasting
// Namespace: juce:Colour
// Entry    : 002ebc30
// Prototype: uint contrasting(float param_1, Colour * this)
// Body     : 002ebc30 - 002ebda9


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* juce::Colour::contrasting(float) const */

uint __thiscall juce::Colour::contrasting(float param_1,Colour *this)

{
  Colour CVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  float fVar8;
  
  fVar8 = ((float)(byte)*this / DAT_005de3b0) * ((float)(byte)*this / DAT_005de3b0) * _DAT_005de3bc
          + ((float)(byte)this[2] / DAT_005de3b0) * ((float)(byte)this[2] / DAT_005de3b0) *
            _DAT_005de3b8 +
            ((float)(byte)this[1] / DAT_005de3b0) * ((float)(byte)this[1] / DAT_005de3b0) *
            _DAT_005de3b4;
  if (fVar8 < 0.0) {
    fVar8 = sqrtf(fVar8);
  }
  else {
    fVar8 = SQRT(fVar8);
  }
  puVar4 = &_ZN4juce7ColoursL5whiteE_474;
  if (DAT_005d9044 <= fVar8) {
    puVar4 = &_ZN4juce7ColoursL5blackE_344;
  }
  uVar2 = 0;
  if ((0.0 < param_1) && (uVar2 = 0xff000000, param_1 < DAT_005d9038)) {
    uVar2 = SUB84((double)(param_1 * DAT_005de3b0) + DAT_005d9098,0) << 0x18;
  }
  uVar3 = *puVar4 & 0xffffff;
  uVar6 = uVar3 >> 8;
  uVar7 = uVar3 >> 0x10;
  CVar1 = this[3];
  if (CVar1 == (Colour)0x0) {
    uVar5 = uVar2 >> 0x18;
  }
  else {
    uVar5 = ((byte)CVar1 ^ 0xff) * (~uVar2 >> 0x18) >> 8 ^ 0xff;
    uVar2 = ((~uVar2 >> 0x18) * (uint)(byte)CVar1) / uVar5;
    uVar7 = uVar7 + (((byte)this[2] - uVar7) * uVar2 >> 8);
    uVar6 = uVar6 + (((uint)(byte)this[1] - (uVar6 & 0xff)) * uVar2 >> 8);
    uVar3 = uVar3 + (((uint)(byte)*this - (*puVar4 & 0xff)) * uVar2 >> 8);
  }
  return uVar3 & 0xff | (uVar6 & 0xff) << 8 | (uVar7 & 0xff) << 0x10 | uVar5 << 0x18;
}


