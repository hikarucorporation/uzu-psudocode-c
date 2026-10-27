// Function : canvas_dopaste
// Namespace: 
// Entry    : 00506b60
// Prototype: undefined canvas_dopaste(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long * param_9, uint * param_10, undefined8 param_11, undefined8 param_12, char * param_13, undefined * param_14)
// Body     : 00506b60 - 00506eb8


void canvas_dopaste(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                   long *param_9,uint *param_10,undefined8 param_11,undefined8 param_12,
                   char *param_13,undefined *param_14)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  uint uVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined8 *puVar8;
  long lVar9;
  long *plVar10;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  long *plVar11;
  undefined8 extraout_RDX_01;
  undefined8 extraout_RDX_02;
  undefined8 extraout_RDX_03;
  undefined8 extraout_RDX_04;
  undefined8 extraout_RDX_05;
  undefined8 uVar12;
  undefined8 extraout_RDX_06;
  undefined8 extraout_RDX_07;
  long *plVar13;
  char *pcVar14;
  uint uVar15;
  uint uVar16;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined4 extraout_XMM0_Da_03;
  undefined4 extraout_XMM0_Da_04;
  undefined8 uVar17;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  undefined4 extraout_XMM0_Db_01;
  undefined4 extraout_XMM0_Db_02;
  undefined4 extraout_XMM0_Db_03;
  undefined4 extraout_XMM0_Db_04;
  char *in_stack_ffffffffffffff18;
  char local_b8 [136];
  
  uVar5 = canvas_suspend_dsp(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  puVar6 = gensym("#A");
  plVar7 = (long *)__tls_get_addr(&PTR_007159b0);
  lVar9 = *plVar7;
  uVar1 = *(undefined8 *)(lVar9 + 0x110);
  uVar2 = *(undefined8 *)(lVar9 + 0x128);
  uVar3 = puVar6[1];
  puVar6[1] = 0;
  *(long **)(lVar9 + 0x128) = param_9;
  *(undefined **)(lVar9 + 0x110) = PTR_pd_canvasmaker_00715c00;
  uVar17 = canvas_editmode(DAT_005d9038,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                           (ulong)param_9);
  lVar9 = param_9[0x18];
  uVar12 = extraout_RDX;
  pcVar14 = param_14;
  if (lVar9 != 0) {
    while (puVar8 = *(undefined8 **)(lVar9 + 0x20), puVar8 != (undefined8 *)0x0) {
      uVar17 = glist_deselect(uVar17,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9
                              ,(long *)*puVar8,uVar12,puVar8,param_13,pcVar14);
      uVar12 = extraout_RDX_00;
      lVar9 = param_9[0x18];
    }
    if ((*(byte *)(lVar9 + 0x88) & 0x20) != 0) {
      *(byte *)(lVar9 + 0x88) = *(byte *)(lVar9 + 0x88) & 0xdf;
      param_13 = local_b8;
      sprintf(param_13,"l%p",*(undefined8 *)(param_9[0x18] + 0x80));
      in_stack_ffffffffffffff18 = "black";
      pcVar14 = "-fill";
      pdgui_vmess(CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),param_2,param_3,param_4,param_5,
                  param_6,param_7,param_8,0,"crs rs",param_9,"itemconfigure",param_13,"-fill",0x51);
    }
  }
  uVar16 = 0;
  for (lVar9 = param_9[6]; lVar9 != 0; lVar9 = *(long *)(lVar9 + 8)) {
    uVar16 = uVar16 + 1;
  }
  plVar7 = (long *)__tls_get_addr(&PTR_007159b0);
  lVar9 = **(long **)(*plVar7 + 0x48);
  *(uint *)(lVar9 + 0x68) = uVar16;
  *(long **)(lVar9 + 0x70) = param_9;
  plVar13 = (long *)0x0;
  plVar10 = (long *)0x0;
  binbuf_eval(CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_00),param_2,param_3,param_4,param_5,
              param_6,param_7,param_8,param_10,(uint *)0x0,0,0,param_13,pcVar14);
  plVar7 = (long *)param_9[6];
  if (plVar7 != (long *)0x0) {
    uVar15 = 0;
    do {
      if ((uVar16 <= uVar15) && (param_9[0x18] != 0)) {
        puVar8 = getbytes(0x10);
        lVar9 = param_9[0x18];
        plVar10 = *(long **)(lVar9 + 0x20);
        plVar11 = plVar10;
        if (plVar10 == (long *)0x0) {
          plVar10 = (long *)0x0;
        }
        else {
          do {
            if ((long *)*plVar11 == plVar7) {
              bug(CONCAT44(extraout_XMM0_Db_01,extraout_XMM0_Da_01),param_2,param_3,param_4,param_5,
                  param_6,param_7,param_8,"glist_select",plVar13,plVar11,plVar10,param_13,pcVar14,
                  (char)in_stack_ffffffffffffff18);
              lVar9 = param_9[0x18];
              plVar10 = *(long **)(lVar9 + 0x20);
              break;
            }
            plVar11 = (long *)plVar11[1];
          } while (plVar11 != (long *)0x0);
        }
        puVar8[1] = plVar10;
        *puVar8 = plVar7;
        *(undefined8 **)(lVar9 + 0x20) = puVar8;
        plVar13 = param_9;
        gobj_select(plVar7,(long)param_9);
      }
      uVar15 = uVar15 + 1;
      plVar7 = (long *)plVar7[1];
    } while (plVar7 != (long *)0x0);
  }
  plVar7 = (long *)__tls_get_addr(&PTR_007159b0);
  *(undefined8 *)(**(long **)(*plVar7 + 0x48) + 0x70) = 0;
  canvas_resume_dsp(CONCAT44(extraout_XMM0_Db_02,extraout_XMM0_Da_02),param_2,param_3,param_4,
                    param_5,param_6,param_7,param_8,(ulong)uVar5,plVar13,extraout_RDX_01,plVar10,
                    param_13,pcVar14);
  uVar17 = canvas_dirty(DAT_005d9038,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                        (long)param_9,(char *)plVar13,extraout_RDX_02,plVar10,param_13,pcVar14);
  uVar12 = extraout_RDX_03;
  if ((*(byte *)(param_9 + 0x1d) & 2) != 0) {
    plVar13 = (long *)&DAT_005e3d71;
    uVar17 = pdgui_vmess(uVar17,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0x654044,"c"
                         ,param_9,plVar10,param_13,pcVar14,(char)in_stack_ffffffffffffff18);
    uVar12 = extraout_RDX_04;
  }
  puVar4 = PTR_canvas_class_00715918;
  if ((*(int *)PTR_sys_noloadbang_00715fb0 == 0) && (param_9[0x18] != 0)) {
    for (plVar7 = *(long **)(param_9[0x18] + 0x20); plVar7 != (long *)0x0;
        plVar7 = (long *)plVar7[1]) {
      plVar11 = (long *)*plVar7;
      if (*plVar11 == *(long *)puVar4) {
        uVar17 = canvas_loadbang(uVar17,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                                 (long)plVar11,plVar13,uVar12,plVar10,param_13,pcVar14);
        uVar12 = extraout_RDX_05;
      }
      else {
        plVar13 = gensym("loadbang");
        lVar9 = zgetfn(plVar11,(long)plVar13);
        uVar17 = CONCAT44(extraout_XMM0_Db_03,extraout_XMM0_Da_03);
        uVar12 = extraout_RDX_06;
        if (lVar9 != 0) {
          lVar9 = *plVar7;
          plVar13 = gensym("loadbang");
          plVar10 = (long *)0x0;
          uVar17 = pd_vmess(CONCAT44(extraout_XMM0_Db_04,extraout_XMM0_Da_04),param_2,param_3,
                            param_4,param_5,param_6,param_7,param_8,lVar9,plVar13,0x651ee3,0,
                            param_13,pcVar14,(double)in_stack_ffffffffffffff18);
          uVar12 = extraout_RDX_07;
        }
      }
    }
  }
  puVar6[1] = uVar3;
  plVar7 = (long *)__tls_get_addr(&PTR_007159b0);
  lVar9 = *plVar7;
  *(undefined8 *)(lVar9 + 0x128) = uVar2;
  *(undefined8 *)(lVar9 + 0x110) = uVar1;
  return;
}


