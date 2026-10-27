// Function : glist_doreload
// Namespace: 
// Entry    : 0050ad90
// Prototype: undefined glist_doreload(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, double param_5, double param_6, double param_7, undefined8 param_8, long * param_9, long * param_10, long param_11, long * param_12, uint * param_13, byte * param_14)
// Body     : 0050ad90 - 0050b13a


void glist_doreload(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   double param_5,double param_6,double param_7,undefined8 param_8,long *param_9,
                   long *param_10,long param_11,long *param_12,uint *param_13,byte *param_14)

{
  byte bVar1;
  ushort uVar2;
  long lVar3;
  undefined8 uVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  undefined7 extraout_var;
  undefined7 extraout_var_00;
  undefined8 *puVar8;
  undefined7 extraout_var_01;
  long lVar9;
  undefined *puVar10;
  char *pcVar11;
  long extraout_RDX;
  long extraout_RDX_00;
  long extraout_RDX_01;
  long extraout_RDX_02;
  long extraout_RDX_03;
  long *plVar12;
  long extraout_RDX_04;
  long extraout_RDX_05;
  long extraout_RDX_06;
  undefined8 extraout_RDX_07;
  undefined8 extraout_RDX_08;
  undefined8 extraout_RDX_09;
  undefined8 extraout_RDX_10;
  undefined8 extraout_RDX_11;
  long *plVar13;
  char *pcVar14;
  char *pcVar15;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined4 extraout_XMM0_Da_03;
  undefined4 extraout_XMM0_Da_04;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da_05;
  undefined4 extraout_XMM0_Da_06;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  undefined4 extraout_XMM0_Db_01;
  undefined4 extraout_XMM0_Db_02;
  undefined4 extraout_XMM0_Db_03;
  undefined8 uVar17;
  undefined4 extraout_XMM0_Db_04;
  undefined4 uVar18;
  undefined4 extraout_XMM0_Db_05;
  undefined4 extraout_XMM0_Db_06;
  undefined1 auVar19 [16];
  undefined1 uVar20;
  char *in_stack_ffffffffffffff28;
  uint local_b8 [34];
  
  uVar20 = SUB81(in_stack_ffffffffffffff28,0);
  uVar2 = *(ushort *)(param_9 + 0x1d);
  plVar13 = (long *)param_9[6];
  pcVar11 = (char *)param_12;
  pcVar14 = (char *)param_10;
  if (plVar13 != (long *)0x0) {
    bVar7 = false;
    lVar9 = param_11;
    pcVar15 = (char *)param_14;
    do {
      if ((plVar13 == param_12) || (*plVar13 != *(long *)PTR_canvas_class_00715918)) {
LAB_0050adf6:
        bVar5 = false;
        if (*plVar13 != *(long *)PTR_clone_class_00715970) goto LAB_0050ae08;
LAB_0050ae50:
        pcVar11 = PTR_clone_class_00715970;
        pcVar14 = (char *)param_10;
        bVar6 = clone_match(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                            (long)plVar13,(long)param_10,param_11,PTR_clone_class_00715970,
                            (char *)param_13,pcVar15);
        param_1 = CONCAT44(extraout_XMM0_Db_01,extraout_XMM0_Da_01);
        lVar9 = extraout_RDX_01;
        if ((int)CONCAT71(extraout_var_00,bVar6) != 0 || bVar5) goto LAB_0050ae6e;
      }
      else {
        puVar10 = PTR_canvas_class_00715918;
        bVar5 = canvas_isabstraction((long)plVar13);
        lVar9 = extraout_RDX;
        param_1 = CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da);
        if (((int)CONCAT71(extraout_var,bVar5) == 0) ||
           (param_1 = CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da), (long *)plVar13[0x19] != param_10
           )) goto LAB_0050adf6;
        lVar9 = canvas_getdir(CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),param_2,param_3,param_4,
                              param_5,param_6,param_7,param_8,(long)plVar13,pcVar14,extraout_RDX,
                              puVar10,(char *)param_13,pcVar15);
        param_1 = CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_00);
        bVar5 = lVar9 == param_11;
        lVar9 = extraout_RDX_00;
        if (*plVar13 == *(long *)PTR_clone_class_00715970) goto LAB_0050ae50;
