// Function : _M_manager
// Namespace: std:_Function_handler_void___juce__JuceVST3EditController__EditorContextMenu__getEquivalentPop~aa35c9b1
// Entry    : 001b8240
// Prototype: undefined8 _M_manager(long * param_1, long * param_2, int param_3)
// Body     : 001b8240 - 001b826a


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* std::_Function_handler<void (),
   juce::JuceVST3EditController::EditorContextMenu::getEquivalentPopupMenu()
   const::{lambda()#1}>::_M_manager(std::_Any_data&, std::_Any_data const&, std::_Manager_operation)
    */

undefined8 __cdecl
std::
_Function_handler<void(),juce::JuceVST3EditController::EditorContextMenu::getEquivalentPopupMenu()const::{lambda()#1}>
::_M_manager(long *param_1,long *param_2,int param_3)

{
  if (param_3 == 1) {
    *param_1 = *param_2;
    return 0;
  }
  if (param_3 == 0) {
    *param_1 = (long)&const::{lambda()#1}::typeinfo;
    return 0;
  }
  _Function_base::
  _Base_manager<juce::JuceVST3EditController::EditorContextMenu::getEquivalentPopupMenu()const::{lambda()#1}>
  ::_M_manager(param_1,param_2,param_3);
  return 0;
}


