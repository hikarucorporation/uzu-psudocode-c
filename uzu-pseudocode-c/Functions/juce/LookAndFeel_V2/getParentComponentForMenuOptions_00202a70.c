// Function : getParentComponentForMenuOptions
// Namespace: juce:LookAndFeel_V2
// Entry    : 00202a70
// Prototype: undefined8 getParentComponentForMenuOptions(undefined8 param_1_00, long param_2)
// Body     : 00202a70 - 00202a80


/* non-virtual thunk to
   juce::LookAndFeel_V2::getParentComponentForMenuOptions(juce::PopupMenu::Options const&) */

undefined8 __thiscall
juce::LookAndFeel_V2::getParentComponentForMenuOptions(undefined8 param_1_00,long param_2)

{
  if (*(long *)(param_2 + 0x18) == 0) {
    return 0;
  }
  return *(undefined8 *)(*(long *)(param_2 + 0x18) + 0x10);
}


