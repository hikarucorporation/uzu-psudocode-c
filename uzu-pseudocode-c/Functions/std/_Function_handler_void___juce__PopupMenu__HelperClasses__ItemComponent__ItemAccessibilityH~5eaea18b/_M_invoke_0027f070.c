// Function : _M_invoke
// Namespace: std:_Function_handler_void___juce__PopupMenu__HelperClasses__ItemComponent__ItemAccessibilityH~5eaea18b
// Entry    : 0027f070
// Prototype: undefined _M_invoke(long * param_1)
// Body     : 0027f070 - 0027f092


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* std::_Function_handler<void (),
   juce::PopupMenu::HelperClasses::ItemComponent::ItemAccessibilityHandler::getAccessibilityActions(juce::PopupMenu::HelperClasses::ItemComponent::ItemAccessibilityHandler&,
   juce::PopupMenu::HelperClasses::ItemComponent&)::{lambda()#2}>::_M_invoke(std::_Any_data const&)
    */

void __cdecl
std::
_Function_handler<void(),juce::PopupMenu::HelperClasses::ItemComponent::ItemAccessibilityHandler::getAccessibilityActions(juce::PopupMenu::HelperClasses::ItemComponent::ItemAccessibilityHandler&,juce::PopupMenu::HelperClasses::ItemComponent&)::{lambda()#2}>
::_M_invoke(long *param_1)

{
  juce::PopupMenu::HelperClasses::MenuWindow::setCurrentlyHighlightedChild
            (*(MenuWindow **)(*param_1 + 0x160),*param_1);
  juce::PopupMenu::HelperClasses::MenuWindow::triggerCurrentlyHighlightedItem
            (*(MenuWindow **)(*param_1 + 0x160));
  return;
}


