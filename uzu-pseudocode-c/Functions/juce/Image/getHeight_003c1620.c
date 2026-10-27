// Function : getHeight
// Namespace: juce:Image
// Entry    : 003c1620
// Prototype: undefined4 getHeight(Image * this)
// Body     : 003c1620 - 003c162e


/* juce::Image::getHeight() const */

undefined4 __thiscall juce::Image::getHeight(Image *this)

{
  if (*(long *)this == 0) {
    return 0;
  }
  return *(undefined4 *)(*(long *)this + 0x14);
}


