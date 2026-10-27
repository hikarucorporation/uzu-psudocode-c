// Function : swapstring4
// Namespace: 
// Entry    : 00599f90
// Prototype: undefined swapstring4(undefined1 * param_1, int param_2)
// Body     : 00599f90 - 00599fac


void swapstring4(undefined1 *param_1,int param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  
  if (param_2 != 0) {
    uVar1 = *param_1;
    uVar2 = param_1[1];
    *param_1 = param_1[3];
    param_1[1] = param_1[2];
    param_1[2] = uVar2;
    param_1[3] = uVar1;
  }
  return;
}


