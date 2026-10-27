// Function : canvas_undo_recreate
// Namespace: 
// Entry    : 0050a4f0
// Prototype: undefined8 canvas_undo_recreate(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long * param_9, uint * param_10, int param_11, long * param_12, char * param_13, undefined * param_14)
// Body     : 0050a4f0 - 0050aa36


undefined8
canvas_undo_recreate
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,long *param_9,
          uint *param_10,int param_11,long *param_12,char *param_13,undefined *param_14)

{
  uint *puVar1;
  undefined8 uVar2;
  int iVar3;
  uint uVar4;
  uint *puVar5;
  char *pcVar6;
  int *piVar7;
  undefined8 *puVar8;
  long *plVar9;
  long lVar10;
  undefined8 uVar11;
  char *pcVar12;
  undefined *puVar13;
  long *plVar14;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 extraout_RDX_01;
  undefined8 extraout_RDX_02;
  undefined8 extraout_RDX_03;
  undefined8 extraout_RDX_04;
  long *plVar15;
  char *pcVar16;
  bool bVar17;
  undefined8 extraout_XMM0_Qa;
  undefined8 uVar18;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  undefined8 extraout_XMM0_Qa_02;
  undefined8 extraout_XMM0_Qa_03;
  undefined8 extraout_XMM0_Qa_04;
  undefined8 extraout_XMM0_Qa_05;
  undefined8 extraout_XMM0_Qa_06;
  undefined1 uVar19;
  undefined8 in_stack_ffffffffffffff18;
  char local_b8 [136];
  
  pcVar16 = param_14;
  if (param_11 == 1) {
    plVar9 = (long *)param_9[6];
    if (plVar9 == (long *)0x0) {
      plVar9 = (long *)0x0;
    }
    else {
      iVar3 = 2;
      plVar14 = plVar9;
      do {
        plVar14 = (long *)plVar14[1];
        iVar3 = iVar3 + -1;
      } while (plVar14 != (long *)0x0);
      param_12 = (long *)0x0;
      if (iVar3 != 1) {
        iVar3 = -iVar3;
        do {
          plVar9 = (long *)plVar9[1];
          bVar17 = iVar3 == 0;
          iVar3 = iVar3 + -1;
          param_12 = (long *)(ulong)bVar17;
          if (plVar9 == (long *)0x0) break;
        } while (!bVar17);
      }
LAB_0050a5a3:
      if (param_11 != 1) {
        bVar17 = param_11 == 2;
        pcVar12 = (char *)param_12;
        if (1 < param_11 - 1U) {
          if (param_11 != 0) {
            return 1;
          }
LAB_0050a5c5:
          binbuf_free(*(void **)(param_10 + 2));
          binbuf_free(*(void **)(param_10 + 4));
          freebytes(param_10);
          return 1;
        }
        goto LAB_0050a5fe;
      }
    }
    uVar11 = canvas_undo_confirmdiscard
                       (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar9);
    bVar17 = false;
    pcVar12 = (char *)param_12;
    pcVar16 = param_14;
    if ((int)uVar11 != 0) {
      return 0;
    }
  }
  else {
    if (param_11 == 0) goto LAB_0050a5c5;
    if (param_11 != 2) {
      return 1;
    }
    uVar4 = *param_10;
    plVar9 = (long *)param_9[6];
    bVar17 = true;
    pcVar12 = (char *)param_12;
    if ((uVar4 != 0) && (plVar9 != (long *)0x0)) {
      do {
        uVar4 = uVar4 - 1;
        plVar9 = (long *)plVar9[1];
        param_12 = (long *)CONCAT71((int7)((ulong)param_12 >> 8),uVar4 == 0);
        if (plVar9 == (long *)0x0) break;
      } while (uVar4 != 0);
      goto LAB_0050a5a3;
    }
  }
LAB_0050a5fe:
  puVar5 = getbytes(0x18);
  *puVar5 = *param_10;
  pcVar6 = (char *)binbuf_new();
  *(char **)(puVar5 + 2) = pcVar6;
  gobj_save(plVar9);
  piVar7 = binbuf_duplicate(*(int **)(param_10 + 4));
  uVar19 = (undefined1)in_stack_ffffffffffffff18;
  *(int **)(puVar5 + 4) = piVar7;
  lVar10 = param_9[0x18];
  uVar11 = extraout_RDX;
  uVar18 = extraout_XMM0_Qa;
  if (lVar10 != 0) {
    puVar8 = *(undefined8 **)(lVar10 + 0x20);
    while (uVar19 = (undefined1)in_stack_ffffffffffffff18, puVar8 != (undefined8 *)0x0) {
      pcVar6 = (char *)*puVar8;
      uVar18 = glist_deselect(uVar18,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9
                              ,(long *)pcVar6,uVar11,puVar8,param_13,pcVar16);
      lVar10 = param_9[0x18];
      uVar11 = extraout_RDX_00;
      puVar8 = *(undefined8 **)(lVar10 + 0x20);
    }
    if ((*(byte *)(lVar10 + 0x88) & 0x20) != 0) {
      *(byte *)(lVar10 + 0x88) = *(byte *)(lVar10 + 0x88) & 0xdf;
      param_13 = local_b8;
      sprintf(param_13,"l%p",*(undefined8 *)(param_9[0x18] + 0x80));
      uVar19 = 0x51;
      pcVar6 = "crs rs";
      pcVar12 = "itemconfigure";
      pcVar16 = "-fill";
      uVar18 = pdgui_vmess(extraout_XMM0_Qa_00,param_2,param_3,param_4,param_5,param_6,param_7,
                           param_8,0,"crs rs",param_9,"itemconfigure",param_13,"-fill",0x51);
      uVar11 = extraout_RDX_01;
      if (param_9[0x18] == 0) goto LAB_0050a75a;
    }
    puVar8 = getbytes(0x10);
    lVar10 = param_9[0x18];
    pcVar12 = *(char **)(lVar10 + 0x20);
    if ((long *)pcVar12 == (long *)0x0) {
      pcVar12 = (char *)0x0;
    }
    else {
      plVar14 = (long *)pcVar12;
      do {
        if ((long *)*plVar14 == plVar9) {
          bug(extraout_XMM0_Qa_01,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
              "glist_select",pcVar6,plVar14,pcVar12,param_13,pcVar16,uVar19);
          lVar10 = param_9[0x18];
          pcVar12 = *(char **)(lVar10 + 0x20);
          break;
        }
        plVar14 = (long *)plVar14[1];
      } while (plVar14 != (long *)0x0);
    }
    puVar8[1] = pcVar12;
    *puVar8 = plVar9;
    *(undefined8 **)(lVar10 + 0x20) = puVar8;
    pcVar6 = (char *)param_9;
    uVar18 = gobj_select(plVar9,(long)param_9);
    uVar11 = extraout_RDX_02;
  }
LAB_0050a75a:
  canvas_doclear(uVar18,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,pcVar6,
                 uVar11,(long *)pcVar12,param_13,pcVar16);
  puVar1 = *(uint **)(param_10 + 2);
  puVar8 = gensym("#A");
  plVar9 = (long *)__tls_get_addr(&PTR_007159b0);
  lVar10 = *plVar9;
  uVar11 = *(undefined8 *)(lVar10 + 0x110);
  uVar18 = *(undefined8 *)(lVar10 + 0x128);
  uVar2 = puVar8[1];
  puVar8[1] = 0;
  *(long **)(lVar10 + 0x128) = param_9;
  *(undefined **)(lVar10 + 0x110) = PTR_pd_canvasmaker_00715c00;
  binbuf_eval(extraout_XMM0_Qa_02,param_2,param_3,param_4,param_5,param_6,param_7,param_8,puVar1,
              (uint *)0x0,0,0,param_13,pcVar16);
  puVar8[1] = uVar2;
  lVar10 = *plVar9;
  *(undefined8 *)(lVar10 + 0x128) = uVar18;
  *(undefined8 *)(lVar10 + 0x110) = uVar11;
  puVar1 = *(uint **)(param_10 + 4);
  puVar8 = gensym("#A");
  lVar10 = *plVar9;
  puVar13 = *(undefined **)(lVar10 + 0x110);
  uVar11 = *(undefined8 *)(lVar10 + 0x128);
  uVar18 = puVar8[1];
  puVar8[1] = 0;
  *(long **)(lVar10 + 0x128) = param_9;
  *(undefined **)(lVar10 + 0x110) = PTR_pd_canvasmaker_00715c00;
  binbuf_eval(extraout_XMM0_Qa_03,param_2,param_3,param_4,param_5,param_6,param_7,param_8,puVar1,
              (uint *)0x0,0,0,param_13,pcVar16);
  puVar8[1] = uVar18;
  lVar10 = *plVar9;
  *(undefined8 *)(lVar10 + 0x128) = uVar11;
  *(undefined **)(lVar10 + 0x110) = puVar13;
  binbuf_free(*(void **)(param_10 + 2));
  binbuf_free(*(void **)(param_10 + 4));
  pcVar12 = (char *)0x18;
  freebytes(param_10);
  lVar10 = canvas_undo_get((long)param_9);
  *(uint **)(*(long *)(lVar10 + 8) + 0x10) = puVar5;
  if (param_11 == 1) {
    pcVar12 = (char *)(ulong)*puVar5;
    uVar11 = canvas_apply_restore_original_position((long)param_9,*puVar5);
    if (((int)uVar11 != 0) && ((*(byte *)(param_9 + 0x1d) & 1) != 0)) {
      canvas_redraw(extraout_XMM0_Qa_04,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                    param_9,pcVar12,extraout_RDX_03,puVar13,param_13,pcVar16,uVar19);
    }
  }
  plVar9 = (long *)__tls_get_addr(&PTR_007159b0);
  plVar9 = *(long **)(*plVar9 + 0x58);
  if ((plVar9 == (long *)0x0) || (*plVar9 != *(long *)PTR_canvas_class_00715918)) {
    if (bVar17) goto LAB_0050a904;
LAB_0050a95e:
    uVar4 = *puVar5;
    plVar9 = (long *)param_9[6];
    if ((uVar4 != 0) && (plVar9 != (long *)0x0)) {
      do {
        uVar4 = uVar4 - 1;
        plVar9 = (long *)plVar9[1];
        if (plVar9 == (long *)0x0) break;
      } while (uVar4 != 0);
    }
  }
  else {
    canvas_loadbang(extraout_XMM0_Qa_05,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                    (long)plVar9,(undefined8 *)pcVar12,extraout_RDX_04,PTR_canvas_class_00715918,
                    param_13,pcVar16);
    if (!bVar17) goto LAB_0050a95e;
LAB_0050a904:
    plVar9 = (long *)param_9[6];
    if (plVar9 == (long *)0x0) {
      plVar9 = (long *)0x0;
      lVar10 = param_9[0x18];
      goto joined_r0x0050a99b;
    }
    iVar3 = 2;
    plVar14 = plVar9;
    do {
      plVar14 = (long *)plVar14[1];
      iVar3 = iVar3 + -1;
    } while (plVar14 != (long *)0x0);
    if (iVar3 != 1) {
      iVar3 = -iVar3;
      do {
        plVar9 = (long *)plVar9[1];
        bVar17 = iVar3 != 0;
        iVar3 = iVar3 + -1;
        if (plVar9 == (long *)0x0) break;
      } while (bVar17);
    }
  }
  lVar10 = param_9[0x18];
joined_r0x0050a99b:
  if (lVar10 == 0) {
    return 1;
  }
  puVar8 = getbytes(0x10);
  lVar10 = param_9[0x18];
  plVar14 = *(long **)(lVar10 + 0x20);
  if (plVar14 == (long *)0x0) {
    plVar14 = (long *)0x0;
  }
  else {
    plVar15 = plVar14;
    do {
      if ((long *)*plVar15 == plVar9) {
        bug(extraout_XMM0_Qa_06,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
            "glist_select",pcVar12,plVar15,plVar14,param_13,pcVar16,uVar19);
        lVar10 = param_9[0x18];
        plVar14 = *(long **)(lVar10 + 0x20);
        break;
      }
      plVar15 = (long *)plVar15[1];
    } while (plVar15 != (long *)0x0);
  }
  puVar8[1] = plVar14;
  *puVar8 = plVar9;
  *(undefined8 **)(lVar10 + 0x20) = puVar8;
  gobj_select(plVar9,(long)param_9);
  return 1;
}


