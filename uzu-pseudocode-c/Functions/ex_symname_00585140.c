// Function : ex_symname
// Namespace: 
// Entry    : 00585140
// Prototype: undefined8 ex_symname(undefined8 * param_1)
// Body     : 00585140 - 0058514b


undefined8 ex_symname(undefined8 *param_1)

{
  if (param_1 == (undefined8 *)0x0) {
    return 0;
  }
  return *param_1;
}


