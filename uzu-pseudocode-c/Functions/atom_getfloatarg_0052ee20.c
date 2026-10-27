// Function : atom_getfloatarg
// Namespace: 
// Entry    : 0052ee20
// Prototype: undefined4 atom_getfloatarg(int param_1, int param_2, long param_3)
// Body     : 0052ee20 - 0052ee3a


undefined4 atom_getfloatarg(int param_1,int param_2,long param_3)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if ((param_1 < param_2) && (*(int *)(param_3 + (long)param_1 * 0x10) == 1)) {
    uVar1 = *(undefined4 *)(param_3 + 8 + (long)param_1 * 0x10);
  }
  return uVar1;
}


