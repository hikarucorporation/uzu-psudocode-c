// Function : value_setfloat
// Namespace: 
// Entry    : 0054c750
// Prototype: undefined8 value_setfloat(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9)
// Body     : 0054c750 - 0054c77d


undefined8
value_setfloat(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
              undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
              long param_9)

{
  long *plVar1;
  
  plVar1 = pd_findbyclass(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                          vcommon_class);
  if (plVar1 == (long *)0x0) {
    return 1;
  }
  *(int *)((long)plVar1 + 0xc) = (int)param_1;
  return 0;
}


