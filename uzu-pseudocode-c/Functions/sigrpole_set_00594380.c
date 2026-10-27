// Function : sigrpole_set
// Namespace: 
// Entry    : 00594380
// Prototype: undefined sigrpole_set(undefined4 param_1, long param_2)
// Body     : 00594380 - 00594385


void sigrpole_set(undefined4 param_1,long param_2)

{
  *(undefined4 *)(param_2 + 0x34) = param_1;
  return;
}


