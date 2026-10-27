// Function : libpd_get_double
// Namespace: 
// Entry    : 004d75a0
// Prototype: double libpd_get_double(long param_1)
// Body     : 004d75a0 - 004d75a9


double libpd_get_double(long param_1)

{
  return (double)*(float *)(param_1 + 8);
}


