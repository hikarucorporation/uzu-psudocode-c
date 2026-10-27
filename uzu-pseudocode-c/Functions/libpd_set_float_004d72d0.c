// Function : libpd_set_float
// Namespace: 
// Entry    : 004d72d0
// Prototype: undefined libpd_set_float(undefined4 param_1, undefined4 * param_2)
// Body     : 004d72d0 - 004d72db


void libpd_set_float(undefined4 param_1,undefined4 *param_2)

{
  *param_2 = 1;
  param_2[2] = param_1;
  return;
}


