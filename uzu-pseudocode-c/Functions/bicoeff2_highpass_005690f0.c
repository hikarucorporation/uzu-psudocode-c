// Function : bicoeff2_highpass
// Namespace: 
// Entry    : 005690f0
// Prototype: undefined bicoeff2_highpass(long param_1, undefined8 param_2, int param_3, int * param_4)
// Body     : 005690f0 - 00569166


void bicoeff2_highpass(long param_1,undefined8 param_2,int param_3,int *param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_3 != 0) {
    iVar1 = 0;
    do {
      if (*param_4 == 1) {
        uVar2 = atom_getfloatarg(0,param_3,(long)param_4);
        if (iVar1 == 2) {
          *(undefined4 *)(param_1 + 0x38) = uVar2;
        }
        else if (iVar1 == 1) {
          *(undefined4 *)(param_1 + 0x34) = uVar2;
        }
        else if (iVar1 == 0) {
          *(undefined4 *)(param_1 + 0x30) = uVar2;
        }
        iVar1 = iVar1 + 1;
      }
      param_4 = param_4 + 4;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  *(undefined4 *)(param_1 + 0x3c) = 0x40a00000;
  bicoeff2_bang(param_1);
  return;
}


