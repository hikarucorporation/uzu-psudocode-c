// Function : choice_new
// Namespace: 
// Entry    : 004dc990
// Prototype: long * choice_new(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, undefined8 param_9, undefined8 param_10, undefined8 param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 004dc990 - 004dc9ef


long * choice_new(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                 char *param_13,undefined8 param_14)

{
  long *plVar1;
  undefined8 *puVar2;
  void *pvVar3;
  undefined8 extraout_RDX;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Db;
  
  plVar1 = pd_new(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,choice_class,
                  param_10,param_11,param_12,param_13,param_14);
  puVar2 = gensym("float");
  outlet_new(CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),param_2,param_3,param_4,param_5,param_6,
             param_7,param_8,(long)plVar1,(long)puVar2,extraout_RDX,param_12,param_13,param_14);
  pvVar3 = getbytes(0);
  plVar1[6] = (long)pvVar3;
  *(undefined4 *)(plVar1 + 7) = 0;
  *(uint *)((long)plVar1 + 0x3c) = (uint)((float)param_1 != 0.0);
  return plVar1;
}


