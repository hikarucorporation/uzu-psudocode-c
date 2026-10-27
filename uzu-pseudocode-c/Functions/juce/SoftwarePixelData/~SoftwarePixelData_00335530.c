// Function : ~SoftwarePixelData
// Namespace: juce:SoftwarePixelData
// Entry    : 00335530
// Prototype: undefined ~SoftwarePixelData(SoftwarePixelData * this)
// Body     : 00335530 - 00335557


/* juce::SoftwarePixelData::~SoftwarePixelData() */

void __thiscall juce::SoftwarePixelData::~SoftwarePixelData(SoftwarePixelData *this)

{
  *(undefined ***)this = &PTR__SoftwarePixelData_00711df0;
  free(*(void **)(this + 0x50));
  ImagePixelData::~ImagePixelData((ImagePixelData *)this);
  operator_delete(this);
  return;
}


