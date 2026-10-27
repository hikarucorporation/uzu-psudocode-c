// Function : libpd_set_double
// Namespace: 
// Entry    : 004d72e0
// Prototype: undefined libpd_set_double(double param_1, undefined4 * param_2)
// Body     : 004d72e0 - 004d72ef


void libpd_set_double(double param_1,undefined4 *param_2)

{
  *param_2 = 1;
  param_2[2] = (float)param_1;
  return;
}


