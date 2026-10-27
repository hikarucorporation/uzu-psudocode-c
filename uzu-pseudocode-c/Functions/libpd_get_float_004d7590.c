// Function : libpd_get_float
// Namespace: 
// Entry    : 004d7590
// Prototype: undefined4 libpd_get_float(long param_1)
// Body     : 004d7590 - 004d7595


undefined4 libpd_get_float(long param_1)

{
  return *(undefined4 *)(param_1 + 8);
}


