// Function : slider_new
// Namespace: 
// Entry    : 005a9810
// Prototype: long * slider_new(undefined8 param_1, undefined8 param_2, ulong param_3, double param_4, double param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, undefined8 * param_9, undefined8 param_10, int * param_11, undefined8 * param_12, char * param_13, undefined8 param_14)
// Body     : 005a9810 - 005aa064


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * slider_new(undefined8 param_1,undefined8 param_2,ulong param_3,double param_4,double param_5,
                 undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined8 *param_9,
                 undefined8 param_10,int *param_11,undefined8 *param_12,char *param_13,
                 undefined8 param_14)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  ulong uVar10;
  ulong uVar11;
  ulong extraout_RDX;
  undefined8 extraout_RDX_00;
  uint uVar12;
  int iVar13;
  float fVar14;
  float fVar15;
  undefined8 extraout_XMM0_Qa;
  double dVar16;
  double extraout_XMM0_Qa_00;
  double dVar17;
  undefined8 extraout_XMM0_Qa_01;
  undefined8 extraout_XMM0_Qa_02;
  undefined8 extraout_XMM0_Qa_03;
  undefined1 extraout_var [12];
  undefined1 extraout_var_00 [12];
  undefined1 auVar18 [16];
  undefined8 extraout_XMM1_Qa;
  undefined8 uVar19;
  undefined8 extraout_XMM1_Qa_00;
  undefined8 extraout_XMM1_Qa_01;
  undefined8 extraout_XMM1_Qa_02;
  undefined4 uVar20;
  undefined1 auVar21 [16];
  int local_a0;
  int local_9c;
  undefined8 local_98;
  double local_78;
  code *local_68;
  code *local_60;
  code *local_58;
  code *local_50;
  code *local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  plVar7 = iemgui_new(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,slider_class,
                      param_10,param_11,param_12,param_13,param_14);
  local_9c = *(int *)((long)plVar7 + 0x444);
  local_68 = slider_draw_new;
  local_60 = slider_draw_config;
  local_58 = slider_draw_io;
  local_50 = slider_draw_update;
  local_48 = slider_draw_select;
  local_40 = 0;
  uStack_38 = 0;
  auVar21 = iemgui_setdrawfunctions((long)plVar7,&local_68);
  if (*(char *)*param_9 == 'v') {
    *(undefined4 *)((long)plVar7 + 0x4bc) = 1;
  }
  else if (*(int *)((long)plVar7 + 0x4bc) == 0) {
    lVar8 = canvas_getcurrent(auVar21._0_8_,auVar21._8_8_,param_3,param_4,param_5,param_6,param_7,
                              param_8);
    uVar19 = extraout_XMM1_Qa_00;
    iVar4 = sys_zoomfontheight(*(uint *)(lVar8 + 0xd0),1,0);
    iVar4 = iVar4 + 5;
    lVar8 = canvas_getcurrent(extraout_XMM0_Qa_01,uVar19,param_3,param_4,param_5,param_6,param_7,
                              param_8);
    uVar19 = extraout_XMM1_Qa_01;
    iVar3 = sys_zoomfontheight(*(uint *)(lVar8 + 0xd0),1,0);
    lVar8 = canvas_getcurrent(extraout_XMM0_Qa_02,uVar19,param_3,param_4,param_5,param_6,param_7,
                              param_8);
    iVar13 = sys_zoomfontheight(*(uint *)(lVar8 + 0xd0),1,0);
    dVar17 = (double)(iVar13 * -8 + _DAT_0065e7c0) * _DAT_0065e7d0;
    local_98 = CONCAT44((int)((double)(iVar3 + _UNK_0065e7c4) * _UNK_0065e7d8),(int)dVar17);
    local_a0 = -2;
    goto LAB_005a9915;
  }
  lVar8 = canvas_getcurrent(auVar21._0_8_,auVar21._8_8_,param_3,param_4,param_5,param_6,param_7,
                            param_8);
  local_a0 = 0;
  uVar19 = extraout_XMM1_Qa;
  iVar3 = sys_zoomfontheight(*(uint *)(lVar8 + 0xd0),1,0);
  lVar8 = canvas_getcurrent(extraout_XMM0_Qa,uVar19,param_3,param_4,param_5,param_6,param_7,param_8)
  ;
  iVar4 = sys_zoomfontheight(*(uint *)(lVar8 + 0xd0),1,0);
  iVar4 = (int)((double)(iVar4 + 5) * _DAT_0065e7f0);
  dVar17 = (double)(ulong)(iVar3 + 5U);
  local_98 = CONCAT44(iVar3 + 5U,_DAT_0065e7e0);
