// Function : _M_invoke
// Namespace: std:_Function_handler_void___juce__PopupMenu__HelperClasses__ItemComponent__ItemAccessibilityH~8fbd95df
// Entry    : 0027eff0
// Prototype: undefined _M_invoke(long * param_1)
// Body     : 0027eff0 - 0027f039


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* std::_Function_handler<void (),
   juce::PopupMenu::HelperClasses::ItemComponent::ItemAccessibilityHandler::getAccessibilityActions(juce::PopupMenu::HelperClasses::ItemComponent::ItemAccessibilityHandler&,
   juce::PopupMenu::HelperClasses::ItemComponent&)::{lambda()#1}>::_M_invoke(std::_Any_data const&)
    */

void __cdecl
std::
_Function_handler<void(),juce::PopupMenu::HelperClasses::ItemComponent::ItemAccessibilityHandler::getAccessibilityActions(juce::PopupMenu::HelperClasses::ItemComponent::ItemAccessibilityHandler&,juce::PopupMenu::HelperClasses::ItemComponent&)::{lambda()#1}>
::_M_invoke(long *param_1)

{
  long lVar1;
  MenuWindow *this;
  MenuWindow *pMVar2;
  
  lVar1 = *param_1;
  this = *(MenuWindow **)(lVar1 + 0x160);
  pMVar2 = this;
  do {
    pMVar2[0x17a] = (MenuWindow)0x1;
    pMVar2 = *(MenuWindow **)(pMVar2 + 0xf0);
  } while (pMVar2 != (MenuWindow *)0x0);
  juce::PopupMenu::HelperClasses::MenuWindow::ensureItemComponentIsVisible(this,lVar1,0);
  juce::PopupMenu::HelperClasses::MenuWindow::setCurrentlyHighlightedChild
            (*(MenuWindow **)(*param_1 + 0x160),*param_1);
  return;
}


