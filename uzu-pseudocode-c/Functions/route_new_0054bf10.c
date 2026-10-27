// Function : route_new
// Namespace: 
// Entry    : 0054bf10
// Prototype: long * route_new(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, undefined8 param_9, undefined8 param_10, int * param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 0054bf10 - 0054c04d


long * route_new(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                undefined8 param_9,undefined8 param_10,int *param_11,undefined8 param_12,
                char *param_13,undefined8 param_14)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 extraout_RDX_01;
  undefined8 uVar5;
  undefined8 extraout_RDX_02;
  int iVar6;
  int iVar7;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 uVar8;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  undefined4 extraout_XMM0_Db_01;
  undefined4 uVar9;
  undefined4 extraout_XMM0_Db_02;
  int local_40 [2];
  undefined4 local_38;
  
  iVar7 = (int)param_10;
  plVar1 = pd_new(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,route_class,
                  param_10,param_11,param_12,param_13,param_14);
  if (iVar7 == 0) {
    local_40[0] = 1;
    local_38 = 0;
    param_11 = local_40;
    iVar6 = 1;
    iVar7 = 1;
  }
  else {
    iVar6 = *param_11;
  }
  *(int *)(plVar1 + 6) = iVar6;
  *(int *)((long)plVar1 + 0x34) = iVar7;
  plVar2 = getbytes((long)iVar7 << 4);
  plVar1[7] = (long)plVar2;
  if (0 < iVar7) {
    iVar6 = 0;
    do {
      while( true ) {
        plVar4 = (long *)__tls_get_addr(&PTR_007159b0);
        plVar4 = outlet_new(CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_00),param_2,param_3,
                            param_4,param_5,param_6,param_7,param_8,(long)plVar1,*plVar4 + 0xc0,
                            extraout_RDX_00,param_12,param_13,param_14);
        plVar2[1] = (long)plVar4;
        if ((int)plVar1[6] != 1) break;
        uVar8 = atom_getfloatarg(iVar6,iVar7,(long)param_11);
        *(undefined4 *)plVar2 = uVar8;
        iVar6 = iVar6 + 1;
        plVar2 = plVar2 + 2;
        uVar5 = extraout_RDX_01;
        uVar9 = extraout_XMM0_Db_01;
        if (iVar7 == iVar6) goto LAB_0054bff2;
      }
      lVar3 = atom_getsymbolarg(iVar6,iVar7,(long)param_11);
      *plVar2 = lVar3;
      iVar6 = iVar6 + 1;
      plVar2 = plVar2 + 2;
      uVar5 = extraout_RDX;
      uVar8 = extraout_XMM0_Da;
      uVar9 = extraout_XMM0_Db;
    } while (iVar7 != iVar6);
LAB_0054bff2:
    if (iVar7 == 1) {
      if (*param_11 == 1) {
        floatinlet_new(CONCAT44(uVar9,uVar8),param_2,param_3,param_4,param_5,param_6,param_7,param_8
                       ,(long)plVar1,plVar1[7],uVar5,param_12,param_13,param_14);
      }
      else {
        symbolinlet_new(CONCAT44(uVar9,uVar8),param_2,param_3,param_4,param_5,param_6,param_7,
                        param_8,(long)plVar1,plVar1[7],uVar5,param_12,param_13,param_14);
      }
    }
  }
  plVar2 = (long *)__tls_get_addr(&PTR_007159b0);
  plVar2 = outlet_new(CONCAT44(extraout_XMM0_Db_02,extraout_XMM0_Da_01),param_2,param_3,param_4,
                      param_5,param_6,param_7,param_8,(long)plVar1,*plVar2 + 0xc0,extraout_RDX_02,
                      param_12,param_13,param_14);
  plVar1[8] = (long)plVar2;
  return plVar1;
}


