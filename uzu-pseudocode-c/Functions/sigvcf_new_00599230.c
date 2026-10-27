// Function : sigvcf_new
// Namespace: 
// Entry    : 00599230
// Prototype: long * sigvcf_new(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, undefined8 param_9, undefined8 param_10, undefined8 param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 00599230 - 005992f0


long * sigvcf_new(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                 char *param_13,undefined8 param_14)

{
  long *plVar1;
  long *plVar2;
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
  
  plVar1 = pd_new(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                  *(long *)PTR_sigvcf_class_007155c8,param_10,param_11,param_12,param_13,param_14);
  plVar2 = (long *)__tls_get_addr(&PTR_007159b0);
  inlet_new(CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),param_2,param_3,param_4,param_5,param_6,
            param_7,param_8,(long)plVar1,(long)plVar1,*plVar2 + 0xf0,*plVar2 + 0xf0,param_13,
            param_14);
  puVar3 = gensym("float");
  puVar4 = gensym("ft1");
  inlet_new(CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_00),param_2,param_3,param_4,param_5,
            param_6,param_7,param_8,(long)plVar1,(long)plVar1,(long)puVar3,(long)puVar4,param_13,
            param_14);
  puVar3 = gensym("signal");
  outlet_new(CONCAT44(extraout_XMM0_Db_01,extraout_XMM0_Da_01),param_2,param_3,param_4,param_5,
             param_6,param_7,param_8,(long)plVar1,(long)puVar3,extraout_RDX,puVar4,param_13,param_14
            );
  puVar3 = gensym("signal");
  outlet_new(CONCAT44(extraout_XMM0_Db_02,extraout_XMM0_Da_02),param_2,param_3,param_4,param_5,
             param_6,param_7,param_8,(long)plVar1,(long)puVar3,extraout_RDX_00,puVar4,param_13,
             param_14);
  plVar1[6] = 0;
  *(int *)(plVar1 + 7) = (int)param_1;
  *(undefined8 *)((long)plVar1 + 0x3c) = 0;
  return plVar1;
}


