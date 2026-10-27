// Function : _M_manager
// Namespace: std:_Function_handler_float_float_float_float__juce__AudioParameterInt__AudioParameterInt_juce~afed9f87
// Entry    : 004d0700
// Prototype: undefined8 _M_manager(undefined8 * param_1, undefined8 param_2, int param_3)
// Body     : 004d0700 - 004d071b


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* std::_Function_handler<float (float, float, float),
   juce::AudioParameterInt::AudioParameterInt(juce::ParameterID const&, juce::String const&, int,
   int, int, juce::AudioParameterIntAttributes const&)::$_8::operator()() const::{lambda(float,
   float, float)#1}>::_M_manager(std::_Any_data&, std::_Any_data const&, std::_Manager_operation) */

undefined8 __cdecl
std::
_Function_handler<float(float,float,float),juce::AudioParameterInt::AudioParameterInt(juce::ParameterID_const&,juce::String_const&,int,int,int,juce::AudioParameterIntAttributes_const&)::$_8::operator()()const::{lambda(float,float,float)#1}>
::_M_manager(undefined8 *param_1,undefined8 param_2,int param_3)

{
  if (param_3 == 1) {
    *param_1 = param_2;
  }
  else if (param_3 == 0) {
    *param_1 = &const::{lambda(float,float,float)#1}::typeinfo;
    return 0;
  }
  return 0;
}


