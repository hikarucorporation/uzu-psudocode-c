// Function : bng_new
// Namespace: 
// Entry    : 005a1ea0
// Prototype: long * bng_new(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, undefined8 param_9, undefined8 param_10, int * param_11, undefined8 * param_12, char * param_13, undefined8 param_14)
// Body     : 005a1ea0 - 005a22cf


long * bng_new(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
              undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
              undefined8 param_9,undefined8 param_10,int *param_11,undefined8 *param_12,
              char *param_13,undefined8 param_14)

{
  uint uVar1;
  double dVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  long *plVar8;
  long extraout_RAX;
  long extraout_RAX_00;
  long lVar9;
  long *plVar10;
  ulong uVar11;
  uint uVar12;
  ulong uVar13;
  ulong extraout_RDX;
  undefined8 extraout_RDX_00;
  uint uVar14;
  uint uVar15;
  int iVar16;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  float fVar17;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined4 extraout_XMM0_Da_03;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  undefined8 uVar18;
  undefined4 extraout_XMM0_Db_01;
  undefined4 extraout_XMM0_Db_02;
  undefined4 extraout_XMM0_Db_03;
  code *local_68;
  code *local_60;
  undefined8 local_58;
  code *local_50;
  code *local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  plVar8 = iemgui_new(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,bng_class,
                      param_10,param_11,param_12,param_13,param_14);
  canvas_getcurrent(CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),param_2,param_3,param_4,param_5,
                    param_6,param_7,param_8);
  iVar4 = sys_zoomfontheight(*(uint *)(extraout_RAX + 0xd0),1,0);
  canvas_getcurrent(CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_00),param_2,param_3,param_4,
                    param_5,param_6,param_7,param_8);
  iVar5 = sys_zoomfontheight(*(uint *)(extraout_RAX_00 + 0xd0),1,0);
  iVar16 = *(int *)((long)plVar8 + 0x444);
  local_68 = bng_draw_new;
  local_60 = bng_draw_config;
  local_58 = 0;
  local_50 = bng_draw_update;
  local_48 = bng_draw_select;
  local_40 = 0;
  uStack_38 = 0;
  iemgui_setdrawfunctions((long)plVar8,&local_68);
  if ((((((int)param_10 == 0xe) && (*param_11 == 1)) && (param_11[4] == 1)) &&
      ((((param_11[8] == 1 && (param_11[0xc] == 1)) &&
        ((param_11[0x10] - 1U < 2 && ((param_11[0x14] - 1U < 2 && (param_11[0x18] - 1U < 2)))))) &&
       (param_11[0x1c] == 1)))) &&
     (((param_11[0x20] == 1 && (param_11[0x24] == 1)) && (param_11[0x28] == 1)))) {
    fVar17 = (float)atom_getfloatarg(0,0xe,(long)param_11);
    iVar4 = (int)fVar17;
    fVar17 = (float)atom_getfloatarg(1,0xe,(long)param_11);
    uVar14 = (uint)fVar17;
    fVar17 = (float)atom_getfloatarg(2,0xe,(long)param_11);
    uVar15 = (uint)fVar17;
    fVar17 = (float)atom_getfloatarg(3,0xe,(long)param_11);
    uVar18 = iem_inttosymargs((uint *)(plVar8 + 0x89),(int)fVar17);
    iemgui_new_getnames(uVar18,param_2,param_3,param_4,param_5,param_6,param_7,param_8,(long)plVar8,
                        4,(long)param_11,param_12,param_13,param_14);
    fVar17 = (float)atom_getfloatarg(7,0xe,(long)param_11);
    iVar6 = (int)fVar17;
    fVar17 = (float)atom_getfloatarg(8,0xe,(long)param_11);
    iVar5 = (int)fVar17;
    fVar17 = (float)atom_getfloatarg(9,0xe,(long)param_11);
    iem_inttofstyle((uint *)(plVar8 + 0x88),(int)fVar17);
    fVar17 = (float)atom_getfloatarg(10,0xe,(long)param_11);
    iVar16 = (int)fVar17;
    uVar18 = iemgui_all_loadcolors((long)plVar8,param_11 + 0x2c,param_11 + 0x30,param_11 + 0x34);
  }
  else {
    iVar6 = 0;
    iVar4 = iVar4 + 5;
    dVar2 = (double)(iVar5 * -8 + -0x28) * DAT_0065e510;
    iVar5 = (int)dVar2;
    uVar18 = iemgui_new_getnames(dVar2,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                                 (long)plVar8,4,0,param_12,param_13,param_14);
    uVar14 = 0xfa;
    uVar15 = 0x32;
  }
  uVar1 = *(uint *)(plVar8 + 0x88);
  uVar7 = (uint)(plVar8[0x8b] != 0) << 7;
  uVar12 = uVar1 & 0xffffff3f | uVar7;
  uVar13 = (ulong)uVar12;
  uVar3 = (uint)(plVar8[0x8c] != 0);
  *(uint *)(plVar8 + 0x88) = uVar3 << 6 | uVar12;
  *(undefined4 *)(plVar8 + 0x92) = 0;
  uVar12 = uVar1 & 0x3f;
  uVar11 = (ulong)uVar12;
  if (uVar12 == 2) {
    *(undefined2 *)((long)plVar8 + 0x5c) = 0x73;
    *(undefined4 *)(plVar8 + 0xb) = 0x656d6974;
  }
  else if (uVar12 == 1) {
    uVar11 = 0x63697465766c6568;
    plVar8[0xb] = 0x63697465766c6568;
    *(undefined2 *)(plVar8 + 0xc) = 0x61;
  }
  else {
    *(uint *)(plVar8 + 0x88) = uVar3 << 6 | uVar1 & 0xffffff00 | uVar7;
    strcpy((char *)(plVar8 + 0xb),PTR_sys_font_00715cc0);
    uVar18 = CONCAT44(extraout_XMM0_Db_01,extraout_XMM0_Da_01);
    uVar3 = *(uint *)(plVar8 + 0x88) & 0x40;
    uVar13 = extraout_RDX;
  }
  if (uVar3 != 0) {
    pd_bind(uVar18,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar8,plVar8[0x8c],
            uVar13,uVar11,param_13,param_14);
  }
  *(int *)(plVar8 + 10) = iVar6;
  *(int *)((long)plVar8 + 0x54) = iVar5;
  iVar5 = 4;
  if (4 < iVar16) {
    iVar5 = iVar16;
  }
  *(int *)((long)plVar8 + 0x444) = iVar5;
  iVar16 = iemgui_clip_size(iVar4);
  *(int *)((long)plVar8 + 0x44) = iVar16;
  uVar1 = uVar14;
  if ((int)uVar14 < (int)uVar15) {
    uVar1 = uVar15;
  }
  uVar11 = (ulong)uVar1;
  *(int *)(plVar8 + 8) = iVar16;
  if ((int)uVar14 < (int)uVar15) {
    uVar15 = uVar14;
  }
  uVar14 = 10;
  if (10 < (int)uVar15) {
    uVar14 = uVar15;
  }
  uVar15 = 0x32;
  if (0x32 < (int)uVar1) {
    uVar15 = uVar1;
  }
  *(uint *)((long)plVar8 + 0x494) = uVar14;
  *(uint *)(plVar8 + 0x93) = uVar15;
  *(byte *)((long)plVar8 + 1099) = *(byte *)((long)plVar8 + 1099) & 0xf7;
  iemgui_verify_snd_ne_rcv((long)plVar8);
  clock_getlogicaltime();
  plVar8[0x97] = CONCAT44(extraout_XMM0_Db_02,extraout_XMM0_Da_02);
  lVar9 = clock_new(plVar8,bng_tick_hld);
  plVar8[0x94] = lVar9;
  lVar9 = clock_new(plVar8,bng_tick_lck);
  plVar8[0x96] = lVar9;
  iemgui_newzoom((long)plVar8);
  plVar10 = (long *)__tls_get_addr(&PTR_007159b0);
  outlet_new(CONCAT44(extraout_XMM0_Db_03,extraout_XMM0_Da_03),param_2,param_3,param_4,param_5,
             param_6,param_7,param_8,(long)plVar8,*plVar10 + 0xa8,extraout_RDX_00,uVar11,param_13,
             param_14);
  return plVar8;
}


