// Function : loadbanger_click
// Namespace: 
// Entry    : 0056a5b0
// Prototype: undefined loadbanger_click(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9)
// Body     : 0056a5b0 - 0056a5ec


void loadbanger_click(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                     undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                     long param_9)

{
  ulong uVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 extraout_XMM0_Qa;
  
  uVar3 = (ulong)*(int *)(param_9 + 0x30);
  uVar1 = uVar3;
  if (uVar3 != 0) {
    do {
      outlet_bang(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                  *(long **)(*(long *)(param_9 + 0x48) + (uVar1 - 1) * 8));
      uVar2 = (int)uVar3 - 1;
      uVar3 = (ulong)uVar2;
      param_1 = extraout_XMM0_Qa;
      uVar1 = uVar1 - 1;
    } while (uVar2 != 0);
  }
  return;
}


