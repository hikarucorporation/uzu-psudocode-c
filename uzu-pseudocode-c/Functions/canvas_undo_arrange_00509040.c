// Function : canvas_undo_arrange
// Namespace: 
// Entry    : 00509040
// Prototype: undefined8 canvas_undo_arrange(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long * param_9, long * param_10, ulong param_11, undefined8 param_12, char * param_13, undefined * param_14)
// Body     : 00509040 - 00509564


undefined8
canvas_undo_arrange(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                   long *param_9,long *param_10,ulong param_11,undefined8 param_12,char *param_13,
                   undefined *param_14)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined8 *puVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  undefined *puVar8;
  long *plVar9;
  ulong extraout_RDX;
  ulong extraout_RDX_00;
  ulong extraout_RDX_01;
  ulong extraout_RDX_02;
  ulong extraout_RDX_03;
  ulong uVar10;
  long *plVar11;
  char *pcVar12;
  undefined7 uVar13;
  char *pcVar14;
  bool bVar15;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  undefined4 extraout_XMM0_Db_01;
  undefined4 extraout_XMM0_Db_02;
  undefined1 uVar16;
  undefined8 in_stack_ffffffffffffff48;
  char local_a8 [128];
  
  uVar10 = param_11;
  pcVar12 = (char *)param_10;
  pcVar14 = param_14;
  if ((*(byte *)(param_9 + 0x1d) & 0x20) == 0) {
    param_1 = canvas_editmode(DAT_005d9038,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                              (ulong)param_9);
    uVar10 = extraout_RDX;
    pcVar14 = param_14;
  }
  uVar16 = (undefined1)in_stack_ffffffffffffff48;
  iVar3 = (int)param_11;
  if (iVar3 == 0) {
    freebytes(param_10);
    return 1;
  }
  if (iVar3 != 2) {
    if (iVar3 != 1) {
      return 1;
    }
    iVar3 = *(int *)((long)param_10 + 4);
    if (iVar3 == (int)*param_10) {
      return 1;
    }
    plVar11 = (long *)param_9[6];
    if ((iVar3 != 0) && (plVar11 != (long *)0x0)) {
      do {
        iVar3 = iVar3 + -1;
        plVar11 = (long *)plVar11[1];
        if (plVar11 == (long *)0x0) break;
      } while (iVar3 != 0);
    }
    lVar5 = param_9[0x18];
    if (lVar5 != 0) {
      puVar4 = *(undefined8 **)(lVar5 + 0x20);
      while (uVar16 = (undefined1)in_stack_ffffffffffffff48, puVar4 != (undefined8 *)0x0) {
        pcVar12 = (char *)*puVar4;
        param_1 = glist_deselect(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                                 param_9,(long *)pcVar12,uVar10,puVar4,param_13,pcVar14);
        lVar5 = param_9[0x18];
        uVar10 = extraout_RDX_00;
        puVar4 = *(undefined8 **)(lVar5 + 0x20);
      }
      if ((*(byte *)(lVar5 + 0x88) & 0x20) != 0) {
        *(byte *)(lVar5 + 0x88) = *(byte *)(lVar5 + 0x88) & 0xdf;
        param_13 = local_a8;
        sprintf(param_13,"l%p",*(undefined8 *)(param_9[0x18] + 0x80));
        uVar16 = 0x51;
        pcVar12 = "crs rs";
        pcVar14 = "-fill";
        param_1 = pdgui_vmess(CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),param_2,param_3,param_4,
                              param_5,param_6,param_7,param_8,0,"crs rs",param_9,"itemconfigure",
                              param_13,"-fill",0x51);
        if (param_9[0x18] == 0) goto LAB_00509338;
      }
      puVar4 = getbytes(0x10);
      lVar5 = param_9[0x18];
      plVar7 = *(long **)(lVar5 + 0x20);
      if (plVar7 == (long *)0x0) {
        plVar7 = (long *)0x0;
      }
      else {
        plVar6 = plVar7;
        do {
          if ((long *)*plVar6 == plVar11) {
            bug(CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_00),param_2,param_3,param_4,param_5,
                param_6,param_7,param_8,"glist_select",pcVar12,plVar6,plVar7,param_13,pcVar14,uVar16
               );
            lVar5 = param_9[0x18];
            plVar7 = *(long **)(lVar5 + 0x20);
            break;
          }
          plVar6 = (long *)plVar6[1];
        } while (plVar6 != (long *)0x0);
      }
      puVar4[1] = plVar7;
      *puVar4 = plVar11;
      *(undefined8 **)(lVar5 + 0x20) = puVar4;
      pcVar12 = (char *)param_9;
      param_1 = gobj_select(plVar11,(long)param_9);
    }
