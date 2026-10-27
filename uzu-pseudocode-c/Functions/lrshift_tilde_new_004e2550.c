// Function : lrshift_tilde_new
// Namespace: 
// Entry    : 004e2550
// Prototype: long * lrshift_tilde_new(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, undefined8 param_9, undefined8 param_10, undefined8 param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 004e2550 - 004e2599


long * lrshift_tilde_new(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4
                        ,undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8
                        ,undefined8 param_9,undefined8 param_10,undefined8 param_11,
                        undefined8 param_12,char *param_13,undefined8 param_14)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 extraout_RDX;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Db;
  
  plVar1 = pd_new(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                  lrshift_tilde_class,param_10,param_11,param_12,param_13,param_14);
  *(int *)(plVar1 + 6) = (int)(float)param_1;
  *(undefined4 *)((long)plVar1 + 0x34) = 0;
  puVar2 = gensym("signal");
  outlet_new(CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),param_2,param_3,param_4,param_5,param_6,
             param_7,param_8,(long)plVar1,(long)puVar2,extraout_RDX,param_12,param_13,param_14);
  return plVar1;
}


