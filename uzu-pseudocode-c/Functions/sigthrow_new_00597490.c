// Function : sigthrow_new
// Namespace: 
// Entry    : 00597490
// Prototype: undefined sigthrow_new(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, undefined8 param_10, undefined8 param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 00597490 - 005974bb


void sigthrow_new(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 long param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                 char *param_13,undefined8 param_14)

{
  long *plVar1;
  
  plVar1 = pd_new(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,sigthrow_class,
                  param_10,param_11,param_12,param_13,param_14);
  plVar1[6] = param_9;
  plVar1[7] = 0;
  *(undefined4 *)(plVar1 + 8) = 0;
  *(undefined4 *)(plVar1 + 9) = 0;
  return;
}


