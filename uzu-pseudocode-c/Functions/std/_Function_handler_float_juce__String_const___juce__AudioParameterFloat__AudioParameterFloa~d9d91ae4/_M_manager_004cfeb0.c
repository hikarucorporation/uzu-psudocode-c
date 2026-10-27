// Function : _M_manager
// Namespace: std:_Function_handler_float_juce__String_const___juce__AudioParameterFloat__AudioParameterFloa~d9d91ae4
// Entry    : 004cfeb0
// Prototype: undefined8 _M_manager(undefined8 * param_1, undefined8 param_2, int param_3)
// Body     : 004cfeb0 - 004cfecb


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* std::_Function_handler<float (juce::String const&),
   juce::AudioParameterFloat::AudioParameterFloat(juce::ParameterID const&, juce::String const&,
   juce::NormalisableRange<float>, float, juce::AudioParameterFloatAttributes
   const&)::$_6>::_M_manager(std::_Any_data&, std::_Any_data const&, std::_Manager_operation) */

undefined8 __cdecl
std::
_Function_handler<float(juce::String_const&),juce::AudioParameterFloat::AudioParameterFloat(juce::ParameterID_const&,juce::String_const&,juce::NormalisableRange<float>,float,juce::AudioParameterFloatAttributes_const&)::$_6>
::_M_manager(undefined8 *param_1,undefined8 param_2,int param_3)

{
  if (param_3 == 1) {
    *param_1 = param_2;
  }
  else if (param_3 == 0) {
    *param_1 = &juce::AudioParameterFloat::
                AudioParameterFloat(juce::ParameterID_const&,juce::String_const&,juce::NormalisableRange<float>,float,juce::AudioParameterFloatAttributes_const&)
                ::$_6::typeinfo;
    return 0;
  }
  return 0;
}


