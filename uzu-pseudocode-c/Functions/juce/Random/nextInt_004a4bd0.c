// Function : nextInt
// Namespace: juce:Random
// Entry    : 004a4bd0
// Prototype: ulong nextInt(Random * this)
// Body     : 004a4bd0 - 004a4bf6


/* juce::Random::nextInt() */

ulong __thiscall juce::Random::nextInt(Random *this)

{
  ulong uVar1;
  
  uVar1 = *(long *)this * 0x5deece66d + 0xb;
  *(ulong *)this = uVar1 & 0xffffffffffff;
  return uVar1 >> 0x10;
}


