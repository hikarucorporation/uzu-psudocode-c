// Function : poly_new
// Namespace: 
// Entry    : 00555660
// Prototype: long * poly_new(undefined8 param_1, ulong param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, undefined8 param_9, undefined8 param_10, undefined8 param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 00555660 - 0055572f


long * poly_new(undefined8 param_1,ulong param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
               undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
               char *param_13,undefined8 param_14)

{
  long *plVar1;
  void *__s;
  long *plVar2;
  long *plVar3;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 extraout_RDX_01;
  undefined8 extraout_RDX_02;
  ulong uVar4;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  undefined4 extraout_XMM0_Db_01;
  float fVar5;
  undefined4 uVar6;
  
  fVar5 = (float)param_2;
  plVar1 = pd_new(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,poly_class,
                  param_10,param_11,param_12,param_13,param_14);
  uVar4 = 1;
  if (0 < (int)(float)param_1) {
    uVar4 = (ulong)(uint)(int)(float)param_1;
  }
  *(int *)(plVar1 + 6) = (int)uVar4;
  __s = getbytes(uVar4 << 4);
  plVar1[7] = (long)__s;
  memset(__s,0,uVar4 << 4);
  *(undefined4 *)(plVar1 + 8) = 0;
  uVar6 = 0;
  *(uint *)(plVar1 + 0xc) = (uint)(fVar5 != 0.0);
  floatinlet_new(0,param_2 & 0xffffffff,param_3,param_4,param_5,param_6,param_7,param_8,(long)plVar1
                 ,(long)(plVar1 + 8),extraout_RDX,param_12,param_13,param_14);
  plVar2 = (long *)__tls_get_addr(&PTR_007159b0);
  outlet_new(CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),CONCAT44(uVar6,fVar5),param_3,param_4,
             param_5,param_6,param_7,param_8,(long)plVar1,*plVar2 + 0x78,extraout_RDX_00,param_12,
             param_13,param_14);
  plVar3 = outlet_new(CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_00),CONCAT44(uVar6,fVar5),
                      param_3,param_4,param_5,param_6,param_7,param_8,(long)plVar1,*plVar2 + 0x78,
                      extraout_RDX_01,param_12,param_13,param_14);
  plVar1[9] = (long)plVar3;
  plVar2 = outlet_new(CONCAT44(extraout_XMM0_Db_01,extraout_XMM0_Da_01),CONCAT44(uVar6,fVar5),
                      param_3,param_4,param_5,param_6,param_7,param_8,(long)plVar1,*plVar2 + 0x78,
                      extraout_RDX_02,param_12,param_13,param_14);
  plVar1[10] = (long)plVar2;
  plVar1[0xb] = 0;
  return plVar1;
}


