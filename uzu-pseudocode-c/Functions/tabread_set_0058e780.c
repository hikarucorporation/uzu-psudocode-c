// Function : tabread_set
// Namespace: 
// Entry    : 0058e780
// Prototype: undefined tabread_set(long param_1, undefined8 param_2)
// Body     : 0058e780 - 0058e784


void tabread_set(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x30) = param_2;
  return;
}


