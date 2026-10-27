// Function : value_getfloat
// Namespace: 
// Entry    : 0054c720
// Prototype: undefined8 value_getfloat(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, undefined4 * param_10)
// Body     : 0054c720 - 0054c748


undefined8
value_getfloat(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
              undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
              long param_9,undefined4 *param_10)

{
  long *plVar1;
  
  plVar1 = pd_findbyclass(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                          vcommon_class);
  if (plVar1 == (long *)0x0) {
    return 1;
  }
  *param_10 = *(undefined4 *)((long)plVar1 + 0xc);
  return 0;
}


