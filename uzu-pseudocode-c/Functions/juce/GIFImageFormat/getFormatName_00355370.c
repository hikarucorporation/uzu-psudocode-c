// Function : getFormatName
// Namespace: juce:GIFImageFormat
// Entry    : 00355370
// Prototype: GIFImageFormat * getFormatName(GIFImageFormat * this)
// Body     : 00355370 - 0035539c


/* juce::GIFImageFormat::getFormatName() */

GIFImageFormat * __thiscall juce::GIFImageFormat::getFormatName(GIFImageFormat *this)

{
  undefined4 *puVar1;
  
  puVar1 = operator_new__(0x1b);
  LOCK();
  *puVar1 = 0;
  UNLOCK();
  *(undefined8 *)(puVar1 + 2) = 4;
  puVar1[4] = 0x464947;
  *(undefined4 **)this = puVar1 + 4;
  return this;
}


