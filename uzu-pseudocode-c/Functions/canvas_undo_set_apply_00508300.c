// Function : canvas_undo_set_apply
// Namespace: 
// Entry    : 00508300
// Prototype: undefined8 * canvas_undo_set_apply(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long * param_9, char * param_10, undefined8 param_11, undefined8 param_12, long * param_13, undefined * param_14)
// Body     : 00508300 - 005088f5


undefined8 *
canvas_undo_set_apply
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,long *param_9,
          char *param_10,undefined8 param_11,undefined8 param_12,long *param_13,undefined *param_14)

{
  long *plVar1;
  long lVar2;
  int iVar3;
  undefined8 *puVar4;
  long *plVar5;
  long lVar6;
  undefined4 *puVar7;
  undefined8 *puVar8;
  long *plVar9;
  undefined8 *puVar10;
  int *piVar11;
  int iVar12;
  uint uVar13;
  long lVar14;
  uint uVar15;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  long *plVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  char *pcVar20;
  int iVar21;
  bool bVar22;
  bool bVar23;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  undefined8 uVar24;
  undefined4 extraout_XMM0_Db_01;
  undefined4 extraout_XMM0_Db_02;
  undefined1 in_stack_ffffffffffffff08;
  uint local_dc;
  long local_b8;
  long local_b0;
  uint local_a4;
  long local_a0;
  
  iVar3 = (int)param_10;
  pcVar20 = param_14;
  if ((*(byte *)(param_9 + 0x1d) & 0x20) == 0) {
    param_1 = canvas_editmode(DAT_005d9038,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                              (ulong)param_9);
    param_11 = extraout_RDX;
    pcVar20 = param_14;
  }
  lVar6 = param_9[0x18];
  if (lVar6 != 0) {
    puVar4 = *(undefined8 **)(lVar6 + 0x20);
    while (puVar4 != (undefined8 *)0x0) {
      param_10 = (char *)*puVar4;
      param_1 = glist_deselect(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                               param_9,(long *)param_10,param_11,puVar4,(char *)param_13,pcVar20);
      lVar6 = param_9[0x18];
      param_11 = extraout_RDX_00;
      puVar4 = *(undefined8 **)(lVar6 + 0x20);
    }
    if ((*(byte *)(lVar6 + 0x88) & 0x20) != 0) {
      *(byte *)(lVar6 + 0x88) = *(byte *)(lVar6 + 0x88) & 0xdf;
      param_13 = &local_b8;
      sprintf((char *)param_13,"l%p",*(undefined8 *)(param_9[0x18] + 0x80));
      param_10 = "crs rs";
      pcVar20 = "-fill";
      pdgui_vmess(CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),param_2,param_3,param_4,param_5,
                  param_6,param_7,param_8,0,"crs rs",param_9,"itemconfigure",param_13,"-fill",0x51);
    }
  }
  plVar5 = (long *)param_9[6];
  plVar9 = plVar5;
  if ((iVar3 != 0) && (plVar5 != (long *)0x0)) {
    iVar12 = iVar3;
    do {
      iVar12 = iVar12 + -1;
      plVar9 = (long *)plVar9[1];
      if (plVar9 == (long *)0x0) break;
    } while (iVar12 != 0);
  }
  if ((plVar9 != (long *)0x0) && (param_9[0x18] != 0)) {
    for (plVar16 = *(long **)(param_9[0x18] + 0x20); plVar16 != (long *)0x0;
        plVar16 = (long *)plVar16[1]) {
      if ((long *)*plVar16 == plVar9) goto joined_r0x005084af;
    }
    puVar4 = getbytes(0x10);
    lVar6 = param_9[0x18];
    plVar5 = *(long **)(lVar6 + 0x20);
    if (plVar5 == (long *)0x0) {
      plVar5 = (long *)0x0;
    }
    else {
      plVar16 = plVar5;
      do {
        if ((long *)*plVar16 == plVar9) {
          bug(CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_00),param_2,param_3,param_4,param_5,
              param_6,param_7,param_8,"glist_select",param_10,plVar16,plVar5,(char *)param_13,
              pcVar20,in_stack_ffffffffffffff08);
          lVar6 = param_9[0x18];
          plVar5 = *(long **)(lVar6 + 0x20);
          break;
        }
        plVar16 = (long *)plVar16[1];
      } while (plVar16 != (long *)0x0);
    }
    puVar4[1] = plVar5;
    *puVar4 = plVar9;
    *(undefined8 **)(lVar6 + 0x20) = puVar4;
    gobj_select(plVar9,(long)param_9);
    plVar5 = (long *)param_9[6];
  }
