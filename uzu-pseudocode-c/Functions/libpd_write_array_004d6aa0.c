// Function : libpd_write_array
// Namespace: 
// Entry    : 004d6aa0
// Prototype: undefined8 libpd_write_array(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, char * param_9, uint param_10, undefined4 * param_11, uint param_12, char * param_13, undefined8 param_14)
// Body     : 004d6aa0 - 004d6be1


undefined8
libpd_write_array(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 char *param_9,uint param_10,undefined4 *param_11,uint param_12,char *param_13,
                 undefined8 param_14)

{
  undefined4 *puVar1;
  int iVar2;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  undefined4 *puVar6;
  uint uVar7;
  int *piVar8;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 uVar9;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  undefined4 extraout_XMM0_Db_01;
  
  sys_lock();
  puVar3 = gensym(param_9);
  lVar5 = *(long *)PTR_garray_class_00715780;
  piVar8 = (int *)PTR_garray_class_00715780;
  plVar4 = pd_findbyclass(CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),param_2,param_3,param_4,
                          param_5,param_6,param_7,param_8,(long)puVar3,lVar5);
  if (plVar4 == (long *)0x0) {
    uVar9 = 0xffffffff;
  }
  else {
    if ((int)(param_12 | param_10) < 0) {
      return 0xfffffffe;
    }
    iVar2 = garray_npoints(CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_00),param_2,param_3,param_4
                           ,param_5,param_6,param_7,param_8,(long)plVar4,lVar5,extraout_RDX,piVar8,
                           param_13,param_14);
    if (iVar2 < (int)(param_12 + param_10)) {
      return 0xfffffffe;
    }
    lVar5 = garray_vec(CONCAT44(extraout_XMM0_Db_01,extraout_XMM0_Da_01),param_2,param_3,param_4,
                       param_5,param_6,param_7,param_8,(long)plVar4,lVar5,extraout_RDX_00,piVar8,
                       param_13,param_14);
    uVar9 = 0;
    if (0 < (int)param_12) {
      puVar6 = (undefined4 *)(lVar5 + (long)(int)param_10 * 8);
      if (6 < param_12 - 1) {
        uVar7 = param_12 & 0xfffffff8;
        do {
          *puVar6 = *param_11;
          puVar6[2] = param_11[1];
          puVar6[4] = param_11[2];
          puVar6[6] = param_11[3];
          puVar6[8] = param_11[4];
          puVar6[10] = param_11[5];
          puVar6[0xc] = param_11[6];
          puVar1 = param_11 + 7;
          param_11 = param_11 + 8;
          puVar6[0xe] = *puVar1;
          puVar6 = puVar6 + 0x10;
          uVar7 = uVar7 - 8;
        } while (uVar7 != 0);
      }
      if ((param_12 & 7) != 0) {
        uVar9 = 0;
        lVar5 = 0;
        do {
          puVar6[lVar5 * 2] = param_11[lVar5];
          lVar5 = lVar5 + 1;
        } while ((param_12 & 7) != (uint)lVar5);
      }
    }
  }
  sys_unlock();
  return uVar9;
}