LAB_0050ae08:
        pcVar11 = PTR_clone_class_00715970;
        if (bVar5) {
LAB_0050ae6e:
          param_1 = canvas_create_editor
                              (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                               (long)param_9,pcVar14,lVar9,pcVar11,(char *)param_13,pcVar15);
          lVar9 = extraout_RDX_02;
          if ((*(byte *)(param_9 + 0x1d) & 1) == 0) {
            auVar19 = glist_getcanvas((long)param_9);
            param_1 = canvas_vis((ulong)DAT_005d9038,param_2,param_3,param_4,param_5,param_6,param_7
                                 ,param_8,auVar19._0_8_,pcVar14,auVar19._8_8_,pcVar11,
                                 (char *)param_13,pcVar15,(char)in_stack_ffffffffffffff28);
            lVar9 = extraout_RDX_03;
          }
          if (bVar7) {
LAB_0050ae9c:
            if (param_9[0x18] != 0) {
              puVar8 = getbytes(0x10);
              lVar9 = param_9[0x18];
              pcVar11 = *(char **)(lVar9 + 0x20);
              plVar12 = (long *)pcVar11;
              if ((long *)pcVar11 == (long *)0x0) {
                pcVar11 = (char *)0x0;
              }
              else {
                do {
                  if ((long *)*plVar12 == plVar13) {
                    bug(CONCAT44(extraout_XMM0_Db_02,extraout_XMM0_Da_02),param_2,param_3,param_4,
                        param_5,param_6,param_7,param_8,"glist_select",pcVar14,plVar12,pcVar11,
                        (char *)param_13,pcVar15,(char)in_stack_ffffffffffffff28);
                    lVar9 = param_9[0x18];
                    pcVar11 = *(char **)(lVar9 + 0x20);
                    break;
                  }
                  plVar12 = (long *)plVar12[1];
                } while (plVar12 != (long *)0x0);
              }
              puVar8[1] = pcVar11;
              *puVar8 = plVar13;
              *(undefined8 **)(lVar9 + 0x20) = puVar8;
              bVar7 = true;
              pcVar14 = (char *)param_9;
              param_1 = gobj_select(plVar13,(long)param_9);
              lVar9 = extraout_RDX_06;
              goto LAB_0050add5;
            }
          }
          else {
            lVar3 = param_9[0x18];
            if (lVar3 != 0) {
              puVar8 = *(undefined8 **)(lVar3 + 0x20);
              while (puVar8 != (undefined8 *)0x0) {
                pcVar14 = (char *)*puVar8;
                param_1 = glist_deselect(param_1,param_2,param_3,param_4,param_5,param_6,param_7,
                                         param_8,param_9,(long *)pcVar14,lVar9,puVar8,
                                         (char *)param_13,pcVar15);
                lVar3 = param_9[0x18];
                lVar9 = extraout_RDX_04;
                puVar8 = *(undefined8 **)(lVar3 + 0x20);
              }
              bVar1 = *(byte *)(lVar3 + 0x88);
              pcVar11 = (char *)(ulong)bVar1;
              if ((bVar1 & 0x20) != 0) {
                *(byte *)(lVar3 + 0x88) = bVar1 & 0xdf;
                param_13 = local_b8;
                sprintf((char *)param_13,"l%p",*(undefined8 *)(param_9[0x18] + 0x80));
                in_stack_ffffffffffffff28 = "black";
                pcVar14 = "crs rs";
                pcVar11 = "itemconfigure";
                pcVar15 = "-fill";
                param_1 = pdgui_vmess(CONCAT44(extraout_XMM0_Db_03,extraout_XMM0_Da_03),param_2,
                                      param_3,param_4,param_5,param_6,param_7,param_8,0,"crs rs",
                                      param_9,"itemconfigure",param_13,"-fill",0x51);
                lVar9 = extraout_RDX_05;
              }
              goto LAB_0050ae9c;
            }
          }
          bVar7 = true;
        }
      }
