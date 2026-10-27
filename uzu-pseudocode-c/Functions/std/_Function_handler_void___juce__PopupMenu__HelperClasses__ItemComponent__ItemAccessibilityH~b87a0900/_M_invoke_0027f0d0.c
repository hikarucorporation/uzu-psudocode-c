// Function : _M_invoke
// Namespace: std:_Function_handler_void___juce__PopupMenu__HelperClasses__ItemComponent__ItemAccessibilityH~b87a0900
// Entry    : 0027f0d0
// Prototype: undefined _M_invoke(long * param_1)
// Body     : 0027f0d0 - 0027f11b


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* std::_Function_handler<void (),
   juce::PopupMenu::HelperClasses::ItemComponent::ItemAccessibilityHandler::getAccessibilityActions(juce::PopupMenu::HelperClasses::ItemComponent::ItemAccessibilityHandler&,
   juce::PopupMenu::HelperClasses::ItemComponent&)::{lambda()#3}>::_M_invoke(std::_Any_data const&)
    */

void __cdecl
std::
_Function_handler<void(),juce::PopupMenu::HelperClasses::ItemComponent::ItemAccessibilityHandler::getAccessibilityActions(juce::PopupMenu::HelperClasses::ItemComponent::ItemAccessibilityHandler&,juce::PopupMenu::HelperClasses::ItemComponent&)::{lambda()#3}>
::_M_invoke(long *param_1)

{
  MenuWindow *this;
  
  juce::PopupMenu::HelperClasses::MenuWindow::showSubMenuFor
            (*(MenuWindow **)(*param_1 + 0x160),*param_1);
  this = *(MenuWindow **)(*(long *)(*param_1 + 0x160) + 400);
  if (this == (MenuWindow *)0x0) {
    return;
  }
  if (*(int *)(this + 0x154) < 1) {
    juce::PopupMenu::HelperClasses::MenuWindow::setCurrentlyHighlightedChild(this,0);
    return;
  }
  juce::PopupMenu::HelperClasses::MenuWindow::setCurrentlyHighlightedChild
            (this,**(long **)(this + 0x148));
  return;
}


