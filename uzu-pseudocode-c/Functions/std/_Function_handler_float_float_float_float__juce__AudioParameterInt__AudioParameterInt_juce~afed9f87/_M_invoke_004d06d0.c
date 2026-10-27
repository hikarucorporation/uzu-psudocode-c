// Function : _M_invoke
// Namespace: std:_Function_handler_float_float_float_float__juce__AudioParameterInt__AudioParameterInt_juce~afed9f87
// Entry    : 004d06d0
// Prototype: uint _M_invoke(undefined8 param_1, float * param_2, float * param_3, float * param_4)
// Body     : 004d06d0 - 004d06fc


/* WARNING: Unknown calling convention: __cdecl */
/* std::_Function_handler<float (float, float, float),
   juce::AudioParameterInt::AudioParameterInt(juce::ParameterID const&, juce::String const&, int,
   int, int, juce::AudioParameterIntAttributes const&)::$_8::operator()() const::{lambda(float,
   float, float)#1}>::_M_invoke(std::_Any_data const&, float&&, float&&, float&&) */

uint __cdecl
std::
_Function_handler<float(float,float,float),juce::AudioParameterInt::AudioParameterInt(juce::ParameterID_const&,juce::String_const&,int,int,int,juce::AudioParameterIntAttributes_const&)::$_8::operator()()const::{lambda(float,float,float)#1}>
::_M_invoke(undefined8 param_1,float *param_2,float *param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = *param_2;
  fVar3 = *param_3;
  fVar2 = (fVar3 - fVar1) * *param_4 + fVar1;
  if (fVar2 <= fVar3) {
    fVar3 = fVar2;
  }
  return -(uint)(fVar2 < fVar1) & (uint)fVar1 | ~-(uint)(fVar2 < fVar1) & (uint)fVar3;
}


