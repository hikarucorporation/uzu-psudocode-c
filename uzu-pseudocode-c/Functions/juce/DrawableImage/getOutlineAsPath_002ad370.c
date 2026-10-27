// Function : getOutlineAsPath
// Namespace: juce:DrawableImage
// Entry    : 002ad370
// Prototype: DrawableImage * getOutlineAsPath(DrawableImage * this)
// Body     : 002ad370 - 002ad381


/* juce::DrawableImage::getOutlineAsPath() const */

DrawableImage * __thiscall juce::DrawableImage::getOutlineAsPath(DrawableImage *this)

{
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  this[0x20] = (DrawableImage)0x1;
  return this;
}


