// Function : loop_range
// Namespace: 
// Entry    : 00563db0
// Prototype: undefined loop_range(long param_1, undefined8 param_2, int param_3, int * param_4)
// Body     : 00563db0 - 00563de6


void loop_range(long param_1,undefined8 param_2,int param_3,int *param_4)

{
  int iVar1;
  
  if (param_3 == 2) {
    iVar1 = atom_getfloat(param_4);
    *(int *)(param_1 + 0x30) = iVar1;
    iVar1 = atom_getfloat(param_4 + 4);
    *(int *)(param_1 + 0x34) = iVar1;
  }
  return;
}


