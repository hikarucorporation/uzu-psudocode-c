// Function : ptrobj_vnext
// Namespace: 
// Entry    : 005ae3f0
// Prototype: undefined ptrobj_vnext(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, long * param_10, long * param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 005ae3f0 - 005ae579


void ptrobj_vnext(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 long param_9,long *param_10,long *param_11,undefined8 param_12,char *param_13,
                 undefined8 param_14)

{
  long lVar1;
  undefined *puVar2;
  uint uVar3;
  long lVar4;
  undefined8 uVar5;
  int iVar6;
  long *plVar7;
  long *extraout_RDX;
  long *extraout_RDX_00;
  undefined8 *puVar8;
  long *plVar9;
  char *pcVar10;
  long *plVar11;
  undefined4 extraout_XMM0_Da;
  undefined4 uVar12;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Db;
  undefined4 uVar13;
  undefined4 extraout_XMM0_Db_00;
  undefined4 extraout_XMM0_Db_01;
  undefined4 uVar14;
  undefined4 uVar15;
  
  plVar11 = *(long **)(param_9 + 0x40);
  if (plVar11 == (long *)0x0) {
    pcVar10 = "pointer next: no current pointer";
  }
  else if ((int)plVar11[1] == 1) {
    lVar1 = *plVar11;
    if (*(int *)(lVar1 + 0x40) == *(int *)(param_9 + 0x38)) {
      plVar11 = (long *)(param_9 + 0x30);
      uVar14 = 0;
      uVar15 = 0;
      if ((float)param_1 == 0.0) {
        plVar7 = (long *)(*plVar11 + 8);
        plVar9 = (long *)(lVar1 + 0x30);
        if (*plVar11 != 0) {
          plVar9 = plVar7;
        }
        plVar9 = (long *)*plVar9;
        if (plVar9 != (long *)0x0) {
          do {
            if (*plVar9 == *(long *)PTR_scalar_class_00715810) goto LAB_005ae4a5;
            plVar9 = (long *)plVar9[1];
          } while (plVar9 != (long *)0x0);
        }
      }
      else {
        uVar3 = glist_isvisible(lVar1);
        puVar2 = PTR_scalar_class_00715810;
        param_2 = CONCAT44(uVar15,uVar14);
        param_1 = CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da);
        if (uVar3 == 0) {
          pcVar10 = "pointer vnext: next-selected only works for a visible window";
          param_11 = extraout_RDX;
          goto LAB_005ae4ef;
        }
        param_11 = (long *)(lVar1 + 0x30);
        plVar7 = (long *)(*plVar11 + 8);
        if (*plVar11 == 0) {
          plVar7 = param_11;
        }
        plVar9 = (long *)*plVar7;
        if (plVar9 != (long *)0x0) {
          lVar4 = *(long *)PTR_scalar_class_00715810;
          uVar12 = extraout_XMM0_Da;
          uVar13 = extraout_XMM0_Db;
          do {
            if (*plVar9 == lVar4) {
              param_10 = plVar9;
              uVar5 = glist_isselected(lVar1,(long)plVar9);
              param_1 = CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_00);
              if ((int)uVar5 != 0) goto LAB_005ae4a5;
              lVar4 = *(long *)puVar2;
              param_11 = extraout_RDX_00;
              uVar12 = extraout_XMM0_Da_00;
              uVar13 = extraout_XMM0_Db_00;
            }
            param_1 = CONCAT44(uVar13,uVar12);
            plVar9 = (long *)plVar9[1];
          } while (plVar9 != (long *)0x0);
        }
      }
      gpointer_unset(param_1,CONCAT44(uVar15,uVar14),param_3,param_4,param_5,param_6,param_7,param_8
                     ,(long)plVar11,param_10,param_11,plVar7,param_13,param_14);
      outlet_bang(CONCAT44(extraout_XMM0_Db_01,extraout_XMM0_Da_01),CONCAT44(uVar15,uVar14),param_3,
                  param_4,param_5,param_6,param_7,param_8,*(long **)(param_9 + 0x60));
      return;
    }
    pcVar10 = "pointer next: stale pointer";
  }
  else {
    pcVar10 = "pointer next: lists only, not arrays";
  }
LAB_005ae4ef:
  pd_error(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,pcVar10,param_11,
           param_12,param_13,param_14);
  return;
LAB_005ae4a5:
  lVar1 = plVar9[2];
  *(long **)(param_9 + 0x30) = plVar9;
  iVar6 = *(int *)(param_9 + 0x50);
  if (iVar6 != 0) {
    puVar8 = (undefined8 *)(*(long *)(param_9 + 0x48) + 8);
    do {
      if (puVar8[-1] == lVar1) {
        plVar11 = (long *)*puVar8;
        goto LAB_005ae569;
      }
      iVar6 = iVar6 + -1;
      puVar8 = puVar8 + 2;
    } while (iVar6 != 0);
  }
  plVar11 = *(long **)(param_9 + 0x58);
LAB_005ae569:
  outlet_pointer(param_1,CONCAT44(uVar15,uVar14),param_3,param_4,param_5,param_6,param_7,param_8,
                 plVar11);
  return;
}


