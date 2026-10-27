// Function : vu_dialog
// Namespace: 
// Entry    : 005b0a80
// Prototype: undefined vu_dialog(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, double param_5, double param_6, double param_7, undefined8 param_8, long * param_9, undefined8 param_10, uint param_11, undefined8 * param_12, undefined8 param_13, undefined8 param_14)
// Body     : 005b0a80 - 005b0c3a


void vu_dialog(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
              double param_5,double param_6,double param_7,undefined8 param_8,long *param_9,
              undefined8 param_10,uint param_11,undefined8 *param_12,undefined8 param_13,
              undefined8 param_14)

{
  long *plVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  undefined8 *puVar5;
  ulong uVar6;
  undefined8 extraout_RDX;
  uint *puVar7;
  ulong uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  undefined8 uVar12;
  undefined4 extraout_XMM0_Db_01;
  ulong local_178 [4];
  uint local_158 [8];
  undefined4 local_138;
  undefined4 local_130;
  undefined4 local_128;
  undefined4 local_120;
  undefined4 local_118;
  float local_110;
  undefined4 local_108;
  undefined4 local_100;
  undefined4 local_68;
  undefined8 *local_60;
  
  puVar5 = param_12;
  fVar9 = (float)atom_getfloatarg(0,param_11,(long)param_12);
  fVar10 = (float)atom_getfloatarg(1,param_11,(long)param_12);
  fVar11 = (float)atom_getfloatarg(4,param_11,(long)param_12);
  puVar7 = local_158;
  iemgui_setdialogatoms
            (CONCAT44(extraout_XMM0_Db,fVar11),param_2,param_3,param_4,param_5,param_6,param_7,
             param_8,(long)param_9,0x12,puVar7,puVar5,param_13,param_14);
  local_138 = 1;
  local_130 = 0x3c23d70a;
  local_128 = 1;
  local_120 = 0x3f800000;
  local_118 = 1;
  local_110 = (float)*(int *)((long)param_9 + 0x4a4);
  local_108 = 1;
  local_100 = 0xbf800000;
  local_68 = 2;
  local_60 = gensym("none");
  plVar1 = (long *)param_9[6];
  pcVar4 = (char *)gensym("dialog");
  uVar8 = (ulong)param_11;
  uVar12 = pd_undo_set_objectstate
                     (CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da),param_2,param_3,param_4,param_5
                      ,param_6,param_7,param_8,plVar1,(long)param_9,pcVar4,0x12,puVar7,uVar8,
                      param_12);
  iemgui_dialog(uVar12,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,local_178,
                param_11,(long)param_12,(char *)puVar7,uVar8);
  *(byte *)(param_9 + 0x88) = *(byte *)(param_9 + 0x88) & 0x7f;
  *(byte *)(param_9 + 0x89) = *(byte *)(param_9 + 0x89) & 0xfe;
  iVar2 = iemgui_clip_size((int)fVar9);
  uVar3 = *(uint *)(param_9[6] + 0xec);
  uVar6 = (ulong)uVar3;
  *(uint *)((long)param_9 + 0x44) = iVar2 * uVar3;
  iVar2 = 2;
  if (2 < (int)fVar10 / 0x28) {
    iVar2 = (int)fVar10 / 0x28;
  }
  *(int *)(param_9 + 0x92) = iVar2 + -1;
  *(uint *)(param_9 + 8) = iVar2 * uVar3 * 0x28;
  *(uint *)((long)param_9 + 0x4a4) = (uint)((int)fVar11 != 0);
  uVar3 = glist_isvisible(param_9[6]);
  uVar12 = CONCAT44(extraout_XMM0_Db_01,extraout_XMM0_Da_00);
  if (uVar3 != 0) {
    uVar12 = vu_draw_config(CONCAT44(extraout_XMM0_Db_01,extraout_XMM0_Da_00),param_2,param_3,
                            param_4,param_5,param_6,param_7,param_8,(long)param_9,param_9[6],
                            extraout_RDX,uVar6,(char *)puVar7,uVar8);
  }
  iemgui_size(uVar12,param_2,param_3,param_4,param_5,param_6,param_7,param_8,(long)param_9,
              (long)param_9);
  return;
}


