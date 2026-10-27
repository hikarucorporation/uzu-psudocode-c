// Function : pique_new
// Namespace: 
// Entry    : 004e4b50
// Prototype: long * pique_new(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, undefined8 param_9, undefined8 param_10, undefined8 param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 004e4b50 - 004e4bd6


long * pique_new(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                char *param_13,undefined8 param_14)

{
  long *plVar1;
  void *pvVar2;
  long *plVar3;
  undefined8 extraout_RDX;
  ulong uVar4;
  size_t sVar5;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Db;
  
  plVar1 = pd_new(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,pique_class,
                  param_10,param_11,param_12,param_13,param_14);
  uVar4 = 100;
  if (0 < (int)(float)param_1) {
    uVar4 = (ulong)(uint)(int)(float)param_1;
  }
  *(int *)(plVar1 + 6) = (int)uVar4;
  *(undefined4 *)((long)plVar1 + 0x34) = 0;
  sVar5 = uVar4 << 2;
  pvVar2 = getbytes(sVar5);
  plVar1[7] = (long)pvVar2;
  pvVar2 = getbytes(sVar5);
  plVar1[8] = (long)pvVar2;
  pvVar2 = getbytes(sVar5);
  plVar1[9] = (long)pvVar2;
  pvVar2 = getbytes(sVar5);
  plVar1[10] = (long)pvVar2;
  plVar3 = (long *)__tls_get_addr(&PTR_007159b0);
  outlet_new(CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),param_2,param_3,param_4,param_5,param_6,
             param_7,param_8,(long)plVar1,*plVar3 + 0xc0,extraout_RDX,param_12,param_13,param_14);
  return plVar1;
}


