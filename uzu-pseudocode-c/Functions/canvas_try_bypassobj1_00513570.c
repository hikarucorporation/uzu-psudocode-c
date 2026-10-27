// Function : canvas_try_bypassobj1
// Namespace: 
// Entry    : 00513570
// Prototype: undefined8 canvas_try_bypassobj1(long param_1, long param_2, uint param_3, uint param_4, long param_5, undefined8 param_6, uint param_7, long param_8, uint param_9, uint param_10)
// Body     : 00513570 - 0051386b


undefined8
canvas_try_bypassobj1
          (long param_1,long param_2,uint param_3,uint param_4,long param_5,undefined8 param_6,
          uint param_7,long param_8,uint param_9,uint param_10)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  bool bVar4;
  bool bVar5;
  undefined7 extraout_var;
  undefined7 extraout_var_00;
  long lVar6;
  int *piVar7;
  undefined8 *puVar8;
  int iVar9;
  long lVar10;
  long lVar11;
  uint uVar12;
  undefined8 uVar13;
  float fVar14;
  int iVar15;
  undefined8 extraout_XMM0_Qa;
  int iVar16;
  int iVar17;
  float fVar18;
  float fVar19;
  undefined8 extraout_XMM1_Qa;
  float fVar20;
  float fVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  float fVar25;
  float fVar26;
  undefined4 in_XMM3_Db;
  undefined8 in_XMM4_Qa;
  undefined8 in_XMM5_Qa;
  undefined8 in_XMM6_Qa;
  undefined8 in_XMM7_Qa;
  undefined1 auVar27 [16];
  ulong local_e8;
  ulong local_c8;
  long local_a8;
  long local_a0;
  uint local_94;
  long local_90;
  uint local_74;
  
  uVar12 = (uint)param_6;
  uVar13 = 0;
  if ((-1 < (int)(uVar12 | param_4 | param_7 | param_9)) && ((int)(param_3 & param_10) < 0)) {
    lVar11 = param_5;
    bVar4 = obj_issignaloutlet(param_2,param_4);
    bVar5 = obj_issignaloutlet(param_5,param_7);
    if ((int)CONCAT71(extraout_var,bVar4) == (int)CONCAT71(extraout_var_00,bVar5)) {
      lVar6 = *(long *)(param_1 + 0x30);
      fVar20 = 0.0;
      fVar14 = 0.0;
      if ((lVar6 != 0) && (fVar14 = 0.0, lVar6 != param_2)) {
        iVar9 = 0;
        lVar10 = lVar6;
        do {
          iVar9 = iVar9 + 1;
          lVar10 = *(long *)(lVar10 + 8);
          if (lVar10 == 0) break;
        } while (lVar10 != param_2);
        fVar14 = (float)iVar9;
      }
      if ((lVar6 != 0) && (lVar6 != param_5)) {
        iVar9 = 0;
        lVar10 = lVar6;
        do {
          iVar9 = iVar9 + 1;
          lVar10 = *(long *)(lVar10 + 8);
          if (lVar10 == 0) break;
        } while (lVar10 != param_5);
        fVar20 = (float)iVar9;
      }
      uVar22 = 0;
      local_e8 = 0;
      if ((lVar6 != 0) && (lVar6 != param_8)) {
        iVar9 = 0;
        do {
          iVar9 = iVar9 + 1;
          lVar6 = *(long *)(lVar6 + 8);
          if (lVar6 == 0) break;
        } while (lVar6 != param_8);
        local_e8 = (ulong)(uint)(float)iVar9;
      }
      fVar18 = (float)(int)param_4;
      fVar25 = (float)(int)uVar12;
      fVar21 = fVar20;
      fVar26 = fVar25;
      canvas_disconnect(fVar14,(ulong)(uint)fVar18,(ulong)(uint)fVar20,CONCAT44(in_XMM3_Db,fVar25),
                        in_XMM4_Qa,in_XMM5_Qa,in_XMM6_Qa,in_XMM7_Qa,param_1);
      piVar7 = getbytes(0x10);
      fVar19 = (float)(int)param_9;
      iVar9 = (int)fVar14;
      iVar15 = (int)fVar18;
      iVar16 = (int)(float)local_e8;
      iVar17 = (int)fVar19;
      *piVar7 = iVar9;
      piVar7[1] = iVar15;
      piVar7[2] = (int)fVar20;
      piVar7[3] = (int)fVar25;
      canvas_undo_add(CONCAT44(iVar15,iVar15),CONCAT44(fVar18,fVar14),CONCAT44(uVar22,fVar21),
                      CONCAT44(in_XMM3_Db,fVar26),in_XMM4_Qa,in_XMM5_Qa,in_XMM6_Qa,in_XMM7_Qa,
                      param_1,2,"disconnect",piVar7,lVar11,param_6);
      uVar24 = 0;
      uVar22 = 0;
      fVar21 = (float)local_e8;
      uVar23 = uVar24;
      fVar26 = fVar19;
      canvas_disconnect(fVar20,(ulong)(uint)(float)(int)param_7,local_e8,(ulong)(uint)fVar19,
                        in_XMM4_Qa,in_XMM5_Qa,in_XMM6_Qa,in_XMM7_Qa,param_1);
      piVar7 = getbytes(0x10);
      *piVar7 = (int)fVar20;
      piVar7[1] = (int)(float)(int)param_7;
      piVar7[2] = iVar16;
      piVar7[3] = iVar17;
      canvas_undo_add(CONCAT44(iVar17,iVar17),CONCAT44(iVar15,iVar9),CONCAT44(uVar23,fVar21),
                      CONCAT44(uVar22,fVar26),in_XMM4_Qa,in_XMM5_Qa,in_XMM6_Qa,in_XMM7_Qa,param_1,2,
                      "disconnect",piVar7,lVar11,param_6);
      auVar27 = linetraverser_start(&local_a8,param_1);
      do {
        uVar13 = auVar27._8_8_;
        puVar8 = linetraverser_next(auVar27._0_8_,uVar13,CONCAT44(uVar23,fVar21),
                                    CONCAT44(uVar22,fVar26),in_XMM4_Qa,in_XMM5_Qa,in_XMM6_Qa,
                                    in_XMM7_Qa,&local_a8);
        auVar3._8_8_ = uVar13;
        auVar3._0_8_ = extraout_XMM0_Qa;
        auVar2._8_8_ = uVar13;
        auVar2._0_8_ = extraout_XMM0_Qa;
        auVar1._8_8_ = uVar13;
        auVar1._0_8_ = extraout_XMM0_Qa;
        auVar27._8_8_ = uVar13;
        auVar27._0_8_ = extraout_XMM0_Qa;
        if (puVar8 == (undefined8 *)0x0) {
          local_c8 = (ulong)(uint)fVar18;
          uVar22 = 0;
          canvas_connect(fVar14,local_c8,local_e8,(ulong)(uint)fVar19,in_XMM4_Qa,in_XMM5_Qa,
                         in_XMM6_Qa,in_XMM7_Qa,param_1);
          uVar13 = extraout_XMM1_Qa;
          puVar8 = getbytes(0x10);
          *puVar8 = CONCAT44(iVar15,iVar9);
          puVar8[1] = CONCAT44(iVar17,iVar16);
          canvas_undo_add(CONCAT44(iVar15,iVar9),uVar13,CONCAT44(uVar24,(float)local_e8),
                          CONCAT44(uVar22,fVar19),in_XMM4_Qa,in_XMM5_Qa,in_XMM6_Qa,in_XMM7_Qa,
                          param_1,1,"connect",puVar8,lVar11,param_6);
          return 1;
        }
      } while ((((local_a0 != param_2) || (auVar27 = auVar1, local_94 != param_4)) ||
               (auVar27 = auVar2, local_90 != param_8)) || (auVar27 = auVar3, local_74 != param_9));
      uVar13 = 1;
    }
  }
  return uVar13;
}


