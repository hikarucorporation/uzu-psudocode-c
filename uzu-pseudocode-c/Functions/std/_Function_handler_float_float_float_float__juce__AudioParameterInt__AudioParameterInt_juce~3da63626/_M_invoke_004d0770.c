// Function : _M_invoke
// Namespace: std:_Function_handler_float_float_float_float__juce__AudioParameterInt__AudioParameterInt_juce~3da63626
// Entry    : 004d0770
// Prototype: float _M_invoke(undefined8 param_1, float * param_2, float * param_3, float * param_4)
// Body     : 004d0770 - 004d07ac


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* std::_Function_handler<float (float, float, float),
   juce::AudioParameterInt::AudioParameterInt(juce::ParameterID const&, juce::String const&, int,
   int, int, juce::AudioParameterIntAttributes const&)::$_8::operator()() const::{lambda(float,
   float, float)#3}>::_M_invoke(std::_Any_data const&, float&&, float&&, float&&) */

float __cdecl
std::
_Function_handler<float(float,float,float),juce::AudioParameterInt::AudioParameterInt(juce::ParameterID_const&,juce::String_const&,int,int,int,juce::AudioParameterIntAttributes_const&)::$_8::operator()()const::{lambda(float,float,float)#3}>
::_M_invoke(undefined8 param_1,float *param_2,float *param_3,float *param_4)

{
  float fVar1;
  uint uVar2;
  float fVar3;
  
  fVar1 = *param_4;
  fVar3 = *param_3;
  if (fVar1 <= *param_3) {
    fVar3 = fVar1;
  }
  uVar2 = -(uint)(fVar1 < *param_2);
  return (float)SUB84((double)(float)(uVar2 & (uint)*param_2 | ~uVar2 & (uint)fVar3) + DAT_005d9098,
                      0);
}


