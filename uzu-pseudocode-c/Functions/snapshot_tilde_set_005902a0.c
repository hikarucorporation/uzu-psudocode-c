// Function : snapshot_tilde_set
// Namespace: 
// Entry    : 005902a0
// Prototype: undefined snapshot_tilde_set(undefined4 param_1, long param_2)
// Body     : 005902a0 - 005902a5


void snapshot_tilde_set(undefined4 param_1,long param_2)

{
  *(undefined4 *)(param_2 + 0x30) = param_1;
  return;
}


