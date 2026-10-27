// Function : ex_size
// Namespace: 
// Entry    : 00585590
// Prototype: undefined ex_size(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, undefined8 param_10, long * param_11, long * param_12, char * param_13, undefined8 param_14)
// Body     : 00585590 - 005856c5


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ex_size(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,long param_9
            ,undefined8 param_10,long *param_11,long *param_12,char *param_13,undefined8 param_14)

{
  undefined4 uVar1;
  undefined4 uVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long *plVar7;
  char *pcVar8;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 uVar9;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  undefined4 uVar10;
  int local_2c;
  undefined8 local_28;
  
  uVar9 = _DAT_0065cb40;
  uVar10 = _UNK_0065cb44;
  plVar7 = param_12;
  uVar1 = _UNK_0065cb4c;
  uVar2 = _UNK_0065cb48;
  if (param_11[1] == 0xd) {
    puVar6 = *(undefined8 **)(param_9 + 0x698 + *param_11 * 0x20);
  }
  else {
    if (param_11[1] != 7) {
      post(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
           "expr:\'%s\' arg to function needs to be a table name\n");
      lVar3 = _UNK_005d99f8;
      *param_12 = _DAT_005d99f0;
      param_12[1] = lVar3;
      return;
    }
    if ((*(byte *)(param_11 + 3) & 1) == 0) {
      puVar6 = (undefined8 *)*param_11;
    }
    else {
      puVar6 = gensym((char *)*param_11);
      *(byte *)(param_11 + 3) = *(byte *)(param_11 + 3) & 0xfe;
      free((void *)*param_11);
      param_1 = CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_00);
      uVar1 = _UNK_0065cb4c;
      uVar2 = _UNK_0065cb48;
      uVar10 = _UNK_0065cb44;
      uVar9 = _DAT_0065cb40;
    }
  }
  _DAT_0065cb40 = uVar9;
  _UNK_0065cb44 = uVar10;
  _UNK_0065cb48 = uVar2;
  _UNK_0065cb4c = uVar1;
  if (puVar6 == (undefined8 *)0x0) {
    *(undefined4 *)param_12 = uVar9;
    *(undefined4 *)((long)param_12 + 4) = uVar10;
    *(undefined4 *)(param_12 + 1) = uVar2;
    *(undefined4 *)((long)param_12 + 0xc) = uVar1;
    pcVar8 = "(null)";
  }
  else {
    plVar4 = pd_findbyclass(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                            (long)puVar6,*(long *)PTR_garray_class_00715780);
    if ((plVar4 != (long *)0x0) &&
       (uVar5 = garray_getfloatwords
                          (CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),param_2,param_3,param_4,
                           param_5,param_6,param_7,param_8,(long)plVar4,&local_2c,&local_28,
                           (int *)plVar7,param_13,param_14), (int)uVar5 != 0)) {
      if (param_12[1] == 0xf) {
        ex_mkvector((float)local_2c,*param_12,*(int *)(param_9 + 0x28f8));
        return;
      }
      param_12[1] = 1;
      *param_12 = (long)local_2c;
      return;
    }
    uVar2 = _UNK_0065cb4c;
    uVar1 = _UNK_0065cb48;
    uVar10 = _UNK_0065cb44;
    uVar9 = _DAT_0065cb40;
    *(undefined4 *)param_12 = _DAT_0065cb40;
    *(undefined4 *)((long)param_12 + 4) = uVar10;
    *(undefined4 *)(param_12 + 1) = uVar1;
    *(undefined4 *)((long)param_12 + 0xc) = uVar2;
    pcVar8 = (char *)*puVar6;
  }
  pd_error(CONCAT44(uVar10,uVar9),param_2,param_3,param_4,param_5,param_6,param_7,param_8,0,
           "%s: no such table \'%s\'",*(undefined8 *)(param_9 + 0x40),pcVar8,param_13,param_14);
  return;
}


