// Function : atom_getintarg
// Namespace: 
// Entry    : 0052ee40
// Prototype: long atom_getintarg(int param_1, int param_2, long param_3)
// Body     : 0052ee40 - 0052ee5b


long atom_getintarg(int param_1,int param_2,long param_3)

{
  if ((param_1 < param_2) && (*(int *)(param_3 + (long)param_1 * 0x10) == 1)) {
    return (long)*(float *)(param_3 + 8 + (long)param_1 * 0x10);
  }
  return 0;
}


