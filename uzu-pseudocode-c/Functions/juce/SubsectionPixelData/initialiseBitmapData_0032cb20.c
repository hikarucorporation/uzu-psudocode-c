// Function : initialiseBitmapData
// Namespace: juce:SubsectionPixelData
// Entry    : 0032cb20
// Prototype: undefined initialiseBitmapData(SubsectionPixelData * this, undefined8 param_1, int param_2, int param_3, int param_4)
// Body     : 0032cb20 - 0032cb51


/* juce::SubsectionPixelData::initialiseBitmapData(juce::Image::BitmapData&, int, int,
   juce::Image::BitmapData::ReadWriteMode) */

void __thiscall
juce::SubsectionPixelData::initialiseBitmapData
          (SubsectionPixelData *this,undefined8 param_1,int param_2,int param_3,int param_4)

{
  (**(code **)(**(long **)(this + 0x50) + 0x38))
            (*(long **)(this + 0x50),param_1,param_2 + *(int *)(this + 0x58),
             param_3 + *(int *)(this + 0x5c));
  if (param_4 == 0) {
    return;
  }
  ImagePixelData::sendDataChangeMessage((ImagePixelData *)this);
  return;
}


