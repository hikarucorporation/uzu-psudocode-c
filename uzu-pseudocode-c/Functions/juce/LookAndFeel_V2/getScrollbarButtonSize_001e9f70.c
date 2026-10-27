// Function : getScrollbarButtonSize
// Namespace: juce:LookAndFeel_V2
// Entry    : 001e9f70
// Prototype: int getScrollbarButtonSize(undefined8 param_1_00, long param_2)
// Body     : 001e9f70 - 001e9f83


/* juce::LookAndFeel_V2::getScrollbarButtonSize(juce::ScrollBar&) */

int __thiscall juce::LookAndFeel_V2::getScrollbarButtonSize(undefined8 param_1_00,long param_2)

{
  return *(int *)(param_2 + 0x40 + (ulong)(*(char *)(param_2 + 0x17c) == '\0') * 4) + 2;
}