LAB_0050add5:
      plVar13 = (long *)plVar13[1];
    } while (plVar13 != (long *)0x0);
    if (bVar7) {
      uVar17 = canvas_cut(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                          pcVar14,lVar9,(undefined8 *)pcVar11,(char *)param_13,(byte *)pcVar15);
      uVar17 = canvas_undo_undo(uVar17,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                                param_9,pcVar14,extraout_RDX_07,pcVar11,param_13,
                                (undefined4 *)pcVar15);
      uVar17 = canvas_undo_rebranch
                         (uVar17,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                          pcVar14,extraout_RDX_08,pcVar11,param_13,(undefined4 *)pcVar15);
      lVar9 = param_9[0x18];
      if (lVar9 != 0) {
        puVar8 = *(undefined8 **)(lVar9 + 0x20);
        uVar4 = extraout_RDX_09;
        while (puVar8 != (undefined8 *)0x0) {
          pcVar14 = (char *)*puVar8;
          uVar17 = glist_deselect(uVar17,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                                  param_9,(long *)pcVar14,uVar4,puVar8,(char *)param_13,pcVar15);
          lVar9 = param_9[0x18];
          uVar4 = extraout_RDX_10;
          puVar8 = *(undefined8 **)(lVar9 + 0x20);
        }
        bVar1 = *(byte *)(lVar9 + 0x88);
        pcVar11 = (char *)(ulong)bVar1;
        if ((bVar1 & 0x20) != 0) {
          *(byte *)(lVar9 + 0x88) = bVar1 & 0xdf;
          param_13 = local_b8;
          sprintf((char *)param_13,"l%p",*(undefined8 *)(param_9[0x18] + 0x80));
          in_stack_ffffffffffffff28 = "black";
          pcVar14 = "crs rs";
          pcVar11 = "itemconfigure";
          pcVar15 = "-fill";
          pdgui_vmess(CONCAT44(extraout_XMM0_Db_04,extraout_XMM0_Da_04),param_2,param_3,param_4,
                      param_5,param_6,param_7,param_8,0,"crs rs",param_9,"itemconfigure",param_13,
                      "-fill",0x51);
        }
      }
    }
    for (plVar13 = (long *)param_9[6]; uVar20 = SUB81(in_stack_ffffffffffffff28,0),
        param_14 = (byte *)pcVar15, plVar13 != (long *)0x0; plVar13 = (long *)plVar13[1]) {
      if (((plVar13 != param_12) &&
          (pcVar11 = PTR_canvas_class_00715918, *plVar13 == *(long *)PTR_canvas_class_00715918)) &&
         ((bVar7 = canvas_isabstraction((long)plVar13), uVar16 = extraout_XMM0_Da_05,
          uVar18 = extraout_XMM0_Db_05, (int)CONCAT71(extraout_var_01,bVar7) == 0 ||
          (((long *)plVar13[0x19] != param_10 ||
           (lVar9 = canvas_getdir(CONCAT44(extraout_XMM0_Db_05,extraout_XMM0_Da_05),param_2,param_3,
                                  param_4,param_5,param_6,param_7,param_8,(long)plVar13,pcVar14,
                                  extraout_RDX_11,pcVar11,(char *)param_13,pcVar15),
           uVar16 = extraout_XMM0_Da_06, uVar18 = extraout_XMM0_Db_06, lVar9 != param_11)))))) {
        pcVar11 = (char *)param_12;
        pcVar14 = (char *)param_10;
        glist_doreload(CONCAT44(uVar18,uVar16),param_2,param_3,param_4,param_5,param_6,param_7,
                       param_8,plVar13,param_10,param_11,param_12,param_13,(byte *)pcVar15);
      }
    }
  }
  if (((uVar2 & 1) == 0) && ((*(byte *)(param_9 + 0x1d) & 1) != 0)) {
    auVar19 = glist_getcanvas((long)param_9);
    canvas_vis(0,param_2,param_3,param_4,param_5,param_6,param_7,param_8,auVar19._0_8_,pcVar14,
               auVar19._8_8_,pcVar11,(char *)param_13,param_14,uVar20);
  }
  return;
}


