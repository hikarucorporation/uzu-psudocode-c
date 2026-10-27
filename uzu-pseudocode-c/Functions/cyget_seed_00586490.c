// Function : cyget_seed
// Namespace: 
// Entry    : 00586490
// Prototype: ulong cyget_seed(undefined8 param_1, int param_2, int * param_3, int param_4)
// Body     : 00586490 - 005864ac


ulong cyget_seed(undefined8 param_1,int param_2,int *param_3,int param_4)

{
  ulong uVar1;
  time_t tVar2;
  
  if (param_2 == 0) {
    tVar2 = time((time_t *)0x0);
    return (ulong)(uint)((int)tVar2 * param_4);
  }
  uVar1 = atom_getint(param_3);
  return uVar1;
}


