// Function : getNativeExtensions
// Namespace: juce:ImagePixelData
// Entry    : 0032fc60
// Prototype: ImagePixelData * getNativeExtensions(ImagePixelData * this)
// Body     : 0032fc60 - 0032fc7f


/* juce::ImagePixelData::getNativeExtensions() */

ImagePixelData * __thiscall juce::ImagePixelData::getNativeExtensions(ImagePixelData *this)

{
  undefined8 *puVar1;
  
  puVar1 = operator_new(0x10);
  *puVar1 = &PTR__Base_007125b8;
  *(undefined8 **)this = puVar1;
  return this;
}


