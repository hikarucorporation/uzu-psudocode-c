// Function : ex_Sum
// Namespace: 
// Entry    : 005858d0
// Prototype: undefined ex_Sum(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, undefined8 param_10, long * param_11, float * param_12, char * param_13, undefined8 param_14)
// Body     : 005858d0 - 00585ab9


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ex_Sum(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
           undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,long param_9,
           undefined8 param_10,long *param_11,float *param_12,char *param_13,undefined8 param_14)

{
  bool bVar1;
  float fVar2;
  float fVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long lVar7;
  float *pfVar8;
  char *pcVar9;
  long lVar10;
  undefined8 extraout_RDX;
  long lVar11;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  float fVar12;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  undefined4 extraout_XMM0_Db_01;
  float fVar13;
  undefined1 in_stack_ffffffffffffffc8;
  int local_2c;
  long local_28;
  
  pfVar8 = param_12;
  if (param_11[1] == 0xd) {
    puVar6 = *(undefined8 **)(param_9 + 0x698 + *param_11 * 0x20);
joined_r0x0058591d:
    if (puVar6 == (undefined8 *)0x0) {
LAB_005859c1:
      fVar3 = _UNK_0065cb4c;
      fVar2 = _UNK_0065cb48;
      fVar13 = _UNK_0065cb44;
      fVar12 = _DAT_0065cb40;
      *param_12 = _DAT_0065cb40;
      param_12[1] = fVar13;
      param_12[2] = fVar2;
      param_12[3] = fVar3;
      pcVar9 = "(null)";
    }
    else {
LAB_00585923:
      plVar4 = pd_findbyclass(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                              (long)puVar6,*(long *)PTR_garray_class_00715780);
      if ((plVar4 != (long *)0x0) &&
         (uVar5 = garray_getfloatwords
                            (CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),param_2,param_3,param_4,
                             param_5,param_6,param_7,param_8,(long)plVar4,&local_2c,&local_28,
                             (int *)pfVar8,param_13,param_14), (int)uVar5 != 0)) {
        if (param_11[5] == 2) {
          lVar10 = (long)*(float *)(param_11 + 4);
LAB_005859f9:
          lVar7 = 0;
          if (-1 < lVar10) {
            lVar7 = lVar10;
          }
          pfVar8 = (float *)param_11[9];
          if (pfVar8 == (float *)0x2) {
            lVar10 = (long)*(float *)(param_11 + 8);
LAB_00585a4e:
            lVar11 = (long)local_2c;
            if (lVar11 < lVar10) {
              lVar10 = lVar11;
            }
            fVar12 = 0.0;
            if (lVar7 <= lVar10) {
              fVar12 = 0.0;
              do {
                if (lVar7 < lVar11) {
                  fVar12 = fVar12 + *(float *)(local_28 + lVar7 * 8);
                }
                bVar1 = lVar7 < lVar10;
                lVar7 = lVar7 + 1;
              } while (bVar1);
            }
            if (*(long *)(param_12 + 2) == 0xf) {
              ex_mkvector(fVar12,*(long *)param_12,*(int *)(param_9 + 0x28f8));
              return;
            }
            param_12[2] = 2.8026e-45;
            param_12[3] = 0.0;
            *param_12 = fVar12;
            return;
          }
          if (pfVar8 == (float *)0x1) {
            lVar10 = param_11[8];
            goto LAB_00585a4e;
          }
        }
        else if (param_11[5] == 1) {
          lVar10 = param_11[4];
          goto LAB_005859f9;
        }
        ex_error(CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_00),param_2,param_3,param_4,param_5,
                 param_6,param_7,param_8,param_9,"expr: Sum: boundaries have to be fix values\n",
                 extraout_RDX,pfVar8,param_13,param_14,in_stack_ffffffffffffffc8);
        if (*(long *)(param_12 + 2) == 0xf) {
          ex_mkvector(0,*(long *)param_12,*(int *)(param_9 + 0x28f8));
          return;
        }
        goto LAB_00585983;
      }
      fVar3 = _UNK_0065cb4c;
      fVar2 = _UNK_0065cb48;
      fVar13 = _UNK_0065cb44;
      fVar12 = _DAT_0065cb40;
      *param_12 = _DAT_0065cb40;
      param_12[1] = fVar13;
      param_12[2] = fVar2;
      param_12[3] = fVar3;
      pcVar9 = (char *)*puVar6;
    }
    pd_error(CONCAT44(fVar13,fVar12),param_2,param_3,param_4,param_5,param_6,param_7,param_8,0,
             "%s: no such table \'%s\'",*(undefined8 *)(param_9 + 0x40),pcVar9,param_13,param_14);
  }
  else {
    if (param_11[1] == 7) {
      if ((*(byte *)(param_11 + 3) & 1) != 0) {
        puVar6 = gensym((char *)*param_11);
        *(byte *)(param_11 + 3) = *(byte *)(param_11 + 3) & 0xfe;
        free((void *)*param_11);
        param_1 = CONCAT44(extraout_XMM0_Db_01,extraout_XMM0_Da_01);
        goto joined_r0x0058591d;
      }
      puVar6 = (undefined8 *)*param_11;
      if (puVar6 == (undefined8 *)0x0) goto LAB_005859c1;
      goto LAB_00585923;
    }
    post(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
         "expr:\'%s\' arg to function needs to be a table name\n");
LAB_00585983:
    uVar5 = _UNK_005d99f8;
    *(undefined8 *)param_12 = _DAT_005d99f0;
    *(undefined8 *)(param_12 + 2) = uVar5;
  }
  return;
}


