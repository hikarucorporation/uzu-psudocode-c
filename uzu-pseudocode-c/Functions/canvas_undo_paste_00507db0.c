// Function : canvas_undo_paste
// Namespace: 
// Entry    : 00507db0
// Prototype: undefined8 canvas_undo_paste(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long * param_9, long * param_10, undefined8 param_11, long * param_12, char * param_13, undefined * param_14)
// Body     : 00507db0 - 005081c0


undefined8
canvas_undo_paste(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 long *param_9,long *param_10,undefined8 param_11,long *param_12,char *param_13,
                 undefined *param_14)

{
  byte bVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long lVar5;
  char *pcVar6;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 extraout_RDX_01;
  undefined8 extraout_RDX_02;
  undefined8 extraout_RDX_03;
  long *plVar7;
  undefined8 extraout_RDX_04;
  undefined8 extraout_RDX_05;
  long *plVar8;
  char *pcVar9;
  char *pcVar10;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  undefined8 extraout_XMM0_Qa_02;
  undefined8 extraout_XMM0_Qa_03;
  undefined1 uVar11;
  char *in_stack_ffffffffffffff38;
  char local_b8 [136];
  
  uVar11 = SUB81(in_stack_ffffffffffffff38,0);
  iVar2 = (int)param_11;
  if (iVar2 == 0) {
    if ((void *)param_10[2] != (void *)0x0) {
      binbuf_free((void *)param_10[2]);
    }
    freebytes(param_10);
    return 1;
  }
  if (iVar2 == 2) {
    lVar5 = param_9[0x18];
    pcVar9 = (char *)param_10;
    if (lVar5 != 0) {
      puVar4 = *(undefined8 **)(lVar5 + 0x20);
      while (uVar11 = SUB81(in_stack_ffffffffffffff38,0), puVar4 != (undefined8 *)0x0) {
        pcVar9 = (char *)*puVar4;
        param_1 = glist_deselect(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                                 param_9,(long *)pcVar9,param_11,puVar4,param_13,param_14);
        lVar5 = param_9[0x18];
        param_11 = extraout_RDX_00;
        puVar4 = *(undefined8 **)(lVar5 + 0x20);
      }
      bVar1 = *(byte *)(lVar5 + 0x88);
      param_12 = (long *)(ulong)bVar1;
      if ((bVar1 & 0x20) != 0) {
        *(byte *)(lVar5 + 0x88) = bVar1 & 0xdf;
        param_13 = local_b8;
        sprintf(param_13,"l%p",*(undefined8 *)(param_9[0x18] + 0x80));
        uVar11 = 0x51;
        pcVar9 = "crs rs";
        pcVar6 = "itemconfigure";
        pcVar10 = "-fill";
        param_1 = pdgui_vmess(extraout_XMM0_Qa_00,param_2,param_3,param_4,param_5,param_6,param_7,
                              param_8,0,"crs rs",param_9,"itemconfigure",param_13,"-fill",0x51);
        param_12 = (long *)pcVar6;
        param_11 = extraout_RDX_01;
        param_14 = pcVar10;
      }
    }
    iVar2 = *(int *)((long)param_10 + 4);
    if (-1 < iVar2) {
      plVar8 = (long *)param_9[6];
      if ((iVar2 != 0) && (plVar8 != (long *)0x0)) {
        do {
          iVar2 = iVar2 + -1;
          plVar8 = (long *)plVar8[1];
          param_12 = (long *)CONCAT71((int7)((ulong)param_12 >> 8),iVar2 == 0);
          if (plVar8 == (long *)0x0) break;
        } while (iVar2 != 0);
      }
      if (param_9[0x18] != 0) {
        puVar4 = getbytes(0x10);
        lVar5 = param_9[0x18];
        param_12 = *(long **)(lVar5 + 0x20);
        if (param_12 == (long *)0x0) {
          param_12 = (long *)0x0;
        }
        else {
          plVar7 = param_12;
          do {
            if ((long *)*plVar7 == plVar8) {
              bug(extraout_XMM0_Qa_01,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                  "glist_select",pcVar9,plVar7,param_12,param_13,param_14,uVar11);
              lVar5 = param_9[0x18];
              param_12 = *(long **)(lVar5 + 0x20);
              break;
            }
            plVar7 = (long *)plVar7[1];
          } while (plVar7 != (long *)0x0);
        }
        puVar4[1] = param_12;
        *puVar4 = plVar8;
        *(undefined8 **)(lVar5 + 0x20) = puVar4;
        param_1 = gobj_select(plVar8,(long)param_9);
        param_11 = extraout_RDX_05;
      }
    }
    canvas_dopaste(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                   (uint *)param_10[2],param_11,param_12,param_13,param_14);
    if ((int)param_10[1] == 0) {
      return 1;
    }
    for (puVar4 = *(undefined8 **)(param_9[0x18] + 0x20); puVar4 != (undefined8 *)0x0;
        puVar4 = (undefined8 *)puVar4[1]) {
      gobj_displace((long *)*puVar4);
    }
    return 1;
  }
  if (iVar2 != 1) {
    return 1;
  }
  iVar2 = (int)*param_10;
  plVar8 = (long *)param_9[6];
  pcVar6 = (char *)param_12;
  pcVar9 = (char *)param_10;
  pcVar10 = param_14;
  if ((iVar2 != 0) && (plVar8 != (long *)0x0)) {
    do {
      iVar2 = iVar2 + -1;
      plVar8 = (long *)plVar8[1];
      pcVar6 = (char *)CONCAT71((int7)((ulong)pcVar6 >> 8),iVar2 == 0);
      if (plVar8 == (long *)0x0) break;
    } while (iVar2 != 0);
  }
  for (; plVar8 != (long *)0x0; plVar8 = (long *)plVar8[1]) {
    uVar3 = canvas_undo_confirmdiscard
                      (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar8);
    if ((int)uVar3 != 0) {
      return 0;
    }
    param_11 = extraout_RDX;
    param_1 = extraout_XMM0_Qa;
  }
  lVar5 = param_9[0x18];
  if (lVar5 != 0) {
    while (puVar4 = *(undefined8 **)(lVar5 + 0x20), puVar4 != (undefined8 *)0x0) {
      pcVar9 = (char *)*puVar4;
      param_1 = glist_deselect(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                               param_9,(long *)pcVar9,param_11,puVar4,param_13,pcVar10);
      param_11 = extraout_RDX_02;
      lVar5 = param_9[0x18];
    }
    bVar1 = *(byte *)(lVar5 + 0x88);
    pcVar6 = (char *)(ulong)bVar1;
    if ((bVar1 & 0x20) != 0) {
      *(byte *)(lVar5 + 0x88) = bVar1 & 0xdf;
      param_13 = local_b8;
      sprintf(param_13,"l%p",*(undefined8 *)(param_9[0x18] + 0x80));
      in_stack_ffffffffffffff38 = "black";
      pcVar9 = "crs rs";
      pcVar6 = "itemconfigure";
      pcVar10 = "-fill";
      param_1 = pdgui_vmess(extraout_XMM0_Qa_02,param_2,param_3,param_4,param_5,param_6,param_7,
                            param_8,0,"crs rs",param_9,"itemconfigure",param_13,"-fill",0x51);
      param_11 = extraout_RDX_03;
    }
  }
  iVar2 = (int)*param_10;
  plVar8 = (long *)param_9[6];
  if ((iVar2 != 0) && (plVar8 != (long *)0x0)) {
    do {
      iVar2 = iVar2 + -1;
      plVar8 = (long *)plVar8[1];
      pcVar6 = (char *)CONCAT71((int7)((ulong)pcVar6 >> 8),iVar2 == 0);
      if (plVar8 == (long *)0x0) break;
    } while (iVar2 != 0);
  }
  if ((plVar8 == (long *)0x0) || (lVar5 = param_9[0x18], lVar5 == 0)) {
LAB_0050811b:
    canvas_doclear(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,pcVar9,
                   param_11,(long *)pcVar6,param_13,pcVar10);
    return 1;
  }
  do {
    if (lVar5 != 0) {
      puVar4 = getbytes(0x10);
      lVar5 = param_9[0x18];
      pcVar6 = *(char **)(lVar5 + 0x20);
      plVar7 = (long *)pcVar6;
      if ((long *)pcVar6 == (long *)0x0) {
        pcVar6 = (char *)0x0;
      }
      else {
        do {
          if ((long *)*plVar7 == plVar8) {
            bug(extraout_XMM0_Qa_03,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                "glist_select",pcVar9,plVar7,pcVar6,param_13,pcVar10,(char)in_stack_ffffffffffffff38
               );
            lVar5 = param_9[0x18];
            pcVar6 = *(char **)(lVar5 + 0x20);
            break;
          }
          plVar7 = (long *)plVar7[1];
        } while (plVar7 != (long *)0x0);
      }
      puVar4[1] = pcVar6;
      *puVar4 = plVar8;
      *(undefined8 **)(lVar5 + 0x20) = puVar4;
      pcVar9 = (char *)param_9;
      param_1 = gobj_select(plVar8,(long)param_9);
      param_11 = extraout_RDX_04;
    }
    plVar8 = (long *)plVar8[1];
    if (plVar8 == (long *)0x0) goto LAB_0050811b;
    lVar5 = param_9[0x18];
  } while( true );
}