LAB_00509338:
    iVar3 = *(int *)((long)param_10 + 4);
    if (iVar3 == 0) {
      iVar3 = (int)*param_10;
      lVar5 = param_9[6];
      if ((iVar3 != 0) && (lVar5 != 0)) {
        do {
          iVar3 = iVar3 + -1;
          lVar5 = *(long *)(lVar5 + 8);
          if (lVar5 == 0) break;
        } while (iVar3 != 0);
      }
      puVar8 = *(undefined **)(lVar5 + 8);
      plVar7 = (long *)plVar11[1];
      param_9[6] = (long)plVar7;
    }
    else {
      pcVar12 = (char *)param_9[6];
      plVar7 = (long *)pcVar12;
      if ((iVar3 != 1) && ((long *)pcVar12 != (long *)0x0)) {
        iVar3 = iVar3 + -2;
        do {
          plVar7 = (long *)plVar7[1];
          bVar15 = iVar3 != 0;
          iVar3 = iVar3 + -1;
          if (plVar7 == (long *)0x0) break;
        } while (bVar15);
      }
      plVar7[1] = 0;
      iVar3 = (int)*param_10;
      if (iVar3 == 0) {
        plVar11[1] = (long)pcVar12;
        param_9[6] = (long)plVar11;
        bVar1 = *(byte *)(param_9 + 0x1d);
        puVar8 = (undefined *)0x0;
        goto joined_r0x005093ff;
      }
      lVar5 = param_9[6];
      if ((iVar3 != 1) && (lVar5 != 0)) {
        iVar3 = iVar3 + -2;
        do {
          lVar5 = *(long *)(lVar5 + 8);
          bVar15 = iVar3 == 0;
          iVar3 = iVar3 + -1;
          plVar7 = (long *)CONCAT71((int7)((ulong)plVar7 >> 8),bVar15);
          if (lVar5 == 0) break;
        } while (!bVar15);
      }
      puVar8 = *(undefined **)(lVar5 + 8);
    }
    *(long **)(lVar5 + 8) = plVar11;
    plVar11[1] = (long)puVar8;
    bVar1 = *(byte *)(param_9 + 0x1d);
joined_r0x005093ff:
    if ((bVar1 & 1) != 0) {
      canvas_redraw(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,pcVar12,
                    plVar7,puVar8,param_13,pcVar14,uVar16);
    }
    return 1;
  }
  iVar3 = (int)*param_10;
  if (*(int *)((long)param_10 + 4) == iVar3) {
    return 1;
  }
  plVar11 = (long *)param_9[6];
  if ((iVar3 != 0) && (plVar11 != (long *)0x0)) {
    do {
      iVar3 = iVar3 + -1;
      plVar11 = (long *)plVar11[1];
      if (plVar11 == (long *)0x0) break;
    } while (iVar3 != 0);
  }
  lVar5 = param_9[0x18];
  if (lVar5 != 0) {
    puVar4 = *(undefined8 **)(lVar5 + 0x20);
    while (uVar16 = (undefined1)in_stack_ffffffffffffff48, puVar4 != (undefined8 *)0x0) {
      pcVar12 = (char *)*puVar4;
      param_1 = glist_deselect(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                               param_9,(long *)pcVar12,uVar10,puVar4,param_13,pcVar14);
      lVar5 = param_9[0x18];
      uVar10 = extraout_RDX_01;
      puVar4 = *(undefined8 **)(lVar5 + 0x20);
    }
    if ((*(byte *)(lVar5 + 0x88) & 0x20) != 0) {
      *(byte *)(lVar5 + 0x88) = *(byte *)(lVar5 + 0x88) & 0xdf;
      param_13 = local_a8;
      sprintf(param_13,"l%p",*(undefined8 *)(param_9[0x18] + 0x80));
      uVar16 = 0x51;
      pcVar12 = "crs rs";
      pcVar14 = "-fill";
      pdgui_vmess(CONCAT44(extraout_XMM0_Db_01,extraout_XMM0_Da_01),param_2,param_3,param_4,param_5,
                  param_6,param_7,param_8,0,"crs rs",param_9,"itemconfigure",param_13,"-fill",0x51);
      uVar10 = extraout_RDX_02;
      if (param_9[0x18] == 0) goto LAB_0050945f;
    }
    puVar4 = getbytes(0x10);
    lVar5 = param_9[0x18];
    plVar7 = *(long **)(lVar5 + 0x20);
    if (plVar7 == (long *)0x0) {
      plVar7 = (long *)0x0;
    }
    else {
      plVar6 = plVar7;
      do {
        if ((long *)*plVar6 == plVar11) {
          bug(CONCAT44(extraout_XMM0_Db_02,extraout_XMM0_Da_02),param_2,param_3,param_4,param_5,
              param_6,param_7,param_8,"glist_select",pcVar12,plVar6,plVar7,param_13,pcVar14,uVar16);
          lVar5 = param_9[0x18];
          plVar7 = *(long **)(lVar5 + 0x20);
          break;
        }
        plVar6 = (long *)plVar6[1];
      } while (plVar6 != (long *)0x0);
    }
    puVar4[1] = plVar7;
    *puVar4 = plVar11;
    *(undefined8 **)(lVar5 + 0x20) = puVar4;
    gobj_select(plVar11,(long)param_9);
    uVar10 = extraout_RDX_03;
  }
