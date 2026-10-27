// Function : _M_invoke
// Namespace: std:_Function_handler_juce__String_bool_int__juce__AudioParameterBool__AudioParameterBool_juce~b43eb1bc
// Entry    : 004d0eb0
// Prototype: juce * _M_invoke(juce * param_1, undefined8 param_2, char * param_3)
// Body     : 004d0eb0 - 004d0ed2


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* std::_Function_handler<juce::String (bool, int),
   juce::AudioParameterBool::AudioParameterBool(juce::ParameterID const&, juce::String const&, bool,
   juce::AudioParameterBoolAttributes const&)::$_11>::_M_invoke(std::_Any_data const&, bool&&,
   int&&) */

juce * __cdecl
std::
_Function_handler<juce::String(bool,int),juce::AudioParameterBool::AudioParameterBool(juce::ParameterID_const&,juce::String_const&,bool,juce::AudioParameterBoolAttributes_const&)::$_11>
::_M_invoke(juce *param_1,undefined8 param_2,char *param_3)

{
  byte *pbVar1;
  
  pbVar1 = &DAT_005e641b;
  if (*param_3 == '\0') {
    pbVar1 = &DAT_005e6417;
  }
  juce::translate(param_1,pbVar1);
  return param_1;
}


