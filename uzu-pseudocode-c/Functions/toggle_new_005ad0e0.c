// Function : toggle_new
// Namespace: 
// Entry    : 005ad0e0
// Prototype: long * toggle_new(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, undefined8 param_9, undefined8 param_10, int * param_11, undefined8 * param_12, char * param_13, undefined8 param_14)
// Body     : 005ad0e0 - 005ad505


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * toggle_new(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 undefined8 param_9,undefined8 param_10,int *param_11,undefined8 *param_12,
                 char *param_13,undefined8 param_14)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long *plVar5;
  long extraout_RAX;
  long extraout_RAX_00;
  long *plVar6;
  uint uVar7;
  uint uVar8;
  ulong uVar9;
  uint uVar10;
  ulong uVar11;
  ulong extraout_RDX;
  undefined8 extraout_RDX_00;
  int iVar12;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  float fVar13;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  undefined8 uVar14;
  undefined4 extraout_XMM0_Db_01;
  undefined8 extraout_XMM1_Qa;
  undefined8 extraout_XMM1_Qa_00;
  undefined8 extraout_XMM1_Qa_01;
  ulong uVar15;
  undefined8 extraout_XMM1_Qa_02;
  ulong uVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  int local_8c;
  undefined *local_68;
  undefined *local_60;
  undefined8 local_58;
  undefined *local_50;
  undefined *local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  plVar5 = iemgui_new(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,toggle_class,
                      param_10,param_11,param_12,param_13,param_14);
  canvas_getcurrent(CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),param_2,param_3,param_4,param_5,
                    param_6,param_7,param_8);
  iVar3 = 0;
  uVar14 = extraout_XMM1_Qa;
  local_8c = sys_zoomfontheight(*(uint *)(extraout_RAX + 0xd0),1,0);
  canvas_getcurrent(CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_00),uVar14,param_3,param_4,param_5
                    ,param_6,param_7,param_8);
  iVar2 = sys_zoomfontheight(*(uint *)(extraout_RAX_00 + 0xd0),1,0);
  iVar12 = *(int *)((long)plVar5 + 0x444);
  local_68 = PTR_toggle_draw_new_007159c0;
  local_60 = PTR_toggle_draw_config_00715cd0;
  local_58 = 0;
  local_50 = PTR_toggle_draw_update_00715b50;
  local_48 = PTR_toggle_draw_select_00715c98;
  local_40 = 0;
  uStack_38 = 0;
  iemgui_setdrawfunctions((long)plVar5,&local_68);
  iVar4 = (int)param_10;
  if ((((((iVar4 - 0xdU < 2) && (*param_11 == 1)) && (param_11[4] == 1)) &&
       ((param_11[8] - 1U < 2 && (param_11[0xc] - 1U < 2)))) &&
      ((param_11[0x10] - 1U < 2 && ((param_11[0x14] == 1 && (param_11[0x18] == 1)))))) &&
     ((param_11[0x1c] == 1 && ((param_11[0x20] == 1 && (param_11[0x30] == 1)))))) {
    fVar13 = (float)atom_getfloatarg(0,iVar4,(long)param_11);
    local_8c = (int)fVar13;
    fVar13 = (float)atom_getfloatarg(1,iVar4,(long)param_11);
    uVar14 = iem_inttosymargs((uint *)(plVar5 + 0x89),(int)fVar13);
    iemgui_new_getnames(uVar14,extraout_XMM1_Qa_01,param_3,param_4,param_5,param_6,param_7,param_8,
                        (long)plVar5,2,(long)param_11,param_12,param_13,param_14);
    fVar13 = (float)atom_getfloatarg(5,iVar4,(long)param_11);
    iVar3 = (int)fVar13;
    fVar13 = (float)atom_getfloatarg(6,iVar4,(long)param_11);
    iVar2 = (int)fVar13;
    fVar13 = (float)atom_getfloatarg(7,iVar4,(long)param_11);
    iem_inttofstyle((uint *)(plVar5 + 0x88),(int)fVar13);
    fVar13 = (float)atom_getfloatarg(8,iVar4,(long)param_11);
    iVar12 = (int)fVar13;
    iemgui_all_loadcolors((long)plVar5,param_11 + 0x24,param_11 + 0x28,param_11 + 0x2c);
    fVar13 = (float)atom_getfloatarg(0xc,iVar4,(long)param_11);
    dVar18 = (double)fVar13;
  }
  else {
    local_8c = local_8c + 5;
    dVar18 = (double)(iVar2 * -8 + -0x28) * DAT_0065e510;
    iVar2 = (int)dVar18;
    iemgui_new_getnames(dVar18,extraout_XMM1_Qa_00,param_3,param_4,param_5,param_6,param_7,param_8,
                        (long)plVar5,2,0,param_12,param_13,param_14);
    dVar18 = 0.0;
  }
  dVar19 = _DAT_005d9000;
  if ((iVar4 == 0xe) && (param_11[0x34] == 1)) {
    fVar13 = (float)atom_getfloatarg(0xd,0xe,(long)param_11);
    dVar19 = (double)fVar13;
  }
  uVar1 = *(uint *)(plVar5 + 0x88);
  uVar7 = (uint)(plVar5[0x8b] != 0) << 7;
  uVar10 = uVar1 & 0xffffff3f | uVar7;
  uVar11 = (ulong)uVar10;
  uVar8 = (uint)(plVar5[0x8c] != 0) << 6;
  uVar10 = uVar8 | uVar10;
  uVar9 = (ulong)uVar10;
  *(uint *)(plVar5 + 0x88) = uVar10;
  if ((uVar1 & 0x3f) == 2) {
    *(undefined2 *)((long)plVar5 + 0x5c) = 0x73;
    *(undefined4 *)(plVar5 + 0xb) = 0x656d6974;
  }
  else if ((uVar1 & 0x3f) == 1) {
    plVar5[0xb] = 0x63697465766c6568;
    *(undefined2 *)(plVar5 + 0xc) = 0x61;
  }
  else {
    uVar8 = uVar8 | uVar1 & 0xffffff00 | uVar7;
    uVar9 = (ulong)uVar8;
    *(uint *)(plVar5 + 0x88) = uVar8;
    strcpy((char *)(plVar5 + 0xb),PTR_sys_font_00715cc0);
    uVar11 = extraout_RDX;
  }
  dVar17 = _DAT_005d9000;
  uVar16 = -(ulong)(dVar19 != 0.0) & (ulong)dVar19;
  *(float *)((long)plVar5 + 0x494) =
       (float)(double)(~-(ulong)(dVar19 != 0.0) & (ulong)_DAT_005d9000 | uVar16);
  uVar15 = 0;
  if ((*(byte *)(plVar5 + 0x89) & 1) != 0) {
    dVar18 = (double)(-(ulong)(dVar18 != 0.0) & (ulong)dVar19);
    uVar15 = (ulong)(uint)(float)dVar18;
  }
  *(int *)(plVar5 + 0x92) = (int)uVar15;
  if ((*(byte *)(plVar5 + 0x88) & 0x40) != 0) {
    pd_bind(0,uVar15,uVar16,dVar17,dVar18,dVar19,param_7,param_8,plVar5,plVar5[0x8c],uVar11,uVar9,
            param_13,param_14);
  }
  *(int *)(plVar5 + 10) = iVar3;
  *(int *)((long)plVar5 + 0x54) = iVar2;
  iVar4 = 4;
  if (4 < iVar12) {
    iVar4 = iVar12;
  }
  *(int *)((long)plVar5 + 0x444) = iVar4;
  iVar12 = iemgui_clip_size(local_8c);
  *(int *)((long)plVar5 + 0x44) = iVar12;
  *(int *)(plVar5 + 8) = iVar12;
  iemgui_verify_snd_ne_rcv((long)plVar5);
  iemgui_newzoom((long)plVar5);
  plVar6 = (long *)__tls_get_addr(&PTR_007159b0);
  outlet_new(CONCAT44(extraout_XMM0_Db_01,extraout_XMM0_Da_01),extraout_XMM1_Qa_02,uVar16,dVar17,
             dVar18,dVar19,param_7,param_8,(long)plVar5,*plVar6 + 0x78,extraout_RDX_00,uVar9,
             param_13,param_14);
  return plVar5;
}


