// Function : canvas_donecanvasdialog
// Namespace: 
// Entry    : 00512730
// Prototype: undefined canvas_donecanvasdialog(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, double param_6, undefined8 param_7, long * param_8, undefined8 param_9, int param_10, long param_11, char * param_12, undefined * param_13, undefined1 param_14)
// Body     : 00512730 - 00512af4


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void canvas_donecanvasdialog
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
               double param_5,double param_6,undefined8 param_7,long *param_8,undefined8 param_9,
               int param_10,long param_11,char *param_12,undefined *param_13,undefined1 param_14)

{
  byte bVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  undefined4 *puVar5;
  byte bVar6;
  byte bVar7;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 extraout_RDX_01;
  undefined8 extraout_RDX_02;
  undefined8 uVar8;
  long *plVar9;
  uint uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined4 extraout_XMM0_Da;
  uint extraout_XMM0_Db;
  uint extraout_XMM0_Db_00;
  undefined4 extraout_XMM0_Db_01;
  uint uVar22;
  undefined4 extraout_XMM0_Db_02;
  uint extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  uint extraout_XMM0_Dd;
  undefined4 extraout_XMM0_Dd_00;
  uint uVar23;
  uint uVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  uint uVar27;
  undefined4 uVar28;
  undefined1 in_XMM5 [16];
  undefined1 auVar29 [16];
  
  fVar11 = (float)atom_getfloatarg(0,param_10,param_11);
  fVar12 = (float)atom_getfloatarg(1,param_10,param_11);
  fVar13 = (float)atom_getfloatarg(2,param_10,param_11);
  uVar10 = (uint)fVar13;
  fVar13 = (float)atom_getfloatarg(3,param_10,param_11);
  fVar14 = (float)atom_getfloatarg(4,param_10,param_11);
  fVar15 = (float)atom_getfloatarg(5,param_10,param_11);
  fVar16 = (float)atom_getfloatarg(6,param_10,param_11);
  fVar17 = (float)atom_getfloatarg(7,param_10,param_11);
  fVar18 = (float)atom_getfloatarg(8,param_10,param_11);
  fVar19 = (float)atom_getfloatarg(9,param_10,param_11);
  fVar20 = (float)atom_getfloatarg(10,param_10,param_11);
  fVar21 = (float)atom_getfloatarg(0xb,param_10,param_11);
  uVar4 = -(uVar10 & 1) & uVar10;
  if ((int)fVar21 == 0) {
    uVar4 = uVar10;
  }
  puVar5 = getbytes(0x34);
  *puVar5 = (int)param_8[10];
  puVar5[1] = *(undefined4 *)((long)param_8 + 0x54);
  lVar2 = param_8[0xc];
  *(long *)(puVar5 + 2) = param_8[0xb];
  *(long *)(puVar5 + 4) = lVar2;
  lVar2 = param_8[0xd];
  lVar3 = param_8[0xe];
  *(long *)(puVar5 + 6) = lVar2;
  *(long *)(puVar5 + 8) = lVar3;
  puVar5[10] = (int)param_8[0xf];
  puVar5[0xb] = *(undefined4 *)((long)param_8 + 0x7c);
  bVar6 = *(byte *)(param_8 + 0x1d) >> 7;
  bVar1 = *(byte *)(puVar5 + 0xc);
  *(byte *)(puVar5 + 0xc) = bVar1 & 0xfe | bVar6;
  bVar7 = (byte)(*(ushort *)(param_8 + 0x1d) >> 7) & 2;
  *(byte *)(puVar5 + 0xc) = bVar1 & 0xfc | bVar6 | bVar7;
  *(byte *)(puVar5 + 0xc) =
       bVar1 & 0xf8 | bVar6 | bVar7 | (byte)(*(ushort *)(param_8 + 0x1d) >> 7) & 4;
  uVar8 = 8;
  canvas_undo_add(lVar2,param_2,param_3,param_4,param_5,in_XMM5._0_8_,param_6,param_7,(long)param_8,
                  8,"apply",puVar5,param_12,param_13);
  *(int *)(param_8 + 10) = (int)fVar17;
  *(int *)((long)param_8 + 0x54) = (int)fVar18;
  *(int *)(param_8 + 0xf) = (int)fVar19;
  *(int *)((long)param_8 + 0x7c) = (int)fVar20;
  if (uVar4 == 0) {
    uVar22 = _UNK_006524b8 ^ extraout_XMM0_Dc;
    uVar23 = _UNK_006524bc ^ extraout_XMM0_Dd;
    auVar25._0_8_ = CONCAT44(0,~-(uint)(fVar11 == 0.0) & (uint)fVar11);
    auVar25._8_8_ = 0;
    auVar29 = ZEXT416(-(uint)(fVar11 == 0.0) & (uint)DAT_005d9038) | auVar25;
    fVar15 = (float)(~-(uint)(fVar12 == 0.0) & (_DAT_006524b0 ^ (uint)fVar12));
    uVar24 = ~extraout_XMM0_Db & (_UNK_006524b4 ^ extraout_XMM0_Db);
    uVar27 = -(uint)(fVar12 == 0.0) & (uint)DAT_005d9038;
    uVar28 = 0;
    auVar26 = ZEXT416(uVar27);
    fVar13 = fVar15;
    uVar10 = uVar24;
    in_XMM5 = auVar29;
    fVar12 = glist_dpixtodx(DAT_005d9038,CONCAT44(uVar24,fVar15),auVar25._0_8_,
                            (ulong)(uint)DAT_005d9038,(ulong)uVar27,auVar29._0_8_,param_6,param_7,
                            (long)param_8,uVar8,extraout_RDX,puVar5,param_12,param_13);
    fVar11 = auVar29._0_4_;
    if (fVar11 == fVar12) {
      glist_dpixtody(DAT_005d9038,CONCAT44(uVar10,fVar13),auVar25._0_8_,auVar29._0_8_,
                     CONCAT44(uVar28,uVar27),in_XMM5._0_8_,param_6,param_7,(long)param_8,uVar8,
                     extraout_RDX_00,puVar5,param_12,param_13);
    }
    param_5 = (double)CONCAT44(uVar28,uVar27);
    auVar29._4_4_ = uVar24;
    auVar29._0_4_ = fVar15;
    auVar29._8_4_ = ~extraout_XMM0_Dc & uVar22;
    auVar29._12_4_ = ~extraout_XMM0_Dd & uVar23;
    auVar26 = auVar29 | auVar26;
    fVar12 = auVar26._0_4_;
    if (fVar11 <= 0.0) {
      uVar10 = 0;
      fVar13 = (float)((int)param_8[0xe] - (int)param_8[0xd]) *
               (float)(_DAT_006524b0 ^ (uint)fVar11);
      *(float *)(param_8 + 0xb) = fVar13;
      fVar11 = fVar11 + fVar13;
      *(float *)(param_8 + 0xc) = fVar11;
    }
    else {
      *(undefined4 *)(param_8 + 0xb) = 0;
      *(float *)(param_8 + 0xc) = fVar11;
    }
    if (0.0 < fVar12) {
      uVar22 = 0;
      fVar14 = 0.0;
      param_4 = (ulong)(uint)fVar11;
      *(undefined4 *)((long)param_8 + 0x5c) = 0;
    }
    else {
      param_4 = (ulong)(uint)fVar11;
      uVar10 = 0;
      fVar14 = (float)(_DAT_006524b0 ^ (uint)fVar12);
      uVar22 = _UNK_006524b4 ^ auVar26._4_4_;
      fVar13 = (float)(*(int *)((long)param_8 + 0x74) - *(int *)((long)param_8 + 0x6c)) * fVar14;
      *(float *)((long)param_8 + 0x5c) = fVar13;
      auVar26._0_4_ = fVar12 + fVar13;
      param_5 = (double)CONCAT44(uVar28,uVar27);
    }
  }
  else {
    fVar11 = fVar15;
    if (fVar13 == fVar15) {
      fVar11 = DAT_005d9038;
    }
    *(uint *)(param_8 + 0xb) = -(uint)(fVar13 != fVar15) & (uint)fVar13;
    *(float *)(param_8 + 0xc) = fVar11;
    auVar26._4_4_ = extraout_XMM0_Db_01;
    auVar26._0_4_ = fVar16;
    auVar26._8_4_ = extraout_XMM0_Dc_00;
    auVar26._12_4_ = extraout_XMM0_Dd_00;
    uVar22 = 0;
    uVar10 = extraout_XMM0_Db_00;
    if (fVar14 == fVar16) {
      *(undefined4 *)((long)param_8 + 0x5c) = 0;
      auVar26 = ZEXT416((uint)DAT_005d9038);
    }
    else {
      *(float *)((long)param_8 + 0x5c) = fVar14;
    }
  }
  *(int *)((long)param_8 + 100) = auVar26._0_4_;
  plVar9 = (long *)(ulong)uVar4;
  canvas_setgraph(CONCAT44(uVar22,fVar14),CONCAT44(uVar10,fVar13),auVar26._0_8_,param_4,param_5,
                  in_XMM5._0_8_,param_6,param_7,param_8,plVar9,0,puVar5,param_12,(ulong)param_13);
  canvas_dirty(DAT_005d9038,CONCAT44(uVar10,fVar13),auVar26._0_8_,param_4,param_5,in_XMM5._0_8_,
               param_6,param_7,(long)param_8,(char *)plVar9,extraout_RDX_01,puVar5,param_12,param_13
              );
  if ((*(ushort *)(param_8 + 0x1d) & 1) != 0) {
    canvas_redraw(CONCAT44(extraout_XMM0_Db_02,extraout_XMM0_Da),CONCAT44(uVar10,fVar13),
                  auVar26._0_8_,param_4,param_5,in_XMM5._0_8_,param_6,param_7,param_8,(char *)plVar9
                  ,extraout_RDX_02,(undefined *)puVar5,param_12,param_13,param_14);
    return;
  }
  if (((*(ushort *)(param_8 + 0x1d) & 0x800) == 0) &&
     (uVar4 = glist_isvisible(param_8[9]), uVar4 != 0)) {
    gobj_vis(param_8,(long *)param_8[9],0);
    gobj_vis(param_8,(long *)param_8[9],1);
    return;
  }
  return;
}


