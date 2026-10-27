// Function : radio_donew
// Namespace: 
// Entry    : 005a8340
// Prototype: long * radio_donew(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, undefined8 * param_9, undefined8 param_10, int * param_11, undefined8 * param_12, char * param_13, undefined8 param_14)
// Body     : 005a8340 - 005a87d6


long * radio_donew(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 *param_9,undefined8 param_10,int *param_11,undefined8 *param_12,
                  char *param_13,undefined8 param_14)

{
  double dVar1;
  int iVar2;
  int iVar3;
  long *plVar4;
  long extraout_RAX;
  long extraout_RAX_00;
  long *plVar5;
  uint uVar6;
  uint uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 extraout_RDX;
  uint uVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  float fVar16;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  undefined4 extraout_XMM0_Db_01;
  undefined4 extraout_XMM0_Db_02;
  undefined4 uVar17;
  undefined4 extraout_XMM0_Db_03;
  code *local_68;
  code *local_60;
  code *local_58;
  code *local_50;
  code *local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  puVar8 = param_12;
  plVar4 = iemgui_new(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,radio_class,
                      param_10,param_11,param_12,param_13,param_14);
  canvas_getcurrent(CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),param_2,param_3,param_4,param_5,
                    param_6,param_7,param_8);
  iVar2 = sys_zoomfontheight(*(uint *)(extraout_RAX + 0xd0),1,0);
  canvas_getcurrent(CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_00),param_2,param_3,param_4,
                    param_5,param_6,param_7,param_8);
  iVar3 = sys_zoomfontheight(*(uint *)(extraout_RAX_00 + 0xd0),1,0);
  if (*(char *)*param_9 == 'v') {
    *(undefined4 *)(plVar4 + 0x95) = 1;
  }
  iVar14 = *(int *)((long)plVar4 + 0x444);
  *(int *)((long)plVar4 + 0x4ac) = (int)param_12;
  local_68 = radio_draw_new;
  local_60 = radio_draw_config;
  local_58 = radio_draw_io;
  local_50 = radio_draw_update;
  local_48 = radio_draw_select;
  local_40 = 0;
  uStack_38 = 0;
  iemgui_setdrawfunctions((long)plVar4,&local_68);
  if ((((((int)param_10 == 0xf) && (*param_11 == 1)) && (param_11[4] == 1)) &&
      (((param_11[8] == 1 && (param_11[0xc] == 1)) &&
       ((param_11[0x10] - 1U < 2 && ((param_11[0x14] - 1U < 2 && (param_11[0x18] - 1U < 2)))))))) &&
     ((param_11[0x1c] == 1 &&
      ((((param_11[0x20] == 1 && (param_11[0x24] == 1)) && (param_11[0x28] == 1)) &&
       (param_11[0x38] == 1)))))) {
    fVar16 = (float)atom_getfloatarg(0,0xf,(long)param_11);
    iVar2 = (int)fVar16;
    fVar16 = (float)atom_getfloatarg(1,0xf,(long)param_11);
    iVar3 = (int)fVar16;
    fVar16 = (float)atom_getfloatarg(2,0xf,(long)param_11);
    iem_inttosymargs((uint *)(plVar4 + 0x89),(int)fVar16);
    fVar16 = (float)atom_getfloatarg(3,0xf,(long)param_11);
    uVar12 = (uint)fVar16;
    iemgui_new_getnames(CONCAT44(extraout_XMM0_Db_01,fVar16),param_2,param_3,param_4,param_5,param_6
                        ,param_7,param_8,(long)plVar4,4,(long)param_11,puVar8,param_13,param_14);
    fVar16 = (float)atom_getfloatarg(7,0xf,(long)param_11);
    iVar13 = (int)fVar16;
    fVar16 = (float)atom_getfloatarg(8,0xf,(long)param_11);
    iVar15 = (int)fVar16;
    fVar16 = (float)atom_getfloatarg(9,0xf,(long)param_11);
    iem_inttofstyle((uint *)(plVar4 + 0x88),(int)fVar16);
    fVar16 = (float)atom_getfloatarg(10,0xf,(long)param_11);
    iVar14 = (int)fVar16;
    iemgui_all_loadcolors((long)plVar4,param_11 + 0x2c,param_11 + 0x30,param_11 + 0x34);
    fVar16 = (float)atom_getfloatarg(0xe,0xf,(long)param_11);
    uVar17 = extraout_XMM0_Db_02;
  }
  else {
    dVar1 = (double)(iVar3 * -8 + -0x28) * DAT_0065e510;
    iVar2 = iVar2 + 5;
    iVar15 = (int)dVar1;
    iVar13 = 0;
    iemgui_new_getnames(dVar1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,(long)plVar4,4
                        ,0,puVar8,param_13,param_14);
    fVar16 = 0.0;
    uVar17 = 0;
    uVar12 = 8;
    iVar3 = 1;
  }
  uVar11 = *(uint *)(plVar4 + 0x88);
  uVar6 = (uint)(plVar4[0x8b] != 0) << 7;
  uVar7 = (uint)(plVar4[0x8c] != 0) << 6;
  *(uint *)(plVar4 + 0x88) = uVar7 | uVar11 & 0xffffff3f | uVar6;
  if ((uVar11 & 0x3f) == 2) {
    *(undefined2 *)((long)plVar4 + 0x5c) = 0x73;
    *(undefined4 *)(plVar4 + 0xb) = 0x656d6974;
  }
  else if ((uVar11 & 0x3f) == 1) {
    plVar4[0xb] = 0x63697465766c6568;
    *(undefined2 *)(plVar4 + 0xc) = 0x61;
  }
  else {
    *(uint *)(plVar4 + 0x88) = uVar7 | uVar11 & 0xffffff00 | uVar6;
    strcpy((char *)(plVar4 + 0xb),PTR_sys_font_00715cc0);
    uVar17 = 0;
  }
  uVar11 = 1;
  if (0 < (int)uVar12) {
    uVar11 = uVar12;
  }
  uVar9 = 0x80;
  if (uVar11 < 0x80) {
    uVar9 = (ulong)uVar11;
  }
  uVar12 = (uint)uVar9;
  *(uint *)((long)plVar4 + 0x49c) = uVar12;
  *(float *)((long)plVar4 + 0x4a4) = fVar16;
  uVar10 = 0;
  if (-1 < (int)fVar16) {
    uVar10 = (ulong)(uint)(int)fVar16;
  }
  uVar11 = uVar12 - 1;
  if ((uint)uVar10 < uVar12) {
    uVar11 = (uint)uVar10;
  }
  uVar11 = uVar11 & -(*(uint *)(plVar4 + 0x89) & 1);
  *(uint *)(plVar4 + 0x92) = uVar11;
  *(uint *)((long)plVar4 + 0x494) = uVar11;
  *(uint *)(plVar4 + 0x93) = (uint)(iVar3 != 0);
  if ((*(byte *)(plVar4 + 0x88) & 0x40) != 0) {
    pd_bind(CONCAT44(uVar17,fVar16),param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar4,
            plVar4[0x8c],uVar10,uVar9,param_13,param_14);
  }
  *(int *)(plVar4 + 10) = iVar13;
  *(int *)((long)plVar4 + 0x54) = iVar15;
  iVar3 = 4;
  if (4 < iVar14) {
    iVar3 = iVar14;
  }
  *(int *)((long)plVar4 + 0x444) = iVar3;
  iVar3 = iemgui_clip_size(iVar2);
  *(int *)((long)plVar4 + 0x44) = iVar3;
  *(int *)(plVar4 + 8) = iVar3;
  iemgui_verify_snd_ne_rcv((long)plVar4);
  iemgui_newzoom((long)plVar4);
  plVar5 = (long *)__tls_get_addr(&PTR_007159b0);
  outlet_new(CONCAT44(extraout_XMM0_Db_03,extraout_XMM0_Da_01),param_2,param_3,param_4,param_5,
             param_6,param_7,param_8,(long)plVar4,*plVar5 + 0xc0,extraout_RDX,uVar9,param_13,
             param_14);
  return plVar4;
}


