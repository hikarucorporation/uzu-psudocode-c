// Function : createType
// Namespace: juce:SoftwarePixelData
// Entry    : 00335700
// Prototype: SoftwarePixelData * createType(SoftwarePixelData * this)
// Body     : 00335700 - 0033571f


/* juce::SoftwarePixelData::createType() const */

SoftwarePixelData * __thiscall juce::SoftwarePixelData::createType(SoftwarePixelData *this)

{
  undefined8 *puVar1;
  
  puVar1 = operator_new(8);
  *puVar1 = &PTR__ImageType_00711838;
  *(undefined8 **)this = puVar1;
  return this;
}


