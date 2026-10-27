// Function : getFormatName
// Namespace: juce:PNGImageFormat
// Entry    : 00392ff0
// Prototype: PNGImageFormat * getFormatName(PNGImageFormat * this)
// Body     : 00392ff0 - 0039301c


/* juce::PNGImageFormat::getFormatName() */

PNGImageFormat * __thiscall juce::PNGImageFormat::getFormatName(PNGImageFormat *this)

{
  undefined4 *puVar1;
  
  puVar1 = operator_new__(0x1b);
  LOCK();
  *puVar1 = 0;
  UNLOCK();
  *(undefined8 *)(puVar1 + 2) = 4;
  puVar1[4] = 0x474e50;
  *(undefined4 **)this = puVar1 + 4;
  return this;
}


