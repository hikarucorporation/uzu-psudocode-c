// Function : canvas_undo_redo
// Namespace: 
// Entry    : 0052ea70
// Prototype: undefined canvas_undo_redo(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, double param_5, double param_6, double param_7, undefined8 param_8, long * param_9, char * param_10, undefined8 param_11, undefined * param_12, uint * param_13, undefined4 * param_14)
// Body     : 0052ea70 - 0052ec4f


void canvas_undo_redo(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                     double param_5,double param_6,double param_7,undefined8 param_8,long *param_9,
                     char *param_10,undefined8 param_11,undefined *param_12,uint *param_13,
                     undefined4 *param_14)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  undefined8 in_RAX;
  long *plVar4;
  undefined7 extraout_var;
  long lVar5;
  undefined8 uVar6;
  char *pcVar7;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 extraout_RDX_01;
  undefined8 extraout_RDX_02;
  undefined8 extraout_RDX_03;
  undefined8 extraout_RDX_04;
  undefined8 extraout_RDX_05;
  undefined8 extraout_RDX_06;
  undefined8 extraout_RDX_07;
  undefined8 extraout_RDX_08;
  int iVar8;
  uint *puVar9;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  float fVar10;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  undefined8 uVar11;
  undefined4 extraout_XMM0_Db_01;
  undefined4 extraout_XMM0_Db_02;
  undefined1 uVar12;
  
  plVar4 = (long *)canvas_undo_get((long)param_9);
  if (plVar4 == (long *)0x0) {
    return;
  }
  uVar2 = canvas_suspend_dsp(CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),param_2,param_3,param_4,
                             param_5,param_6,param_7,param_8);
  uVar6 = extraout_RDX;
  uVar11 = CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_00);
  if ((*plVar4 != 0) &&
     (lVar5 = *(long *)(plVar4[1] + 0x28),
     uVar11 = CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_00), lVar5 != 0)) {
    *(undefined4 *)(plVar4 + 3) = 1;
    plVar4[1] = lVar5;
    uVar11 = canvas_editmode(DAT_005d9038,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                             (ulong)param_9);
    glist_noselect(uVar11,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,
                   extraout_RDX_00,param_12,(char *)param_13,param_14);
    uVar11 = canvas_undo_set_name(*(undefined8 *)(plVar4[1] + 0x18));
    uVar12 = (undefined1)in_RAX;
    if (*(int *)(plVar4[1] + 8) == 0xc) {
      lVar5 = *(long *)(plVar4[1] + 0x28);
      uVar6 = extraout_RDX_01;
      if (lVar5 != 0) {
        iVar8 = 1;
        pcVar7 = param_12;
        do {
          uVar12 = (undefined1)in_RAX;
          plVar4[1] = lVar5;
          if (*(int *)(lVar5 + 8) == 0xd) {
            iVar8 = iVar8 + -1;
            if (iVar8 == 0) goto LAB_0052eb74;
          }
          else if (*(int *)(lVar5 + 8) == 0xc) {
            iVar8 = iVar8 + 1;
          }
          else {
            pcVar7 = "canvas_undo_redo";
            canvas_undo_doit(uVar11,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                             lVar5,2,(long *)"canvas_undo_redo",param_13,param_14);
            uVar11 = CONCAT44(extraout_XMM0_Db_01,extraout_XMM0_Da_01);
            uVar6 = extraout_RDX_02;
          }
          uVar12 = (undefined1)in_RAX;
          lVar5 = *(long *)(plVar4[1] + 0x28);
          param_12 = pcVar7;
        } while (lVar5 != 0);
      }
      uVar11 = bug(uVar11,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                   "undo sequence start without end",0,uVar6,param_12,(char *)param_13,param_14,
                   uVar12);
    }
LAB_0052eb74:
    param_10 = (char *)plVar4[1];
    canvas_undo_doit(uVar11,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                     (long)param_10,2,(long *)"canvas_undo_redo",param_13,param_14);
    param_12 = *(undefined **)(plVar4[1] + 0x28);
    if (param_12 == (char *)0x0) {
      puVar9 = (uint *)&DAT_0065efc5;
    }
    else {
      puVar9 = *(uint **)(param_12 + 0x18);
    }
    pcVar7 = *(char **)(plVar4[1] + 0x18);
    *(undefined4 *)(plVar4 + 3) = 0;
    uVar3 = glist_isvisible((long)param_9);
    uVar11 = extraout_RDX_03;
    if ((uVar3 != 0) &&
       (bVar1 = glist_istoplevel((long)param_9), uVar11 = extraout_RDX_04,
       (int)CONCAT71(extraout_var,bVar1) != 0)) {
      param_10 = "^ ss";
      pdgui_vmess(CONCAT44(extraout_XMM0_Db_02,extraout_XMM0_Da_02),param_2,param_3,param_4,param_5,
                  param_6,param_7,param_8,0x654682,"^ ss",param_9,pcVar7,puVar9,param_14,uVar12);
      param_12 = pcVar7;
      uVar11 = extraout_RDX_05;
      param_13 = puVar9;
    }
    fVar10 = 0.0;
    if (param_9 != (long *)0x0) {
      lVar5 = canvas_undo_get((long)param_9);
      uVar11 = extraout_RDX_06;
      fVar10 = 0.0;
      if ((lVar5 != 0) &&
         (param_12 = *(undefined **)(lVar5 + 8), fVar10 = DAT_005d9038,
         param_12 == *(char **)(lVar5 + 0x10))) {
        lVar5 = canvas_getrootfor((long)param_9);
        uVar6 = canvas_undo_doisdirty(lVar5);
        uVar11 = extraout_RDX_07;
        if ((int)uVar6 == 0) {
          fVar10 = 0.0;
        }
        else {
          fVar10 = DAT_005d9038;
        }
      }
    }
    uVar11 = canvas_dirty(fVar10,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                          (long)param_9,param_10,uVar11,param_12,(char *)param_13,param_14);
    uVar6 = extraout_RDX_08;
  }
  canvas_resume_dsp(uVar11,param_2,param_3,param_4,param_5,param_6,param_7,param_8,(ulong)uVar2,
                    param_10,uVar6,param_12,(char *)param_13,param_14);
  return;
}


