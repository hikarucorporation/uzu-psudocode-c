// Function : square_set
// Namespace: 
// Entry    : 005718d0
// Prototype: undefined square_set(long param_1, undefined8 param_2, int param_3, int * param_4)
// Body     : 005718d0 - 00571933


void square_set(long param_1,undefined8 param_2,int param_3,int *param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  *(undefined8 *)(param_1 + 0xa0) = param_2;
  if (param_3 == 2) {
    lVar1 = atom_getint(param_4);
    lVar2 = atom_getint(param_4 + 4);
    if (*(long *)(param_1 + 0x98) <= (long)(int)lVar1) {
      lVar1 = *(long *)(param_1 + 0x98);
    }
    lVar3 = 0;
    if (1 < (int)lVar1) {
      lVar3 = (long)((int)lVar1 + -1);
    }
    *(float *)(*(long *)(param_1 + 0x90) + lVar3 * 4) = (float)lVar2;
  }
  return;
}


