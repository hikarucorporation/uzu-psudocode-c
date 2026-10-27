// Function : getWidth
// Namespace: juce:Image
// Entry    : 003c1610
// Prototype: undefined4 getWidth(Image * this)
// Body     : 003c1610 - 003c161e


/* juce::Image::getWidth() const */

undefined4 __thiscall juce::Image::getWidth(Image *this)

{
  if (*(long *)this == 0) {
    return 0;
  }
  return *(undefined4 *)(*(long *)this + 0x10);
}


