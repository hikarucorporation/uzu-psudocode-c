// Function : sigcpole_set
// Namespace: 
// Entry    : 00594910
// Prototype: undefined sigcpole_set(undefined4 param_1, undefined4 param_2, long param_3)
// Body     : 00594910 - 0059491a


void sigcpole_set(undefined4 param_1,undefined4 param_2,long param_3)

{
  *(undefined4 *)(param_3 + 0x34) = param_1;
  *(undefined4 *)(param_3 + 0x38) = param_2;
  return;
}


