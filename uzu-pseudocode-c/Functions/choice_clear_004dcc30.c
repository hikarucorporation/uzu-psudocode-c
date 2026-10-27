// Function : choice_clear
// Namespace: 
// Entry    : 004dcc30
// Prototype: undefined choice_clear(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9)
// Body     : 004dcc30 - 004dcc53


void choice_clear(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 long param_9)

{
  void *pvVar1;
  
  pvVar1 = resizebytes(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                       *(void **)(param_9 + 0x30),(long)*(int *)(param_9 + 0x38) * 0x2c,0);
  *(void **)(param_9 + 0x30) = pvVar1;
  *(undefined4 *)(param_9 + 0x38) = 0;
  return;
}


