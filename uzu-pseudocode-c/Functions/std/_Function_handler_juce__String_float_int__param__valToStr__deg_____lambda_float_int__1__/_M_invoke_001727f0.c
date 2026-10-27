// Function : _M_invoke
// Namespace: std:_Function_handler_juce__String_float_int__param__valToStr__deg_____lambda_float_int__1__
// Entry    : 001727f0
// Prototype: juce * _M_invoke(juce * param_1, undefined8 param_2, float * param_3)
// Body     : 001727f0 - 00172831


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* std::_Function_handler<juce::String (float, int), param::valToStr::deg()::{lambda(float,
   int)#1}>::_M_invoke(std::_Any_data const&, float&&, int&&) */

juce * __cdecl
std::_Function_handler<juce::String(float,int),param::valToStr::deg()::{lambda(float,int)#1}>::
_M_invoke(juce *param_1,undefined8 param_2,float *param_3)

{
  String aSStack_18 [8];
  
  juce::String::String(*param_3,aSStack_18,1,'\0');
                    /* try { // try from 0017280d to 0017281e has its CatchHandler @ 00172832 */
  juce::operator+(param_1,aSStack_18,&DAT_005d9587);
  juce::String::~String(aSStack_18);
  return param_1;
}


