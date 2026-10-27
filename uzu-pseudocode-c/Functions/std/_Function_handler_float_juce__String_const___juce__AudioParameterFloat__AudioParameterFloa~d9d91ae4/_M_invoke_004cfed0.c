// Function : _M_invoke
// Namespace: std:_Function_handler_float_juce__String_const___juce__AudioParameterFloat__AudioParameterFloa~d9d91ae4
// Entry    : 004cfed0
// Prototype: long _M_invoke(undefined8 param_1, long * param_2)
// Body     : 004cfed0 - 004cfee5


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* std::_Function_handler<float (juce::String const&),
   juce::AudioParameterFloat::AudioParameterFloat(juce::ParameterID const&, juce::String const&,
   juce::NormalisableRange<float>, float, juce::AudioParameterFloatAttributes
   const&)::$_6>::_M_invoke(std::_Any_data const&, juce::String const&) */

long __cdecl
std::
_Function_handler<float(juce::String_const&),juce::AudioParameterFloat::AudioParameterFloat(juce::ParameterID_const&,juce::String_const&,juce::NormalisableRange<float>,float,juce::AudioParameterFloatAttributes_const&)::$_6>
::_M_invoke(undefined8 param_1,long *param_2)

{
  long local_8;
  
  local_8 = *param_2;
  juce::CharacterFunctions::readDoubleValue<juce::CharPointer_UTF8>(&local_8);
  return local_8;
}


