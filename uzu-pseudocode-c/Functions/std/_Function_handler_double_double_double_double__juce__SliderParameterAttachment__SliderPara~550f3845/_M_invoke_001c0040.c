// Function : _M_invoke
// Namespace: std:_Function_handler_double_double_double_double__juce__SliderParameterAttachment__SliderPara~550f3845
// Entry    : 001c0040
// Prototype: undefined8 _M_invoke(undefined8 * param_1, double * param_2, double * param_3, double * param_4)
// Body     : 001c0040 - 001c0072


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* std::_Function_handler<double (double, double, double),
   juce::SliderParameterAttachment::SliderParameterAttachment(juce::RangedAudioParameter&,
   juce::Slider&, juce::UndoManager*)::$_14>::_M_invoke(std::_Any_data const&, double&&, double&&,
   double&&) */

undefined8 __cdecl
std::
_Function_handler<double(double,double,double),juce::SliderParameterAttachment::SliderParameterAttachment(juce::RangedAudioParameter&,juce::Slider&,juce::UndoManager*)::$_14>
::_M_invoke(undefined8 *param_1,double *param_2,double *param_3,double *param_4)

{
  double dVar1;
  double dVar2;
  NormalisableRange<float> *this;
  undefined8 in_RAX;
  
  this = (NormalisableRange<float> *)*param_1;
  dVar1 = *param_3;
  dVar2 = *param_4;
  *(float *)this = (float)*param_2;
  *(float *)(this + 4) = (float)dVar1;
  juce::NormalisableRange<float>::convertFrom0to1((float)dVar2,this);
  return in_RAX;
}


