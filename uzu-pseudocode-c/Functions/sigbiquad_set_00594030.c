// Function : sigbiquad_set
// Namespace: 
// Entry    : 00594030
// Prototype: undefined sigbiquad_set(long param_1, undefined8 param_2, int param_3, long param_4)
// Body     : 00594030 - 00594067


void sigbiquad_set(long param_1,undefined8 param_2,int param_3,long param_4)

{
  undefined4 uVar1;
  
  uVar1 = atom_getfloatarg(0,param_3,param_4);
  *(undefined4 *)(param_1 + 0x34) = uVar1;
  uVar1 = atom_getfloatarg(1,param_3,param_4);
  *(undefined4 *)(param_1 + 0x38) = uVar1;
  return;
}


