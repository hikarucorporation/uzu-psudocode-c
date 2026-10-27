// Function : pd_floatforsignal
// Namespace: 
// Entry    : 00536aa0
// Prototype: undefined pd_floatforsignal(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long * param_9)
// Body     : 00536aa0 - 00536ac6


void pd_floatforsignal(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                      undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                      long *param_9)

{
  uint uVar1;
  char *in_R8;
  undefined8 in_R9;
  
  uVar1 = *(uint *)((undefined8 *)*param_9 + 0x12);
  if ((int)uVar1 < 1) {
    pd_error(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,(long)param_9,
             "%s: float unexpected for signal input",**(undefined8 **)*param_9,(ulong)uVar1,in_R8,
             in_R9);
    return;
  }
  *(int *)((long)param_9 + (ulong)uVar1) = (int)param_1;
  return;
}


