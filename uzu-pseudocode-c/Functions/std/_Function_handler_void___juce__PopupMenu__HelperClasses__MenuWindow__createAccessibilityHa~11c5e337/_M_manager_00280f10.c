// Function : _M_manager
// Namespace: std:_Function_handler_void___juce__PopupMenu__HelperClasses__MenuWindow__createAccessibilityHa~11c5e337
// Entry    : 00280f10
// Prototype: undefined8 _M_manager(undefined8 * param_1, undefined8 * param_2, int param_3)
// Body     : 00280f10 - 00280f35


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* std::_Function_handler<void (),
   juce::PopupMenu::HelperClasses::MenuWindow::createAccessibilityHandler()::{lambda()#1}>::_M_manager(std::_Any_data&,
   std::_Any_data const&, std::_Manager_operation) */

undefined8 __cdecl
std::
_Function_handler<void(),juce::PopupMenu::HelperClasses::MenuWindow::createAccessibilityHandler()::{lambda()#1}>
::_M_manager(undefined8 *param_1,undefined8 *param_2,int param_3)

{
  pointer_____offset_0x10___ *ppuVar1;
  
  if (param_3 == 2) {
    ppuVar1 = (pointer_____offset_0x10___ *)*param_2;
  }
  else {
    if (param_3 == 1) {
      *param_1 = param_2;
      return 0;
    }
    if (param_3 != 0) {
      return 0;
    }
    ppuVar1 = &juce::PopupMenu::HelperClasses::MenuWindow::createAccessibilityHandler()::
               {lambda()#1}::typeinfo;
  }
  *param_1 = ppuVar1;
  return 0;
}


