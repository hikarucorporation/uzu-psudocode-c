// Function : _M_invoke
// Namespace: std:_Function_handler_juce__String_float_int__param__valToStr__px_____lambda_int_int__1__
// Entry    : 00172cc0
// Prototype: juce * _M_invoke(juce * param_1, undefined8 param_2, float * param_3)
// Body     : 00172cc0 - 00172cfa


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* std::_Function_handler<juce::String (float, int), param::valToStr::px()::{lambda(int,
   int)#1}>::_M_invoke(std::_Any_data const&, float&&, int&&) */

juce * __cdecl
std::_Function_handler<juce::String(float,int),param::valToStr::px()::{lambda(int,int)#1}>::
_M_invoke(juce *param_1,undefined8 param_2,float *param_3)

{
  String aSStack_18 [8];
  
  juce::String::String(aSStack_18,(int)*param_3);
                    /* try { // try from 00172cd6 to 00172ce7 has its CatchHandler @ 00172cfb */
  juce::operator+(param_1,aSStack_18,"px");
  juce::String::~String(aSStack_18);
  return param_1;
}


