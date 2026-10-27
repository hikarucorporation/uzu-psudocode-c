// Function : withAlpha
// Namespace: juce:Colour
// Entry    : 002eb8e0
// Prototype: uint withAlpha(float param_1, Colour * this)
// Body     : 002eb8e0 - 002eb91d


/* juce::Colour::withAlpha(float) const */

uint __thiscall juce::Colour::withAlpha(float param_1,Colour *this)

{
  uint uVar1;
  
  uVar1 = 0;
  if ((0.0 < param_1) && (uVar1 = 0xff000000, param_1 < DAT_005d9038)) {
    uVar1 = SUB84((double)(param_1 * DAT_005de3b0) + DAT_005d9098,0) << 0x18;
  }
  return *(uint *)this & 0xffffff | uVar1;
}


