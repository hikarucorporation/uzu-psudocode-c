// Function : my_numbox_new
// Namespace: 
// Entry    : 005a4a50
// Prototype: long * my_numbox_new(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, undefined8 param_9, int * param_10, undefined8 * param_11, char * param_12, undefined8 param_13)
// Body     : 005a4a50 - 005a50f1


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * my_numbox_new(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                    undefined8 param_9,int *param_10,undefined8 *param_11,char *param_12,
                    undefined8 param_13)

{
  uint uVar1;
  undefined1 auVar2 [16];
  double dVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  long *plVar9;
  long extraout_RAX;
  long extraout_RAX_00;
  long lVar10;
  long *plVar11;
  ulong uVar12;
  uint uVar13;
  ulong uVar14;
  ulong extraout_RDX;
  undefined8 extraout_RDX_00;
  int iVar15;
  int iVar16;
  int iVar17;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined4 uVar21;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  undefined8 uVar22;
  undefined4 extraout_XMM0_Db_01;
  undefined4 uVar23;
  undefined4 extraout_XMM0_Db_02;
  undefined4 extraout_XMM0_Db_03;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dd;
  undefined4 extraout_XMM0_Dd_00;
  undefined8 extraout_XMM1_Qa;
  undefined8 extraout_XMM1_Qa_00;
  undefined8 extraout_XMM1_Qa_01;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 in_XMM2 [16];
  undefined1 auVar26 [16];
  double dVar27;
  double __x;
  int local_94;
  undefined8 uStack_80;
  code *local_68;
  code *local_60;
  undefined8 local_58;
  code *local_50;
  code *local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  plVar9 = iemgui_new(param_1,param_2,in_XMM2._0_8_,param_3,param_4,param_5,param_6,param_7,
                      my_numbox_class,param_9,param_10,param_11,param_12,param_13);
  canvas_getcurrent(CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),param_2,in_XMM2._0_8_,param_3,
                    param_4,param_5,param_6,param_7);
  iVar7 = 0;
  uVar22 = extraout_XMM1_Qa;
  iVar5 = sys_zoomfontheight(*(uint *)(extraout_RAX + 0xd0),1,0);
  canvas_getcurrent(CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_00),uVar22,in_XMM2._0_8_,param_3,
                    param_4,param_5,param_6,param_7);
  iVar6 = sys_zoomfontheight(*(uint *)(extraout_RAX_00 + 0xd0),1,0);
  iVar16 = *(int *)((long)plVar9 + 0x444);
  local_68 = my_numbox_draw_new;
  local_60 = my_numbox_draw_config;
  local_58 = 0;
  local_50 = my_numbox_draw_update;
  local_48 = my_numbox_draw_select;
  local_40 = 0;
  uStack_38 = 0;
  iemgui_setdrawfunctions((long)plVar9,&local_68);
  iVar15 = (int)param_9;
  if (((((((iVar15 < 0x11) || (*param_10 != 1)) || (param_10[4] != 1)) ||
        ((param_10[8] != 1 || (param_10[0xc] != 1)))) ||
       ((param_10[0x10] != 1 || ((param_10[0x14] != 1 || (1 < param_10[0x18] - 1U)))))) ||
      (1 < param_10[0x1c] - 1U)) ||
     ((((1 < param_10[0x20] - 1U || (param_10[0x24] != 1)) || (param_10[0x28] != 1)) ||
      (((param_10[0x2c] != 1 || (param_10[0x30] != 1)) || (param_10[0x40] != 1)))))) {
    iVar17 = (int)((double)(iVar5 * 0xe + 0x46) * DAT_0065e510);
    dVar27 = (double)(iVar6 * -8 + -0x28) * DAT_0065e510;
    iVar6 = (int)dVar27;
    iemgui_new_getnames(dVar27,DAT_0065e510,in_XMM2._0_8_,param_3,param_4,param_5,param_6,param_7,
                        (long)plVar9,6,0,param_11,param_12,param_13);
    auVar24 = ZEXT816(0);
    uStack_80 = 0;
    iVar5 = 5;
    local_94 = 0;
    dVar27 = DAT_0065e618;
    __x = DAT_0065e610;
  }
  else {
    fVar18 = (float)atom_getfloatarg(0,iVar15,(long)param_10);
    iVar5 = (int)fVar18;
    fVar18 = (float)atom_getfloatarg(1,iVar15,(long)param_10);
    iVar17 = (int)fVar18;
    fVar18 = (float)atom_getfloatarg(2,iVar15,(long)param_10);
    fVar19 = (float)atom_getfloatarg(3,iVar15,(long)param_10);
    auVar2._8_4_ = extraout_XMM0_Dc;
    auVar2._0_8_ = (double)fVar19;
    auVar2._12_4_ = extraout_XMM0_Dd;
    fVar20 = (float)atom_getfloatarg(4,iVar15,(long)param_10);
    iVar7 = (int)fVar20;
    fVar20 = (float)atom_getfloatarg(5,iVar15,(long)param_10);
    uVar22 = iem_inttosymargs((uint *)(plVar9 + 0x89),(int)fVar20);
    iemgui_new_getnames(uVar22,extraout_XMM1_Qa_00,in_XMM2._0_8_,param_3,param_4,param_5,param_6,
                        param_7,(long)plVar9,6,(long)param_10,param_11,param_12,param_13);
    fVar20 = (float)atom_getfloatarg(9,iVar15,(long)param_10);
    local_94 = (int)fVar20;
    fVar20 = (float)atom_getfloatarg(10,iVar15,(long)param_10);
    iVar6 = (int)fVar20;
    fVar20 = (float)atom_getfloatarg(0xb,iVar15,(long)param_10);
    iem_inttofstyle((uint *)(plVar9 + 0x88),(int)fVar20);
    fVar20 = (float)atom_getfloatarg(0xc,iVar15,(long)param_10);
    iVar16 = (int)fVar20;
    iemgui_all_loadcolors((long)plVar9,param_10 + 0x34,param_10 + 0x38,param_10 + 0x3c);
    uVar21 = atom_getfloatarg(0x10,iVar15,(long)param_10);
    uStack_80 = auVar2._8_8_;
    auVar24._4_4_ = extraout_XMM0_Db_01;
    auVar24._0_4_ = uVar21;
    auVar24._8_4_ = extraout_XMM0_Dc_00;
    auVar24._12_4_ = extraout_XMM0_Dd_00;
    dVar27 = (double)fVar18;
    __x = (double)fVar19;
  }
  uVar12 = 0x100;
  if ((iVar15 == 0x12) && (param_10[0x44] == 1)) {
    fVar18 = (float)atom_getfloatarg(0x11,0x12,(long)param_10);
    auVar24 = ZEXT416(auVar24._0_4_);
    uVar12 = (ulong)(uint)(int)fVar18;
  }
  uVar22 = auVar24._0_8_;
  uVar1 = *(uint *)(plVar9 + 0x88);
  uVar8 = (uint)(plVar9[0x8b] != 0) << 7;
  uVar4 = (uint)(plVar9[0x8c] != 0);
  *(uint *)(plVar9 + 0x88) = uVar4 << 6 | uVar1 & 0xffffff3f | uVar8;
  uVar21 = 0;
  uVar23 = 0;
  if ((*(byte *)(plVar9 + 0x89) & 1) != 0) {
    uVar21 = auVar24._0_4_;
    uVar23 = auVar24._4_4_;
  }
  *(undefined4 *)(plVar9 + 0x94) = uVar21;
  iVar15 = 10;
  if (10 < (int)uVar12) {
    iVar15 = (int)uVar12;
  }
  *(uint *)(plVar9 + 0x98) = (uint)(iVar7 != 0);
  *(int *)(plVar9 + 0x9d) = iVar15;
  uVar13 = uVar1 & 0x3f;
  uVar14 = (ulong)uVar13;
  if (uVar13 == 2) {
    *(undefined2 *)((long)plVar9 + 0x5c) = 0x73;
    *(undefined4 *)(plVar9 + 0xb) = 0x656d6974;
  }
  else if (uVar13 == 1) {
    uVar12 = 0x63697465766c6568;
    plVar9[0xb] = 0x63697465766c6568;
    *(undefined2 *)(plVar9 + 0xc) = 0x61;
  }
  else {
    *(uint *)(plVar9 + 0x88) = uVar4 << 6 | uVar1 & 0xffffff00 | uVar8;
    strcpy((char *)(plVar9 + 0xb),PTR_sys_font_00715cc0);
    uVar22 = auVar24._0_8_;
    uVar4 = *(uint *)(plVar9 + 0x88) & 0x40;
    uVar14 = extraout_RDX;
    uVar21 = extraout_XMM0_Da_01;
    uVar23 = extraout_XMM0_Db_02;
  }
  if (uVar4 != 0) {
    pd_bind(CONCAT44(uVar23,uVar21),uVar22,in_XMM2._0_8_,dVar27,__x,param_5,param_6,param_7,plVar9,
            plVar9[0x8c],uVar14,uVar12,param_12,param_13);
  }
  *(int *)(plVar9 + 10) = local_94;
  *(int *)((long)plVar9 + 0x54) = iVar6;
  iVar7 = 4;
  if (4 < iVar16) {
    iVar7 = iVar16;
  }
  *(int *)((long)plVar9 + 0x444) = iVar7;
  iVar16 = 1;
  if (0 < iVar5) {
    iVar16 = iVar5;
  }
  *(int *)((long)plVar9 + 0x4e4) = iVar16;
  iVar16 = 8;
  if (8 < iVar17) {
    iVar16 = iVar17;
  }
  *(int *)(plVar9 + 8) = iVar16;
  *(undefined1 *)((long)plVar9 + 0x4c4) = 0;
  if ((int)plVar9[0x98] != 0) {
    auVar25._0_8_ =
         (~-(ulong)(__x == 0.0) & (ulong)__x | _DAT_005d9000 & -(ulong)(__x == 0.0)) &
         -(ulong)(dVar27 == 0.0);
    auVar25._8_8_ = 0;
    auVar26._0_8_ = ~-(ulong)(dVar27 == 0.0) & (ulong)__x;
    auVar26._8_8_ = uStack_80;
    in_XMM2 = auVar26 | auVar25;
    __x = in_XMM2._0_8_;
    if (__x <= 0.0) {
      if (0.0 < dVar27) {
        __x = DAT_00651f48 * dVar27;
      }
    }
    else if (dVar27 <= 0.0) {
      dVar27 = DAT_00651f48 * __x;
    }
  }
  plVar9[0x95] = (long)dVar27;
  plVar9[0x96] = (long)__x;
  dVar3 = (double)*(float *)(plVar9 + 0x94);
  if (dVar3 < dVar27) {
    *(float *)(plVar9 + 0x94) = (float)dVar27;
    dVar3 = (double)(float)dVar27;
  }
  if (__x < dVar3) {
    *(float *)(plVar9 + 0x94) = (float)__x;
  }
  if ((int)plVar9[0x98] == 0) {
    uVar21 = (undefined4)_DAT_005d9000;
    uVar23 = (undefined4)(_DAT_005d9000 >> 0x20);
  }
  else {
    __x = __x / dVar27;
    dVar3 = log(__x);
    dVar3 = exp(dVar3 / (double)(int)plVar9[0x9d]);
    uVar21 = SUB84(dVar3,0);
    uVar23 = (undefined4)((ulong)dVar3 >> 0x20);
  }
  plVar9[0x97] = CONCAT44(uVar23,uVar21);
  iemgui_verify_snd_ne_rcv((long)plVar9);
  lVar10 = clock_new(plVar9,my_numbox_tick_wait);
  plVar9[0x93] = lVar10;
  *(byte *)((long)plVar9 + 0x443) = *(byte *)((long)plVar9 + 0x443) & 0xf7;
  iemgui_newzoom((long)plVar9);
  iVar16 = 0x1f;
  if ((*(uint *)(plVar9 + 0x88) & 0x3f) == 2) {
    iVar16 = 0x19;
  }
  iVar7 = 0x1b;
  if ((*(uint *)(plVar9 + 0x88) & 0x3f) != 1) {
    iVar7 = iVar16;
  }
  uVar1 = (*(int *)((long)plVar9 + 0x4e4) * *(int *)((long)plVar9 + 0x444) * iVar7) / 0x24;
  uVar12 = (ulong)uVar1;
  iVar7 = (int)plVar9[8] / 2;
  iVar16 = *(int *)(plVar9[6] + 0xec);
  *(uint *)((long)plVar9 + 0x44) = (iVar7 / iVar16 + uVar1 + 4) * iVar16;
  plVar11 = (long *)__tls_get_addr(&PTR_007159b0,iVar16,(long)iVar7 % (long)iVar16 & 0xffffffff);
  outlet_new(CONCAT44(extraout_XMM0_Db_03,extraout_XMM0_Da_02),extraout_XMM1_Qa_01,in_XMM2._0_8_,
             dVar27,__x,param_5,param_6,param_7,(long)plVar9,*plVar11 + 0x78,extraout_RDX_00,uVar12,
             param_12,param_13);
  return plVar9;
}


