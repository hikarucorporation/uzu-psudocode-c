// Function : bonk_forget
// Namespace: 
// Entry    : 004da380
// Prototype: undefined bonk_forget(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9)
// Body     : 004da380 - 004da3d7


void bonk_forget(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                long param_9)

{
  void *pvVar1;
  uint uVar2;
  ulong uVar3;
  
  uVar2 = *(int *)(param_9 + 0x2634) - *(int *)(param_9 + 0x2630);
  uVar3 = (ulong)uVar2;
  if ((int)uVar2 < 0) {
    uVar3 = 0;
  }
  pvVar1 = resizebytes(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                       *(void **)(param_9 + 0x2620),(long)*(int *)(param_9 + 0x2634) * 800,
                       uVar3 * 800);
  *(void **)(param_9 + 0x2620) = pvVar1;
  *(int *)(param_9 + 0x2634) = (int)uVar3;
  *(undefined4 *)(param_9 + 0x2650) = 0;
  return;
}


