// Function : vu_new
// Namespace: 
// Entry    : 005b03b0
// Prototype: long * vu_new(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, undefined8 param_9, undefined8 param_10, int * param_11, undefined8 * param_12, char * param_13, undefined8 param_14)
// Body     : 005b03b0 - 005b086d


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * vu_new(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,int *param_11,undefined8 *param_12,
             char *param_13,undefined8 param_14)

{
  uint uVar1;
  undefined1 auVar2 [16];
  int iVar3;
  int iVar4;
  int iVar5;
  long *plVar6;
  long lVar7;
  undefined8 *puVar8;
  long *plVar9;
  long *plVar10;
  uint uVar11;
  ulong uVar12;
  long extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 extraout_RDX_01;
  int iVar13;
  float fVar14;
  undefined8 extraout_XMM0_Qa_02;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  undefined8 extraout_XMM0_Qa_03;
  undefined8 extraout_XMM0_Qa_04;
  undefined8 extraout_XMM0_Qa_05;
  undefined8 extraout_XMM0_Qa_06;
  undefined1 extraout_var [12];
  undefined1 auVar15 [16];
  undefined8 extraout_XMM1_Qa;
  undefined8 uVar16;
  undefined8 extraout_XMM1_Qa_00;
  undefined8 extraout_XMM1_Qa_01;
  undefined8 extraout_XMM1_Qa_02;
  undefined8 extraout_XMM1_Qa_03;
  undefined8 extraout_XMM1_Qa_04;
  undefined1 auVar17 [16];
  int local_80;
  int local_7c;
  undefined8 local_78;
  code *local_68;
  code *local_60;
  code *local_58;
  code *local_50;
  code *local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  iVar13 = (int)param_10;
  plVar6 = iemgui_new(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,vu_class,
                      param_10,param_11,param_12,param_13,param_14);
  lVar7 = canvas_getcurrent(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,param_8
                           );
  local_7c = 1;
  uVar16 = extraout_XMM1_Qa;
  iVar3 = sys_zoomfontheight(*(uint *)(lVar7 + 0xd0),1,0);
  lVar7 = canvas_getcurrent(extraout_XMM0_Qa_00,uVar16,param_3,param_4,param_5,param_6,param_7,
                            param_8);
  uVar16 = extraout_XMM1_Qa_00;
  iVar4 = sys_zoomfontheight(*(uint *)(lVar7 + 0xd0),1,0);
  lVar7 = canvas_getcurrent(extraout_XMM0_Qa_01,uVar16,param_3,param_4,param_5,param_6,param_7,
                            param_8);
  iVar5 = sys_zoomfontheight(*(uint *)(lVar7 + 0xd0),1,0);
  local_80 = *(int *)((long)plVar6 + 0x444);
  local_68 = vu_draw_new;
  local_60 = vu_draw_config;
  local_58 = vu_draw_io;
  local_50 = vu_draw_update;
  local_48 = vu_draw_select;
  local_40 = 0;
  uStack_38 = 0;
  iemgui_setdrawfunctions((long)plVar6,&local_68);
  *(undefined4 *)(plVar6 + 0x8a) = 0x404040;
  if ((((((iVar13 < 0xb) || (*param_11 != 1)) || (param_11[4] != 1)) ||
       ((1 < param_11[8] - 1U || (1 < param_11[0xc] - 1U)))) ||
      ((param_11[0x10] != 1 || ((param_11[0x14] != 1 || (param_11[0x18] != 1)))))) ||
     ((param_11[0x1c] != 1 || (param_11[0x28] != 1)))) {
    iVar3 = iVar3 + 5;
    iVar5 = iVar5 * DAT_0065ef90 + _DAT_0065efa0;
    iVar4 = iVar4 * DAT_0065ef80 + _UNK_0065efa4;
    local_78 = CONCAT44((int)((double)iVar4 * _UNK_0065e5c8),(int)((double)iVar5 * _DAT_0065e5c0));
    iemgui_new_getnames(local_78,CONCAT44(iVar4,iVar5),param_3,param_4,param_5,param_6,param_7,
                        param_8,(long)plVar6,1,0,param_12,param_13,param_14);
    iVar4 = -1;
    uVar16 = extraout_XMM1_Qa_03;
  }
  else {
    uVar16 = extraout_XMM1_Qa_01;
    fVar14 = (float)atom_getfloatarg(0,iVar13,(long)param_11);
    iVar3 = (int)fVar14;
    auVar15._0_4_ = (float)atom_getfloatarg(1,iVar13,(long)param_11);
    auVar15._4_12_ = extraout_var;
    iemgui_new_getnames(auVar15._0_8_,uVar16,param_3,param_4,param_5,param_6,param_7,param_8,
                        (long)plVar6,1,(long)param_11,param_12,param_13,param_14);
    fVar14 = (float)atom_getfloatarg(4,iVar13,(long)param_11);
    iVar4 = (int)fVar14;
    fVar14 = (float)atom_getfloatarg(5,iVar13,(long)param_11);
    local_78 = CONCAT44((int)auVar15._0_4_,(int)fVar14);
    fVar14 = (float)atom_getfloatarg(6,iVar13,(long)param_11);
    iem_inttofstyle((uint *)(plVar6 + 0x88),(int)fVar14);
    fVar14 = (float)atom_getfloatarg(7,iVar13,(long)param_11);
    local_80 = (int)fVar14;
    iemgui_all_loadcolors((long)plVar6,param_11 + 0x20,(int *)0x0,param_11 + 0x24);
    uVar16 = extraout_XMM1_Qa_02;
    fVar14 = (float)atom_getfloatarg(10,iVar13,(long)param_11);
    local_7c = (int)fVar14;
  }
  puVar8 = gensym("nosndno");
  auVar2._8_8_ = uVar16;
  auVar2._0_8_ = extraout_XMM0_Qa_02;
  auVar17._8_8_ = uVar16;
  auVar17._0_8_ = extraout_XMM0_Qa_02;
  plVar6[0x8b] = (long)puVar8;
  plVar6[0x8e] = (long)puVar8;
  if ((iVar13 == 0xc) && (auVar17 = auVar2, param_11[0x2c] == 1)) {
    fVar14 = (float)atom_getfloatarg(0xb,0xc,(long)param_11);
    auVar17 = iem_inttosymargs((uint *)(plVar6 + 0x89),(int)fVar14);
  }
  uVar16 = auVar17._8_8_;
  uVar1 = *(uint *)(plVar6 + 0x88);
  lVar7 = (ulong)(plVar6[0x8c] != 0) << 6;
  *(uint *)(plVar6 + 0x88) = uVar1 & 0xffffff3f | (uint)lVar7;
  uVar11 = uVar1 & 0x3f;
  uVar12 = (ulong)uVar11;
  if (uVar11 == 2) {
    *(undefined2 *)((long)plVar6 + 0x5c) = 0x73;
    *(undefined4 *)(plVar6 + 0xb) = 0x656d6974;
joined_r0x005b06fd:
    if ((ulong)(plVar6[0x8c] != 0) == 0) goto LAB_005b0738;
  }
  else {
    if (uVar11 == 1) {
      uVar12 = 0x63697465766c6568;
      plVar6[0xb] = 0x63697465766c6568;
      *(undefined2 *)(plVar6 + 0xc) = 0x61;
      goto joined_r0x005b06fd;
    }
    *(uint *)(plVar6 + 0x88) = uVar1 & 0xffffff00 | (uint)lVar7;
    strcpy((char *)(plVar6 + 0xb),PTR_sys_font_00715cc0);
    auVar17._8_8_ = uVar16;
    auVar17._0_8_ = extraout_XMM0_Qa_03;
    lVar7 = extraout_RDX;
    if ((*(uint *)(plVar6 + 0x88) & 0x40) == 0) goto LAB_005b0738;
  }
  pd_bind(auVar17._0_8_,auVar17._8_8_,param_3,param_4,param_5,param_6,param_7,param_8,plVar6,
          plVar6[0x8c],lVar7,uVar12,param_13,param_14);
LAB_005b0738:
  *(int *)(plVar6 + 10) = iVar4;
  *(undefined4 *)((long)plVar6 + 0x54) = (undefined4)local_78;
  iVar4 = 4;
  if (4 < local_80) {
    iVar4 = local_80;
  }
  *(int *)((long)plVar6 + 0x444) = iVar4;
  iVar5 = iemgui_clip_size(iVar3);
  iVar4 = 2;
  if (2 < local_78._4_4_ / 0x28) {
    iVar4 = local_78._4_4_ / 0x28;
  }
  *(int *)((long)plVar6 + 0x44) = iVar5;
  *(int *)(plVar6 + 0x92) = iVar4 + -1;
  *(int *)(plVar6 + 8) = iVar4 * *(int *)(plVar6[6] + 0xec) * 0x28;
  *(uint *)((long)plVar6 + 0x4a4) = (uint)(local_7c != 0);
  *(undefined8 *)((long)plVar6 + 0x494) = 0;
  *(undefined8 *)((long)plVar6 + 0x49c) = 0xc2ca0000c2ca0000;
  iemgui_verify_snd_ne_rcv((long)plVar6);
  plVar9 = (long *)__tls_get_addr(&PTR_007159b0);
  lVar7 = *plVar9;
  uVar16 = extraout_XMM1_Qa_04;
  puVar8 = gensym("ft1");
  inlet_new(extraout_XMM0_Qa_04,uVar16,param_3,param_4,param_5,param_6,param_7,param_8,(long)plVar6,
            (long)plVar6,lVar7 + 0x78,(long)puVar8,param_13,param_14);
  plVar10 = outlet_new(extraout_XMM0_Qa_05,uVar16,param_3,param_4,param_5,param_6,param_7,param_8,
                       (long)plVar6,*plVar9 + 0x78,extraout_RDX_00,puVar8,param_13,param_14);
  plVar6[0x95] = (long)plVar10;
  plVar9 = outlet_new(extraout_XMM0_Qa_06,uVar16,param_3,param_4,param_5,param_6,param_7,param_8,
                      (long)plVar6,*plVar9 + 0x78,extraout_RDX_01,puVar8,param_13,param_14);
  plVar6[0x96] = (long)plVar9;
  *(int *)(plVar6 + 8) = (int)plVar6[8] / *(int *)(plVar6[6] + 0xec);
  iemgui_newzoom((long)plVar6);
  return plVar6;
}


