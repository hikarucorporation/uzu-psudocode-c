// Function : sigczero_rev_set
// Namespace: 
// Entry    : 00594d70
// Prototype: undefined sigczero_rev_set(undefined4 param_1, undefined4 param_2, long param_3)
// Body     : 00594d70 - 00594d7a


void sigczero_rev_set(undefined4 param_1,undefined4 param_2,long param_3)

{
  *(undefined4 *)(param_3 + 0x34) = param_1;
  *(undefined4 *)(param_3 + 0x38) = param_2;
  return;
}


