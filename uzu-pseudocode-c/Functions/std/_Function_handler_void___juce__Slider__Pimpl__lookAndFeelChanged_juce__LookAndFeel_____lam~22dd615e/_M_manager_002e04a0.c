// Function : _M_manager
// Namespace: std:_Function_handler_void___juce__Slider__Pimpl__lookAndFeelChanged_juce__LookAndFeel_____lam~22dd615e
// Entry    : 002e04a0
// Prototype: undefined8 _M_manager(undefined8 * param_1, undefined8 * param_2, int param_3)
// Body     : 002e04a0 - 002e04c9


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* std::_Function_handler<void (),
   juce::Slider::Pimpl::lookAndFeelChanged(juce::LookAndFeel&)::{lambda(juce::Button&,
   bool)#1}::operator()(juce::Button&, bool) const::{lambda()#1}>::_M_manager(std::_Any_data&,
   std::_Any_data const&, std::_Manager_operation) */

undefined8 __cdecl
std::
_Function_handler<void(),juce::Slider::Pimpl::lookAndFeelChanged(juce::LookAndFeel&)::{lambda(juce::Button&,bool)#1}::operator()(juce::Button&,bool)const::{lambda()#1}>
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
      *param_1 = &const::{lambda()#1}::typeinfo;
      return 0;
    }
  }
  return 0;
}


