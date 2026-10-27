// Function : exprproxy_new
// Namespace: 
// Entry    : 00583920
// Prototype: undefined exprproxy_new(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, undefined8 param_10, undefined8 param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 00583920 - 00583953


void exprproxy_new(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  long param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  char *param_13,undefined8 param_14)

{
  long *plVar1;
  
  plVar1 = pd_new(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,exprproxy_class,
                  param_10,param_11,param_12,param_13,param_14);
  plVar1[2] = param_9;
  *(int *)(plVar1 + 1) = (int)param_10;
  plVar1[3] = *(long *)(param_9 + 0x370);
  *(long **)(param_9 + 0x370) = plVar1;
  return;
}


