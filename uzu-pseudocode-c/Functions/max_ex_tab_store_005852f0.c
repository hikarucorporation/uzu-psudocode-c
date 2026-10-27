// Function : max_ex_tab_store
// Namespace: 
// Entry    : 005852f0
// Prototype: undefined8 max_ex_tab_store(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, undefined8 * param_10, float * param_11, float * param_12, long * param_13, undefined8 param_14)
// Body     : 005852f0 - 00585476


undefined8
max_ex_tab_store(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                long param_9,undefined8 *param_10,float *param_11,float *param_12,long *param_13,
                undefined8 param_14)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  float *pfVar8;
  char *pcVar9;
  long *plVar10;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 uVar11;
  float fVar12;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  undefined4 uVar13;
  undefined1 in_stack_ffffffffffffffb8;
  int local_3c;
  long local_38;
  
  if (param_10 == (undefined8 *)0x0) {
    param_13[1] = 2;
    *(undefined4 *)param_13 = 0;
    pd_error(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
             "%s: cannot store in unnamed table",*(undefined8 *)(param_9 + 0x40),param_12,
             (char *)param_13,param_14);
    return 1;
  }
  pfVar8 = param_12;
  plVar10 = param_13;
  plVar5 = pd_findbyclass(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                          (long)param_10,*(long *)PTR_garray_class_00715780);
  uVar11 = extraout_XMM0_Da;
  uVar13 = extraout_XMM0_Db;
  if (plVar5 == (long *)0x0) {
LAB_00585394:
    param_13[1] = 2;
    *(undefined4 *)param_13 = 0;
    pd_error(CONCAT44(uVar13,uVar11),param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9
             ,"%s: no such table to store \'%s\'",*(undefined8 *)(param_9 + 0x40),*param_10,
             (char *)plVar10,param_14);
    return 1;
  }
  pcVar9 = (char *)&local_3c;
  uVar6 = garray_getfloatwords
                    (CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),param_2,param_3,param_4,param_5,
                     param_6,param_7,param_8,(long)plVar5,(undefined4 *)pcVar9,&local_38,
                     (int *)pfVar8,(char *)plVar10,param_14);
  uVar11 = extraout_XMM0_Da_00;
  uVar13 = extraout_XMM0_Db_00;
  if ((int)uVar6 == 0) goto LAB_00585394;
  param_13[1] = 2;
  if (*(long *)(param_11 + 2) == 2) {
    lVar7 = (long)*param_11;
joined_r0x005853d9:
    if (lVar7 < 0) {
      lVar7 = 0;
      goto LAB_00585406;
    }
  }
  else {
    if (*(long *)(param_11 + 2) == 1) {
      lVar7 = *(long *)param_11;
      goto joined_r0x005853d9;
    }
    pcVar9 = "expr: bad argument for table store \'%s\'\n";
    lVar7 = 0;
    pd_error(CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_00),param_2,param_3,param_4,param_5,
             param_6,param_7,param_8,param_9,"expr: bad argument for table store \'%s\'\n",*param_10
             ,pfVar8,(char *)plVar10,param_14);
  }
  if (local_3c <= lVar7) {
    lVar7 = (long)local_3c + -1;
  }
LAB_00585406:
  lVar2 = *(long *)param_12;
  lVar1 = *(long *)(param_12 + 2);
  lVar3 = *(long *)(param_12 + 4);
  lVar4 = *(long *)(param_12 + 6);
  param_13[2] = lVar3;
  param_13[3] = lVar4;
  *param_13 = lVar2;
  param_13[1] = lVar1;
  lVar1 = *(long *)(param_12 + 2);
  if (lVar1 == 2) {
    fVar12 = *param_12;
  }
  else {
    if (lVar1 != 1) {
      pd_error(lVar2,lVar3,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
               "expr:bad right value type \'%ld\'",lVar1,pfVar8,(char *)plVar10,param_14);
      param_13[1] = 2;
      *(undefined4 *)param_13 = 0;
      return 1;
    }
    fVar12 = (float)*(long *)param_12;
  }
  *(float *)(local_38 + lVar7 * 8) = fVar12;
  garray_redraw((ulong)(uint)fVar12,lVar3,param_3,param_4,param_5,param_6,param_7,param_8,
                (long)plVar5,pcVar9,lVar1,pfVar8,plVar10,param_14,in_stack_ffffffffffffffb8);
  return 0;
}


