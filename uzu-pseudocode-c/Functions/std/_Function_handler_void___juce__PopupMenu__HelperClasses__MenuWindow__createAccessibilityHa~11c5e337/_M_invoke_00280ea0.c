// Function : _M_invoke
// Namespace: std:_Function_handler_void___juce__PopupMenu__HelperClasses__MenuWindow__createAccessibilityHa~11c5e337
// Entry    : 00280ea0
// Prototype: undefined8 _M_invoke(undefined8 * param_1)
// Body     : 00280ea0 - 00280f06


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* std::_Function_handler<void (),
   juce::PopupMenu::HelperClasses::MenuWindow::createAccessibilityHandler()::{lambda()#1}>::_M_invoke(std::_Any_data
   const&) */

undefined8 __cdecl
std::
_Function_handler<void(),juce::PopupMenu::HelperClasses::MenuWindow::createAccessibilityHandler()::{lambda()#1}>
::_M_invoke(undefined8 *param_1)

{
  long lVar1;
  undefined8 in_RAX;
  Component *this;
  AccessibilityHandler *this_00;
  undefined8 uVar2;
  
  lVar1 = *(long *)((MenuWindow *)*param_1 + 0x188);
  if ((lVar1 == 0) || (lVar1 = *(long *)(lVar1 + 0x10), lVar1 == 0)) {
    uVar2 = juce::PopupMenu::HelperClasses::MenuWindow::selectNextItem((MenuWindow *)*param_1,0);
    return uVar2;
  }
  this = (Component *)
         __dynamic_cast(lVar1,&juce::Component::typeinfo,
                        &juce::PopupMenu::HelperClasses::ItemComponent::typeinfo,0);
  this_00 = (AccessibilityHandler *)juce::Component::getAccessibilityHandler(this);
  if ((this_00 == (AccessibilityHandler *)0x0) ||
     ((juce::AccessibilityHandler::currentlyFocusedHandler != (AccessibilityHandler *)0x0 &&
      (juce::AccessibilityHandler::currentlyFocusedHandler == this_00)))) {
    return in_RAX;
  }
  uVar2 = juce::AccessibilityHandler::grabFocusInternal(this_00,'\x01');
  return uVar2;
}


