// Function : sigrzero_set
// Namespace: 
// Entry    : 00594540
// Prototype: undefined sigrzero_set(undefined4 param_1, long param_2)
// Body     : 00594540 - 00594545


void sigrzero_set(undefined4 param_1,long param_2)

{
  *(undefined4 *)(param_2 + 0x34) = param_1;
  return;
}


