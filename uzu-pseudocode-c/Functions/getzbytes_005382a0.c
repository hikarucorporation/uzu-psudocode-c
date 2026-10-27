// Function : getzbytes
// Namespace: 
// Entry    : 005382a0
// Prototype: void * getzbytes(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, size_t param_9)
// Body     : 005382a0 - 005382d6


void * getzbytes(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                size_t param_9)

{
  void *pvVar1;
  undefined8 extraout_XMM0_Qa;
  
  if (param_9 == 0) {
    param_9 = 1;
  }
  pvVar1 = calloc(param_9,1);
  if (pvVar1 == (void *)0x0) {
    post(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
         "pd: getbytes() failed -- out of memory");
    return (void *)0x0;
  }
  return pvVar1;
}


