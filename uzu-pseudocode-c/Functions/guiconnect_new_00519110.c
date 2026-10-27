// Function : guiconnect_new
// Namespace: 
// Entry    : 00519110
// Prototype: long * guiconnect_new(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, long param_10, undefined8 param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 00519110 - 00519145


long * guiconnect_new(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                     undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                     long param_9,long param_10,undefined8 param_11,undefined8 param_12,
                     char *param_13,undefined8 param_14)

{
  long *plVar1;
  undefined8 extraout_RDX;
  undefined8 extraout_XMM0_Qa;
  
  plVar1 = pd_new(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,guiconnect_class,
                  param_10,param_11,param_12,param_13,param_14);
  plVar1[6] = param_9;
  plVar1[7] = param_10;
  pd_bind(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar1,param_10,
          extraout_RDX,param_12,param_13,param_14);
  return plVar1;
}


