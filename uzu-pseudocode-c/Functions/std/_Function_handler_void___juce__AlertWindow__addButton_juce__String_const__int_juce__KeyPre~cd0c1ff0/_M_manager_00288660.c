// Function : _M_manager
// Namespace: std:_Function_handler_void___juce__AlertWindow__addButton_juce__String_const__int_juce__KeyPre~cd0c1ff0
// Entry    : 00288660
// Prototype: undefined8 _M_manager(undefined8 * param_1, undefined8 * param_2, int param_3)
// Body     : 00288660 - 00288689


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* std::_Function_handler<void (), juce::AlertWindow::addButton(juce::String const&, int,
   juce::KeyPress const&, juce::KeyPress const&)::$_156>::_M_manager(std::_Any_data&, std::_Any_data
   const&, std::_Manager_operation) */

undefined8 __cdecl
std::
_Function_handler<void(),juce::AlertWindow::addButton(juce::String_const&,int,juce::KeyPress_const&,juce::KeyPress_const&)::$_156>
::_M_manager(undefined8 *param_1,undefined8 *param_2,int param_3)

{
  undefined8 uVar1;
  
  if (param_3 == 2) {
    uVar1 = param_2[1];
    *param_1 = *param_2;
    param_1[1] = uVar1;
  }
  else {
    if (param_3 == 1) {
      *param_1 = param_2;
      return 0;
    }
    if (param_3 == 0) {
      *param_1 = &juce::AlertWindow::
                  addButton(juce::String_const&,int,juce::KeyPress_const&,juce::KeyPress_const&)::
                  $_156::typeinfo;
      return 0;
    }
  }
  return 0;
}


