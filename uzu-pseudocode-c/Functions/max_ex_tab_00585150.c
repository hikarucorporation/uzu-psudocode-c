// Function : max_ex_tab
// Namespace: 
// Entry    : 00585150
// Prototype: undefined8 max_ex_tab(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, undefined8 * param_10, float * param_11, int * param_12, long * param_13, undefined8 param_14)
// Body     : 00585150 - 005852e2


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
max_ex_tab(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,long param_9,
          undefined8 *param_10,float *param_11,int *param_12,long *param_13,undefined8 param_14)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 uVar6;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  undefined4 uVar7;
  undefined1 in_stack_ffffffffffffffc8;
  int local_2c;
  long local_28;
  
  if (param_10 == (undefined8 *)0x0) {
    param_13[1] = 2;
    *(undefined4 *)param_13 = 0;
    uVar3 = 0;
LAB_00585233:
    pd_error(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
             "no such table \'%s\'",uVar3,param_12,(char *)param_13,param_14);
    return 1;
  }
  plVar5 = param_13;
  plVar2 = pd_findbyclass(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                          (long)param_10,*(long *)PTR_garray_class_00715780);
  uVar6 = extraout_XMM0_Da;
  uVar7 = extraout_XMM0_Db;
  if ((plVar2 == (long *)0x0) ||
     (uVar3 = garray_getfloatwords
                        (CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),param_2,param_3,param_4,param_5
                         ,param_6,param_7,param_8,(long)plVar2,&local_2c,&local_28,param_12,
                         (char *)plVar5,param_14), uVar6 = extraout_XMM0_Da_00,
     uVar7 = extraout_XMM0_Db_00, (int)uVar3 == 0)) {
    param_1 = CONCAT44(uVar7,uVar6);
    param_13[1] = 2;
    *(undefined4 *)param_13 = 0;
    uVar3 = *param_10;
    param_13 = plVar5;
    goto LAB_00585233;
  }
  if (*(long *)(param_11 + 2) == 2) {
    lVar4 = (long)*param_11;
    if (-1 < lVar4) goto LAB_005851c7;
LAB_00585264:
    lVar4 = 0;
    lVar1 = param_13[1];
  }
  else {
    if (*(long *)(param_11 + 2) != 1) {
      ex_error(CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_00),param_2,param_3,param_4,param_5,
               param_6,param_7,param_8,param_9,"expr: bad argument for table \'%s\'\n",*param_10,
               param_12,(char *)plVar5,param_14,in_stack_ffffffffffffffc8);
      if (param_13[1] == 0xf) {
        ex_mkvector(0,*param_13,*(int *)(param_9 + 0x28f8));
        return 1;
      }
      goto LAB_005852bf;
    }
    lVar4 = *(long *)param_11;
    if (lVar4 < 0) goto LAB_00585264;
LAB_005851c7:
    if (local_2c <= lVar4) {
      lVar4 = (long)local_2c + -1;
    }
    lVar1 = param_13[1];
  }
  if (lVar1 != 7) {
    uVar6 = *(undefined4 *)(local_28 + lVar4 * 8);
    if (lVar1 == 0xf) {
      ex_mkvector(uVar6,*param_13,*(int *)(param_9 + 0x28f8));
    }
    else {
      param_13[1] = 2;
      *(undefined4 *)param_13 = uVar6;
    }
    return 0;
  }
  ex_error(CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_00),param_2,param_3,param_4,param_5,param_6
           ,param_7,param_8,param_9,"expr:\'%s\' bad output type  \'%ld\'\n",
           *(undefined8 *)(param_9 + 0x40),7,(char *)plVar5,param_14,in_stack_ffffffffffffffc8);
LAB_005852bf:
  lVar4 = _UNK_005d99f8;
  *param_13 = _DAT_005d99f0;
  param_13[1] = lVar4;
  return 1;
}


