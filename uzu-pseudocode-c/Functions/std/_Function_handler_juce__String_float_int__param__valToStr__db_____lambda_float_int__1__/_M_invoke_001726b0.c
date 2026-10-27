// Function : _M_invoke
// Namespace: std:_Function_handler_juce__String_float_int__param__valToStr__db_____lambda_float_int__1__
// Entry    : 001726b0
// Prototype: juce * _M_invoke(juce * param_1, undefined8 param_2, float * param_3)
// Body     : 001726b0 - 001726f1


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* std::_Function_handler<juce::String (float, int), param::valToStr::db()::{lambda(float,
   int)#1}>::_M_invoke(std::_Any_data const&, float&&, int&&) */

juce * __cdecl
std::_Function_handler<juce::String(float,int),param::valToStr::db()::{lambda(float,int)#1}>::
_M_invoke(juce *param_1,undefined8 param_2,float *param_3)

{
  String aSStack_18 [8];
  
  juce::String::String(*param_3,aSStack_18,2,'\0');
                    /* try { // try from 001726cd to 001726de has its CatchHandler @ 001726f2 */
  juce::operator+(param_1,aSStack_18," dB");
  juce::String::~String(aSStack_18);
  return param_1;
}


