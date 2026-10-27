// Function : _M_invoke
// Namespace: std:_Function_handler_float_float_float_float__juce__AudioParameterInt__AudioParameterInt_juce~74cb8e39
// Entry    : 004d0720
// Prototype: uint _M_invoke(undefined8 param_1, float * param_2, float * param_3, float * param_4)
// Body     : 004d0720 - 004d074f


/* WARNING: Unknown calling convention: __cdecl */
/* std::_Function_handler<float (float, float, float),
   juce::AudioParameterInt::AudioParameterInt(juce::ParameterID const&, juce::String const&, int,
   int, int, juce::AudioParameterIntAttributes const&)::$_8::operator()() const::{lambda(float,
   float, float)#2}>::_M_invoke(std::_Any_data const&, float&&, float&&, float&&) */

uint __cdecl
std::
_Function_handler<float(float,float,float),juce::AudioParameterInt::AudioParameterInt(juce::ParameterID_const&,juce::String_const&,int,int,int,juce::AudioParameterIntAttributes_const&)::$_8::operator()()const::{lambda(float,float,float)#2}>
::_M_invoke(undefined8 param_1,float *param_2,float *param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  
  fVar1 = (*param_4 - *param_2) / (*param_3 - *param_2);
  fVar2 = DAT_005d9038;
  if (fVar1 <= DAT_005d9038) {
    fVar2 = fVar1;
  }
  return ~-(uint)(fVar1 < 0.0) & (uint)fVar2;
}


