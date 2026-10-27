// Function : canvas_undo_create
// Namespace: 
// Entry    : 00509da0
// Prototype: undefined8 canvas_undo_create(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long * param_9, long * param_10, undefined8 param_11, long * param_12, char * param_13, undefined * param_14)
// Body     : 00509da0 - 0050a150


undefined8
canvas_undo_create(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  long *param_9,long *param_10,undefined8 param_11,long *param_12,char *param_13,
                  undefined *param_14)

{
  byte bVar1;
  uint *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  undefined8 *puVar7;
  long *plVar8;
  long lVar9;
  char *pcVar10;
  long *plVar11;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 extraout_RDX_01;
  long *plVar12;
  undefined8 extraout_RDX_02;
  char *pcVar13;
  undefined8 *puVar14;
  char *pcVar15;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  undefined8 extraout_XMM0_Qa_02;
  undefined8 uVar16;
  undefined8 extraout_XMM0_Qa_03;
  undefined1 uVar17;
  undefined8 in_stack_ffffffffffffff28;
  char local_b8 [136];
  
  uVar17 = (undefined1)in_stack_ffffffffffffff28;
  iVar6 = (int)param_11;
  if (iVar6 == 0) {
    binbuf_free((void *)param_10[1]);
    binbuf_free((void *)param_10[2]);
    freebytes(param_10);
  }
  else if (iVar6 == 2) {
    puVar2 = (uint *)param_10[1];
    puVar7 = gensym("#A");
    plVar8 = (long *)__tls_get_addr(&PTR_007159b0);
    lVar9 = *plVar8;
    uVar3 = *(undefined8 *)(lVar9 + 0x110);
    uVar4 = *(undefined8 *)(lVar9 + 0x128);
    uVar5 = puVar7[1];
    puVar7[1] = 0;
    *(long **)(lVar9 + 0x128) = param_9;
    *(undefined **)(lVar9 + 0x110) = PTR_pd_canvasmaker_00715c00;
    binbuf_eval(extraout_XMM0_Qa_01,param_2,param_3,param_4,param_5,param_6,param_7,param_8,puVar2,
                (uint *)0x0,0,0,param_13,param_14);
    puVar7[1] = uVar5;
    lVar9 = *plVar8;
    *(undefined8 *)(lVar9 + 0x128) = uVar4;
    *(undefined8 *)(lVar9 + 0x110) = uVar3;
    puVar2 = (uint *)param_10[2];
    puVar7 = gensym("#A");
    lVar9 = *plVar8;
    uVar3 = *(undefined8 *)(lVar9 + 0x110);
    uVar4 = *(undefined8 *)(lVar9 + 0x128);
    uVar5 = puVar7[1];
    puVar7[1] = 0;
    *(long **)(lVar9 + 0x128) = param_9;
    *(undefined **)(lVar9 + 0x110) = PTR_pd_canvasmaker_00715c00;
    puVar14 = (undefined8 *)0x0;
    uVar16 = binbuf_eval(extraout_XMM0_Qa_02,param_2,param_3,param_4,param_5,param_6,param_7,param_8
                         ,puVar2,(uint *)0x0,0,0,param_13,param_14);
    puVar7[1] = uVar5;
    lVar9 = *plVar8;
    *(undefined8 *)(lVar9 + 0x128) = uVar4;
    *(undefined8 *)(lVar9 + 0x110) = uVar3;
    plVar8 = *(long **)(lVar9 + 0x58);
    if ((plVar8 != (long *)0x0) && (*plVar8 == *(long *)PTR_canvas_class_00715918)) {
      canvas_loadbang(uVar16,param_2,param_3,param_4,param_5,param_6,param_7,param_8,(long)plVar8,
                      puVar14,extraout_RDX_01,PTR_canvas_class_00715918,param_13,param_14);
    }
    iVar6 = (int)*param_10;
    plVar8 = (long *)param_9[6];
    if ((iVar6 != 0) && (plVar8 != (long *)0x0)) {
      do {
        iVar6 = iVar6 + -1;
        plVar8 = (long *)plVar8[1];
        if (plVar8 == (long *)0x0) break;
      } while (iVar6 != 0);
    }
    if (param_9[0x18] != 0) {
      puVar7 = getbytes(0x10);
      lVar9 = param_9[0x18];
      plVar11 = *(long **)(lVar9 + 0x20);
      if (plVar11 == (long *)0x0) {
        plVar11 = (long *)0x0;
      }
      else {
        plVar12 = plVar11;
        do {
          if ((long *)*plVar12 == plVar8) {
            bug(extraout_XMM0_Qa_03,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                "glist_select",puVar14,plVar12,plVar11,param_13,param_14,uVar17);
            lVar9 = param_9[0x18];
            plVar11 = *(long **)(lVar9 + 0x20);
            break;
          }
          plVar12 = (long *)plVar12[1];
        } while (plVar12 != (long *)0x0);
      }
      puVar7[1] = plVar11;
      *puVar7 = plVar8;
      *(undefined8 **)(lVar9 + 0x20) = puVar7;
      gobj_select(plVar8,(long)param_9);
    }
  }
  else if (iVar6 == 1) {
    lVar9 = param_9[0x18];
    pcVar13 = (char *)param_10;
    if (lVar9 != 0) {
      puVar7 = *(undefined8 **)(lVar9 + 0x20);
      while (uVar17 = (undefined1)in_stack_ffffffffffffff28, puVar7 != (undefined8 *)0x0) {
        pcVar13 = (char *)*puVar7;
        param_1 = glist_deselect(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                                 param_9,(long *)pcVar13,param_11,puVar7,param_13,param_14);
        lVar9 = param_9[0x18];
        param_11 = extraout_RDX;
        puVar7 = *(undefined8 **)(lVar9 + 0x20);
      }
      bVar1 = *(byte *)(lVar9 + 0x88);
      param_12 = (long *)(ulong)bVar1;
      if ((bVar1 & 0x20) != 0) {
        *(byte *)(lVar9 + 0x88) = bVar1 & 0xdf;
        param_13 = local_b8;
        sprintf(param_13,"l%p",*(undefined8 *)(param_9[0x18] + 0x80));
        uVar17 = 0x51;
        pcVar13 = "crs rs";
        pcVar10 = "itemconfigure";
        pcVar15 = "-fill";
        param_1 = pdgui_vmess(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,
                              param_8,0,"crs rs",param_9,"itemconfigure",param_13,"-fill",0x51);
        param_12 = (long *)pcVar10;
        param_11 = extraout_RDX_00;
        param_14 = pcVar15;
      }
    }
    iVar6 = (int)*param_10;
    plVar8 = (long *)param_9[6];
    if ((iVar6 != 0) && (plVar8 != (long *)0x0)) {
      do {
        iVar6 = iVar6 + -1;
        plVar8 = (long *)plVar8[1];
        param_12 = (long *)CONCAT71((int7)((ulong)param_12 >> 8),iVar6 == 0);
        if (plVar8 == (long *)0x0) break;
      } while (iVar6 != 0);
    }
    if (param_9[0x18] != 0) {
      puVar7 = getbytes(0x10);
      lVar9 = param_9[0x18];
      param_12 = *(long **)(lVar9 + 0x20);
      if (param_12 == (long *)0x0) {
        param_12 = (long *)0x0;
      }
      else {
        plVar11 = param_12;
        do {
          if ((long *)*plVar11 == plVar8) {
            bug(extraout_XMM0_Qa_00,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                "glist_select",pcVar13,plVar11,param_12,param_13,param_14,uVar17);
            lVar9 = param_9[0x18];
            param_12 = *(long **)(lVar9 + 0x20);
            break;
          }
          plVar11 = (long *)plVar11[1];
        } while (plVar11 != (long *)0x0);
      }
      puVar7[1] = param_12;
      *puVar7 = plVar8;
      *(undefined8 **)(lVar9 + 0x20) = puVar7;
      pcVar13 = (char *)param_9;
      param_1 = gobj_select(plVar8,(long)param_9);
      param_11 = extraout_RDX_02;
    }
    canvas_doclear(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,pcVar13,
                   param_11,param_12,param_13,param_14);
  }
  return 1;
}


