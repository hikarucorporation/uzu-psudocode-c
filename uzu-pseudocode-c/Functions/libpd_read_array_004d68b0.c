// Function : libpd_read_array
// Namespace: 
// Entry    : 004d68b0
// Prototype: undefined8 libpd_read_array(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, undefined4 * param_9, char * param_10, uint param_11, uint param_12, char * param_13, undefined8 param_14)
// Body     : 004d68b0 - 004d6a9a


undefined8
libpd_read_array(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                undefined4 *param_9,char *param_10,uint param_11,uint param_12,char *param_13,
                undefined8 param_14)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  uint uVar11;
  undefined8 *puVar12;
  long *plVar13;
  long lVar14;
  int *piVar15;
  undefined4 *puVar16;
  uint uVar17;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  ulong uVar18;
  long lVar19;
  undefined4 *puVar20;
  ulong uVar21;
  uint uVar22;
  long lVar23;
  ulong uVar24;
  undefined8 uVar25;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  undefined4 extraout_XMM0_Db_01;
  
  sys_lock();
  puVar12 = gensym(param_10);
  lVar14 = *(long *)PTR_garray_class_00715780;
  piVar15 = (int *)PTR_garray_class_00715780;
  plVar13 = pd_findbyclass(CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),param_2,param_3,param_4,
                           param_5,param_6,param_7,param_8,(long)puVar12,lVar14);
  if (plVar13 == (long *)0x0) {
    uVar25 = 0xffffffff;
  }
  else {
    if ((int)(param_12 | param_11) < 0) {
      return 0xfffffffe;
    }
    iVar10 = garray_npoints(CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_00),param_2,param_3,
                            param_4,param_5,param_6,param_7,param_8,(long)plVar13,lVar14,
                            extraout_RDX,piVar15,param_13,param_14);
    if (iVar10 < (int)(param_12 + param_11)) {
      return 0xfffffffe;
    }
    lVar14 = garray_vec(CONCAT44(extraout_XMM0_Db_01,extraout_XMM0_Da_01),param_2,param_3,param_4,
                        param_5,param_6,param_7,param_8,(long)plVar13,lVar14,extraout_RDX_00,piVar15
                        ,param_13,param_14);
    if ((int)param_12 < 1) {
      uVar25 = 0;
    }
    else {
      lVar23 = (long)(int)param_11;
      puVar16 = (undefined4 *)(lVar14 + lVar23 * 8);
      uVar24 = (ulong)(param_12 - 1);
      lVar19 = 0;
      puVar20 = param_9;
      if ((7 < param_12 - 1) &&
         (((undefined4 *)(lVar14 + (lVar23 + uVar24) * 8 + 4) <= param_9 ||
          (param_9 + uVar24 + 1 <= (undefined4 *)(lVar14 + lVar23 * 8))))) {
        uVar18 = (ulong)((uint)(uVar24 + 1) & 7);
        uVar21 = 8;
        if (uVar18 != 0) {
          uVar21 = uVar18;
        }
        lVar19 = (uVar24 + 1) - uVar21;
        puVar16 = puVar16 + lVar19 * 2;
        puVar20 = param_9 + lVar19;
        lVar14 = lVar14 + lVar23 * 8;
        lVar23 = 0;
        do {
          puVar1 = (undefined4 *)(lVar14 + lVar23 * 8);
          uVar3 = puVar1[2];
          puVar2 = (undefined4 *)(lVar14 + 0x10 + lVar23 * 8);
          uVar4 = *puVar2;
          uVar5 = puVar2[2];
          puVar2 = (undefined4 *)(lVar14 + 0x20 + lVar23 * 8);
          uVar6 = *puVar2;
          uVar7 = puVar2[2];
          puVar2 = (undefined4 *)(lVar14 + 0x30 + lVar23 * 8);
          uVar8 = *puVar2;
          uVar9 = puVar2[2];
          puVar2 = param_9 + lVar23;
          *puVar2 = *puVar1;
          puVar2[1] = uVar3;
          puVar2[2] = uVar4;
          puVar2[3] = uVar5;
          puVar2 = param_9 + lVar23 + 4;
          *puVar2 = uVar6;
          puVar2[1] = uVar7;
          puVar2[2] = uVar8;
          puVar2[3] = uVar9;
          lVar23 = lVar23 + 8;
        } while (lVar19 != lVar23);
      }
      uVar17 = (uint)lVar19;
      uVar11 = ~uVar17;
      uVar22 = param_12 - uVar17 & 7;
      if (uVar22 != 0) {
        iVar10 = 0;
        do {
          uVar3 = *puVar16;
          puVar16 = puVar16 + 2;
          *puVar20 = uVar3;
          puVar20 = puVar20 + 1;
          iVar10 = iVar10 + -1;
        } while (-uVar22 != iVar10);
        uVar17 = uVar17 - iVar10;
      }
      uVar25 = 0;
      if (6 < uVar11 + param_12) {
        uVar25 = 0;
        lVar14 = 0;
        do {
          puVar20[lVar14] = puVar16[lVar14 * 2];
          puVar20[lVar14 + 1] = puVar16[lVar14 * 2 + 2];
          puVar20[lVar14 + 2] = puVar16[lVar14 * 2 + 4];
          puVar20[lVar14 + 3] = puVar16[lVar14 * 2 + 6];
          puVar20[lVar14 + 4] = puVar16[lVar14 * 2 + 8];
          puVar20[lVar14 + 5] = puVar16[lVar14 * 2 + 10];
          puVar20[lVar14 + 6] = puVar16[lVar14 * 2 + 0xc];
          puVar20[lVar14 + 7] = puVar16[lVar14 * 2 + 0xe];
          lVar14 = lVar14 + 8;
        } while (param_12 - uVar17 != (int)lVar14);
      }
    }
  }
  sys_unlock();
  return uVar25;
}


