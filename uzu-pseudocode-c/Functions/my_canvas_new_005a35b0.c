// Function : my_canvas_new
// Namespace: 
// Entry    : 005a35b0
// Prototype: long * my_canvas_new(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, undefined8 param_9, undefined8 param_10, int * param_11, undefined8 * param_12, char * param_13, undefined8 param_14)
// Body     : 005a35b0 - 005a3a69


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * my_canvas_new(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                    undefined8 param_9,undefined8 param_10,int *param_11,undefined8 *param_12,
                    char *param_13,undefined8 param_14)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  long *plVar8;
  long lVar9;
  undefined8 *puVar10;
  uint uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong extraout_RDX;
  float fVar14;
  float fVar15;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 extraout_XMM0_Qa_02;
  undefined8 extraout_XMM1_Qa;
  undefined8 extraout_XMM1_Qa_00;
  undefined8 extraout_XMM1_Qa_01;
  undefined8 extraout_XMM1_Qa_02;
  undefined1 auVar18 [16];
  int iVar19;
  int local_b4;
  undefined8 local_a8;
  code *local_88;
  code *local_80;
  code *local_78;
  undefined8 local_70;
  code *local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  
  iVar7 = (int)param_10;
  plVar8 = iemgui_new(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                      my_canvas_class,param_10,param_11,param_12,param_13,param_14);
  lVar9 = canvas_getcurrent(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,param_8
                           );
  uVar16 = extraout_XMM1_Qa;
  iVar3 = sys_zoomfontheight(*(uint *)(lVar9 + 0xd0),1,0);
  iVar3 = iVar3 + 5;
  lVar9 = canvas_getcurrent(extraout_XMM0_Qa_00,uVar16,param_3,param_4,param_5,param_6,param_7,
                            param_8);
  uVar16 = extraout_XMM1_Qa_00;
  iVar4 = sys_zoomfontheight(*(uint *)(lVar9 + 0xd0),1,0);
  lVar9 = canvas_getcurrent(extraout_XMM0_Qa_01,uVar16,param_3,param_4,param_5,param_6,param_7,
                            param_8);
  iVar5 = sys_zoomfontheight(*(uint *)(lVar9 + 0xd0),1,0);
  local_a8 = CONCAT44((int)((double)(iVar5 * DAT_0065e5a0 + _UNK_0065e5b4) * _UNK_0065e5c8),
                      (int)((double)(iVar4 * DAT_0065e590 + _DAT_0065e5b0) * _DAT_0065e5c0));
  iVar4 = *(int *)((long)plVar8 + 0x444);
  local_88 = my_canvas_draw_new;
  local_80 = my_canvas_draw_config;
  local_78 = my_canvas_draw_io;
  local_70 = 0;
  local_68 = my_canvas_draw_select;
  local_60 = 0;
  uStack_58 = 0;
  auVar18 = iemgui_setdrawfunctions((long)plVar8,&local_88);
  *(undefined8 *)((long)plVar8 + 0x44c) = 0xe0e0e000000000;
  *(undefined4 *)((long)plVar8 + 0x454) = 0x404040;
  if ((((iVar7 - 10U < 4) && (*param_11 == 1)) && (param_11[4] == 1)) && (param_11[8] == 1)) {
    fVar14 = (float)atom_getfloatarg(0,iVar7,(long)param_11);
    iVar3 = (int)fVar14;
    fVar14 = (float)atom_getfloatarg(1,iVar7,(long)param_11);
    fVar15 = (float)atom_getfloatarg(2,iVar7,(long)param_11);
    auVar18._12_4_ = fVar15;
    auVar18._8_4_ = fVar14;
    local_a8 = CONCAT44((int)fVar15,(int)fVar14);
    auVar18._0_8_ = local_a8;
  }
  uVar17 = auVar18._8_8_;
  uVar16 = auVar18._0_8_;
  if (iVar7 < 0xc) {
    if ((iVar7 != 0xb) || (1 < param_11[0xc] - 1U)) goto LAB_005a37b2;
    auVar18 = iemgui_new_getnames(uVar16,uVar17,param_3,param_4,param_5,param_6,param_7,param_8,
                                  (long)plVar8,3,(long)param_11,param_12,param_13,param_14);
    lVar9 = 1;
  }
  else {
    if ((param_11[0xc] - 1U < 2) && (param_11[0x10] - 1U < 2)) {
      auVar18 = iemgui_new_getnames(uVar16,uVar17,param_3,param_4,param_5,param_6,param_7,param_8,
                                    (long)plVar8,3,(long)param_11,param_12,param_13,param_14);
      uVar16 = auVar18._8_8_;
      lVar9 = 2;
    }
    else {
LAB_005a37b2:
      lVar9 = 0;
      auVar18 = iemgui_new_getnames(uVar16,uVar17,param_3,param_4,param_5,param_6,param_7,param_8,
                                    (long)plVar8,3,0,param_12,param_13,param_14);
      uVar16 = auVar18._8_8_;
    }
    if (3 < iVar7 - 10U) {
      local_b4 = 0x14;
      iVar19 = 0xc;
      goto LAB_005a3933;
    }
  }
  uVar16 = auVar18._8_8_;
  iVar19 = 0xc;
  local_b4 = 0x14;
  iVar5 = (int)lVar9;
  if ((((param_11[lVar9 * 4 + 0xc] - 1U < 2) && (param_11[lVar9 * 4 + 0x10] == 1)) &&
      (param_11[lVar9 * 4 + 0x14] == 1)) &&
     ((param_11[lVar9 * 4 + 0x18] == 1 && (param_11[lVar9 * 4 + 0x1c] == 1)))) {
    if (param_11[lVar9 * 4 + 0xc] == 1) {
      atom_string(auVar18._0_8_,uVar16,param_3,param_4,param_5,param_6,param_7,param_8,
                  param_11 + lVar9 * 4 + 0xc,(char *)&local_88,(uint *)0x50,1,param_13,param_14,0xc)
      ;
      puVar10 = gensym((char *)&local_88);
    }
    else {
      puVar10 = iemgui_new_dogetname(plVar8,iVar5 + 3,(long)param_11);
    }
    plVar8[0x8d] = (long)puVar10;
    *(int *)((long)plVar8 + 0x48c) = iVar5 + 4;
    fVar14 = (float)atom_getfloatarg(iVar5 + 4,iVar7,(long)param_11);
    local_b4 = (int)fVar14;
    fVar14 = (float)atom_getfloatarg(iVar5 + 5,iVar7,(long)param_11);
    iVar19 = (int)fVar14;
    fVar14 = (float)atom_getfloatarg(iVar5 + 6,iVar7,(long)param_11);
    iem_inttofstyle((uint *)(plVar8 + 0x88),(int)fVar14);
    fVar14 = (float)atom_getfloatarg(iVar5 + 7,iVar7,(long)param_11);
    iVar4 = (int)fVar14;
    *(int *)((long)plVar8 + 0x444) = iVar4;
    iemgui_all_loadcolors
              ((long)plVar8,param_11 + lVar9 * 4 + 0x20,(int *)0x0,param_11 + lVar9 * 4 + 0x24);
    uVar16 = extraout_XMM1_Qa_01;
  }
  if ((iVar7 == 0xd) && (param_11[lVar9 * 4 + 0x28] == 1)) {
    fVar14 = (float)atom_getfloatarg(iVar5 + 10,0xd,(long)param_11);
    iem_inttosymargs((uint *)(plVar8 + 0x89),(int)fVar14);
    uVar16 = extraout_XMM1_Qa_02;
  }