LAB_005a9915:
  iVar3 = (int)param_10;
  if (((((((iVar3 - 0x11U < 2) && (*param_11 == 1)) && (param_11[4] == 1)) &&
        ((param_11[8] == 1 && (param_11[0xc] == 1)))) &&
       ((param_11[0x10] == 1 && ((param_11[0x14] == 1 && (param_11[0x18] - 1U < 2)))))) &&
      (param_11[0x1c] - 1U < 2)) &&
     ((((param_11[0x20] - 1U < 2 && (param_11[0x24] == 1)) && (param_11[0x28] == 1)) &&
      (((param_11[0x2c] == 1 && (param_11[0x30] == 1)) && (param_11[0x40] == 1)))))) {
    fVar14 = (float)atom_getfloatarg(0,iVar3,(long)param_11);
    fVar15 = (float)atom_getfloatarg(1,iVar3,(long)param_11);
    iVar4 = (int)fVar15;
    fVar15 = (float)atom_getfloatarg(2,iVar3,(long)param_11);
    dVar16 = (double)fVar15;
    fVar15 = (float)atom_getfloatarg(3,iVar3,(long)param_11);
    local_78 = (double)fVar15;
    fVar15 = (float)atom_getfloatarg(4,iVar3,(long)param_11);
    iVar13 = (int)fVar15;
    fVar15 = (float)atom_getfloatarg(5,iVar3,(long)param_11);
    auVar21 = iem_inttosymargs((uint *)(plVar7 + 0x89),(int)fVar15);
    iemgui_new_getnames(auVar21._0_8_,auVar21._8_8_,param_3,param_4,param_5,param_6,param_7,param_8,
                        (long)plVar7,6,(long)param_11,param_12,param_13,param_14);
    fVar15 = (float)atom_getfloatarg(9,iVar3,(long)param_11);
    local_a0 = (int)fVar15;
    fVar15 = (float)atom_getfloatarg(10,iVar3,(long)param_11);
    local_98 = CONCAT44((int)fVar14,(int)fVar15);
    fVar14 = (float)atom_getfloatarg(0xb,iVar3,(long)param_11);
    iem_inttofstyle((uint *)(plVar7 + 0x88),(int)fVar14);
    fVar14 = (float)atom_getfloatarg(0xc,iVar3,(long)param_11);
    local_9c = (int)fVar14;
    iemgui_all_loadcolors((long)plVar7,param_11 + 0x34,param_11 + 0x38,param_11 + 0x3c);
    auVar21._0_4_ = (float)atom_getfloatarg(0x10,iVar3,(long)param_11);
    auVar21._4_12_ = extraout_var;
    uVar12 = (uint)auVar21._0_4_;
    dVar17 = auVar21._0_8_;
  }
  else {
    iVar13 = 0;
    iemgui_new_getnames(dVar17,local_98,param_3,param_4,param_5,param_6,param_7,param_8,(long)plVar7
                        ,6,0,param_12,param_13,param_14);
    local_78 = DAT_0065e7f8;
    dVar16 = 0.0;
    uVar12 = 0;
    dVar17 = DAT_0065e7f8;
  }
  uVar10 = 1;
  if ((iVar3 == 0x12) && (param_11[0x44] == 1)) {
    auVar18._0_4_ = (float)atom_getfloatarg(0x11,0x12,(long)param_11);
    auVar18._4_12_ = extraout_var_00;
    dVar17 = auVar18._0_8_;
    uVar10 = (ulong)(uint)(int)auVar18._0_4_;
  }
  uVar20 = (undefined4)((ulong)param_6 >> 0x20);
  uVar5 = (uint)(plVar7[0x8b] != 0) << 7;
  uVar1 = *(uint *)(plVar7 + 0x88);
  uVar2 = (uint)(plVar7[0x8c] != 0);
  *(uint *)(plVar7 + 0x88) = uVar2 << 6 | uVar1 & 0xffffff3f | uVar5;
  *(uint *)((long)plVar7 + 0x494) = -(*(uint *)(plVar7 + 0x89) & 1) & uVar12;
  *(uint *)(plVar7 + 0x93) = (uint)(iVar13 != 0);
  *(uint *)((long)plVar7 + 0x49c) = (uint)((int)uVar10 != 0);
  uVar12 = uVar1 & 0x3f;
  uVar11 = (ulong)uVar12;
  if (uVar12 == 2) {
    *(undefined2 *)((long)plVar7 + 0x5c) = 0x73;
    *(undefined4 *)(plVar7 + 0xb) = 0x656d6974;
  }
  else if (uVar12 == 1) {
    uVar10 = 0x63697465766c6568;
    plVar7[0xb] = 0x63697465766c6568;
    *(undefined2 *)(plVar7 + 0xc) = 0x61;
  }
  else {
    *(uint *)(plVar7 + 0x88) = uVar2 << 6 | uVar1 & 0xffffff00 | uVar5;
    strcpy((char *)(plVar7 + 0xb),PTR_sys_font_00715cc0);
    uVar20 = (undefined4)((ulong)param_6 >> 0x20);
    uVar2 = *(uint *)(plVar7 + 0x88) & 0x40;
    uVar11 = extraout_RDX;
    dVar17 = extraout_XMM0_Qa_00;
  }
  if (uVar2 != 0) {
    uVar20 = (undefined4)((ulong)param_6 >> 0x20);
    pd_bind(dVar17,local_98,param_3,param_4,param_5,param_6,param_7,param_8,plVar7,plVar7[0x8c],
            uVar11,uVar10,param_13,param_14);
  }
  *(int *)(plVar7 + 10) = local_a0;
  iVar3 = 4;
  if (4 < local_9c) {
    iVar3 = local_9c;
  }
  *(int *)((long)plVar7 + 0x54) = (int)local_98;
  *(int *)((long)plVar7 + 0x444) = iVar3;
  iVar3 = (int)((ulong)local_98 >> 0x20);
  if (*(int *)((long)plVar7 + 0x4bc) == 0) {
    iVar13 = *(int *)(plVar7[6] + 0xec);
    iVar6 = iVar13 * 2;
    if (iVar3 < iVar6) {
      iVar3 = iVar6;
    }
    iVar6 = iVar3 * 100 + -100;
    if (iVar6 < *(int *)((long)plVar7 + 0x494)) {
      *(int *)((long)plVar7 + 0x494) = iVar6;
    }
    if ((int)plVar7[0x93] == 0) {
      dVar17 = (double)plVar7[0x95] - (double)plVar7[0x94];
    }
    else {
      dVar17 = log((double)plVar7[0x95] / (double)plVar7[0x94]);
    }
    plVar7[0x96] = (long)(dVar17 / (double)(iVar3 / iVar13 + -1));
    *(int *)((long)plVar7 + 0x44) = iVar3;
    iVar4 = iemgui_clip_size(iVar4);
  }
  else {
    iVar3 = iemgui_clip_size(iVar3);
    *(int *)((long)plVar7 + 0x44) = iVar3;
    iVar3 = *(int *)(plVar7[6] + 0xec);
    iVar13 = iVar3 * 2;
    if (iVar4 < iVar13) {
      iVar4 = iVar13;
    }
    iVar13 = iVar4 * 100 + -100;
    if (iVar13 < *(int *)((long)plVar7 + 0x494)) {
      *(int *)((long)plVar7 + 0x494) = iVar13;
    }
    if ((int)plVar7[0x93] == 0) {
      dVar17 = (double)plVar7[0x95] - (double)plVar7[0x94];
    }
    else {
      dVar17 = log((double)plVar7[0x95] / (double)plVar7[0x94]);
    }
    plVar7[0x96] = (long)(dVar17 / (double)(iVar4 / iVar3 + -1));
  }
  *(int *)(plVar7 + 8) = iVar4;
  iemgui_verify_snd_ne_rcv((long)plVar7);
  iemgui_newzoom((long)plVar7);
  iVar4 = *(int *)((long)plVar7 + (ulong)(*(int *)((long)plVar7 + 0x4bc) == 0) * 4 + 0x40);
  if ((int)plVar7[0x93] == 0) {
    plVar7[0x94] = (long)dVar16;
    plVar7[0x95] = (long)local_78;
    dVar17 = local_78 - dVar16;
  }
  else {
    param_3 = (~-(ulong)(local_78 == 0.0) & (ulong)local_78 |
              _DAT_005d9000 & -(ulong)(local_78 == 0.0)) & -(ulong)(dVar16 == 0.0);
    dVar17 = (double)(~-(ulong)(dVar16 == 0.0) & (ulong)local_78 | param_3);
    if (dVar17 <= 0.0) {
      if (0.0 < dVar16) {
        dVar17 = DAT_00651f48 * dVar16;
      }
    }
    else if (dVar16 <= 0.0) {
      dVar16 = DAT_00651f48 * dVar17;
    }
    plVar7[0x94] = (long)dVar16;
    plVar7[0x95] = (long)dVar17;
    dVar17 = log(dVar17 / dVar16);
    uVar20 = 0;
    param_4 = dVar16;
    param_5 = local_78;
  }
  fVar14 = (float)iVar4 / (float)*(int *)(plVar7[6] + 0xec) + DAT_005d9054;
  plVar7[0x96] = (long)(dVar17 / (double)fVar14);
  plVar9 = (long *)__tls_get_addr(&PTR_007159b0);
  outlet_new(extraout_XMM0_Qa_03,extraout_XMM1_Qa_02,param_3,param_4,param_5,CONCAT44(uVar20,fVar14)
             ,param_7,param_8,(long)plVar7,*plVar9 + 0x78,extraout_RDX_00,uVar10,param_13,param_14);
  iVar4 = *(int *)((long)plVar7 + 0x494);
  iVar3 = iVar4;
  if ((*(uint *)(plVar7 + 0x88) & 0x2000000) == 0) {
    iVar3 = (iVar4 / 100) * 100;
  }
  if ((*(uint *)(plVar7 + 0x88) & 0x80) == 0) {
    iVar4 = (int)plVar7[0x93];
  }
  else {
    if (plVar7[0x8b] == plVar7[0x8c]) {
      iVar3 = iVar4;
    }
    iVar4 = (int)plVar7[0x93];
  }
  if (iVar4 == 0) {
    dVar17 = (double)iVar3 * DAT_00651f48 * (double)plVar7[0x96] + (double)plVar7[0x94];
  }
  else {
    dVar17 = exp((double)iVar3 * DAT_00651f48 * (double)plVar7[0x96]);
    dVar17 = dVar17 * (double)plVar7[0x94];
  }
  fVar15 = (float)dVar17;
  fVar14 = 0.0;
  if ((double)fVar15 <= _DAT_0065e800) {
    fVar14 = fVar15;
  }
  if (_DAT_00652e60 <= (double)fVar15) {
    fVar14 = fVar15;
  }
  *(float *)(plVar7 + 0x97) = fVar14;
  return plVar7;
}


