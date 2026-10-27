// Function : phasor_new
// Namespace: 
// Entry    : 00598920
// Prototype: long * phasor_new(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, undefined8 param_9, undefined8 param_10, undefined8 param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 00598920 - 005989a8


long * phasor_new(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                 char *param_13,undefined8 param_14)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 extraout_RDX;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  
  plVar2 = pd_new(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,phasor_class,
                  param_10,param_11,param_12,param_13,param_14);
  *(int *)((long)plVar2 + 0x3c) = (int)param_1;
  plVar3 = (long *)__tls_get_addr(&PTR_007159b0);
  lVar1 = *plVar3;
  puVar4 = gensym("ft1");
  inlet_new(CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),param_2,param_3,param_4,param_5,param_6,
            param_7,param_8,(long)plVar2,(long)plVar2,lVar1 + 0x78,(long)puVar4,param_13,param_14);
  plVar2[6] = 0;
  *(undefined4 *)(plVar2 + 7) = 0;
  puVar5 = gensym("signal");
  outlet_new(CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_00),param_2,param_3,param_4,param_5,
             param_6,param_7,param_8,(long)plVar2,(long)puVar5,extraout_RDX,puVar4,param_13,param_14
            );
  return plVar2;
}


