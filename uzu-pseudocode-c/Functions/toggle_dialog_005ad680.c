// Function : toggle_dialog
// Namespace: 
// Entry    : 005ad680
// Prototype: undefined toggle_dialog(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, double param_5, double param_6, double param_7, undefined8 param_8, long * param_9, undefined8 param_10, uint param_11, undefined8 * param_12, undefined8 param_13, undefined8 param_14)
// Body     : 005ad680 - 005ad7bc


void toggle_dialog(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  double param_5,double param_6,double param_7,undefined8 param_8,long *param_9,
                  undefined8 param_10,uint param_11,undefined8 *param_12,undefined8 param_13,
                  undefined8 param_14)

{
  long *plVar1;
  uint uVar2;
  int iVar3;
  char *pcVar4;
  undefined8 *puVar5;
  uint *puVar6;
  ulong uVar7;
  float fVar8;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined1 extraout_var [12];
  undefined1 auVar9 [16];
  undefined4 uVar10;
  undefined4 uVar11;
  uint uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  ulong local_168 [4];
  uint local_148 [4];
  undefined4 local_138;
  undefined4 local_130;
  undefined4 local_128;
  undefined4 local_120;
  undefined4 local_118;
  undefined4 local_110;
  
  puVar5 = param_12;
  fVar8 = (float)atom_getfloatarg(0,param_11,(long)param_12);
  auVar9._0_4_ = (float)atom_getfloatarg(2,param_11,(long)param_12);
  auVar9._4_12_ = extraout_var;
  puVar6 = local_148;
  iemgui_setdialogatoms
            (auVar9._0_8_,param_2,param_3,param_4,param_5,param_6,param_7,param_8,(long)param_9,0x12
             ,puVar6,puVar5,param_13,param_14);
  local_138 = 1;
  local_130 = 0;
  local_128 = 1;
  local_120 = *(undefined4 *)((long)param_9 + 0x494);
  local_118 = 1;
  local_110 = 0;
  plVar1 = (long *)param_9[6];
  pcVar4 = (char *)gensym("dialog");
  uVar7 = (ulong)param_11;
  pd_undo_set_objectstate
            (extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar1,
             (long)param_9,pcVar4,0x12,puVar6,uVar7,param_12);
  uVar10 = 0;
  uVar11 = 0;
  uVar14 = extraout_var._0_4_;
  uVar12 = ~-(uint)(auVar9._0_4_ == 0.0) & (uint)auVar9._0_4_;
  uVar13 = 0;
  uVar2 = DAT_005d9038 & -(uint)(auVar9._0_4_ == 0.0) | uVar12;
  *(uint *)((long)param_9 + 0x494) = uVar2;
  if (*(float *)(param_9 + 0x92) != 0.0) {
    *(uint *)(param_9 + 0x92) = uVar2;
  }
  iemgui_dialog((ulong)uVar2,0,(ulong)uVar12,auVar9._0_8_,param_5,param_6,param_7,param_8,param_9,
                local_168,param_11,(long)param_12,(char *)puVar6,uVar7);
  iVar3 = iemgui_clip_size((int)fVar8);
  iVar3 = iVar3 * *(int *)(param_9[6] + 0xec);
  *(int *)((long)param_9 + 0x44) = iVar3;
  *(int *)(param_9 + 8) = iVar3;
  iemgui_size(extraout_XMM0_Qa_00,CONCAT44(uVar11,uVar10),CONCAT44(uVar13,uVar12),
              CONCAT44(uVar14,auVar9._0_4_),param_5,param_6,param_7,param_8,(long)param_9,
              (long)param_9);
  return;
}


