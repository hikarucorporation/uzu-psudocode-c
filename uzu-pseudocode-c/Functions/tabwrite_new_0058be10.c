// Function : tabwrite_new
// Namespace: 
// Entry    : 0058be10
// Prototype: long * tabwrite_new(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, undefined8 param_10, undefined8 param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 0058be10 - 0058be47


long * tabwrite_new(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                   long param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                   char *param_13,undefined8 param_14)

{
  long *plVar1;
  undefined8 extraout_RDX;
  undefined8 extraout_XMM0_Qa;
  
  plVar1 = pd_new(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,tabwrite_class,
                  param_10,param_11,param_12,param_13,param_14);
  *(undefined4 *)(plVar1 + 7) = 0;
  plVar1[6] = param_9;
  floatinlet_new(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                 (long)plVar1,(long)(plVar1 + 7),extraout_RDX,param_12,param_13,param_14);
  return plVar1;
}


