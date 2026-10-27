// Function : scale
// Namespace: juce:AffineTransform
// Entry    : 002ecab0
// Prototype: AffineTransform * scale(undefined4 param_1, AffineTransform * this)
// Body     : 002ecab0 - 002ecad2


/* juce::AffineTransform::scale(float) */

AffineTransform * __thiscall juce::AffineTransform::scale(undefined4 param_1,AffineTransform *this)

{
  *(undefined4 *)this = param_1;
  *(undefined8 *)(this + 4) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x10) = param_1;
  *(undefined4 *)(this + 0x14) = 0;
  return this;
}


