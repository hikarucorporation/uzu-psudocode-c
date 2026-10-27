// Function : binbuf_resize
// Namespace: 
// Entry    : 0052f8b0
// Prototype: bool binbuf_resize(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, int * param_9, int param_10)
// Body     : 0052f8b0 - 0052f8ea


bool binbuf_resize(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  int *param_9,int param_10)

{
  void *pvVar1;
  
  pvVar1 = resizebytes(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                       *(void **)(param_9 + 2),(long)*param_9 << 4,(long)param_10 << 4);
  if (pvVar1 != (void *)0x0) {
    *(void **)(param_9 + 2) = pvVar1;
    *param_9 = param_10;
  }
  return pvVar1 != (void *)0x0;
}


