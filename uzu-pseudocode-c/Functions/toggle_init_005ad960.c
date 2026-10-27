// Function : toggle_init
// Namespace: 
// Entry    : 005ad960
// Prototype: undefined toggle_init(float param_1, long param_2)
// Body     : 005ad960 - 005ad97c


void toggle_init(float param_1,long param_2)

{
  *(uint *)(param_2 + 0x448) = *(uint *)(param_2 + 0x448) & 0xfffffffe | (uint)(param_1 != 0.0);
  return;
}


