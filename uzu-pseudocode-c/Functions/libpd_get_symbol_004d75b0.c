// Function : libpd_get_symbol
// Namespace: 
// Entry    : 004d75b0
// Prototype: undefined8 libpd_get_symbol(long param_1)
// Body     : 004d75b0 - 004d75b7


undefined8 libpd_get_symbol(long param_1)

{
  return **(undefined8 **)(param_1 + 8);
}


