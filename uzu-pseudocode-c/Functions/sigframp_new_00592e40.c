// Function : sigframp_new
// Namespace: 
// Entry    : 00592e40
// Prototype: long * sigframp_new(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, undefined8 param_9, undefined8 param_10, undefined8 param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 00592e40 - 00592ec4


long * sigframp_new(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                   undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                   char *param_13,undefined8 param_14)

{
  long *plVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  undefined4 extraout_XMM0_Db_01;
  
  plVar1 = pd_new(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,sigframp_class,
                  param_10,param_11,param_12,param_13,param_14);
  plVar2 = (long *)__tls_get_addr(&PTR_007159b0);
  lVar4 = *plVar2 + 0xf0;
  inlet_new(CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),param_2,param_3,param_4,param_5,param_6,
            param_7,param_8,(long)plVar1,(long)plVar1,lVar4,lVar4,param_13,param_14);
  puVar3 = gensym("signal");
  outlet_new(CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_00),param_2,param_3,param_4,param_5,
             param_6,param_7,param_8,(long)plVar1,(long)puVar3,extraout_RDX,lVar4,param_13,param_14)
  ;
  puVar3 = gensym("signal");
  outlet_new(CONCAT44(extraout_XMM0_Db_01,extraout_XMM0_Da_01),param_2,param_3,param_4,param_5,
             param_6,param_7,param_8,(long)plVar1,(long)puVar3,extraout_RDX_00,lVar4,param_13,
             param_14);
  q8_rsqrt(DAT_005d9054);
  *(undefined4 *)(plVar1 + 6) = 0;
  return plVar1;
}


