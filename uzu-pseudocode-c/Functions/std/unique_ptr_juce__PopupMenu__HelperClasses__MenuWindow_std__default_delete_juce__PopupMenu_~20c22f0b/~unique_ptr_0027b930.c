// Function : ~unique_ptr
// Namespace: std:unique_ptr_juce__PopupMenu__HelperClasses__MenuWindow_std__default_delete_juce__PopupMenu_~20c22f0b
// Entry    : 0027b930
// Prototype: undefined ~unique_ptr(unique_ptr<juce::PopupMenu::HelperClasses::MenuWindow,std::default_delete<juce::PopupMenu::HelperClasses::MenuWindow>> * this)
// Body     : 0027b930 - 0027b95d


/* std::unique_ptr<juce::PopupMenu::HelperClasses::MenuWindow,
   std::default_delete<juce::PopupMenu::HelperClasses::MenuWindow> >::~unique_ptr() */

void __thiscall
std::
unique_ptr<juce::PopupMenu::HelperClasses::MenuWindow,std::default_delete<juce::PopupMenu::HelperClasses::MenuWindow>>
::~unique_ptr(unique_ptr<juce::PopupMenu::HelperClasses::MenuWindow,std::default_delete<juce::PopupMenu::HelperClasses::MenuWindow>>
              *this)

{
  MenuWindow *this_00;
  
  this_00 = *(MenuWindow **)this;
  if (this_00 != (MenuWindow *)0x0) {
    juce::PopupMenu::HelperClasses::MenuWindow::~MenuWindow(this_00);
    operator_delete(this_00);
  }
  *(undefined8 *)this = 0;
  return;
}


