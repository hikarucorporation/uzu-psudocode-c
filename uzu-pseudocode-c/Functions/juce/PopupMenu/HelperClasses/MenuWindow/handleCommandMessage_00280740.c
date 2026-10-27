// Function : handleCommandMessage
// Namespace: juce:PopupMenu:HelperClasses:MenuWindow
// Entry    : 00280740
// Prototype: undefined handleCommandMessage(MenuWindow * this, int param_1)
// Body     : 00280740 - 0028076e


/* juce::PopupMenu::HelperClasses::MenuWindow::handleCommandMessage(int) */

void __thiscall
juce::PopupMenu::HelperClasses::MenuWindow::handleCommandMessage(MenuWindow *this,int param_1)

{
  MenuWindow *this_00;
  
  if (param_1 != 0x6287345f) {
    return;
  }
  do {
    this_00 = this;
    this = *(MenuWindow **)(this_00 + 0xf0);
  } while (this != (MenuWindow *)0x0);
  hide(this_00,0,'\x01');
  return;
}


