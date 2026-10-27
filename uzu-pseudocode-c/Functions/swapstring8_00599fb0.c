// Function : swapstring8
// Namespace: 
// Entry    : 00599fb0
// Prototype: undefined swapstring8(undefined1 * param_1, int param_2)
// Body     : 00599fb0 - 00599fec


void swapstring8(undefined1 *param_1,int param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  
  if (param_2 != 0) {
    uVar1 = *param_1;
    uVar2 = param_1[1];
    uVar3 = param_1[2];
    uVar4 = param_1[3];
    *param_1 = param_1[7];
    param_1[1] = param_1[6];
    param_1[2] = param_1[5];
    param_1[3] = param_1[4];
    param_1[4] = uVar4;
    param_1[5] = uVar3;
    param_1[6] = uVar2;
    param_1[7] = uVar1;
  }
  return;
}


