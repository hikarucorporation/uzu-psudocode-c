// Function : select_new
// Namespace: 
// Entry    : 0054bd10
// Prototype: long * select_new(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, undefined8 param_9, undefined8 param_10, int * param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 0054bd10 - 0054be95


long * select_new(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 undefined8 param_9,undefined8 param_10,int *param_11,undefined8 param_12,
                 char *param_13,undefined8 param_14)

{
  int iVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 extraout_RDX_01;
  undefined8 extraout_RDX_02;
  undefined8 extraout_RDX_03;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  int *piVar9;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 uVar10;
  undefined4 extraout_XMM0_Da_02;
  undefined4 extraout_XMM0_Da_03;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  undefined4 extraout_XMM0_Db_01;
  undefined4 extraout_XMM0_Db_02;
  undefined4 extraout_XMM0_Db_03;
  undefined4 uVar11;
  int local_40 [2];
  undefined4 uStack_38;
  
  iVar7 = (int)param_10;
  piVar9 = param_11;
  if (iVar7 == 1) {
LAB_0054bd42:
    plVar2 = pd_new(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,sel1_class,
                    param_10,param_11,param_12,param_13,param_14);
    iVar7 = piVar9[1];
    iVar6 = piVar9[2];
    iVar1 = piVar9[3];
    *(int *)(plVar2 + 6) = *piVar9;
    *(int *)((long)plVar2 + 0x34) = iVar7;
    *(int *)(plVar2 + 7) = iVar6;
    *(int *)((long)plVar2 + 0x3c) = iVar1;
    plVar3 = (long *)__tls_get_addr(&PTR_007159b0);
    plVar3 = outlet_new(CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),param_2,param_3,param_4,param_5,
                        param_6,param_7,param_8,(long)plVar2,*plVar3 + 0xa8,extraout_RDX,param_12,
                        param_13,param_14);
    plVar2[8] = (long)plVar3;
    if (*piVar9 != 1) {
      symbolinlet_new(CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_00),param_2,param_3,param_4,
                      param_5,param_6,param_7,param_8,(long)plVar2,(long)(plVar2 + 7),
                      extraout_RDX_00,param_12,param_13,param_14);
      plVar3 = (long *)__tls_get_addr(&PTR_007159b0);
      lVar8 = *plVar3 + 0x90;
      uVar5 = extraout_RDX_03;
      uVar10 = extraout_XMM0_Da_03;
      uVar11 = extraout_XMM0_Db_03;
      goto LAB_0054be78;
    }
    floatinlet_new(CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_00),param_2,param_3,param_4,param_5
                   ,param_6,param_7,param_8,(long)plVar2,(long)(plVar2 + 7),extraout_RDX_00,param_12
                   ,param_13,param_14);
  }
  else {
    if (iVar7 == 0) {
      local_40[0] = 1;
      uStack_38 = 0;
      piVar9 = local_40;
      goto LAB_0054bd42;
    }
    plVar2 = pd_new(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,sel2_class,
                    param_10,param_11,param_12,param_13,param_14);
    plVar2[7] = (long)iVar7;
    plVar3 = getbytes((long)iVar7 << 4);
    plVar2[8] = (long)plVar3;
    *(int *)(plVar2 + 6) = *param_11;
    if (0 < iVar7) {
      iVar6 = 0;
      do {
        while( true ) {
          plVar4 = (long *)__tls_get_addr(&PTR_007159b0);
          plVar4 = outlet_new(CONCAT44(extraout_XMM0_Db_01,extraout_XMM0_Da_01),param_2,param_3,
                              param_4,param_5,param_6,param_7,param_8,(long)plVar2,*plVar4 + 0xa8,
                              extraout_RDX_01,param_12,param_13,param_14);
          plVar3[1] = (long)plVar4;
          iVar1 = *param_11;
          *(int *)(plVar2 + 6) = iVar1;
          if (iVar1 != 1) break;
          uVar10 = atom_getfloatarg(iVar6,iVar7,(long)param_11);
          *(undefined4 *)plVar3 = uVar10;
          iVar6 = iVar6 + 1;
          plVar3 = plVar3 + 2;
          if (iVar7 == iVar6) goto LAB_0054be3f;
        }
        lVar8 = atom_getsymbolarg(iVar6,iVar7,(long)param_11);
        *plVar3 = lVar8;
        iVar6 = iVar6 + 1;
        plVar3 = plVar3 + 2;
      } while (iVar7 != iVar6);
    }
  }
LAB_0054be3f:
  plVar3 = (long *)__tls_get_addr(&PTR_007159b0);
  lVar8 = *plVar3 + 0x78;
  uVar5 = extraout_RDX_02;
  uVar10 = extraout_XMM0_Da_02;
  uVar11 = extraout_XMM0_Db_02;
LAB_0054be78:
  plVar3 = outlet_new(CONCAT44(uVar11,uVar10),param_2,param_3,param_4,param_5,param_6,param_7,
                      param_8,(long)plVar2,lVar8,uVar5,param_12,param_13,param_14);
  plVar2[9] = (long)plVar3;
  return plVar2;
}


