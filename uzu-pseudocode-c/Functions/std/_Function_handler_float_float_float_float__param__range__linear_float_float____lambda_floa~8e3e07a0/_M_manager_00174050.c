// Function : _M_manager
// Namespace: std:_Function_handler_float_float_float_float__param__range__linear_float_float____lambda_floa~8e3e07a0
// Entry    : 00174050
// Prototype: undefined8 _M_manager(undefined8 * param_1, undefined8 param_2, int param_3)
// Body     : 00174050 - 0017406b


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* std::_Function_handler<float (float, float, float), param::range::linear(float,
   float)::{lambda(float, float, float)#3}>::_M_manager(std::_Any_data&, std::_Any_data const&,
   std::_Manager_operation) */

undefined8 __cdecl
std::
_Function_handler<float(float,float,float),param::range::linear(float,float)::{lambda(float,float,float)#3}>
::_M_manager(undefined8 *param_1,undefined8 param_2,int param_3)

{
  if (param_3 == 1) {
    *param_1 = param_2;
  }
  else if (param_3 == 0) {
    *param_1 = &param::range::linear(float,float)::{lambda(float,float,float)#3}::typeinfo;
    return 0;
  }
  return 0;
}


