// Function : route_list
// Namespace: 
// Entry    : 0054c070
// Prototype: undefined route_list(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, double param_5, double param_6, double param_7, undefined8 param_8, long param_9, undefined8 param_10, int param_11, int * param_12, uint * param_13, uint * param_14)
// Body     : 0054c070 - 0054c348


void route_list(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               double param_5,double param_6,double param_7,undefined8 param_8,long param_9,
               undefined8 param_10,int param_11,int *param_12,uint *param_13,uint *param_14)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long *plVar4;
  int iVar5;
  int *piVar6;
  uint uVar7;
  float fVar8;
  float extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined4 extraout_XMM0_Da_03;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  undefined4 extraout_XMM0_Db_01;
  undefined4 extraout_XMM0_Db_02;
  undefined4 extraout_XMM0_Db_03;
  undefined4 extraout_XMM0_Db_04;
  undefined4 uVar9;
  
  if (*(int *)(param_9 + 0x30) == 1) {
    if ((param_11 != 0) && (*param_12 == 1)) {
      fVar8 = (float)atom_getfloat(param_12);
      uVar2 = CONCAT44(extraout_XMM0_Db,fVar8);
      iVar5 = *(int *)(param_9 + 0x34);
      param_1 = CONCAT44(extraout_XMM0_Db,fVar8);
      if (iVar5 != 0) {
        puVar3 = (undefined8 *)(*(long *)(param_9 + 0x38) + 8);
        do {
          if (fVar8 == *(float *)(puVar3 + -1)) {
            if ((1 < param_11) && (param_12[4] == 2)) {
              plVar4 = (long *)*puVar3;
              puVar3 = *(undefined8 **)(param_12 + 6);
              uVar7 = param_11 - 2;
              piVar6 = param_12 + 8;
              uVar9 = extraout_XMM0_Db;
LAB_0054c2db:
              outlet_anything(CONCAT44(uVar9,fVar8),param_2,param_3,param_4,param_5,param_6,param_7,
                              param_8,plVar4,puVar3,uVar7,piVar6,param_13,param_14);
              return;
            }
            plVar4 = (long *)*puVar3;
            param_11 = param_11 + -1;
            param_12 = param_12 + 4;
            goto LAB_0054c2aa;
          }
          iVar5 = iVar5 + -1;
          puVar3 = puVar3 + 2;
          param_1 = uVar2;
        } while (iVar5 != 0);
      }
    }
  }
  else if (param_11 < 2) {
    if (param_11 == 0) {
      iVar5 = *(int *)(param_9 + 0x34);
      if (iVar5 != 0) {
        lVar1 = *(long *)(param_9 + 0x38);
        plVar4 = (long *)__tls_get_addr(&PTR_007159b0);
        puVar3 = (undefined8 *)(lVar1 + 8);
        do {
          if (puVar3[-1] == *plVar4 + 0xa8) {
            outlet_bang(CONCAT44(extraout_XMM0_Db_02,extraout_XMM0_Da_01),param_2,param_3,param_4,
                        param_5,param_6,param_7,param_8,(long *)*puVar3);
            return;
          }
          iVar5 = iVar5 + -1;
          puVar3 = puVar3 + 2;
          param_1 = CONCAT44(extraout_XMM0_Db_02,extraout_XMM0_Da_01);
        } while (iVar5 != 0);
      }
    }
    else if (*param_12 == 3) {
      iVar5 = *(int *)(param_9 + 0x34);
      if (iVar5 != 0) {
        lVar1 = *(long *)(param_9 + 0x38);
        plVar4 = (long *)__tls_get_addr(&PTR_007159b0);
        puVar3 = (undefined8 *)(lVar1 + 8);
        do {
          if (puVar3[-1] == *plVar4 + 0x60) {
            outlet_pointer(CONCAT44(extraout_XMM0_Db_03,extraout_XMM0_Da_02),param_2,param_3,param_4
                           ,param_5,param_6,param_7,param_8,(long *)*puVar3);
            return;
          }
          iVar5 = iVar5 + -1;
          puVar3 = puVar3 + 2;
          param_1 = CONCAT44(extraout_XMM0_Db_03,extraout_XMM0_Da_02);
        } while (iVar5 != 0);
      }
    }
    else if (*param_12 == 1) {
      iVar5 = *(int *)(param_9 + 0x34);
      if (iVar5 != 0) {
        lVar1 = *(long *)(param_9 + 0x38);
        plVar4 = (long *)__tls_get_addr(&PTR_007159b0);
        puVar3 = (undefined8 *)(lVar1 + 8);
        do {
          if (puVar3[-1] == *plVar4 + 0x78) {
            outlet_float((ulong)(uint)param_12[2],param_2,param_3,param_4,param_5,param_6,param_7,
                         param_8,(long *)*puVar3);
            return;
          }
          iVar5 = iVar5 + -1;
          puVar3 = puVar3 + 2;
          param_1 = CONCAT44(extraout_XMM0_Db_01,extraout_XMM0_Da_00);
        } while (iVar5 != 0);
      }
    }
    else {
      iVar5 = *(int *)(param_9 + 0x34);
      if (iVar5 != 0) {
        lVar1 = *(long *)(param_9 + 0x38);
        plVar4 = (long *)__tls_get_addr(&PTR_007159b0);
        puVar3 = (undefined8 *)(lVar1 + 8);
        do {
          if (puVar3[-1] == *plVar4 + 0x90) {
            outlet_symbol(CONCAT44(extraout_XMM0_Db_04,extraout_XMM0_Da_03),param_2,param_3,param_4,
                          param_5,param_6,param_7,param_8,(long *)*puVar3);
            return;
          }
          iVar5 = iVar5 + -1;
          puVar3 = puVar3 + 2;
          param_1 = CONCAT44(extraout_XMM0_Db_04,extraout_XMM0_Da_03);
        } while (iVar5 != 0);
      }
    }
  }
  else {
    iVar5 = *(int *)(param_9 + 0x34);
    if (iVar5 != 0) {
      lVar1 = *(long *)(param_9 + 0x38);
      plVar4 = (long *)__tls_get_addr(&PTR_007159b0);
      uVar2 = CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da);
      puVar3 = (undefined8 *)(lVar1 + 8);
      do {
        if (puVar3[-1] == *plVar4 + 0xc0) {
          plVar4 = (long *)*puVar3;
          if (*param_12 != 2) goto LAB_0054c2aa;
          puVar3 = *(undefined8 **)(param_12 + 2);
          uVar7 = param_11 - 1;
          piVar6 = param_12 + 4;
          fVar8 = extraout_XMM0_Da;
          uVar9 = extraout_XMM0_Db_00;
          goto LAB_0054c2db;
        }
        iVar5 = iVar5 + -1;
        puVar3 = puVar3 + 2;
        param_1 = uVar2;
      } while (iVar5 != 0);
    }
  }
  plVar4 = *(long **)(param_9 + 0x40);
  uVar2 = param_1;
LAB_0054c2aa:
  outlet_list(uVar2,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar4,0,param_11,
              param_12,(char *)param_13,param_14);
  return;
}


