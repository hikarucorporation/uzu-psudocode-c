// Function : glist_deselect
// Namespace: 
// Entry    : 00504a10
// Prototype: undefined glist_deselect(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long * param_9, long * param_10, undefined8 param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 00504a10 - 00504d05


void glist_deselect(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                   long *param_9,long *param_10,undefined8 param_11,undefined8 param_12,
                   char *param_13,undefined8 param_14)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  int iVar7;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 extraout_RDX_01;
  undefined8 extraout_RDX_02;
  undefined8 extraout_RDX_03;
  long *plVar8;
  long *plVar9;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined4 extraout_XMM0_Da_03;
  undefined4 extraout_XMM0_Da_04;
  undefined4 extraout_XMM0_Da_05;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  undefined4 extraout_XMM0_Db_01;
  undefined4 extraout_XMM0_Db_02;
  undefined4 extraout_XMM0_Db_03;
  undefined4 extraout_XMM0_Db_04;
  undefined8 uVar10;
  undefined4 extraout_XMM0_Db_05;
  undefined1 in_stack_ffffffffffffffb8;
  int local_3c;
  byte *local_38;
  
  lVar6 = param_9[0x18];
  if (lVar6 != 0) {
    for (plVar4 = *(long **)(lVar6 + 0x20); plVar5 = param_10, plVar4 != (long *)0x0;
        plVar4 = (long *)plVar4[1]) {
      if ((long *)*plVar4 == param_10) goto LAB_00504a63;
    }
    param_1 = bug(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,"glist_deselect",
                  param_10,param_11,0,param_13,param_14,in_stack_ffffffffffffffb8);
    lVar6 = param_9[0x18];
    param_11 = extraout_RDX;
LAB_00504a63:
    if (*(long *)(lVar6 + 0x28) == 0) {
      puVar2 = (undefined8 *)0x0;
      iVar1 = 0;
    }
    else {
      puVar2 = (undefined8 *)
               glist_findrtext(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                               (long)param_9,(long)param_10,param_11,plVar4,param_13,param_14);
      iVar1 = 0;
      if (*(undefined8 **)(param_9[0x18] + 0x28) == puVar2) {
        if ((*(byte *)(param_9[0x18] + 0x88) & 0x10) == 0) {
          puVar2 = (undefined8 *)0x0;
        }
        else {
          uVar10 = 0xc;
          canvas_undo_add(CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),param_2,param_3,param_4,
                          param_5,param_6,param_7,param_8,(long)param_9,0xc,"typing",0,param_13,
                          param_14);
          if ((*(byte *)(param_9 + 0x1d) & 0x20) == 0) {
            canvas_editmode(DAT_005d9038,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                            (ulong)param_9);
          }
          if (param_9[0x18] != 0) {
            for (plVar4 = *(long **)(param_9[0x18] + 0x20); plVar4 != (long *)0x0;
                plVar4 = (long *)plVar4[1]) {
              if ((long *)*plVar4 == param_10) goto LAB_00504b79;
            }
            puVar3 = getbytes(0x10);
            lVar6 = param_9[0x18];
            plVar4 = *(long **)(lVar6 + 0x20);
            if (plVar4 == (long *)0x0) {
              plVar4 = (long *)0x0;
            }
            else {
              plVar5 = plVar4;
              do {
                if ((long *)*plVar5 == param_10) {
                  bug(CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_00),param_2,param_3,param_4,
                      param_5,param_6,param_7,param_8,"glist_select",uVar10,plVar5,plVar4,param_13,
                      param_14,in_stack_ffffffffffffffb8);
                  lVar6 = param_9[0x18];
                  plVar4 = *(long **)(lVar6 + 0x20);
                  break;
                }
                plVar5 = (long *)plVar5[1];
              } while (plVar5 != (long *)0x0);
            }
            puVar3[1] = plVar4;
            *puVar3 = param_10;
            *(undefined8 **)(lVar6 + 0x20) = puVar3;
            gobj_select(param_10,(long)param_9);
          }
LAB_00504b79:
          plVar4 = getbytes(8);
          plVar5 = (long *)param_9[6];
          if (plVar5 == (long *)0x0) {
            *(undefined4 *)((long)plVar4 + 4) = 0xffffffff;
            iVar7 = 0;
          }
          else {
            iVar7 = -1;
            plVar9 = plVar5;
            do {
              plVar9 = (long *)plVar9[1];
              iVar7 = iVar7 + 1;
            } while (plVar9 != (long *)0x0);
            *(int *)((long)plVar4 + 4) = iVar7;
            iVar7 = 0;
            do {
              if (plVar5 == param_10) break;
              iVar7 = iVar7 + 1;
              plVar5 = (long *)plVar5[1];
            } while (plVar5 != (long *)0x0);
          }
          *(int *)plVar4 = iVar7;
          canvas_undo_add(CONCAT44(extraout_XMM0_Db_01,extraout_XMM0_Da_01),param_2,param_3,param_4,
                          param_5,param_6,param_7,param_8,(long)param_9,7,"arrange",plVar4,param_13,
                          param_14);
          lVar6 = glist_getcanvas((long)param_9);
          uVar10 = canvas_stowconnections
                             (CONCAT44(extraout_XMM0_Db_02,extraout_XMM0_Da_02),param_2,param_3,
                              param_4,param_5,param_6,param_7,param_8,lVar6);
          glist_checkanddeselectall
                    (uVar10,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_10);
        }
        gobj_activate(param_10);
      }
      else {
        puVar2 = (undefined8 *)0x0;
      }
      plVar5 = gensym("dsp");
      lVar6 = zgetfn(param_10,(long)plVar5);
      param_1 = CONCAT44(extraout_XMM0_Db_03,extraout_XMM0_Da_03);
      param_11 = extraout_RDX_00;
      if (lVar6 != 0) {
        iVar1 = canvas_suspend_dsp(CONCAT44(extraout_XMM0_Db_03,extraout_XMM0_Da_03),param_2,param_3
                                   ,param_4,param_5,param_6,param_7,param_8);
        param_1 = CONCAT44(extraout_XMM0_Db_04,extraout_XMM0_Da_04);
        param_11 = extraout_RDX_01;
      }
    }
    plVar9 = *(long **)(param_9[0x18] + 0x20);
    if ((long *)*plVar9 == param_10) {
      plVar4 = (long *)plVar9[1];
      *(long **)(param_9[0x18] + 0x20) = plVar4;
    }
    else {
      do {
        plVar8 = plVar9;
        plVar9 = (long *)plVar8[1];
        if (plVar9 == (long *)0x0) goto LAB_00504c8d;
      } while ((long *)*plVar9 != param_10);
      plVar4 = (long *)plVar9[1];
      plVar8[1] = (long)plVar4;
    }
    gobj_select(param_10,(long)param_9);
    plVar5 = (long *)0x10;
    param_1 = freebytes(plVar9);
    param_11 = extraout_RDX_02;
LAB_00504c8d:
    if (puVar2 != (undefined8 *)0x0) {
      uVar10 = rtext_gettext(puVar2,&local_38,&local_3c);
      uVar10 = text_setto(uVar10,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_10,
                          param_9,local_38,local_3c,param_13,param_14);
      uVar10 = canvas_fixlinesfor(uVar10,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                                  (long)param_9,(long)param_10);
      *(undefined8 *)(param_9[0x18] + 0x28) = 0;
      plVar5 = (long *)0xd;
      plVar4 = (long *)0x0;
      canvas_undo_add(uVar10,param_2,param_3,param_4,param_5,param_6,param_7,param_8,(long)param_9,
                      0xd,"typing",0,param_13,param_14);
      param_1 = CONCAT44(extraout_XMM0_Db_05,extraout_XMM0_Da_05);
      param_11 = extraout_RDX_03;
    }
    if (iVar1 != 0) {
      canvas_resume_dsp(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,1,plVar5,
                        param_11,plVar4,param_13,param_14);
    }
  }
  return;
}


