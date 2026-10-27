// Function : sigrzero_rev_set
// Namespace: 
// Entry    : 00594700
// Prototype: undefined sigrzero_rev_set(undefined4 param_1, long param_2)
// Body     : 00594700 - 00594705


void sigrzero_rev_set(undefined4 param_1,long param_2)

{
  *(undefined4 *)(param_2 + 0x34) = param_1;
  return;
}


