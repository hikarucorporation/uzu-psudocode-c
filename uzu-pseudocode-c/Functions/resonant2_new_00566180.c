// Function : resonant2_new
// Namespace: 
// Entry    : 00566180
// Prototype: long * resonant2_new(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, undefined8 param_9, ulong param_10, int * param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 00566180 - 00566307


long * resonant2_new(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                    undefined8 param_9,ulong param_10,int *param_11,undefined8 param_12,
                    char *param_13,undefined8 param_14)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 extraout_RDX_01;
  int iVar5;
  ulong uVar6;
  undefined4 uVar7;
  undefined4 extraout_XMM0_Da;
  undefined4 uVar9;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  undefined8 uVar8;
  
  uVar6 = param_10 & 0xffffffff;
  plVar1 = pd_new(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,resonant2_class,
                  param_10,param_11,param_12,param_13,param_14);
  if (0 < (int)param_10) {
    iVar5 = 0;
    uVar7 = 0;
    uVar9 = 0;
    uVar8 = extraout_RDX;
    do {
      if (*param_11 != 1) {
        pd_error(CONCAT44(uVar9,uVar7),param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                 (long)plVar1,"[resonant2~]: improper args",uVar8,param_12,param_13,param_14);
        return (long *)0x0;
      }
      uVar7 = atom_getfloatarg(0,(int)uVar6,(long)param_11);
      iVar5 = iVar5 + 1;
      uVar6 = (ulong)((int)uVar6 - 1);
      param_11 = param_11 + 4;
      uVar8 = extraout_RDX_00;
      uVar9 = extraout_XMM0_Db;
    } while (iVar5 != (int)param_10);
  }
  plVar2 = (long *)__tls_get_addr(&PTR_007159b0);
  plVar3 = inlet_new(CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da),param_2,param_3,param_4,param_5,
                     param_6,param_7,param_8,(long)plVar1,(long)plVar1,*plVar2 + 0xf0,*plVar2 + 0xf0
                     ,param_13,param_14);
  plVar1[7] = (long)plVar3;
  uVar8 = pd_float(plVar3);
  plVar3 = inlet_new(uVar8,param_2,param_3,param_4,param_5,param_6,param_7,param_8,(long)plVar1,
                     (long)plVar1,*plVar2 + 0xf0,*plVar2 + 0xf0,param_13,param_14);
  plVar1[8] = (long)plVar3;
  uVar8 = pd_float(plVar3);
  lVar4 = *plVar2 + 0xf0;
  plVar3 = inlet_new(uVar8,param_2,param_3,param_4,param_5,param_6,param_7,param_8,(long)plVar1,
                     (long)plVar1,lVar4,lVar4,param_13,param_14);
  plVar1[9] = (long)plVar3;
  uVar8 = pd_float(plVar3);
  plVar2 = outlet_new(uVar8,param_2,param_3,param_4,param_5,param_6,param_7,param_8,(long)plVar1,
                      *plVar2 + 0xf0,extraout_RDX_01,lVar4,param_13,param_14);
  plVar1[10] = (long)plVar2;
  return plVar1;
}