LAB_005a3933:
  uVar1 = *(uint *)(plVar8 + 0x88);
  uVar6 = (uint)(plVar8[0x8b] != 0) << 7;
  uVar2 = (uint)(plVar8[0x8c] != 0);
  if (iVar3 < 1) {
    iVar3 = 1;
  }
  *(uint *)(plVar8 + 0x88) = uVar2 << 6 | uVar1 & 0xffffff3f | uVar6;
  *(int *)((long)plVar8 + 0x44) = iVar3;
  *(int *)(plVar8 + 8) = iVar3;
  if ((int)local_a8 < 1) {
    local_a8._0_4_ = 1;
  }
  uVar17 = CONCAT44(local_a8._4_4_,local_a8._4_4_);
  uVar13 = 1;
  if (0 < (int)local_a8._4_4_) {
    uVar13 = (ulong)local_a8._4_4_;
  }
  *(int *)(plVar8 + 0x98) = (int)local_a8;
  *(int *)((long)plVar8 + 0x4c4) = (int)uVar13;
  uVar11 = uVar1 & 0x3f;
  uVar12 = (ulong)uVar11;
  if (uVar11 == 2) {
    *(undefined2 *)((long)plVar8 + 0x5c) = 0x73;
    *(undefined4 *)(plVar8 + 0xb) = 0x656d6974;
  }
  else if (uVar11 == 1) {
    uVar12 = 0x63697465766c6568;
    plVar8[0xb] = 0x63697465766c6568;
    *(undefined2 *)(plVar8 + 0xc) = 0x61;
  }
  else {
    *(uint *)(plVar8 + 0x88) = uVar2 << 6 | uVar1 & 0xffffff00 | uVar6;
    strcpy((char *)(plVar8 + 0xb),PTR_sys_font_00715cc0);
    uVar2 = *(uint *)(plVar8 + 0x88) & 0x40;
    uVar13 = extraout_RDX;
    uVar17 = extraout_XMM0_Qa_02;
  }
  if (uVar2 != 0) {
    pd_bind(uVar17,uVar16,param_3,param_4,param_5,param_6,param_7,param_8,plVar8,plVar8[0x8c],uVar13
            ,uVar12,param_13,param_14);
  }
  *(int *)(plVar8 + 10) = local_b4;
  iVar7 = 4;
  if (4 < iVar4) {
    iVar7 = iVar4;
  }
  *(int *)((long)plVar8 + 0x54) = iVar19;
  *(int *)((long)plVar8 + 0x444) = iVar7;
  *(undefined4 *)(plVar8 + 0x92) = 1;
  *(undefined4 *)(plVar8 + 0x94) = 1;
  iemgui_verify_snd_ne_rcv((long)plVar8);
  iemgui_newzoom((long)plVar8);
  return plVar8;
}


