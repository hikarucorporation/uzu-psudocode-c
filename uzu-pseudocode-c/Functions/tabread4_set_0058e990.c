// Function : tabread4_set
// Namespace: 
// Entry    : 0058e990
// Prototype: undefined tabread4_set(long param_1, undefined8 param_2)
// Body     : 0058e990 - 0058e994


void tabread4_set(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x30) = param_2;
  return;
}


