// Function : getSliderThumbRadius
// Namespace: juce:LookAndFeel_V4
// Entry    : 001f5360
// Prototype: int getSliderThumbRadius(undefined8 param_1_00, long param_2)
// Body     : 001f5360 - 001f539e


/* juce::LookAndFeel_V4::getSliderThumbRadius(juce::Slider&) */

int __thiscall juce::LookAndFeel_V4::getSliderThumbRadius(undefined8 param_1_00,long param_2)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  
  uVar1 = *(uint *)(*(long *)(param_2 + 0x1a0) + 0x20);
  if ((uVar1 < 0xc) && ((0xa05U >> (uVar1 & 0x1f) & 1) != 0)) {
    piVar3 = (int *)(param_2 + 0x44);
  }
  else {
    piVar3 = (int *)(param_2 + 0x40);
  }
  iVar2 = 0xc;
  if ((int)((float)*piVar3 * DAT_005d9044) < 0xc) {
    iVar2 = (int)((float)*piVar3 * DAT_005d9044);
  }
  return iVar2;
}


