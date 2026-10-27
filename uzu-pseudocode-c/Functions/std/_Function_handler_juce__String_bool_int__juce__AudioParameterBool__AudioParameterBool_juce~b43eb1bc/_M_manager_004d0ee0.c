// Function : _M_manager
// Namespace: std:_Function_handler_juce__String_bool_int__juce__AudioParameterBool__AudioParameterBool_juce~b43eb1bc
// Entry    : 004d0ee0
// Prototype: undefined8 _M_manager(undefined8 * param_1, undefined8 param_2, int param_3)
// Body     : 004d0ee0 - 004d0efb


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* std::_Function_handler<juce::String (bool, int),
   juce::AudioParameterBool::AudioParameterBool(juce::ParameterID const&, juce::String const&, bool,
   juce::AudioParameterBoolAttributes const&)::$_11>::_M_manager(std::_Any_data&, std::_Any_data
   const&, std::_Manager_operation) */

undefined8 __cdecl
std::
_Function_handler<juce::String(bool,int),juce::AudioParameterBool::AudioParameterBool(juce::ParameterID_const&,juce::String_const&,bool,juce::AudioParameterBoolAttributes_const&)::$_11>
::_M_manager(undefined8 *param_1,undefined8 param_2,int param_3)

{
  if (param_3 == 1) {
    *param_1 = param_2;
  }
  else if (param_3 == 0) {
    *param_1 = &juce::AudioParameterBool::
                AudioParameterBool(juce::ParameterID_const&,juce::String_const&,bool,juce::AudioParameterBoolAttributes_const&)
                ::$_11::typeinfo;
    return 0;
  }
  return 0;
}


