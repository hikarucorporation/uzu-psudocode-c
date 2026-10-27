// Function : snake_in_tilde_new
// Namespace: 
// Entry    : 00597be0
// Prototype: long * snake_in_tilde_new(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, undefined8 param_9, undefined8 param_10, undefined8 param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 00597be0 - 00597c77


long * snake_in_tilde_new(undefined8 param_1,undefined8 param_2,undefined8 param_3,
                         undefined8 param_4,undefined8 param_5,undefined8 param_6,undefined8 param_7
                         ,undefined8 param_8,undefined8 param_9,undefined8 param_10,
                         undefined8 param_11,undefined8 param_12,char *param_13,undefined8 param_14)

{
  long *plVar1;
  long *plVar2;
  ulong uVar3;
  undefined8 extraout_RDX;
  int iVar4;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  
  plVar1 = pd_new(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                  snake_in_tilde_class,param_10,param_11,param_12,param_13,param_14);
  uVar3 = 2;
  if (0 < (int)(float)param_1) {
    uVar3 = (ulong)(uint)(int)(float)param_1;
  }
  *(uint *)((long)plVar1 + 0x34) = (uint)uVar3;
  if (1 < (uint)uVar3) {
    iVar4 = 1;
    do {
      plVar2 = (long *)__tls_get_addr(&PTR_007159b0);
      uVar3 = *plVar2 + 0xf0;
      inlet_new(CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),param_2,param_3,param_4,param_5,param_6,
                param_7,param_8,(long)plVar1,(long)plVar1,uVar3,uVar3,param_13,param_14);
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)((long)plVar1 + 0x34));
  }
  plVar2 = (long *)__tls_get_addr(&PTR_007159b0);
  outlet_new(CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_00),param_2,param_3,param_4,param_5,
             param_6,param_7,param_8,(long)plVar1,*plVar2 + 0xf0,extraout_RDX,uVar3,param_13,
             param_14);
  return plVar1;
}


