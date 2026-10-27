// Function : polytouchin_new
// Namespace: 
// Entry    : 00554d10
// Prototype: long * polytouchin_new(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, undefined8 param_9, undefined8 param_10, undefined8 param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 00554d10 - 00554dcb


long * polytouchin_new(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                      undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                      undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12
                      ,char *param_13,undefined8 param_14)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 extraout_RDX_01;
  undefined8 extraout_RDX_02;
  float fVar4;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  undefined4 extraout_XMM0_Db_01;
  undefined4 extraout_XMM0_Db_02;
  undefined4 uVar5;
  
  fVar4 = (float)param_1;
  plVar1 = pd_new(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,polytouchin_class,
                  param_10,param_11,param_12,param_13,param_14);
  *(float *)(plVar1 + 6) = fVar4;
  plVar2 = (long *)__tls_get_addr(&PTR_007159b0);
  plVar3 = outlet_new(CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),param_2,param_3,param_4,param_5,
                      param_6,param_7,param_8,(long)plVar1,*plVar2 + 0x78,extraout_RDX,param_12,
                      param_13,param_14);
  plVar1[7] = (long)plVar3;
  plVar2 = outlet_new(CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_00),param_2,param_3,param_4,
                      param_5,param_6,param_7,param_8,(long)plVar1,*plVar2 + 0x78,extraout_RDX_00,
                      param_12,param_13,param_14);
  plVar1[8] = (long)plVar2;
  uVar5 = 0;
  if (fVar4 == 0.0) {
    plVar2 = (long *)__tls_get_addr(&PTR_007159b0);
    plVar2 = outlet_new(CONCAT44(extraout_XMM0_Db_01,extraout_XMM0_Da_01),CONCAT44(uVar5,fVar4),
                        param_3,param_4,param_5,param_6,param_7,param_8,(long)plVar1,*plVar2 + 0x78,
                        extraout_RDX_01,param_12,param_13,param_14);
    plVar1[9] = (long)plVar2;
  }
  plVar2 = (long *)__tls_get_addr(&PTR_007159b0);
  pd_bind(CONCAT44(extraout_XMM0_Db_02,extraout_XMM0_Da_02),CONCAT44(uVar5,fVar4),param_3,param_4,
          param_5,param_6,param_7,param_8,plVar1,*(long *)(*(long *)(*plVar2 + 0x30) + 0x38),
          extraout_RDX_02,param_12,param_13,param_14);
  return plVar1;
}


