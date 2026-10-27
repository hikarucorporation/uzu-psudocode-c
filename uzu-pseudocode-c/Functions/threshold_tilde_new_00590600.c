// Function : threshold_tilde_new
// Namespace: 
// Entry    : 00590600
// Prototype: long * threshold_tilde_new(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, undefined8 param_9, undefined8 param_10, undefined8 param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 00590600 - 005906fa


long * threshold_tilde_new(undefined8 param_1,undefined8 param_2,undefined8 param_3,
                          undefined8 param_4,undefined8 param_5,undefined8 param_6,
                          undefined8 param_7,undefined8 param_8,undefined8 param_9,
                          undefined8 param_10,undefined8 param_11,undefined8 param_12,char *param_13
                          ,undefined8 param_14)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  float fVar6;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  float fVar7;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  undefined4 extraout_XMM0_Db_01;
  undefined4 uVar8;
  undefined4 uVar9;
  
  uVar9 = (undefined4)param_4;
  fVar7 = (float)param_3;
  uVar8 = (undefined4)param_2;
  fVar6 = (float)param_1;
  plVar1 = pd_new(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                  threshold_tilde_class,param_10,param_11,param_12,param_13,param_14);
  *(undefined4 *)((long)plVar1 + 0x4c) = 0;
  *(undefined4 *)(plVar1 + 0xb) = 0;
  lVar2 = clock_new(plVar1,threshold_tilde_tick);
  plVar1[8] = lVar2;
  plVar3 = (long *)__tls_get_addr(&PTR_007159b0);
  plVar4 = outlet_new(CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),param_2,param_3,param_4,param_5,
                      param_6,param_7,param_8,(long)plVar1,*plVar3 + 0xa8,extraout_RDX,param_12,
                      param_13,param_14);
  plVar1[6] = (long)plVar4;
  plVar4 = outlet_new(CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_00),param_2,param_3,param_4,
                      param_5,param_6,param_7,param_8,(long)plVar1,*plVar3 + 0xa8,extraout_RDX_00,
                      param_12,param_13,param_14);
  plVar1[7] = (long)plVar4;
  lVar2 = *plVar3;
  puVar5 = gensym("ft1");
  inlet_new(CONCAT44(extraout_XMM0_Db_01,extraout_XMM0_Da_01),param_2,param_3,param_4,param_5,
            param_6,param_7,param_8,(long)plVar1,(long)plVar1,lVar2 + 0x78,(long)puVar5,param_13,
            param_14);
  *(undefined4 *)((long)plVar1 + 0x5c) = 0;
  *(undefined4 *)(plVar1 + 9) = 0;
  if (fVar6 <= fVar7) {
    fVar7 = fVar6;
  }
  *(float *)(plVar1 + 10) = fVar6;
  *(undefined4 *)(plVar1 + 0xc) = uVar8;
  *(float *)((long)plVar1 + 0x54) = fVar7;
  *(undefined4 *)((long)plVar1 + 100) = uVar9;
  return plVar1;
}


