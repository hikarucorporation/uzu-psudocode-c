// Function : until_bang
// Namespace: 
// Entry    : 0054e3c0
// Prototype: undefined until_bang(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9)
// Body     : 0054e3c0 - 0054e3fd


void until_bang(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
               long param_9)

{
  int iVar1;
  undefined8 extraout_XMM0_Qa;
  
  *(undefined8 *)(param_9 + 0x30) = 0xffffffff00000001;
  iVar1 = -1;
  do {
    *(int *)(param_9 + 0x34) = iVar1 + -1;
    outlet_bang(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                *(long **)(param_9 + 0x18));
    if (*(int *)(param_9 + 0x30) == 0) {
      return;
    }
    iVar1 = *(int *)(param_9 + 0x34);
    param_1 = extraout_XMM0_Qa;
  } while (iVar1 != 0);
  return;
}


