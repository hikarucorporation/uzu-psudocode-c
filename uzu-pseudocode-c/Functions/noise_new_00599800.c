// Function : noise_new
// Namespace: 
// Entry    : 00599800
// Prototype: long * noise_new(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, undefined8 param_9, undefined8 param_10, undefined8 param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 00599800 - 0059983e


long * noise_new(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                char *param_13,undefined8 param_14)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 extraout_RDX;
  undefined8 extraout_XMM0_Qa;
  
  plVar1 = pd_new(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,noise_class,
                  param_10,param_11,param_12,param_13,param_14);
  noise_new_init = noise_new_init * 0x527;
  *(int *)(plVar1 + 6) = noise_new_init;
  puVar2 = gensym("signal");
  outlet_new(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,param_8,(long)plVar1,
             (long)puVar2,extraout_RDX,param_12,param_13,param_14);
  return plVar1;
}


