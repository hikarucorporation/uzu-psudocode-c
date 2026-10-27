// Function : bob_new
// Namespace: 
// Entry    : 004d7d60
// Prototype: long * bob_new(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, undefined8 param_9, undefined8 param_10, undefined8 param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 004d7d60 - 004d7e10


long * bob_new(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
              undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
              undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
              char *param_13,undefined8 param_14)

{
  long *plVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined8 extraout_RDX;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  undefined4 extraout_XMM0_Db_01;
  
  plVar1 = pd_new(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,bob_class,param_10
                  ,param_11,param_12,param_13,param_14);
  puVar2 = gensym("signal");
  plVar3 = outlet_new(CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),param_2,param_3,param_4,param_5,
                      param_6,param_7,param_8,(long)plVar1,(long)puVar2,extraout_RDX,param_12,
                      param_13,param_14);
  plVar1[7] = (long)plVar3;
  plVar3 = (long *)__tls_get_addr(&PTR_007159b0);
  inlet_new(CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_00),param_2,param_3,param_4,param_5,
            param_6,param_7,param_8,(long)plVar1,(long)plVar1,*plVar3 + 0xf0,*plVar3 + 0xf0,param_13
            ,param_14);
  inlet_new(CONCAT44(extraout_XMM0_Db_01,extraout_XMM0_Da_01),param_2,param_3,param_4,param_5,
            param_6,param_7,param_8,(long)plVar1,(long)plVar1,*plVar3 + 0xf0,*plVar3 + 0xf0,param_13
            ,param_14);
  *(undefined4 *)(plVar1 + 6) = 0;
  plVar1[0xc] = 0;
  plVar1[0xd] = 0;
  plVar1[0xe] = 0;
  plVar1[0xf] = 0;
  plVar1[0x10] = 0;
  plVar1[0x11] = 0;
  plVar1[0x12] = 0;
  plVar1[0x13] = 0;
  plVar1[0xb] = 0x4008000000000000;
  *(undefined4 *)(plVar1 + 0x15) = 2;
  return plVar1;
}


