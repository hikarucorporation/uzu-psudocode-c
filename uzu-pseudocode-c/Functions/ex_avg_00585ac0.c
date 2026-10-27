// Function : ex_avg
// Namespace: 
// Entry    : 00585ac0
// Prototype: undefined ex_avg(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, undefined8 param_10, long * param_11, float * param_12, char * param_13, undefined8 param_14)
// Body     : 00585ac0 - 00585cc0


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ex_avg(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
           undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,long param_9,
           undefined8 param_10,long *param_11,float *param_12,char *param_13,undefined8 param_14)

{
  float *pfVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  float *pfVar5;
  char *pcVar6;
  ulong uVar7;
  ulong uVar8;
  undefined4 extraout_XMM0_Da;
  float fVar9;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  uint local_2c;
  long local_28;
  
  fVar12 = _DAT_0065cb40;
  fVar11 = _UNK_0065cb44;
  pfVar5 = param_12;
  fVar9 = _UNK_0065cb4c;
  fVar10 = _UNK_0065cb48;
  if (param_11[1] == 0xd) {
    puVar4 = *(undefined8 **)(param_9 + 0x698 + *param_11 * 0x20);
  }
  else {
    if (param_11[1] != 7) {
      post(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
           "expr:\'%s\' arg to function needs to be a table name\n");
      uVar3 = _UNK_005d99f8;
      *(undefined8 *)param_12 = _DAT_005d99f0;
      *(undefined8 *)(param_12 + 2) = uVar3;
      return;
    }
    if ((*(byte *)(param_11 + 3) & 1) == 0) {
      puVar4 = (undefined8 *)*param_11;
    }
    else {
      puVar4 = gensym((char *)*param_11);
      *(byte *)(param_11 + 3) = *(byte *)(param_11 + 3) & 0xfe;
      free((void *)*param_11);
      param_1 = CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_00);
      fVar9 = _UNK_0065cb4c;
      fVar10 = _UNK_0065cb48;
      fVar11 = _UNK_0065cb44;
      fVar12 = _DAT_0065cb40;
    }
  }
  _DAT_0065cb40 = fVar12;
  _UNK_0065cb44 = fVar11;
  _UNK_0065cb48 = fVar10;
  _UNK_0065cb4c = fVar9;
  if (puVar4 == (undefined8 *)0x0) {
    *param_12 = fVar12;
    param_12[1] = fVar11;
    param_12[2] = fVar10;
    param_12[3] = fVar9;
    pcVar6 = "(null)";
  }
  else {
    plVar2 = pd_findbyclass(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                            (long)puVar4,*(long *)PTR_garray_class_00715780);
    if ((plVar2 != (long *)0x0) &&
       (uVar3 = garray_getfloatwords
                          (CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),param_2,param_3,param_4,
                           param_5,param_6,param_7,param_8,(long)plVar2,&local_2c,&local_28,
                           (int *)pfVar5,param_13,param_14), (int)uVar3 != 0)) {
      if ((int)local_2c < 1) {
        fVar9 = 0.0;
      }
      else {
        if (local_2c < 9) {
          fVar9 = 0.0;
          uVar7 = 0;
        }
        else {
          uVar7 = 8;
          if ((ulong)(local_2c & 7) != 0) {
            uVar7 = (ulong)(local_2c & 7);
          }
          uVar7 = local_2c - uVar7;
          fVar9 = 0.0;
          fVar10 = 0.0;
          fVar11 = 0.0;
          fVar12 = 0.0;
          uVar8 = 0;
          fVar13 = 0.0;
          fVar14 = 0.0;
          fVar15 = 0.0;
          fVar16 = 0.0;
          do {
            pfVar5 = (float *)(local_28 + uVar8 * 8);
            pfVar1 = (float *)(local_28 + 0x10 + uVar8 * 8);
            fVar9 = fVar9 + *pfVar5;
            fVar10 = fVar10 + pfVar5[2];
            fVar11 = fVar11 + *pfVar1;
            fVar12 = fVar12 + pfVar1[2];
            pfVar5 = (float *)(local_28 + 0x20 + uVar8 * 8);
            pfVar1 = (float *)(local_28 + 0x30 + uVar8 * 8);
            fVar13 = fVar13 + *pfVar5;
            fVar14 = fVar14 + pfVar5[2];
            fVar15 = fVar15 + *pfVar1;
            fVar16 = fVar16 + pfVar1[2];
            uVar8 = uVar8 + 8;
          } while (uVar7 != uVar8);
          fVar9 = fVar16 + fVar12 + fVar14 + fVar10 + fVar15 + fVar11 + fVar13 + fVar9;
        }
        do {
          fVar9 = fVar9 + *(float *)(local_28 + uVar7 * 8);
          uVar7 = uVar7 + 1;
        } while (local_2c != uVar7);
      }
      if (*(long *)(param_12 + 2) == 0xf) {
        ex_mkvector(fVar9 / (float)(int)local_2c,*(long *)param_12,*(int *)(param_9 + 0x28f8));
        return;
      }
      param_12[2] = 2.8026e-45;
      param_12[3] = 0.0;
      *param_12 = fVar9 / (float)(int)local_2c;
      return;
    }
    fVar10 = _UNK_0065cb4c;
    fVar9 = _UNK_0065cb48;
    fVar11 = _UNK_0065cb44;
    fVar12 = _DAT_0065cb40;
    *param_12 = _DAT_0065cb40;
    param_12[1] = fVar11;
    param_12[2] = fVar9;
    param_12[3] = fVar10;
    pcVar6 = (char *)*puVar4;
  }
  pd_error(CONCAT44(fVar11,fVar12),param_2,param_3,param_4,param_5,param_6,param_7,param_8,0,
           "%s: no such table \'%s\'",*(undefined8 *)(param_9 + 0x40),pcVar6,param_13,param_14);
  return;
}


