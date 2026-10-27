// Function : class_domainsignalin
// Namespace: 
// Entry    : 00536a40
// Prototype: undefined class_domainsignalin(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, int param_10)
// Body     : 00536a40 - 00536a90


void class_domainsignalin
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
               long param_9,int param_10)

{
  if (param_9 != 0) {
    if (param_10 < 1) {
      param_10 = -1;
    }
    else {
      if (*(code **)(param_9 + 0x48) != pd_defaultfloat) {
        post(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
             "warning: %s: float method overwritten");
      }
      *(code **)(param_9 + 0x48) = pd_floatforsignal;
    }
    *(int *)(param_9 + 0x90) = param_10;
  }
  return;
}


