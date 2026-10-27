// Function : canvas_try_insert
// Namespace: 
// Entry    : 00513870
// Prototype: undefined8 canvas_try_insert(long param_1, long * param_2, uint param_3, uint param_4, long * param_5, undefined8 param_6, uint param_7, long * param_8, uint param_9, uint param_10)
// Body     : 00513870 - 00513ba3


undefined8
canvas_try_insert(long param_1,long *param_2,uint param_3,uint param_4,long *param_5,
                 undefined8 param_6,uint param_7,long *param_8,uint param_9,uint param_10)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  bool bVar7;
  undefined7 extraout_var;
  undefined7 extraout_var_00;
  undefined7 extraout_var_01;
  undefined7 extraout_var_02;
  long *plVar8;
  undefined8 *puVar9;
  int *piVar10;
  int iVar11;
  long *plVar12;
  long *plVar13;
  uint uVar14;
  undefined8 uVar15;
  int iVar16;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  int iVar17;
  int iVar18;
  undefined8 extraout_XMM1_Qa;
  undefined1 in_XMM1 [16];
  undefined1 auVar20 [12];
  undefined1 auVar19 [16];
  float fVar21;
  float fVar22;
  undefined4 uVar23;
  float fVar24;
  float fVar25;
  undefined4 in_XMM3_Db;
  undefined4 uVar26;
  float fVar27;
  float fVar28;
  undefined4 uVar29;
  undefined8 in_XMM5_Qa;
  undefined8 in_XMM6_Qa;
  undefined8 in_XMM7_Qa;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  float local_100;
  long local_a8;
  long *local_a0;
  uint local_94;
  long *local_90;
  uint local_74;
  
  uVar14 = (uint)param_6;
  uVar15 = 0;
  if ((-1 < (int)(uVar14 | param_4)) && ((int)(param_3 & param_7 & param_9 & param_10) < 0)) {
    plVar13 = param_5;
    bVar7 = obj_issignaloutlet((long)param_2,param_4);
    if (((int)CONCAT71(extraout_var,bVar7) != 0) &&
       (bVar7 = obj_issignalinlet(param_8,0), (int)CONCAT71(extraout_var_00,bVar7) == 0)) {
      return 0;
    }
    bVar7 = obj_issignaloutlet((long)param_8,0);
    auVar20 = in_XMM1._4_12_;
    if ((int)CONCAT71(extraout_var_01,bVar7) != 0) {
      bVar7 = obj_issignalinlet(param_5,uVar14);
      auVar20 = in_XMM1._4_12_;
      if ((int)CONCAT71(extraout_var_02,bVar7) == 0) {
        return 0;
      }
    }
    plVar8 = *(long **)(param_1 + 0x30);
    fVar21 = 0.0;
    fVar27 = 0.0;
    if ((plVar8 != (long *)0x0) && (fVar27 = 0.0, plVar8 != param_2)) {
      iVar11 = 0;
      plVar12 = plVar8;
      do {
        iVar11 = iVar11 + 1;
        plVar12 = (long *)plVar12[1];
        if (plVar12 == (long *)0x0) break;
      } while (plVar12 != param_2);
      fVar27 = (float)iVar11;
    }
    uVar29 = 0;
    if ((plVar8 != (long *)0x0) && (plVar8 != param_5)) {
      iVar11 = 0;
      plVar12 = plVar8;
      do {
        iVar11 = iVar11 + 1;
        plVar12 = (long *)plVar12[1];
        if (plVar12 == (long *)0x0) break;
      } while (plVar12 != param_5);
      fVar21 = (float)iVar11;
    }
    uVar23 = 0;
    local_100 = 0.0;
    if ((plVar8 != (long *)0x0) && (plVar8 != param_8)) {
      iVar11 = 0;
      do {
        iVar11 = iVar11 + 1;
        plVar8 = (long *)plVar8[1];
        if (plVar8 == (long *)0x0) break;
      } while (plVar8 != param_8);
      local_100 = (float)iVar11;
    }
    auVar19._0_4_ = (float)(int)param_4;
    auVar19._4_12_ = auVar20;
    fVar24 = (float)(int)uVar14;
    fVar22 = fVar21;
    fVar25 = fVar24;
    uVar26 = in_XMM3_Db;
    fVar28 = fVar27;
    canvas_disconnect(fVar27,auVar19._0_8_,(ulong)(uint)fVar21,CONCAT44(in_XMM3_Db,fVar24),
                      (ulong)(uint)fVar27,in_XMM5_Qa,in_XMM6_Qa,in_XMM7_Qa,param_1);
    uVar15 = CONCAT44(auVar19._0_4_,fVar27);
    iVar11 = (int)fVar27;
    iVar16 = (int)auVar19._0_4_;
    iVar17 = (int)fVar21;
    iVar18 = (int)fVar24;
    puVar9 = getbytes(0x10);
    *puVar9 = CONCAT44(iVar16,iVar11);
    puVar9[1] = CONCAT44(iVar18,iVar17);
    canvas_undo_add(CONCAT44(iVar16,iVar11),uVar15,CONCAT44(uVar23,fVar22),CONCAT44(uVar26,fVar25),
                    CONCAT44(uVar29,fVar28),in_XMM5_Qa,in_XMM6_Qa,in_XMM7_Qa,param_1,2,"disconnect",
                    puVar9,plVar13,param_6);
    auVar30 = linetraverser_start(&local_a8,param_1);
    do {
      uVar15 = auVar30._8_8_;
      puVar9 = linetraverser_next(auVar30._0_8_,uVar15,CONCAT44(uVar23,fVar22),
                                  CONCAT44(uVar26,fVar25),CONCAT44(uVar29,fVar28),in_XMM5_Qa,
                                  in_XMM6_Qa,in_XMM7_Qa,&local_a8);
      auVar3._8_8_ = uVar15;
      auVar3._0_8_ = extraout_XMM0_Qa;
      auVar2._8_8_ = uVar15;
      auVar2._0_8_ = extraout_XMM0_Qa;
      auVar1._8_8_ = uVar15;
      auVar1._0_8_ = extraout_XMM0_Qa;
      auVar30._8_8_ = uVar15;
      auVar30._0_8_ = extraout_XMM0_Qa;
      if (puVar9 == (undefined8 *)0x0) {
        fVar25 = 0.0;
        uVar26 = 0;
        uVar23 = 0;
        fVar22 = local_100;
        canvas_connect(fVar27,auVar19._0_8_,(ulong)(uint)local_100,0,CONCAT44(uVar29,fVar28),
                       in_XMM5_Qa,in_XMM6_Qa,in_XMM7_Qa,param_1);
        uVar15 = extraout_XMM1_Qa;
        piVar10 = getbytes(0x10);
        *piVar10 = iVar11;
        piVar10[1] = iVar16;
        piVar10[2] = (int)local_100;
        piVar10[3] = 0;
        canvas_undo_add(CONCAT44(iVar16,iVar16),uVar15,CONCAT44(uVar23,fVar22),
                        CONCAT44(uVar26,fVar25),CONCAT44(uVar29,fVar28),in_XMM5_Qa,in_XMM6_Qa,
                        in_XMM7_Qa,param_1,1,"connect",piVar10,plVar13,param_6);
        break;
      }
    } while ((((local_a0 != param_2) || (auVar30 = auVar1, local_94 != param_4)) ||
             (auVar30 = auVar2, local_90 != param_8)) || (auVar30 = auVar3, local_74 != 0));
    auVar31 = linetraverser_start(&local_a8,param_1);
    do {
      uVar15 = auVar31._8_8_;
      puVar9 = linetraverser_next(auVar31._0_8_,uVar15,CONCAT44(uVar23,fVar22),
                                  CONCAT44(uVar26,fVar25),CONCAT44(uVar29,fVar28),in_XMM5_Qa,
                                  in_XMM6_Qa,in_XMM7_Qa,&local_a8);
      auVar6._8_8_ = uVar15;
      auVar6._0_8_ = extraout_XMM0_Qa_00;
      auVar5._8_8_ = uVar15;
      auVar5._0_8_ = extraout_XMM0_Qa_00;
      auVar4._8_8_ = uVar15;
      auVar4._0_8_ = extraout_XMM0_Qa_00;
      auVar31._8_8_ = uVar15;
      auVar31._0_8_ = extraout_XMM0_Qa_00;
      if (puVar9 == (undefined8 *)0x0) {
        uVar23 = 0;
        canvas_connect(local_100,0,(ulong)(uint)fVar21,CONCAT44(in_XMM3_Db,fVar24),
                       CONCAT44(uVar29,fVar28),in_XMM5_Qa,in_XMM6_Qa,in_XMM7_Qa,param_1);
        piVar10 = getbytes(0x10);
        *piVar10 = (int)local_100;
        piVar10[1] = 0;
        piVar10[2] = iVar17;
        piVar10[3] = iVar18;
        canvas_undo_add(CONCAT44(iVar18,iVar18),CONCAT44(iVar16,iVar11),CONCAT44(uVar23,fVar21),
                        CONCAT44(in_XMM3_Db,fVar24),CONCAT44(uVar29,fVar28),in_XMM5_Qa,in_XMM6_Qa,
                        in_XMM7_Qa,param_1,1,"connect",piVar10,plVar13,param_6);
        return 1;
      }
    } while (((local_a0 != param_8) || (auVar31 = auVar4, local_94 != 0)) ||
            ((auVar31 = auVar5, local_90 != param_5 || (auVar31 = auVar6, local_74 != uVar14))));
    uVar15 = 1;
  }
  return uVar15;
}


