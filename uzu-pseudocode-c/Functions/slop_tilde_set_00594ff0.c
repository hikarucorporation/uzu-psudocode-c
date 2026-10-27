// Function : slop_tilde_set
// Namespace: 
// Entry    : 00594ff0
// Prototype: undefined slop_tilde_set(undefined4 param_1, long param_2)
// Body     : 00594ff0 - 00594ff5


void slop_tilde_set(undefined4 param_1,long param_2)

{
  *(undefined4 *)(param_2 + 0x38) = param_1;
  return;
}


