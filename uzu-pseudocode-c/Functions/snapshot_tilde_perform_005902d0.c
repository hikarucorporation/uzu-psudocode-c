// Function : snapshot_tilde_perform
// Namespace: 
// Entry    : 005902d0
// Prototype: long snapshot_tilde_perform(long param_1)
// Body     : 005902d0 - 005902e4


long snapshot_tilde_perform(long param_1)

{
  **(undefined4 **)(param_1 + 0x10) = **(undefined4 **)(param_1 + 8);
  return param_1 + 0x18;
}


