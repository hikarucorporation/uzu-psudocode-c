// Function : ex_Avg
// Namespace: 
// Entry    : 00585cd0
// Prototype: undefined ex_Avg(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, undefined8 param_10, long * param_11, float * param_12, char * param_13, undefined8 param_14)
// Body     : 00585cd0 - 00585f52


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ex_Avg(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
           undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,long param_9,
           undefined8 param_10,long *param_11,float *param_12,char *param_13,undefined8 param_14)

{
  float fVar1;
  float fVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long lVar6;
  float *pfVar7;
  char *pcVar8;
  long lVar9;
  undefined8 extraout_RDX;
  long lVar10;
  ulong uVar11;
  uint uVar12;
  long lVar13;
  ulong uVar14;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  float fVar15;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  undefined4 extraout_XMM0_Db_01;
  float fVar16;
  undefined1 in_stack_ffffffffffffffc8;
  int local_2c;
  long local_28;
  
  pfVar7 = param_12;
  if (param_11[1] == 0xd) {
    puVar5 = *(undefined8 **)(param_9 + 0x698 + *param_11 * 0x20);
joined_r0x00585d1d:
    if (puVar5 == (undefined8 *)0x0) {
LAB_00585dc1:
      fVar2 = _UNK_0065cb4c;
      fVar1 = _UNK_0065cb48;
      fVar16 = _UNK_0065cb44;
      fVar15 = _DAT_0065cb40;
      *param_12 = _DAT_0065cb40;
      param_12[1] = fVar16;
      param_12[2] = fVar1;
      param_12[3] = fVar2;
      pcVar8 = "(null)";
    }
    else {
LAB_00585d23:
      plVar3 = pd_findbyclass(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                              (long)puVar5,*(long *)PTR_garray_class_00715780);
      if ((plVar3 != (long *)0x0) &&
         (uVar4 = garray_getfloatwords
                            (CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),param_2,param_3,param_4,
                             param_5,param_6,param_7,param_8,(long)plVar3,&local_2c,&local_28,
                             (int *)pfVar7,param_13,param_14), (int)uVar4 != 0)) {
        if (param_11[5] == 2) {
          lVar13 = (long)*(float *)(param_11 + 4);
LAB_00585df9:
          lVar6 = 0;
          if (-1 < lVar13) {
            lVar6 = lVar13;
          }
          pfVar7 = (float *)param_11[9];
          if (pfVar7 == (float *)0x2) {
            lVar13 = (long)*(float *)(param_11 + 8);
LAB_00585e4e:
            lVar10 = (long)local_2c;
            lVar9 = lVar10 + -1;
            if (lVar13 < lVar10) {
              lVar9 = lVar13;
            }
            fVar15 = 0.0;
            uVar11 = lVar9 - lVar6;
            if (lVar6 <= lVar9) {
              uVar12 = ((int)lVar9 - (int)lVar6) + 1;
              fVar15 = 0.0;
              uVar14 = (ulong)uVar12 & 3;
              if ((uVar12 & 3) != 0) {
                do {
                  if (lVar6 < lVar10) {
                    fVar15 = fVar15 + *(float *)(local_28 + lVar6 * 8);
                  }
                  lVar6 = lVar6 + 1;
                  uVar14 = uVar14 - 1;
                } while (uVar14 != 0);
              }
              if (2 < uVar11) {
                do {
                  if (lVar6 < lVar10) {
                    fVar15 = fVar15 + *(float *)(local_28 + lVar6 * 8);
                  }
                  if (lVar6 + 1 < lVar10) {
                    fVar15 = fVar15 + *(float *)(local_28 + 8 + lVar6 * 8);
                  }
                  if (lVar6 + 2 < lVar10) {
                    fVar15 = fVar15 + *(float *)(local_28 + 0x10 + lVar6 * 8);
                  }
                  if (lVar6 + 3 < lVar10) {
                    fVar15 = fVar15 + *(float *)(local_28 + 0x18 + lVar6 * 8);
                  }
                  lVar13 = lVar6 + 3;
                  lVar6 = lVar6 + 4;
                } while (lVar13 != lVar9);
              }
            }
            if (*(long *)(param_12 + 2) == 0xf) {
              ex_mkvector(fVar15 / (float)(long)(uVar11 + 1),*(long *)param_12,
                          *(int *)(param_9 + 0x28f8));
              return;
            }
            param_12[2] = 2.8026e-45;
            param_12[3] = 0.0;
            *param_12 = fVar15 / (float)(long)(uVar11 + 1);
            return;
          }
          if (pfVar7 == (float *)0x1) {
            lVar13 = param_11[8];
            goto LAB_00585e4e;
          }
        }
        else if (param_11[5] == 1) {
          lVar13 = param_11[4];
          goto LAB_00585df9;
        }
        ex_error(CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_00),param_2,param_3,param_4,param_5,
                 param_6,param_7,param_8,param_9,"expr: Avg: boundaries have to be fix values\n",
                 extraout_RDX,pfVar7,param_13,param_14,in_stack_ffffffffffffffc8);
        if (*(long *)(param_12 + 2) == 0xf) {
          ex_mkvector(0,*(long *)param_12,*(int *)(param_9 + 0x28f8));
          return;
        }
        goto LAB_00585d83;
      }
      fVar2 = _UNK_0065cb4c;
      fVar1 = _UNK_0065cb48;
      fVar16 = _UNK_0065cb44;
      fVar15 = _DAT_0065cb40;
      *param_12 = _DAT_0065cb40;
      param_12[1] = fVar16;
      param_12[2] = fVar1;
      param_12[3] = fVar2;
      pcVar8 = (char *)*puVar5;
    }
    pd_error(CONCAT44(fVar16,fVar15),param_2,param_3,param_4,param_5,param_6,param_7,param_8,0,
             "%s: no such table \'%s\'",*(undefined8 *)(param_9 + 0x40),pcVar8,param_13,param_14);
  }
  else {
    if (param_11[1] == 7) {
      if ((*(byte *)(param_11 + 3) & 1) != 0) {
        puVar5 = gensym((char *)*param_11);
        *(byte *)(param_11 + 3) = *(byte *)(param_11 + 3) & 0xfe;
        free((void *)*param_11);
        param_1 = CONCAT44(extraout_XMM0_Db_01,extraout_XMM0_Da_01);
        goto joined_r0x00585d1d;
      }
      puVar5 = (undefined8 *)*param_11;
      if (puVar5 == (undefined8 *)0x0) goto LAB_00585dc1;
      goto LAB_00585d23;
    }
    post(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
         "expr:\'%s\' arg to function needs to be a table name\n");
LAB_00585d83:
    uVar4 = _UNK_005d99f8;
    *(undefined8 *)param_12 = _DAT_005d99f0;
    *(undefined8 *)(param_12 + 2) = uVar4;
  }
  return;
}


