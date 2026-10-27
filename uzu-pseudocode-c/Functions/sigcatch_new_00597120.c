// Function : sigcatch_new
// Namespace: 
// Entry    : 00597120
// Prototype: long * sigcatch_new(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, undefined8 * param_9, undefined8 param_10, undefined8 param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 00597120 - 005971b1


long * sigcatch_new(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                   undefined8 *param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                   char *param_13,undefined8 param_14)

{
  long *plVar1;
  long extraout_RAX;
  void *pvVar2;
  long *plVar3;
  ulong uVar4;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Db;
  undefined8 uVar5;
  undefined4 extraout_XMM0_Db_00;
  
  plVar1 = pd_new(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,sigcatch_class,
                  param_10,param_11,param_12,param_13,param_14);
  uVar5 = CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da);
  if (*(char *)*param_9 != '\0') {
    uVar5 = pd_bind(CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),param_2,param_3,param_4,param_5,
                    param_6,param_7,param_8,plVar1,(long)param_9,extraout_RDX,param_12,param_13,
                    param_14);
  }
  plVar1[6] = (long)param_9;
  canvas_getcurrent(uVar5,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  plVar1[7] = extraout_RAX;
  *(undefined4 *)(plVar1 + 8) = 1;
  uVar4 = 1;
  if (0 < (int)(float)param_1) {
    uVar4 = (ulong)(uint)(int)(float)param_1;
  }
  *(int *)((long)plVar1 + 0x44) = (int)uVar4;
  *(int *)(plVar1 + 9) = (int)uVar4;
  pvVar2 = getbytes(4);
  plVar1[10] = (long)pvVar2;
  plVar3 = (long *)__tls_get_addr(&PTR_007159b0);
  outlet_new(CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_00),param_2,param_3,param_4,param_5,
             param_6,param_7,param_8,(long)plVar1,*plVar3 + 0xf0,extraout_RDX_00,uVar4,param_13,
             param_14);
  return plVar1;
}


