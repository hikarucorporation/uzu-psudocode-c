// Function : bonk_learn
// Namespace: 
// Entry    : 004da320
// Prototype: undefined bonk_learn(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9)
// Body     : 004da320 - 004da375


void bonk_learn(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
               long param_9)

{
  void *pvVar1;
  int iVar2;
  
  iVar2 = (int)(float)param_1;
  if (iVar2 < 1) {
    iVar2 = 0;
  }
  else {
    pvVar1 = resizebytes(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                         *(void **)(param_9 + 0x2620),(long)*(int *)(param_9 + 0x2634) * 800,0);
    *(void **)(param_9 + 0x2620) = pvVar1;
    *(undefined4 *)(param_9 + 0x2634) = 0;
  }
  *(int *)(param_9 + 0x264c) = iVar2;
  *(undefined4 *)(param_9 + 0x2650) = 0;
  return;
}


