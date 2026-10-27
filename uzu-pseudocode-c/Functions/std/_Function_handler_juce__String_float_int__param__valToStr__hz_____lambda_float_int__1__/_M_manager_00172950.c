// Function : _M_manager
// Namespace: std:_Function_handler_juce__String_float_int__param__valToStr__hz_____lambda_float_int__1__
// Entry    : 00172950
// Prototype: undefined8 _M_manager(undefined8 * param_1, undefined8 param_2, int param_3)
// Body     : 00172950 - 0017296b


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* std::_Function_handler<juce::String (float, int), param::valToStr::hz()::{lambda(float,
   int)#1}>::_M_manager(std::_Any_data&, std::_Any_data const&, std::_Manager_operation) */

undefined8 __cdecl
std::_Function_handler<juce::String(float,int),param::valToStr::hz()::{lambda(float,int)#1}>::
_M_manager(undefined8 *param_1,undefined8 param_2,int param_3)

{
  if (param_3 == 1) {
    *param_1 = param_2;
  }
  else if (param_3 == 0) {
    *param_1 = &param::valToStr::hz()::{lambda(float,int)#1}::typeinfo;
    return 0;
  }
  return 0;
}


