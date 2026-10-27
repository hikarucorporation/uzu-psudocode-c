// Function : sigczero_set
// Namespace: 
// Entry    : 00594b40
// Prototype: undefined sigczero_set(undefined4 param_1, undefined4 param_2, long param_3)
// Body     : 00594b40 - 00594b4a


void sigczero_set(undefined4 param_1,undefined4 param_2,long param_3)

{
  *(undefined4 *)(param_3 + 0x34) = param_1;
  *(undefined4 *)(param_3 + 0x38) = param_2;
  return;
}


