// Function : canvas_undo_cut
// Namespace: 
// Entry    : 00506460
// Prototype: undefined8 canvas_undo_cut(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long * param_9, long * param_10, ulong param_11, long * param_12, char * param_13, undefined * param_14)
// Body     : 00506460 - 00506b5d


undefined8
canvas_undo_cut(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
               long *param_9,long *param_10,ulong param_11,long *param_12,char *param_13,
               undefined *param_14)

{
  long *plVar1;
  byte bVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  uint uVar6;
  undefined8 *puVar7;
  long *plVar8;
  long lVar9;
  int *piVar10;
  uint *puVar11;
  long *plVar12;
  char *pcVar13;
  ulong extraout_RDX;
  ulong extraout_RDX_00;
  ulong extraout_RDX_01;
  ulong extraout_RDX_02;
  long *plVar14;
  undefined8 extraout_RDX_03;
  ulong extraout_RDX_04;
  ulong extraout_RDX_05;
  undefined8 extraout_RDX_06;
  undefined8 extraout_RDX_07;
  ulong extraout_RDX_08;
  ulong extraout_RDX_09;
  ulong extraout_RDX_10;
  int iVar15;
  uint *puVar16;
  long lVar17;
  uint *puVar18;
  char *pcVar19;
  uint uVar20;
  uint *puVar21;
  char *pcVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  undefined *puVar27;
  bool bVar28;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  undefined8 extraout_XMM0_Qa_02;
  undefined8 extraout_XMM0_Qa_03;
  undefined8 uVar29;
  undefined8 extraout_XMM0_Qa_04;
  undefined1 uVar30;
  char *in_stack_ffffffffffffff28;
  char local_b8 [136];
  
  uVar30 = SUB81(in_stack_ffffffffffffff28,0);
  iVar25 = (int)param_11;
  if (param_10 == (long *)0x0) {
    iVar23 = 0;
  }
  else {
    iVar23 = (int)param_10[3];
  }
  if (iVar25 == 2) {
    if (1 < iVar23 - 1U) {
      if (iVar23 != 3) {
        return 1;
      }
      plVar8 = (long *)param_9[6];
      do {
        plVar12 = plVar8;
        plVar8 = (long *)plVar12[1];
      } while (plVar8 != (long *)0x0);
      uVar29 = glist_delete(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                            plVar12,param_11,param_12,param_13,param_14);
      canvas_dopaste(uVar29,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                     (uint *)param_10[2],extraout_RDX_03,param_12,param_13,param_14);
      puVar18 = (uint *)param_10[1];
      puVar7 = gensym("#A");
      plVar8 = (long *)__tls_get_addr(&PTR_007159b0);
      lVar17 = *plVar8;
      uVar29 = *(undefined8 *)(lVar17 + 0x110);
      uVar4 = *(undefined8 *)(lVar17 + 0x128);
      uVar5 = puVar7[1];
      puVar7[1] = 0;
      *(long **)(lVar17 + 0x128) = param_9;
      *(undefined **)(lVar17 + 0x110) = PTR_pd_canvasmaker_00715c00;
      binbuf_eval(extraout_XMM0_Qa_02,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                  puVar18,(uint *)0x0,0,0,param_13,param_14);
      puVar7[1] = uVar5;
      lVar17 = *plVar8;
      *(undefined8 *)(lVar17 + 0x128) = uVar4;
      *(undefined8 *)(lVar17 + 0x110) = uVar29;
      return 1;
    }
    lVar17 = param_9[0x18];
    pcVar19 = (char *)param_10;
    if (lVar17 != 0) {
      puVar7 = *(undefined8 **)(lVar17 + 0x20);
      while (puVar7 != (undefined8 *)0x0) {
        pcVar19 = (char *)*puVar7;
        param_1 = glist_deselect(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                                 param_9,(long *)pcVar19,param_11,puVar7,param_13,param_14);
        lVar17 = param_9[0x18];
        param_11 = extraout_RDX_00;
        puVar7 = *(undefined8 **)(lVar17 + 0x20);
      }
      bVar2 = *(byte *)(lVar17 + 0x88);
      param_12 = (long *)(ulong)bVar2;
      if ((bVar2 & 0x20) != 0) {
        *(byte *)(lVar17 + 0x88) = bVar2 & 0xdf;
        param_13 = local_b8;
        sprintf(param_13,"l%p",*(undefined8 *)(param_9[0x18] + 0x80));
        in_stack_ffffffffffffff28 = "black";
        pcVar19 = "crs rs";
        pcVar13 = "itemconfigure";
        pcVar22 = "-fill";
        param_1 = pdgui_vmess(extraout_XMM0_Qa_00,param_2,param_3,param_4,param_5,param_6,param_7,
                              param_8,0,"crs rs",param_9,"itemconfigure",param_13,"-fill",0x51);
        param_12 = (long *)pcVar13;
        param_11 = extraout_RDX_01;
        param_14 = pcVar22;
      }
    }
    iVar25 = *(int *)((long)param_10 + 0x1c);
    if (0 < iVar25) {
      lVar17 = 0;
      do {
        iVar23 = *(int *)((long)param_10 + lVar17 * 4 + 0x20);
        plVar8 = (long *)param_9[6];
        if ((iVar23 != 0) && (plVar8 != (long *)0x0)) {
          do {
            iVar23 = iVar23 + -1;
            plVar8 = (long *)plVar8[1];
            param_11 = CONCAT71((int7)(param_11 >> 8),iVar23 == 0);
            if (plVar8 == (long *)0x0) break;
          } while (iVar23 != 0);
        }
        if (param_9[0x18] != 0) {
          puVar7 = getbytes(0x10);
          lVar9 = param_9[0x18];
          plVar12 = *(long **)(lVar9 + 0x20);
          plVar14 = plVar12;
          if (plVar12 == (long *)0x0) {
            plVar12 = (long *)0x0;
          }
          else {
            do {
              if ((long *)*plVar14 == plVar8) {
                bug(extraout_XMM0_Qa_01,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                    "glist_select",pcVar19,plVar14,plVar12,param_13,param_14,
                    (char)in_stack_ffffffffffffff28);
                lVar9 = param_9[0x18];
                plVar12 = *(long **)(lVar9 + 0x20);
                break;
              }
              plVar1 = plVar14 + 1;
              plVar14 = (long *)*plVar1;
            } while ((long *)*plVar1 != (long *)0x0);
          }
          puVar7[1] = plVar12;
          *puVar7 = plVar8;
          *(undefined8 **)(lVar9 + 0x20) = puVar7;
          pcVar19 = (char *)param_9;
          param_1 = gobj_select(plVar8,(long)param_9);
          iVar25 = *(int *)((long)param_10 + 0x1c);
          param_11 = extraout_RDX_02;
        }
        lVar17 = lVar17 + 1;
        param_12 = (long *)(long)iVar25;
      } while (lVar17 < (long)param_12);
    }
    canvas_doclear(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,pcVar19,
                   param_11,param_12,param_13,param_14);
    return 1;
  }
  if (iVar25 != 1) {
    if (param_10 == (long *)0x0) {
      return 1;
    }
    if (iVar25 != 0) {
      return 1;
    }
    if ((void *)*param_10 != (void *)0x0) {
      binbuf_free((void *)*param_10);
    }
    if ((void *)param_10[1] != (void *)0x0) {
      binbuf_free((void *)param_10[1]);
    }
    if ((void *)param_10[2] != (void *)0x0) {
      binbuf_free((void *)param_10[2]);
    }
    freebytes(param_10);
    return 1;
  }
  if (iVar23 == 3) {
    lVar17 = param_9[0x18];
    pcVar19 = (char *)param_10;
    if (lVar17 != 0) {
      puVar7 = *(undefined8 **)(lVar17 + 0x20);
      while (uVar30 = SUB81(in_stack_ffffffffffffff28,0), puVar7 != (undefined8 *)0x0) {
        pcVar19 = (char *)*puVar7;
        param_1 = glist_deselect(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                                 param_9,(long *)pcVar19,param_11,puVar7,param_13,param_14);
        lVar17 = param_9[0x18];
        param_11 = extraout_RDX_04;
        puVar7 = *(undefined8 **)(lVar17 + 0x20);
      }
      bVar2 = *(byte *)(lVar17 + 0x88);
      param_12 = (long *)(ulong)bVar2;
      if ((bVar2 & 0x20) != 0) {
        *(byte *)(lVar17 + 0x88) = bVar2 & 0xdf;
        param_13 = local_b8;
        sprintf(param_13,"l%p",*(undefined8 *)(param_9[0x18] + 0x80));
        uVar30 = 0x51;
        pcVar19 = "crs rs";
        pcVar13 = "itemconfigure";
        pcVar22 = "-fill";
        param_1 = pdgui_vmess(extraout_XMM0_Qa_03,param_2,param_3,param_4,param_5,param_6,param_7,
                              param_8,0,"crs rs",param_9,"itemconfigure",param_13,"-fill",0x51);
        param_12 = (long *)pcVar13;
        param_11 = extraout_RDX_05;
        param_14 = pcVar22;
      }
    }
    plVar8 = (long *)param_9[6];
    do {
      plVar12 = plVar8;
      plVar8 = (long *)plVar12[1];
    } while ((long *)plVar12[1] != (long *)0x0);
    if (param_10[2] == 0) {
      uVar29 = glist_noselect(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                              param_9,pcVar19,param_11,param_12,param_13,param_14);
      plVar8 = plVar12;
      uVar29 = glist_select(uVar29,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                            (long)param_9,plVar12,extraout_RDX_06,param_12,param_13,param_14);
      piVar10 = canvas_docopy(uVar29,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                              (long)param_9);
      param_10[2] = (long)piVar10;
      param_1 = glist_noselect(extraout_XMM0_Qa_04,param_2,param_3,param_4,param_5,param_6,param_7,
                               param_8,param_9,plVar8,extraout_RDX_07,param_12,param_13,param_14);
      param_11 = extraout_RDX_08;
    }
    param_1 = glist_delete(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                           plVar12,param_11,param_12,param_13,param_14);
    param_11 = extraout_RDX_09;
  }
  else if ((iVar23 != 2) && (iVar23 != 1)) {
    puVar18 = (uint *)0x0;
    goto joined_r0x00506b53;
  }
  puVar18 = (uint *)*param_10;
  param_1 = canvas_dopaste(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                           puVar18,param_11,param_12,param_13,param_14);
  param_11 = extraout_RDX_10;
joined_r0x00506b53:
  if (param_10 != (long *)0x0) {
    puVar11 = (uint *)param_10[1];
    puVar7 = gensym("#A");
    plVar8 = (long *)__tls_get_addr(&PTR_007159b0);
    lVar17 = *plVar8;
    uVar29 = *(undefined8 *)(lVar17 + 0x110);
    uVar4 = *(undefined8 *)(lVar17 + 0x128);
    uVar5 = puVar7[1];
    puVar7[1] = 0;
    *(long **)(lVar17 + 0x128) = param_9;
    *(undefined **)(lVar17 + 0x110) = PTR_pd_canvasmaker_00715c00;
    puVar18 = (uint *)0x0;
    param_1 = binbuf_eval(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                          puVar11,(uint *)0x0,0,0,param_13,param_14);
    puVar7[1] = uVar5;
    lVar17 = *plVar8;
    *(undefined8 *)(lVar17 + 0x128) = uVar4;
    *(undefined8 *)(lVar17 + 0x110) = uVar29;
    param_11 = extraout_RDX;
  }
  if (iVar23 - 1U < 2) {
    iVar25 = 0;
    for (lVar17 = param_9[6]; lVar17 != 0; lVar17 = *(long *)(lVar17 + 8)) {
      iVar25 = iVar25 + 1;
    }
    puVar11 = (uint *)0x0;
    uVar6 = *(uint *)((long)param_10 + 0x1c);
    if (0 < (int)uVar6) {
      param_13 = (char *)(ulong)(iVar25 - uVar6);
      iVar26 = iVar25 - uVar6;
      iVar23 = iVar26 + -2;
      iVar24 = iVar26 + -1;
      puVar27 = (undefined *)0x0;
      do {
        uVar20 = (iVar25 - uVar6) + (int)puVar27;
        uVar3 = *(uint *)((long)param_10 + (long)puVar27 * 4 + 0x20);
        param_11 = (ulong)uVar3;
        if (uVar20 != uVar3) {
          puVar11 = (uint *)param_9[6];
          puVar18 = puVar11;
          if ((uVar20 != 1) && (puVar11 != (uint *)0x0)) {
            iVar15 = iVar23;
            do {
              puVar18 = *(uint **)(puVar18 + 2);
              bVar28 = iVar15 != 0;
              iVar15 = iVar15 + -1;
              if (puVar18 == (uint *)0x0) break;
            } while (bVar28);
          }
          puVar16 = puVar11;
          if ((uVar20 != 0) && (puVar11 != (uint *)0x0)) {
            iVar15 = iVar24;
            do {
              puVar16 = *(uint **)(puVar16 + 2);
              bVar28 = iVar15 != 0;
              iVar15 = iVar15 + -1;
              if (puVar16 == (uint *)0x0) break;
            } while (bVar28);
          }
          if ((uVar20 != 0xffffffff) && (puVar11 != (uint *)0x0)) {
            iVar15 = iVar26;
            do {
              puVar11 = *(uint **)(puVar11 + 2);
              bVar28 = iVar15 != 0;
              iVar15 = iVar15 + -1;
              if (puVar11 == (uint *)0x0) break;
            } while (bVar28);
          }
          if (uVar3 == 0) {
            if (puVar11 != (uint *)0x0 && puVar18 != (uint *)0x0) {
LAB_005066ec:
              *(uint **)(puVar18 + 2) = puVar11;
            }
            else if ((puVar18 != (uint *)0x0) && (puVar11 == (uint *)0x0)) {
              puVar11 = (uint *)0x0;
              goto LAB_005066ec;
            }
            *(long *)(puVar16 + 2) = param_9[6];
            param_9[6] = (long)puVar16;
          }
          else {
            if (puVar11 != (uint *)0x0 && puVar18 != (uint *)0x0) {
LAB_00506675:
              *(uint **)(puVar18 + 2) = puVar11;
            }
            else if ((puVar18 != (uint *)0x0) && (puVar11 == (uint *)0x0)) {
              puVar11 = (uint *)0x0;
              goto LAB_00506675;
            }
            puVar11 = (uint *)param_9[6];
            puVar18 = (uint *)(ulong)(uVar3 - 1);
            puVar21 = puVar11;
            if ((uVar3 - 1 != 0) && (puVar11 != (uint *)0x0)) {
              param_11 = (ulong)(uVar3 - 2);
              do {
                puVar21 = *(uint **)(puVar21 + 2);
                iVar15 = (int)param_11;
                param_11 = (ulong)(iVar15 - 1);
                if (puVar21 == (uint *)0x0) break;
              } while (iVar15 != 0);
            }
            if (puVar11 == (uint *)0x0) {
              puVar11 = (uint *)0x0;
            }
            else {
              do {
                puVar11 = *(uint **)(puVar11 + 2);
                iVar15 = (int)puVar18;
                puVar18 = (uint *)(ulong)(iVar15 - 1);
                if (puVar11 == (uint *)0x0) break;
              } while (iVar15 != 0);
            }
            *(uint **)(puVar21 + 2) = puVar16;
            *(uint **)(puVar16 + 2) = puVar11;
          }
        }
        puVar27 = puVar27 + 1;
        iVar23 = iVar23 + 1;
        iVar24 = iVar24 + 1;
        iVar26 = iVar26 + 1;
      } while (puVar27 != (undefined *)(ulong)uVar6);
    }
    if ((*(byte *)(param_9 + 0x1d) & 1) != 0) {
      canvas_redraw(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                    (char *)puVar18,param_11,(undefined *)puVar11,param_13,(undefined *)(ulong)uVar6
                    ,uVar30);
    }
    if (((param_9[9] != 0) && ((*(byte *)((long)param_9 + 0xe9) & 8) == 0)) &&
       (uVar6 = glist_isvisible(param_9[9]), uVar6 != 0)) {
      gobj_vis(param_9,(long *)param_9[9],0);
      gobj_vis(param_9,(long *)param_9[9],1);
    }
  }
  return 1;
}


