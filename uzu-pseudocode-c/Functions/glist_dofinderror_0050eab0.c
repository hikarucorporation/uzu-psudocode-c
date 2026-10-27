// Function : glist_dofinderror
// Namespace: 
// Entry    : 0050eab0
// Prototype: undefined8 glist_dofinderror(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long * param_9, long * param_10, undefined8 param_11, undefined8 * param_12, char * param_13, undefined * param_14)
// Body     : 0050eab0 - 0050ed29


undefined8
glist_dofinderror(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 long *param_9,long *param_10,undefined8 param_11,undefined8 *param_12,
                 char *param_13,undefined *param_14)

{
  byte bVar1;
  long *plVar2;
  int iVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long lVar7;
  int *piVar8;
  char *pcVar9;
  undefined *puVar10;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 extraout_RDX_01;
  undefined8 extraout_RDX_02;
  undefined8 extraout_RDX_03;
  undefined8 extraout_RDX_04;
  undefined8 extraout_RDX_05;
  long *plVar11;
  int iVar12;
  char *pcVar13;
  char *pcVar14;
  undefined4 extraout_XMM0_Da;
  undefined4 uVar15;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined4 extraout_XMM0_Da_03;
  undefined4 extraout_XMM0_Da_04;
  undefined4 extraout_XMM0_Da_05;
  undefined4 extraout_XMM0_Da_06;
  undefined4 extraout_XMM0_Db;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Db_00;
  undefined4 extraout_XMM0_Db_01;
  undefined4 extraout_XMM0_Db_02;
  undefined4 extraout_XMM0_Db_03;
  undefined4 extraout_XMM0_Db_04;
  undefined4 extraout_XMM0_Db_05;
  undefined4 extraout_XMM0_Db_06;
  undefined1 uVar17;
  undefined8 in_stack_ffffffffffffff38;
  char local_b8 [136];
  
  plVar2 = (long *)param_9[6];
  pcVar13 = (char *)param_10;
  pcVar9 = (char *)param_12;
  pcVar14 = param_14;
  while( true ) {
    if (plVar2 == (long *)0x0) {
      return 0;
    }
    if (plVar2 == param_10) break;
    plVar4 = message_get_responder(plVar2);
    param_1 = CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_00);
    param_11 = extraout_RDX_00;
    if (plVar4 == param_10) break;
    pcVar9 = PTR_canvas_class_00715918;
    if (*plVar2 == *(long *)PTR_canvas_class_00715918) {
      pcVar13 = (char *)param_10;
      uVar5 = glist_dofinderror(CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_00),param_2,param_3,
                                param_4,param_5,param_6,param_7,param_8,plVar2,param_10,
                                extraout_RDX_00,(undefined8 *)PTR_canvas_class_00715918,param_13,
                                pcVar14);
      param_11 = extraout_RDX;
      uVar15 = extraout_XMM0_Da;
      uVar16 = extraout_XMM0_Db;
      if ((int)uVar5 != 0) {
        return 1;
      }
    }
    else {
      iVar3 = clone_get_n(plVar2);
      param_11 = extraout_RDX_01;
      uVar15 = extraout_XMM0_Da_01;
      uVar16 = extraout_XMM0_Db_01;
      if (0 < iVar3) {
        iVar12 = 0;
        do {
          plVar4 = (long *)clone_get_instance(plVar2,iVar12);
          pcVar13 = (char *)param_10;
          uVar5 = glist_dofinderror(CONCAT44(extraout_XMM0_Db_02,extraout_XMM0_Da_02),param_2,
                                    param_3,param_4,param_5,param_6,param_7,param_8,plVar4,param_10,
                                    extraout_RDX_02,(undefined8 *)pcVar9,param_13,pcVar14);
          if ((int)uVar5 != 0) {
            return 1;
          }
          iVar12 = iVar12 + 1;
          param_11 = extraout_RDX_03;
          uVar15 = extraout_XMM0_Da_03;
          uVar16 = extraout_XMM0_Db_03;
        } while (iVar3 != iVar12);
      }
    }
    param_1 = CONCAT44(uVar16,uVar15);
    plVar2 = (long *)plVar2[1];
  }
  uVar17 = (undefined1)in_stack_ffffffffffffff38;
  lVar7 = param_9[0x18];
  if (lVar7 != 0) {
    puVar6 = *(undefined8 **)(lVar7 + 0x20);
    while (uVar17 = (undefined1)in_stack_ffffffffffffff38, puVar6 != (undefined8 *)0x0) {
      pcVar13 = (char *)*puVar6;
      param_1 = glist_deselect(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                               param_9,(long *)pcVar13,param_11,puVar6,param_13,pcVar14);
      lVar7 = param_9[0x18];
      param_11 = extraout_RDX_04;
      puVar6 = *(undefined8 **)(lVar7 + 0x20);
    }
    bVar1 = *(byte *)(lVar7 + 0x88);
    pcVar9 = (char *)(ulong)bVar1;
    if ((bVar1 & 0x20) != 0) {
      *(byte *)(lVar7 + 0x88) = bVar1 & 0xdf;
      param_13 = local_b8;
      sprintf(param_13,"l%p",*(undefined8 *)(param_9[0x18] + 0x80));
      uVar17 = 0x51;
      pcVar13 = "crs rs";
      pcVar9 = "itemconfigure";
      pcVar14 = "-fill";
      pdgui_vmess(CONCAT44(extraout_XMM0_Db_04,extraout_XMM0_Da_04),param_2,param_3,param_4,param_5,
                  param_6,param_7,param_8,0,"crs rs",param_9,"itemconfigure",param_13,"-fill",0x51);
      param_11 = extraout_RDX_05;
    }
  }
  canvas_vis((ulong)(uint)DAT_005d9038,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
             param_9,pcVar13,param_11,pcVar9,param_13,pcVar14,uVar17);
  canvas_editmode(DAT_005d9038,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                  (ulong)param_9);
  if (param_9[0x18] != 0) {
    puVar6 = getbytes(0x10);
    lVar7 = param_9[0x18];
    plVar4 = *(long **)(lVar7 + 0x20);
    if (plVar4 == (long *)0x0) {
      plVar4 = (long *)0x0;
    }
    else {
      plVar11 = plVar4;
      do {
        if ((long *)*plVar11 == plVar2) {
          bug(CONCAT44(extraout_XMM0_Db_05,extraout_XMM0_Da_05),param_2,param_3,param_4,param_5,
              param_6,param_7,param_8,"glist_select",pcVar13,plVar11,plVar4,param_13,pcVar14,uVar17)
          ;
          lVar7 = param_9[0x18];
          plVar4 = *(long **)(lVar7 + 0x20);
          break;
        }
        plVar11 = (long *)plVar11[1];
      } while (plVar11 != (long *)0x0);
    }
    puVar6[1] = plVar4;
    *puVar6 = plVar2;
    *(undefined8 **)(lVar7 + 0x20) = puVar6;
    gobj_select(plVar2,(long)param_9);
  }
  if (*plVar2 == *(long *)PTR_text_class_00715c88) {
    puVar10 = PTR_text_class_00715c88;
    iVar3 = binbuf_getnatom((undefined4 *)plVar2[2]);
    piVar8 = (int *)binbuf_getvec(plVar2[2]);
    if ((((0 < iVar3) && (*piVar8 == 2)) &&
        (puVar6 = (undefined8 *)atom_getsymbol(piVar8), puVar6 != (undefined8 *)0x0)) &&
       ((pcVar13 = (char *)*puVar6, pcVar13 != (char *)0x0 && (*pcVar13 != '\0')))) {
      pdgui_vmess(CONCAT44(extraout_XMM0_Db_06,extraout_XMM0_Da_06),param_2,param_3,param_4,param_5,
                  param_6,param_7,param_8,0x654bd9,"s",pcVar13,puVar10,param_13,pcVar14,uVar17);
    }
  }
  return 1;
}


