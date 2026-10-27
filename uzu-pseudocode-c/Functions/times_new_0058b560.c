// Function : times_new
// Namespace: 
// Entry    : 0058b560
// Prototype: long * times_new(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, undefined8 param_9, undefined8 param_10, long param_11, long param_12, char * param_13, undefined8 param_14)
// Body     : 0058b560 - 0058b613


long * times_new(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                undefined8 param_9,undefined8 param_10,long param_11,long param_12,char *param_13,
                undefined8 param_14)

{
  long *plVar1;
  long *plVar2;
  long extraout_RDX;
  long lVar3;
  undefined8 extraout_RDX_00;
  undefined8 extraout_RDX_01;
  int iVar4;
  undefined4 extraout_XMM0_Da;
  undefined4 uVar5;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  undefined4 extraout_XMM0_Db_01;
  
  iVar4 = (int)param_10;
  if (iVar4 < 2) {
    lVar3 = param_11;
    if (iVar4 == 0) {
      plVar1 = pd_new(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,times_class,
                      param_10,param_11,param_12,param_13,param_14);
      plVar2 = (long *)__tls_get_addr(&PTR_007159b0);
      param_12 = *plVar2 + 0xf0;
      inlet_new(CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_00),param_2,param_3,param_4,param_5,
                param_6,param_7,param_8,(long)plVar1,(long)plVar1,param_12,param_12,param_13,
                param_14);
      goto LAB_0058b5e5;
    }
  }
  else {
    param_1 = post(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                   "*~: extra arguments ignored");
    lVar3 = extraout_RDX;
  }
  plVar1 = pd_new(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,scalartimes_class,
                  param_10,lVar3,param_12,param_13,param_14);
  floatinlet_new(CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),param_2,param_3,param_4,param_5,param_6
                 ,param_7,param_8,(long)plVar1,(long)plVar1 + 0x34,extraout_RDX_00,param_12,param_13
                 ,param_14);
  uVar5 = atom_getfloatarg(0,iVar4,param_11);
  *(undefined4 *)((long)plVar1 + 0x34) = uVar5;
LAB_0058b5e5:
  plVar2 = (long *)__tls_get_addr(&PTR_007159b0);
  outlet_new(CONCAT44(extraout_XMM0_Db_01,extraout_XMM0_Da_01),param_2,param_3,param_4,param_5,
             param_6,param_7,param_8,(long)plVar1,*plVar2 + 0xf0,extraout_RDX_01,param_12,param_13,
             param_14);
  *(undefined4 *)(plVar1 + 6) = 0;
  return plVar1;
}


