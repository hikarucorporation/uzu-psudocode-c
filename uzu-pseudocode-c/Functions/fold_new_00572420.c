// Function : fold_new
// Namespace: 
// Entry    : 00572420
// Prototype: long * fold_new(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, undefined8 param_9, undefined8 param_10, int * param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 00572420 - 00572541


long * fold_new(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
               undefined8 param_9,undefined8 param_10,int *param_11,undefined8 param_12,
               char *param_13,undefined8 param_14)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 extraout_RDX_01;
  int iVar5;
  long lVar6;
  int extraout_XMM0_Da;
  int iVar7;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  undefined4 uVar9;
  undefined4 extraout_XMM0_Db_01;
  undefined8 uVar8;
  undefined4 extraout_XMM0_Db_02;
  
  plVar1 = pd_new(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,fold_class,
                  param_10,param_11,param_12,param_13,param_14);
  iVar5 = (int)param_10;
  uVar8 = extraout_RDX;
  if (iVar5 == 1) {
    iVar7 = 0;
    uVar9 = 0;
    if (*param_11 != 1) goto LAB_00572483;
  }
  else {
    iVar7 = extraout_XMM0_Da;
    uVar9 = extraout_XMM0_Db;
    if (iVar5 != 2) {
      if (2 < iVar5) goto LAB_00572483;
      goto LAB_005724b7;
    }
    if ((*param_11 != 1) ||
       (iVar7 = atom_getfloat(param_11), uVar8 = extraout_RDX_00, uVar9 = extraout_XMM0_Db_00,
       param_11[4] != 1)) {
LAB_00572483:
      pd_error(CONCAT44(uVar9,iVar7),param_2,param_3,param_4,param_5,param_6,param_7,param_8,
               (long)plVar1,"[fold~]: improper args",uVar8,param_12,param_13,param_14);
      return (long *)0x0;
    }
    param_11 = param_11 + 4;
  }
  atom_getfloat(param_11);
LAB_005724b7:
  plVar2 = (long *)__tls_get_addr(&PTR_007159b0);
  plVar3 = inlet_new(CONCAT44(extraout_XMM0_Db_01,extraout_XMM0_Da_00),param_2,param_3,param_4,
                     param_5,param_6,param_7,param_8,(long)plVar1,(long)plVar1,*plVar2 + 0xf0,
                     *plVar2 + 0xf0,param_13,param_14);
  plVar1[6] = (long)plVar3;
  uVar8 = pd_float(plVar3);
  lVar6 = *plVar2 + 0xf0;
  plVar2 = inlet_new(uVar8,param_2,param_3,param_4,param_5,param_6,param_7,param_8,(long)plVar1,
                     (long)plVar1,lVar6,lVar6,param_13,param_14);
  plVar1[7] = (long)plVar2;
  pd_float(plVar2);
  puVar4 = gensym("signal");
  outlet_new(CONCAT44(extraout_XMM0_Db_02,extraout_XMM0_Da_01),param_2,param_3,param_4,param_5,
             param_6,param_7,param_8,(long)plVar1,(long)puVar4,extraout_RDX_01,lVar6,param_13,
             param_14);
  return plVar1;
}


