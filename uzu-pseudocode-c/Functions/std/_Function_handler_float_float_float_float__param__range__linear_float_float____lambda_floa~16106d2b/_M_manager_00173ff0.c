// Function : _M_manager
// Namespace: std:_Function_handler_float_float_float_float__param__range__linear_float_float____lambda_floa~16106d2b
// Entry    : 00173ff0
// Prototype: undefined8 _M_manager(undefined8 * param_1, undefined4 * param_2, int param_3)
// Body     : 00173ff0 - 00174017


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* std::_Function_handler<float (float, float, float), param::range::linear(float,
   float)::{lambda(float, float, float)#2}>::_M_manager(std::_Any_data&, std::_Any_data const&,
   std::_Manager_operation) */

undefined8 __cdecl
std::
_Function_handler<float(float,float,float),param::range::linear(float,float)::{lambda(float,float,float)#2}>
::_M_manager(undefined8 *param_1,undefined4 *param_2,int param_3)

{
  if (param_3 == 2) {
    *(undefined4 *)param_1 = *param_2;
  }
  else {
    if (param_3 == 1) {
      *param_1 = param_2;
      return 0;
    }
    if (param_3 == 0) {
      *param_1 = &param::range::linear(float,float)::{lambda(float,float,float)#2}::typeinfo;
      return 0;
    }
  }
  return 0;
}