joined_r0x005084af:
  if (plVar5 == (long *)0x0) {
    iVar12 = 0;
  }
  else if (param_9[0x18] == 0) {
    iVar12 = 0;
    do {
      iVar12 = iVar12 + 1;
      plVar5 = (long *)plVar5[1];
    } while (plVar5 != (long *)0x0);
  }
  else {
    plVar9 = *(long **)(param_9[0x18] + 0x20);
    iVar12 = 0;
    if (plVar9 == (long *)0x0) {
      do {
        iVar12 = iVar12 + 1;
        plVar5 = (long *)plVar5[1];
      } while (plVar5 != (long *)0x0);
    }
    else {
      do {
        plVar16 = plVar9;
        do {
          plVar1 = (long *)*plVar16;
          if (plVar1 == plVar5) break;
          plVar16 = (long *)plVar16[1];
        } while (plVar16 != (long *)0x0);
        iVar12 = iVar12 + (uint)(plVar1 != plVar5);
        plVar5 = (long *)plVar5[1];
      } while (plVar5 != (long *)0x0);
    }
  }
  puVar4 = getbytes(0x18);
  puVar7 = binbuf_new();
  puVar4[1] = puVar7;
  uVar24 = linetraverser_start(&local_b8,param_9);
LAB_00508605:
  do {
    do {
      do {
        puVar8 = linetraverser_next(uVar24,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                                    &local_b8);
        lVar6 = local_b0;
        if (puVar8 == (undefined8 *)0x0) {
          piVar11 = canvas_docopy(CONCAT44(extraout_XMM0_Db_01,extraout_XMM0_Da_01),param_2,param_3,
                                  param_4,param_5,param_6,param_7,param_8,(long)param_9);
          *puVar4 = piVar11;
          *(int *)(puVar4 + 2) = iVar3;
          return puVar4;
        }
        uVar24 = CONCAT44(extraout_XMM0_Db_01,extraout_XMM0_Da_01);
      } while (param_9[0x18] == 0);
      plVar9 = *(long **)(param_9[0x18] + 0x20);
      uVar24 = CONCAT44(extraout_XMM0_Db_01,extraout_XMM0_Da_01);
    } while (plVar9 == (long *)0x0);
    plVar5 = plVar9;
    do {
      lVar14 = *plVar5;
      if (lVar14 == local_b0) {
        uVar13 = 1;
        goto LAB_0050864c;
      }
      plVar5 = (long *)plVar5[1];
    } while (plVar5 != (long *)0x0);
    uVar13 = 0;
LAB_0050864c:
    bVar22 = lVar14 != local_b0;
    if (plVar9 == (long *)0x0) goto LAB_00508675;
    do {
      lVar2 = *plVar9;
      if (lVar2 == local_a0) {
        local_dc = 1;
        goto LAB_0050868d;
      }
      plVar9 = (long *)plVar9[1];
    } while (plVar9 != (long *)0x0);
    local_dc = 0;
LAB_0050868d:
    bVar23 = lVar2 != local_a0;
    uVar24 = CONCAT44(extraout_XMM0_Db_01,extraout_XMM0_Da_01);
  } while (uVar13 == local_dc);
  goto LAB_005086a0;
