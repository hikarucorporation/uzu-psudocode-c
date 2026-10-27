// Function : getFormatName
// Namespace: juce:JPEGImageFormat
// Entry    : 00356640
// Prototype: JPEGImageFormat * getFormatName(JPEGImageFormat * this)
// Body     : 00356640 - 00356670


/* juce::JPEGImageFormat::getFormatName() */

JPEGImageFormat * __thiscall juce::JPEGImageFormat::getFormatName(JPEGImageFormat *this)

{
  undefined4 *puVar1;
  
  puVar1 = operator_new__(0x1f);
  LOCK();
  *puVar1 = 0;
  UNLOCK();
  *(undefined8 *)(puVar1 + 2) = 8;
  puVar1[4] = 0x4745504a;
  *(undefined1 *)(puVar1 + 5) = 0;
  *(undefined4 **)this = puVar1 + 4;
  return this;
}


