// Function : _M_manager
// Namespace: std:_Function_handler_juce__String_float_int__juce__AudioParameterFloat__AudioParameterFloat_j~6988fdae
// Entry    : 004cfcd0
// Prototype: undefined8 _M_manager(undefined8 * param_1, undefined4 * param_2, int param_3)
// Body     : 004cfcd0 - 004cfcf7


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* std::_Function_handler<juce::String (float, int),
   juce::AudioParameterFloat::AudioParameterFloat(juce::ParameterID const&, juce::String const&,
   juce::NormalisableRange<float>, float, juce::AudioParameterFloatAttributes
   const&)::$_5>::_M_manager(std::_Any_data&, std::_Any_data const&, std::_Manager_operation) */

undefined8 __cdecl
std::
_Function_handler<juce::String(float,int),juce::AudioParameterFloat::AudioParameterFloat(juce::ParameterID_const&,juce::String_const&,juce::NormalisableRange<float>,float,juce::AudioParameterFloatAttributes_const&)::$_5>
::_M_manager(undefined8 *param_1,undefined4 *param_2,int param_3)

{
  if (param_3 == 2) {
    *(undefined4 *)param_1 = *param_2;
  }
  else {
    if (param_3 == 1) {
      *param_1 = param_2;
      return 0;
    }
    if (param_3 == 0) {
      *param_1 = &juce::AudioParameterFloat::
                  AudioParameterFloat(juce::ParameterID_const&,juce::String_const&,juce::NormalisableRange<float>,float,juce::AudioParameterFloatAttributes_const&)
                  ::$_5::typeinfo;
      return 0;
    }
  }
  return 0;
}


