// Function : _M_invoke
// Namespace: std:_Function_handler_float_float_float_float__param__range__linear_float_float____lambda_floa~8e3e07a0
// Entry    : 00174020
// Prototype: uint _M_invoke(undefined8 param_1, float * param_2, float * param_3, float * param_4)
// Body     : 00174020 - 00174041


/* WARNING: Unknown calling convention: __cdecl */
/* std::_Function_handler<float (float, float, float), param::range::linear(float,
   float)::{lambda(float, float, float)#3}>::_M_invoke(std::_Any_data const&, float&&, float&&,
   float&&) */

uint __cdecl
std::
_Function_handler<float(float,float,float),param::range::linear(float,float)::{lambda(float,float,float)#3}>
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
  return uVar2 & (uint)*param_2 | ~uVar2 & (uint)fVar3;
}


