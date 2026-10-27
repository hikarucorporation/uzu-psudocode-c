// Function : PopupMenu
// Namespace: juce:PopupMenu
// Entry    : 002d8350
// Prototype: undefined PopupMenu(PopupMenu * this, undefined8 * param_1)
// Body     : 002d8350 - 002d8381


/* juce::PopupMenu::PopupMenu(juce::PopupMenu&&) */

void __thiscall juce::PopupMenu::PopupMenu(PopupMenu *this,undefined8 *param_1)

{
  *(undefined8 *)this = *param_1;
  *param_1 = 0;
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 1);
  *(undefined4 *)(this + 0xc) = *(undefined4 *)((long)param_1 + 0xc);
  param_1[1] = 0;
  *(undefined8 *)(this + 0x10) = param_1[2];
  param_1[2] = 0;
  return;
}


