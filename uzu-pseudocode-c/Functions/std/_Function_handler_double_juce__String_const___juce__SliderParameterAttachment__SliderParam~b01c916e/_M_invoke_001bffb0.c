// Function : _M_invoke
// Namespace: std:_Function_handler_double_juce__String_const___juce__SliderParameterAttachment__SliderParam~b01c916e
// Entry    : 001bffb0
// Prototype: double _M_invoke(undefined8 * param_1)
// Body     : 001bffb0 - 001bffca


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* std::_Function_handler<double (juce::String const&),
   juce::SliderParameterAttachment::SliderParameterAttachment(juce::RangedAudioParameter&,
   juce::Slider&, juce::UndoManager*)::$_12>::_M_invoke(std::_Any_data const&, juce::String const&)
    */

double __cdecl
std::
_Function_handler<double(juce::String_const&),juce::SliderParameterAttachment::SliderParameterAttachment(juce::RangedAudioParameter&,juce::Slider&,juce::UndoManager*)::$_12>
::_M_invoke(undefined8 *param_1)

{
  RangedAudioParameter *this;
  undefined8 uVar1;
  ulong uVar2;
  
  this = (RangedAudioParameter *)*param_1;
  uVar1 = (**(code **)(*(long *)this + 0x58))(this);
  uVar2 = juce::RangedAudioParameter::convertFrom0to1(uVar1,this);
  return (double)(float)uVar2;
}


