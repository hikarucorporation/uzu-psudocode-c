// Function : line_new
// Namespace: 
// Entry    : 0055c4b0
// Prototype: long * line_new(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, undefined8 param_9, undefined8 param_10, undefined8 param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 0055c4b0 - 0055c583


long * line_new(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
               undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
               char *param_13,undefined8 param_14)

{
  long *plVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  undefined4 extraout_XMM0_Db_01;
  undefined4 extraout_XMM0_Db_02;
  undefined4 uVar5;
  
  uVar5 = (undefined4)param_2;
  plVar1 = pd_new(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,line_class,
                  param_10,param_11,param_12,param_13,param_14);
  *(int *)(plVar1 + 10) = (int)param_1;
  *(int *)(plVar1 + 8) = (int)param_1;
  *(undefined4 *)((long)plVar1 + 0x54) = 0;
  plVar1[0xc] = 0x3ff0000000000000;
  lVar2 = clock_new(plVar1,line_tick);
  plVar1[6] = lVar2;
  clock_getlogicaltime();
  plVar1[9] = CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da);
  plVar1[7] = CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da);
  *(undefined4 *)(plVar1 + 0xb) = uVar5;
  puVar3 = gensym("float");
  outlet_new(CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_00),param_2,param_3,param_4,param_5,
             param_6,param_7,param_8,(long)plVar1,(long)puVar3,extraout_RDX,param_12,param_13,
             param_14);
  puVar3 = gensym("float");
  puVar4 = gensym("ft1");
  inlet_new(CONCAT44(extraout_XMM0_Db_01,extraout_XMM0_Da_01),param_2,param_3,param_4,param_5,
            param_6,param_7,param_8,(long)plVar1,(long)plVar1,(long)puVar3,(long)puVar4,param_13,
            param_14);
  floatinlet_new(CONCAT44(extraout_XMM0_Db_02,extraout_XMM0_Da_02),param_2,param_3,param_4,param_5,
                 param_6,param_7,param_8,(long)plVar1,(long)(plVar1 + 0xb),extraout_RDX_00,puVar4,
                 param_13,param_14);
  return plVar1;
}