LAB_0050945f:
  uVar2 = *(uint *)((long)param_10 + 4);
  plVar7 = (long *)param_9[6];
  plVar6 = (long *)0x0;
  uVar13 = (undefined7)((ulong)param_13 >> 8);
  if ((plVar7 == (long *)0x0) || (plVar7 == plVar11)) {
LAB_005094a3:
    pcVar12 = (char *)plVar11[1];
    pcVar14 = (char *)CONCAT71(uVar13,pcVar12 == (char *)0x0);
    if (plVar7 != (long *)0x0) goto LAB_005094c5;
    plVar9 = (long *)0x0;
  }
  else {
    plVar6 = plVar7;
    if ((int)*param_10 != 1) {
      iVar3 = (int)*param_10 + -2;
      do {
        plVar6 = (long *)plVar6[1];
        bVar15 = iVar3 == 0;
        iVar3 = iVar3 + -1;
        uVar10 = CONCAT71((int7)(uVar10 >> 8),bVar15);
        if (plVar6 == (long *)0x0) break;
      } while (!bVar15);
      goto LAB_005094a3;
    }
    pcVar12 = (char *)plVar11[1];
    pcVar14 = (char *)CONCAT71(uVar13,pcVar12 == (char *)0x0);
LAB_005094c5:
    iVar3 = 2;
    plVar9 = plVar7;
    do {
      plVar9 = (long *)plVar9[1];
      iVar3 = iVar3 + -1;
    } while (plVar9 != (long *)0x0);
    plVar9 = plVar7;
    if (iVar3 == 1) {
      uVar10 = 1;
    }
    else {
      uVar10 = (ulong)(uint)-iVar3;
      do {
        plVar9 = (long *)plVar9[1];
        iVar3 = (int)uVar10;
        uVar10 = (ulong)(iVar3 - 1);
        if (plVar9 == (long *)0x0) break;
      } while (iVar3 != 0);
    }
  }
  if (uVar2 == 0) {
    param_9[6] = (long)plVar11;
    plVar11[1] = (long)plVar7;
    if (plVar6 == (long *)0x0) goto LAB_0050953f;
    if ((char)pcVar14 != '\0') {
      plVar6[1] = 0;
      goto LAB_0050953f;
    }
  }
  else {
    plVar9[1] = (long)plVar11;
    plVar11[1] = 0;
    if (plVar6 == (long *)0x0) {
      param_9[6] = (long)pcVar12;
      goto LAB_0050953f;
    }
  }
  plVar6[1] = (long)pcVar12;
LAB_0050953f:
  canvas_dirty(DAT_005d9038,param_2,param_3,param_4,param_5,param_6,param_7,param_8,(long)param_9,
               pcVar12,uVar10,plVar9,pcVar14,(ulong)uVar2);
  return 1;
}


