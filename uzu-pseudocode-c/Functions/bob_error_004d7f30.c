// Function : bob_error
// Namespace: 
// Entry    : 004d7f30
// Prototype: undefined bob_error(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)
// Body     : 004d7f30 - 004d7f3d


void bob_error(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
              undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  post(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
       "error estimate unavailable (not compiled in)");
  return;
}


