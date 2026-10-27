// Function : my_numbox_init
// Namespace: 
// Entry    : 005a5e40
// Prototype: undefined my_numbox_init(float param_1, long param_2)
// Body     : 005a5e40 - 005a5e5c


void my_numbox_init(float param_1,long param_2)

{
  *(uint *)(param_2 + 0x448) = *(uint *)(param_2 + 0x448) & 0xfffffffe | (uint)(param_1 != 0.0);
  return;
}


