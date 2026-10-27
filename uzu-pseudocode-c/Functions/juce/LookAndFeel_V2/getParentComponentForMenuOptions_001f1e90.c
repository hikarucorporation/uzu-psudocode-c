// Function : getParentComponentForMenuOptions
// Namespace: juce:LookAndFeel_V2
// Entry    : 001f1e90
// Prototype: undefined8 getParentComponentForMenuOptions(undefined8 param_1_00, long param_2)
// Body     : 001f1e90 - 001f1ea0


/* juce::LookAndFeel_V2::getParentComponentForMenuOptions(juce::PopupMenu::Options const&) */

undefined8 __thiscall
juce::LookAndFeel_V2::getParentComponentForMenuOptions(undefined8 param_1_00,long param_2)

{
  if (*(long *)(param_2 + 0x18) == 0) {
    return 0;
  }
  return *(undefined8 *)(*(long *)(param_2 + 0x18) + 0x10);
}


