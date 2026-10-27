// Function : createType
// Namespace: juce:XBitmapImage
// Entry    : 002d2500
// Prototype: XBitmapImage * createType(XBitmapImage * this)
// Body     : 002d2500 - 002d251f


/* juce::XBitmapImage::createType() const */

XBitmapImage * __thiscall juce::XBitmapImage::createType(XBitmapImage *this)

{
  undefined8 *puVar1;
  
  puVar1 = operator_new(8);
  *puVar1 = &PTR__ImageType_00711870;
  *(undefined8 **)this = puVar1;
  return this;
}


