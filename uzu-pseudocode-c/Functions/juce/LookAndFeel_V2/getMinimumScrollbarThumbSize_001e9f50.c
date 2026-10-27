// Function : getMinimumScrollbarThumbSize
// Namespace: juce:LookAndFeel_V2
// Entry    : 001e9f50
// Prototype: int getMinimumScrollbarThumbSize(undefined8 param_1_00, long param_2)
// Body     : 001e9f50 - 001e9f5d


/* juce::LookAndFeel_V2::getMinimumScrollbarThumbSize(juce::ScrollBar&) */

int __thiscall
juce::LookAndFeel_V2::getMinimumScrollbarThumbSize(undefined8 param_1_00,long param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_2 + 0x40);
  if (*(int *)(param_2 + 0x44) < *(int *)(param_2 + 0x40)) {
    iVar1 = *(int *)(param_2 + 0x44);
  }
  return iVar1 * 2;
}


