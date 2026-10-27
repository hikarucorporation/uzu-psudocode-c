// Function : ~XBitmapImage
// Namespace: juce:XBitmapImage
// Entry    : 002d2410
// Prototype: undefined ~XBitmapImage(XBitmapImage * this)
// Body     : 002d2410 - 002d2421


/* juce::XBitmapImage::~XBitmapImage() */

void __thiscall juce::XBitmapImage::~XBitmapImage(XBitmapImage *this)

{
  ~XBitmapImage(this);
  operator_delete(this);
  return;
}


