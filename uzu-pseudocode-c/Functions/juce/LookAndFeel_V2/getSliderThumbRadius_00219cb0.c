// Function : getSliderThumbRadius
// Namespace: juce:LookAndFeel_V2
// Entry    : 00219cb0
// Prototype: int getSliderThumbRadius(undefined8 param_1_00, long param_2)
// Body     : 00219cb0 - 00219ce7


/* non-virtual thunk to juce::LookAndFeel_V2::getSliderThumbRadius(juce::Slider&) */

int __thiscall juce::LookAndFeel_V2::getSliderThumbRadius(undefined8 param_1_00,long param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (int)*(undefined8 *)(param_2 + 0x40) / 2;
  iVar2 = (int)((ulong)*(undefined8 *)(param_2 + 0x40) >> 0x20) / 2;
  if (iVar1 < iVar2) {
    iVar2 = iVar1;
  }
  iVar1 = 7;
  if (iVar2 < 7) {
    iVar1 = iVar2;
  }
  return iVar1 + 2;
}


