// Function : canvas_undo_apply
// Namespace: 
// Entry    : 00508c50
// Prototype: undefined8 canvas_undo_apply(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long * param_9, long * param_10, undefined8 param_11, long * param_12, char * param_13, undefined * param_14)
// Body     : 00508c50 - 00508ee4


undefined8
canvas_undo_apply(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 long *param_9,long *param_10,undefined8 param_11,long *param_12,char *param_13,
                 undefined *param_14)

{
  byte bVar1;
  uint *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  undefined8 *puVar6;
  long lVar7;
  int *piVar8;
  long *plVar9;
  char *pcVar10;
  undefined *puVar11;
  undefined8 extraout_RDX;
  long *plVar12;
  undefined8 extraout_RDX_00;
  undefined8 extraout_RDX_01;
  undefined8 extraout_RDX_02;
  char *pcVar13;
  char *pcVar14;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  undefined8 uVar15;
  undefined8 extraout_XMM0_Qa_02;
  undefined8 extraout_XMM0_Qa_03;
  undefined1 uVar16;
  undefined8 in_stack_ffffffffffffff28;
  char local_b8 [136];
  
  uVar16 = (undefined1)in_stack_ffffffffffffff28;
  if ((int)param_11 - 1U < 2) {
    lVar7 = param_9[0x18];
    pcVar13 = (char *)param_10;
    if (lVar7 != 0) {
      puVar6 = *(undefined8 **)(lVar7 + 0x20);
      while (uVar16 = (undefined1)in_stack_ffffffffffffff28, puVar6 != (undefined8 *)0x0) {
        pcVar13 = (char *)*puVar6;
        param_1 = glist_deselect(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                                 param_9,(long *)pcVar13,param_11,puVar6,param_13,param_14);
        lVar7 = param_9[0x18];
        param_11 = extraout_RDX;
        puVar6 = *(undefined8 **)(lVar7 + 0x20);
      }
      bVar1 = *(byte *)(lVar7 + 0x88);
      param_12 = (long *)(ulong)bVar1;
      if ((bVar1 & 0x20) != 0) {
        *(byte *)(lVar7 + 0x88) = bVar1 & 0xdf;
        param_13 = local_b8;
        sprintf(param_13,"l%p",*(undefined8 *)(param_9[0x18] + 0x80));
        uVar16 = 0x51;
        pcVar13 = "crs rs";
        pcVar10 = "itemconfigure";
        pcVar14 = "-fill";
        param_1 = pdgui_vmess(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,
                              param_8,0,"crs rs",param_9,"itemconfigure",param_13,"-fill",0x51);
        param_12 = (long *)pcVar10;
        param_14 = pcVar14;
      }
    }
    iVar5 = (int)param_10[2];
    plVar9 = (long *)param_9[6];
    if ((iVar5 != 0) && (plVar9 != (long *)0x0)) {
      do {
        iVar5 = iVar5 + -1;
        plVar9 = (long *)plVar9[1];
        param_12 = (long *)CONCAT71((int7)((ulong)param_12 >> 8),iVar5 == 0);
        if (plVar9 == (long *)0x0) break;
      } while (iVar5 != 0);
    }
    if (param_9[0x18] != 0) {
      puVar6 = getbytes(0x10);
      lVar7 = param_9[0x18];
      param_12 = *(long **)(lVar7 + 0x20);
      if (param_12 == (long *)0x0) {
        param_12 = (long *)0x0;
      }
      else {
        plVar12 = param_12;
        do {
          if ((long *)*plVar12 == plVar9) {
            bug(extraout_XMM0_Qa_00,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                "glist_select",pcVar13,plVar12,param_12,param_13,param_14,uVar16);
            lVar7 = param_9[0x18];
            param_12 = *(long **)(lVar7 + 0x20);
            break;
          }
          plVar12 = (long *)plVar12[1];
        } while (plVar12 != (long *)0x0);
      }
      puVar6[1] = param_12;
      *puVar6 = plVar9;
      *(undefined8 **)(lVar7 + 0x20) = puVar6;
      pcVar13 = (char *)param_9;
      param_1 = gobj_select(plVar9,(long)param_9);
    }
    piVar8 = canvas_docopy(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                           (long)param_9);
    uVar15 = canvas_doclear(extraout_XMM0_Qa_01,param_2,param_3,param_4,param_5,param_6,param_7,
                            param_8,param_9,pcVar13,extraout_RDX_00,param_12,param_13,param_14);
    canvas_dopaste(uVar15,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                   (uint *)*param_10,extraout_RDX_01,param_12,param_13,param_14);
    *param_10 = (long)piVar8;
    puVar2 = (uint *)param_10[1];
    puVar6 = gensym("#A");
    plVar9 = (long *)__tls_get_addr(&PTR_007159b0);
    lVar7 = *plVar9;
    uVar15 = *(undefined8 *)(lVar7 + 0x110);
    uVar3 = *(undefined8 *)(lVar7 + 0x128);
    uVar4 = puVar6[1];
    puVar6[1] = 0;
    *(long **)(lVar7 + 0x128) = param_9;
    *(undefined **)(lVar7 + 0x110) = PTR_pd_canvasmaker_00715c00;
    puVar11 = (undefined *)0x0;
    binbuf_eval(extraout_XMM0_Qa_02,param_2,param_3,param_4,param_5,param_6,param_7,param_8,puVar2,
                (uint *)0x0,0,0,param_13,param_14);
    puVar6[1] = uVar4;
    lVar7 = *plVar9;
    *(undefined8 *)(lVar7 + 0x128) = uVar3;
    *(undefined8 *)(lVar7 + 0x110) = uVar15;
    pcVar13 = (char *)(ulong)*(uint *)(param_10 + 2);
    uVar15 = canvas_apply_restore_original_position((long)param_9,*(uint *)(param_10 + 2));
    if (((int)uVar15 != 0) && ((*(byte *)(param_9 + 0x1d) & 1) != 0)) {
      canvas_redraw(extraout_XMM0_Qa_03,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                    param_9,pcVar13,extraout_RDX_02,puVar11,param_13,param_14,uVar16);
    }
  }
  else if ((int)param_11 == 0) {
    if ((void *)*param_10 != (void *)0x0) {
      binbuf_free((void *)*param_10);
    }
    if ((void *)param_10[1] != (void *)0x0) {
      binbuf_free((void *)param_10[1]);
    }
    freebytes(param_10);
  }
  return 1;
}


