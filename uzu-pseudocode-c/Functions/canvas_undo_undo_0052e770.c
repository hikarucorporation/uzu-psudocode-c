// Function : canvas_undo_undo
// Namespace: 
// Entry    : 0052e770
// Prototype: undefined canvas_undo_undo(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, double param_5, double param_6, double param_7, undefined8 param_8, long * param_9, char * param_10, undefined8 param_11, undefined * param_12, uint * param_13, undefined4 * param_14)
// Body     : 0052e770 - 0052e951


void canvas_undo_undo(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                     double param_5,double param_6,double param_7,undefined8 param_8,long *param_9,
                     char *param_10,undefined8 param_11,undefined *param_12,uint *param_13,
                     undefined4 *param_14)

{
  int iVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  undefined8 in_RAX;
  long *plVar5;
  undefined8 uVar6;
  undefined7 extraout_var;
  long lVar7;
  undefined8 uVar8;
  char *pcVar9;
  char *pcVar10;
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
  undefined8 extraout_RDX_09;
  int iVar11;
  uint *puVar12;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined4 extraout_XMM0_Da_03;
  float fVar13;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  undefined8 uVar14;
  undefined4 extraout_XMM0_Db_01;
  undefined4 extraout_XMM0_Db_02;
  undefined4 extraout_XMM0_Db_03;
  undefined1 uVar15;
  
  plVar5 = (long *)canvas_undo_get((long)param_9);
  if (plVar5 == (long *)0x0) {
    return;
  }
  uVar3 = canvas_suspend_dsp(CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),param_2,param_3,param_4,
                             param_5,param_6,param_7,param_8);
  uVar8 = extraout_RDX;
  uVar14 = CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_00);
  if ((*plVar5 != 0) &&
     (uVar14 = CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_00), plVar5[1] != *plVar5)) {
    *(undefined4 *)(plVar5 + 3) = 1;
    uVar14 = canvas_editmode(DAT_005d9038,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                             (ulong)param_9);
    glist_noselect(uVar14,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,
                   extraout_RDX_00,param_12,(char *)param_13,param_14);
    uVar14 = canvas_undo_set_name(*(undefined8 *)(plVar5[1] + 0x18));
    uVar15 = (undefined1)in_RAX;
    if (*(int *)(plVar5[1] + 8) == 0xd) {
      lVar7 = *(long *)(plVar5[1] + 0x20);
      plVar5[1] = lVar7;
      uVar8 = extraout_RDX_01;
      if (lVar7 != 0) {
        iVar11 = 1;
        pcVar9 = param_12;
        do {
          uVar15 = (undefined1)in_RAX;
          iVar1 = *(int *)(lVar7 + 8);
          if (iVar1 == 0xc) {
            iVar11 = iVar11 + -1;
            if (iVar11 == 0) goto LAB_0052e874;
          }
          else if (iVar1 == 0xd) {
            iVar11 = iVar11 + 1;
          }
          else {
            param_12 = pcVar9;
            if (iVar1 == 0) break;
            pcVar9 = "canvas_undo_undo";
            canvas_undo_doit(uVar14,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                             lVar7,1,(long *)"canvas_undo_undo",param_13,param_14);
            uVar14 = CONCAT44(extraout_XMM0_Db_01,extraout_XMM0_Da_01);
            uVar8 = extraout_RDX_02;
          }
          uVar15 = (undefined1)in_RAX;
          lVar7 = *(long *)(plVar5[1] + 0x20);
          plVar5[1] = lVar7;
          param_12 = pcVar9;
        } while (lVar7 != 0);
      }
      uVar14 = bug(uVar14,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                   "undo sequence missing start",lVar7,uVar8,param_12,(char *)param_13,param_14,
                   uVar15);
    }
LAB_0052e874:
    param_10 = (char *)plVar5[1];
    pcVar9 = "canvas_undo_undo";
    uVar6 = canvas_undo_doit(uVar14,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                             (long)param_10,1,(long *)"canvas_undo_undo",param_13,param_14);
    uVar14 = CONCAT44(extraout_XMM0_Db_02,extraout_XMM0_Da_02);
    param_12 = pcVar9;
    uVar8 = extraout_RDX_03;
    if ((int)uVar6 != 0) {
      lVar7 = *(long *)(plVar5[1] + 0x20);
      plVar5[1] = lVar7;
      pcVar10 = *(char **)(lVar7 + 0x18);
      puVar12 = *(uint **)(*(long *)(lVar7 + 0x28) + 0x18);
      *(undefined4 *)(plVar5 + 3) = 0;
      uVar4 = glist_isvisible((long)param_9);
      param_12 = pcVar9;
      uVar14 = extraout_RDX_04;
      if ((uVar4 != 0) &&
         (bVar2 = glist_istoplevel((long)param_9), param_12 = pcVar9, uVar14 = extraout_RDX_05,
         (int)CONCAT71(extraout_var,bVar2) != 0)) {
        param_10 = "^ ss";
        pdgui_vmess(CONCAT44(extraout_XMM0_Db_03,extraout_XMM0_Da_03),param_2,param_3,param_4,
                    param_5,param_6,param_7,param_8,0x654682,"^ ss",param_9,pcVar10,puVar12,param_14
                    ,uVar15);
        param_12 = pcVar10;
        uVar14 = extraout_RDX_06;
        param_13 = puVar12;
      }
      fVar13 = 0.0;
      if (param_9 != (long *)0x0) {
        lVar7 = canvas_undo_get((long)param_9);
        uVar14 = extraout_RDX_07;
        fVar13 = 0.0;
        if ((lVar7 != 0) &&
           (param_12 = *(undefined **)(lVar7 + 8), fVar13 = DAT_005d9038,
           param_12 == *(char **)(lVar7 + 0x10))) {
          lVar7 = canvas_getrootfor((long)param_9);
          uVar8 = canvas_undo_doisdirty(lVar7);
          uVar14 = extraout_RDX_08;
          if ((int)uVar8 == 0) {
            fVar13 = 0.0;
          }
          else {
            fVar13 = DAT_005d9038;
          }
        }
      }
      uVar14 = canvas_dirty(fVar13,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                            (long)param_9,param_10,uVar14,param_12,(char *)param_13,param_14);
      uVar8 = extraout_RDX_09;
    }
  }
  canvas_resume_dsp(uVar14,param_2,param_3,param_4,param_5,param_6,param_7,param_8,(ulong)uVar3,
                    param_10,uVar8,param_12,(char *)param_13,param_14);
  return;
}


