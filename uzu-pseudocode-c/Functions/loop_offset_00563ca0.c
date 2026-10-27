// Function : loop_offset
// Namespace: 
// Entry    : 00563ca0
// Prototype: undefined loop_offset(undefined4 param_1, long param_2)
// Body     : 00563ca0 - 00563ca5


void loop_offset(undefined4 param_1,long param_2)

{
  *(undefined4 *)(param_2 + 0x38) = param_1;
  return;
}


