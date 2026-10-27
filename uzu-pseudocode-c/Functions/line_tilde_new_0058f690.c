// Function : line_tilde_new
// Namespace: 
// Entry    : 0058f690
// Prototype: long * line_tilde_new(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, undefined8 param_9, undefined8 param_10, undefined8 param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 0058f690 - 0058f6d6


long * line_tilde_new(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                     undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                     undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                     char *param_13,undefined8 param_14)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  
  plVar1 = pd_new(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,line_tilde_class,
                  param_10,param_11,param_12,param_13,param_14);
  puVar2 = gensym("signal");
  outlet_new(CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),param_2,param_3,param_4,param_5,param_6,
             param_7,param_8,(long)plVar1,(long)puVar2,extraout_RDX,param_12,param_13,param_14);
  floatinlet_new(CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_00),param_2,param_3,param_4,param_5,
                 param_6,param_7,param_8,(long)plVar1,(long)(plVar1 + 9),extraout_RDX_00,param_12,
                 param_13,param_14);
  plVar1[9] = 0;
  plVar1[10] = 0;
  plVar1[6] = 0;
  return plVar1;
}


