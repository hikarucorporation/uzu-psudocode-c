// Function : ~MenuWindow
// Namespace: juce:PopupMenu:HelperClasses:MenuWindow
// Entry    : 0027fe40
// Prototype: undefined ~MenuWindow(MenuWindow * this)
// Body     : 0027fe40 - 0027fe51


/* juce::PopupMenu::HelperClasses::MenuWindow::~MenuWindow() */

void __thiscall juce::PopupMenu::HelperClasses::MenuWindow::~MenuWindow(MenuWindow *this)

{
  ~MenuWindow(this);
  operator_delete(this);
  return;
}


