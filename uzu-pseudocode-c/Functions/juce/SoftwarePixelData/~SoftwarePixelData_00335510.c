// Function : ~SoftwarePixelData
// Namespace: juce:SoftwarePixelData
// Entry    : 00335510
// Prototype: undefined ~SoftwarePixelData(SoftwarePixelData * this)
// Body     : 00335510 - 0033552f


/* juce::SoftwarePixelData::~SoftwarePixelData() */

void __thiscall juce::SoftwarePixelData::~SoftwarePixelData(SoftwarePixelData *this)

{
  *(undefined ***)this = &PTR__SoftwarePixelData_00711df0;
  free(*(void **)(this + 0x50));
  ImagePixelData::~ImagePixelData((ImagePixelData *)this);
  return;
}


