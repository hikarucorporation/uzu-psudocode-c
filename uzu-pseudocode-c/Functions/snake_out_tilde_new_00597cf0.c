// Function : snake_out_tilde_new
// Namespace: 
// Entry    : 00597cf0
// Prototype: long * snake_out_tilde_new(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, undefined8 param_9, undefined8 param_10, undefined8 param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 00597cf0 - 00597d61


long * snake_out_tilde_new(undefined8 param_1,undefined8 param_2,undefined8 param_3,
                          undefined8 param_4,undefined8 param_5,undefined8 param_6,
                          undefined8 param_7,undefined8 param_8,undefined8 param_9,
                          undefined8 param_10,undefined8 param_11,undefined8 param_12,char *param_13
                          ,undefined8 param_14)

{
  long *plVar1;
  long *plVar2;
  uint uVar3;
  ulong uVar4;
  uint uVar5;
  undefined8 extraout_RDX;
  int iVar6;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Db;
  
  plVar1 = pd_new(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                  snake_out_tilde_class,param_10,param_11,param_12,param_13,param_14);
  uVar3 = (uint)(float)param_1;
  uVar4 = (ulong)uVar3;
  uVar5 = 2;
  if (0 < (int)uVar3) {
    uVar5 = uVar3;
  }
  *(uint *)((long)plVar1 + 0x34) = uVar5;
  iVar6 = 0;
  do {
    plVar2 = (long *)__tls_get_addr(&PTR_007159b0);
    outlet_new(CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),param_2,param_3,param_4,param_5,param_6,
               param_7,param_8,(long)plVar1,*plVar2 + 0xf0,extraout_RDX,uVar4,param_13,param_14);
    iVar6 = iVar6 + 1;
  } while (iVar6 < *(int *)((long)plVar1 + 0x34));
  return plVar1;
}


