// Function : loop_bang
// Namespace: 
// Entry    : 004e2360
// Prototype: undefined loop_bang(long param_1)
// Body     : 004e2360 - 004e236f


void loop_bang(long param_1)

{
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x48) = 1;
  return;
}