LAB_00508675:
  bVar23 = true;
  local_dc = 0;
  uVar24 = CONCAT44(extraout_XMM0_Db_01,extraout_XMM0_Da_01);
  if (uVar13 != 0) {
LAB_005086a0:
    piVar11 = (int *)puVar4[1];
    puVar8 = gensym("#X");
    puVar10 = gensym("connect");
    iVar17 = 0;
    iVar19 = 0;
    if (lVar14 == lVar6) {
      iVar19 = iVar12;
    }
    lVar6 = param_9[6];
    iVar18 = 0;
    if ((lVar6 != 0) && (iVar18 = 0, lVar6 != local_b0)) {
      if (param_9[0x18] == 0) {
        iVar18 = 0;
        lVar14 = lVar6;
        do {
          iVar18 = iVar18 + (uint)bVar22;
          lVar14 = *(long *)(lVar14 + 8);
          if (lVar14 == 0) break;
        } while (lVar14 != local_b0);
      }
      else {
        plVar9 = *(long **)(param_9[0x18] + 0x20);
        if (plVar9 == (long *)0x0) {
          iVar18 = 0;
          lVar14 = lVar6;
          do {
            iVar18 = iVar18 + (uint)bVar22;
            lVar14 = *(long *)(lVar14 + 8);
            if (lVar14 == 0) break;
          } while (lVar14 != local_b0);
        }
        else {
          iVar18 = 0;
          lVar14 = lVar6;
          do {
            plVar5 = plVar9;
            do {
              if (*plVar5 == lVar14) {
                uVar15 = 1;
                goto LAB_00508775;
              }
              plVar5 = (long *)plVar5[1];
            } while (plVar5 != (long *)0x0);
            uVar15 = 0;
LAB_00508775:
            iVar18 = iVar18 + (uVar15 ^ uVar13 ^ 1);
            lVar14 = *(long *)(lVar14 + 8);
          } while ((lVar14 != 0) && (lVar14 != local_b0));
        }
      }
    }
    iVar21 = 0;
    if (bVar23 == false) {
      iVar21 = iVar12;
    }
    if ((lVar6 != 0) && (lVar6 != local_a0)) {
      if (param_9[0x18] == 0) {
        iVar17 = 0;
        do {
          iVar17 = iVar17 + (uint)bVar23;
          lVar6 = *(long *)(lVar6 + 8);
          if (lVar6 == 0) break;
        } while (lVar6 != local_a0);
      }
      else {
        plVar9 = *(long **)(param_9[0x18] + 0x20);
        if (plVar9 == (long *)0x0) {
          iVar17 = 0;
          do {
            iVar17 = iVar17 + (uint)bVar23;
            lVar6 = *(long *)(lVar6 + 8);
            if (lVar6 == 0) break;
          } while (lVar6 != local_a0);
        }
        else {
          iVar17 = 0;
          do {
            plVar5 = plVar9;
            do {
              if (*plVar5 == lVar6) {
                uVar13 = 1;
                goto LAB_00508865;
              }
              plVar5 = (long *)plVar5[1];
            } while (plVar5 != (long *)0x0);
            uVar13 = 0;
LAB_00508865:
            iVar17 = iVar17 + (uVar13 ^ local_dc ^ 1);
            lVar6 = *(long *)(lVar6 + 8);
          } while ((lVar6 != 0) && (lVar6 != local_a0));
        }
      }
    }
    uVar24 = binbuf_addv(CONCAT44(extraout_XMM0_Db_02,extraout_XMM0_Da_02),param_2,param_3,param_4,
                         param_5,param_6,param_7,param_8,piVar11,0x65469f,puVar8,puVar10,
                         (char *)(ulong)(uint)(iVar18 + iVar19),(ulong)local_a4,
                         (double)(ulong)(uint)(iVar17 + iVar21));
  }
  goto LAB_00508605;
}


