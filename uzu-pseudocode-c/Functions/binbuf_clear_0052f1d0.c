// Function : binbuf_clear
// Namespace: 
// Entry    : 0052f1d0
// Prototype: undefined binbuf_clear(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, int * param_9)
// Body     : 0052f1d0 - 0052f1f1


void binbuf_clear(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 int *param_9)

{
  void *pvVar1;
  
  pvVar1 = resizebytes(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                       *(void **)(param_9 + 2),(long)*param_9 << 4,0);
  *(void **)(param_9 + 2) = pvVar1;
  *param_9 = 0;
  return;
}


