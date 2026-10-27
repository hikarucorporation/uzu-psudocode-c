// Function : initialiseBitmapData
// Namespace: juce:SoftwarePixelData
// Entry    : 00335720
// Prototype: undefined initialiseBitmapData(SoftwarePixelData * this, long * param_1, int param_2, int param_3, int param_4)
// Body     : 00335720 - 00335769


/* juce::SoftwarePixelData::initialiseBitmapData(juce::Image::BitmapData&, int, int,
   juce::Image::BitmapData::ReadWriteMode) */

void __thiscall
juce::SoftwarePixelData::initialiseBitmapData
          (SoftwarePixelData *this,long *param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  long lVar3;
  
  iVar1 = *(int *)(this + 0x58);
  iVar2 = *(int *)(this + 0x5c);
  lVar3 = (long)param_3 * (long)iVar2 + (long)param_2 * (long)iVar1;
  *param_1 = *(long *)(this + 0x50) + lVar3;
  param_1[1] = (long)*(int *)(this + 0x14) * (long)iVar2 - lVar3;
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(this + 0xc);
  *(int *)((long)param_1 + 0x14) = iVar2;
  *(int *)(param_1 + 3) = iVar1;
  if (param_4 == 0) {
    return;
  }
  ImagePixelData::sendDataChangeMessage((ImagePixelData *)this);
  return;
}


