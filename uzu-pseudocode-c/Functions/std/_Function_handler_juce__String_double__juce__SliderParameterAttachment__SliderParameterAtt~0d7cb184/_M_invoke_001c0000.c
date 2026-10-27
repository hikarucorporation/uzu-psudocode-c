// Function : _M_invoke
// Namespace: std:_Function_handler_juce__String_double__juce__SliderParameterAttachment__SliderParameterAtt~0d7cb184
// Entry    : 001c0000
// Prototype: _Function_handler<juce::String(double),juce::SliderParameterAttachment::SliderParameterAttachment(juce::RangedAudioParameter&,juce::Slider&,juce::UndoManager*)::$_13> * _M_invoke(_Function_handler<juce::String(double),juce::SliderParameterAttachment::SliderParameterAttachment(juce::RangedAudioParameter&,juce::Slider&,juce::UndoManager*)::$_13> * this, undefined8 * param_1, double * param_2)
// Body     : 001c0000 - 001c0032


/* std::_Function_handler<juce::String (double),
   juce::SliderParameterAttachment::SliderParameterAttachment(juce::RangedAudioParameter&,
   juce::Slider&, juce::UndoManager*)::$_13>::_M_invoke(std::_Any_data const&, double&&) */

_Function_handler<juce::String(double),juce::SliderParameterAttachment::SliderParameterAttachment(juce::RangedAudioParameter&,juce::Slider&,juce::UndoManager*)::__13>
* __thiscall
std::
_Function_handler<juce::String(double),juce::SliderParameterAttachment::SliderParameterAttachment(juce::RangedAudioParameter&,juce::Slider&,juce::UndoManager*)::$_13>
::_M_invoke(_Function_handler<juce::String(double),juce::SliderParameterAttachment::SliderParameterAttachment(juce::RangedAudioParameter&,juce::Slider&,juce::UndoManager*)::__13>
            *this,undefined8 *param_1,double *param_2)

{
  RangedAudioParameter *this_00;
  
  this_00 = (RangedAudioParameter *)*param_1;
  juce::RangedAudioParameter::convertTo0to1
            (CONCAT44((int)((ulong)*param_2 >> 0x20),(float)*param_2),this_00);
  (**(code **)(*(long *)this_00 + 0x50))(this,this_00,0);
  return this;
}


