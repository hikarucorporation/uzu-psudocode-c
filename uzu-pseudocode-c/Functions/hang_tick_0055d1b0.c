// Function : hang_tick
// Namespace: 
// Entry    : 0055d1b0
// Prototype: undefined hang_tick(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, undefined8 * param_9, char * param_10, undefined8 param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 0055d1b0 - 0055d318


void hang_tick(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
              undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
              undefined8 *param_9,char *param_10,undefined8 param_11,undefined8 param_12,
              char *param_13,undefined8 param_14)

{
  int iVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  undefined7 extraout_var;
  undefined8 *puVar5;
  long lVar6;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 extraout_RDX_01;
  undefined8 extraout_RDX_02;
  undefined8 extraout_RDX_03;
  undefined8 extraout_RDX_04;
  void *pvVar7;
  int iVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  undefined4 extraout_XMM0_Db_01;
  undefined4 extraout_XMM0_Db_02;
  
  lVar10 = param_9[2];
  puVar9 = *(undefined8 **)(lVar10 + 0x50);
  if (*(undefined8 **)(lVar10 + 0x50) == param_9) {
    plVar3 = (long *)(lVar10 + 0x50);
  }
  else {
    do {
      puVar5 = puVar9;
      puVar9 = (undefined8 *)puVar5[1];
      lVar6 = 0;
      if (puVar9 == (undefined8 *)0x0) goto LAB_0055d1f3;
    } while (puVar9 != param_9);
    plVar3 = puVar5 + 1;
  }
  lVar6 = param_9[1];
  *plVar3 = lVar6;
LAB_0055d1f3:
  iVar8 = *(int *)(lVar10 + 0x30);
  if ((long)iVar8 != 0) {
    lVar4 = (long)iVar8 + -1;
    lVar6 = *(long *)(lVar10 + 0x40);
    puVar9 = (undefined8 *)(lVar6 + lVar4 * 0x18 + 0x10);
    lVar11 = 0;
    do {
      iVar1 = *(int *)(puVar9 + -2);
      if (iVar1 == 3) {
        bVar2 = gpointer_check((long *)param_9[lVar4 + lVar11 + 4],1);
        if ((int)CONCAT71(extraout_var,bVar2) == 0) {
          param_10 = "pipe: stale pointer";
          param_1 = pd_error(CONCAT44(extraout_XMM0_Db_01,extraout_XMM0_Da_01),param_2,param_3,
                             param_4,param_5,param_6,param_7,param_8,lVar10,"pipe: stale pointer",
                             extraout_RDX_01,lVar6,param_13,param_14);
          param_11 = extraout_RDX_03;
        }
        else {
          param_10 = (char *)param_9[lVar4 + lVar11 + 4];
          outlet_pointer(CONCAT44(extraout_XMM0_Db_01,extraout_XMM0_Da_01),param_2,param_3,param_4,
                         param_5,param_6,param_7,param_8,(long *)*puVar9);
          param_1 = CONCAT44(extraout_XMM0_Db_02,extraout_XMM0_Da_02);
          param_11 = extraout_RDX_02;
        }
      }
      else if (iVar1 == 2) {
        param_10 = (char *)param_9[lVar4 + lVar11 + 4];
        outlet_symbol(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                      (long *)*puVar9);
        param_1 = CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da);
        param_11 = extraout_RDX;
      }
      else if (iVar1 == 1) {
        outlet_float((ulong)*(uint *)(param_9 + lVar4 + lVar11 + 4),param_2,param_3,param_4,param_5,
                     param_6,param_7,param_8,(long *)*puVar9);
        param_1 = CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_00);
        param_11 = extraout_RDX_00;
      }
      lVar11 = lVar11 + -1;
      puVar9 = puVar9 + -3;
    } while (-iVar8 != (int)lVar11);
    lVar10 = param_9[2];
  }
  pvVar7 = (void *)param_9[3];
  iVar8 = *(int *)(lVar10 + 0x34);
  if (iVar8 != 0) {
    do {
      param_1 = gpointer_unset(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                               (long)pvVar7,param_10,param_11,lVar6,param_13,param_14);
      pvVar7 = (void *)((long)pvVar7 + 0x18);
      iVar8 = iVar8 + -1;
      param_11 = extraout_RDX_04;
    } while (iVar8 != 0);
    pvVar7 = (void *)param_9[3];
  }
  freebytes(pvVar7);
  clock_free((double *)*param_9);
  freebytes(param_9);
  return;
}


