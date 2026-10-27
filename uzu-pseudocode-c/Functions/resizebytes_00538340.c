// Function : resizebytes
// Namespace: 
// Entry    : 00538340
// Prototype: void * resizebytes(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, void * param_9, ulong param_10, ulong param_11)
// Body     : 00538340 - 0053839e


void * resizebytes(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  void *param_9,ulong param_10,ulong param_11)

{
  void *pvVar1;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 uVar2;
  
  if (param_11 == 0) {
    param_11 = 1;
  }
  if (param_10 == 0) {
    param_10 = 1;
  }
  pvVar1 = realloc(param_9,param_11);
  uVar2 = extraout_XMM0_Qa;
  if ((param_10 <= param_11 && param_11 - param_10 != 0) && (pvVar1 != (void *)0x0)) {
    memset((void *)(param_10 + (long)pvVar1),0,param_11 - param_10);
    uVar2 = extraout_XMM0_Qa_00;
  }
  if (pvVar1 == (void *)0x0) {
    post(uVar2,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
         "pd: resizebytes() failed -- out of memory");
  }
  return pvVar1;
}


