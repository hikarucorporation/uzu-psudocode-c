// Function : key_free
// Namespace: 
// Entry    : 0054fc60
// Prototype: undefined key_free(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long * param_9, undefined8 param_10, undefined8 param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 0054fc60 - 0054fc7b


void key_free(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             long *param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             char *param_13,undefined8 param_14)

{
  undefined8 *puVar1;
  undefined8 extraout_RDX;
  undefined8 extraout_XMM0_Qa;
  
  puVar1 = gensym("#key");
  pd_unbind(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,puVar1,
            extraout_RDX,param_12,param_13,param_14);
  return;
}


