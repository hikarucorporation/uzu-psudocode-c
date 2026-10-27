// Function : canvas_paste_replace
// Namespace: 
// Entry    : 0050f740
// Prototype: undefined canvas_paste_replace(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long * param_9)
// Body     : 0050f740 - 0050fd9a


void canvas_paste_replace
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
               long *param_9)

{
  byte bVar1;
  uint *puVar2;
  char cVar3;
  int iVar4;
  long *plVar5;
  undefined7 extraout_var;
  long lVar6;
  undefined8 *puVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  long *plVar11;
  long lVar12;
  int *piVar13;
  uint uVar14;
  char *pcVar15;
  char *pcVar16;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 extraout_RDX_01;
  undefined8 extraout_RDX_02;
  undefined8 extraout_RDX_03;
  long *plVar17;
  undefined8 extraout_RDX_04;
  undefined8 extraout_RDX_05;
  undefined8 *puVar18;
  char *in_R8;
  char *in_R9;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  undefined8 extraout_XMM0_Qa_02;
  undefined8 extraout_XMM0_Qa_03;
  undefined8 extraout_XMM0_Qa_04;
  undefined8 extraout_XMM0_Qa_05;
  undefined8 extraout_XMM0_Qa_06;
  undefined8 extraout_XMM0_Qa_07;
  undefined8 uVar19;
  undefined8 extraout_XMM0_Qa_08;
  undefined8 extraout_XMM0_Qa_09;
  undefined8 extraout_XMM0_Qa_10;
  undefined8 extraout_XMM0_Qa_11;
  undefined8 extraout_XMM0_Qa_12;
  undefined8 extraout_XMM0_Qa_13;
  undefined8 extraout_XMM0_Qa_14;
  undefined8 uVar20;
  undefined8 extraout_XMM0_Qa_15;
  undefined8 extraout_XMM0_Qa_16;
  undefined8 extraout_XMM0_Qa_17;
  undefined8 extraout_XMM0_Qa_18;
  undefined8 extraout_XMM0_Qa_19;
  char *in_stack_ffffffffffffff08;
  long *local_f0;
  int local_e8;
  int local_e4;
  uint local_e0;
  uint local_dc;
  long local_d8;
  long *local_d0;
  undefined8 *local_c8;
  long *local_c0;
  char local_b8 [136];
  
  local_e4 = 0;
  local_e8 = 0;
  local_c8 = (undefined8 *)0x0;
  if (param_9[0x18] == 0) {
    return;
  }
  if (*(long *)(param_9[0x18] + 0x20) == 0) {
    return;
  }
  plVar5 = (long *)__tls_get_addr(&PTR_007159b0);
  cVar3 = binbuf_getpos(*(undefined4 **)**(undefined8 **)(*plVar5 + 0x48),&local_e4,&local_e8,
                        (long *)&local_c8);
  if ((int)CONCAT71(extraout_var,cVar3) != 1) {
    return;
  }
  lVar6 = glist_getcanvas((long)param_9);
  puVar10 = *(undefined8 **)(param_9[0x18] + 0x20);
  uVar9 = extraout_XMM0_Qa;
  if (puVar10 != (undefined8 *)0x0) {
    puVar18 = (undefined8 *)0x0;
    do {
      plVar5 = pd_checkobject((long *)*puVar10);
      puVar7 = get_object_type(plVar5);
      if (puVar7 == (undefined8 *)0x0) {
        puVar7 = puVar18;
      }
      else if ((puVar18 != (undefined8 *)0x0) && (puVar18 != puVar7)) {
        puVar7 = (undefined8 *)0x0;
        break;
      }
      puVar10 = (undefined8 *)puVar10[1];
      puVar18 = puVar7;
    } while (puVar10 != (undefined8 *)0x0);
    plVar5 = *(long **)(param_9[0x18] + 0x20);
    uVar9 = extraout_XMM0_Qa_00;
    if (plVar5 != (long *)0x0) {
      if (puVar7 == (undefined8 *)0x0) {
        local_f0 = (long *)0x0;
        do {
          plVar8 = pd_checkobject((long *)*plVar5);
          uVar9 = extraout_XMM0_Qa_04;
          if ((plVar8 != (long *)0x0) &&
             (puVar10 = get_object_type(plVar8), uVar9 = extraout_XMM0_Qa_05, puVar10 == local_c8))
          {
            plVar8 = getbytes(0x10);
            *plVar8 = *plVar5;
            plVar8[1] = (long)local_f0;
            uVar9 = extraout_XMM0_Qa_06;
            local_f0 = plVar8;
          }
          plVar5 = (long *)plVar5[1];
        } while (plVar5 != (long *)0x0);
      }
      else {
        local_f0 = (long *)0x0;
        do {
          plVar8 = pd_checkobject((long *)*plVar5);
          uVar9 = extraout_XMM0_Qa_01;
          if (plVar8 != (long *)0x0) {
            plVar8 = getbytes(0x10);
            *plVar8 = *plVar5;
            plVar8[1] = (long)local_f0;
            uVar9 = extraout_XMM0_Qa_02;
            local_f0 = plVar8;
          }
          plVar5 = (long *)plVar5[1];
        } while (plVar5 != (long *)0x0);
      }
      canvas_undo_add(uVar9,param_2,param_3,param_4,param_5,param_6,param_7,param_8,(long)param_9,
                      0xc,"paste/replace",0,in_R8,in_R9);
      uVar9 = extraout_XMM0_Qa_07;
      if (local_f0 != (long *)0x0) {
        uVar9 = extraout_RDX;
        plVar5 = local_f0;
        uVar19 = extraout_XMM0_Qa_07;
        local_d8 = lVar6;
        do {
          local_dc = *(short *)(*plVar5 + 0x28) - local_e4;
          pcVar15 = (char *)(ulong)local_dc;
          local_e0 = *(short *)(*plVar5 + 0x2a) - local_e8;
          lVar12 = param_9[0x18];
          if (lVar12 != 0) {
            puVar10 = *(undefined8 **)(lVar12 + 0x20);
            while (puVar10 != (undefined8 *)0x0) {
              uVar19 = glist_deselect(uVar19,param_2,param_3,param_4,param_5,param_6,param_7,param_8
                                      ,param_9,(long *)*puVar10,uVar9,puVar10,in_R8,in_R9);
              lVar12 = param_9[0x18];
              uVar9 = extraout_RDX_00;
              puVar10 = *(undefined8 **)(lVar12 + 0x20);
            }
            bVar1 = *(byte *)(lVar12 + 0x88);
            pcVar15 = (char *)(ulong)bVar1;
            if ((bVar1 & 0x20) != 0) {
              *(byte *)(lVar12 + 0x88) = bVar1 & 0xdf;
              in_R8 = local_b8;
              sprintf(in_R8,"l%p",*(undefined8 *)(param_9[0x18] + 0x80));
              in_stack_ffffffffffffff08 = "black";
              pcVar15 = "itemconfigure";
              in_R9 = "-fill";
              pdgui_vmess(extraout_XMM0_Qa_08,param_2,param_3,param_4,param_5,param_6,param_7,
                          param_8,0,"crs rs",param_9,"itemconfigure",in_R8,"-fill",0x51);
            }
          }
          plVar8 = (long *)__tls_get_addr(&PTR_007159b0);
          *(undefined4 *)(**(long **)(*plVar8 + 0x48) + 0x40) = 0;
          local_d0 = plVar5;
          uVar9 = canvas_undo_set_arrange
                            (extraout_XMM0_Qa_09,param_2,param_3,param_4,param_5,param_6,param_7,
                             param_8,(ulong)param_9,(long *)*plVar5,1,pcVar15,in_R8,in_R9);
          canvas_undo_add(extraout_XMM0_Qa_10,param_2,param_3,param_4,param_5,param_6,param_7,
                          param_8,(long)param_9,7,"arrange",uVar9,in_R8,in_R9);
          uVar9 = canvas_stowconnections
                            (extraout_XMM0_Qa_11,param_2,param_3,param_4,param_5,param_6,param_7,
                             param_8,lVar6);
          plVar5 = canvas_undo_set_cut(uVar9,param_2,param_3,param_4,param_5,param_6,param_7,param_8
                                       ,(long)param_9,2);
          pcVar15 = (char *)0x3;
          canvas_undo_add(extraout_XMM0_Qa_12,param_2,param_3,param_4,param_5,param_6,param_7,
                          param_8,(long)param_9,3,"clear",plVar5,in_R8,in_R9);
          canvas_doclear(extraout_XMM0_Qa_13,param_2,param_3,param_4,param_5,param_6,param_7,param_8
                         ,param_9,pcVar15,extraout_RDX_01,plVar5,in_R8,in_R9);
          puVar2 = *(uint **)**(undefined8 **)(*plVar8 + 0x48);
          puVar10 = gensym("#A");
          lVar6 = *plVar8;
          local_c0 = *(long **)(lVar6 + 0x110);
          uVar9 = *(undefined8 *)(lVar6 + 0x128);
          uVar19 = puVar10[1];
          puVar10[1] = 0;
          *(long **)(lVar6 + 0x128) = param_9;
          *(undefined **)(lVar6 + 0x110) = PTR_pd_canvasmaker_00715c00;
          pcVar15 = (char *)0x0;
          uVar20 = binbuf_eval(extraout_XMM0_Qa_14,param_2,param_3,param_4,param_5,param_6,param_7,
                               param_8,puVar2,(uint *)0x0,0,0,in_R8,in_R9);
          puVar10[1] = uVar19;
          lVar6 = *plVar8;
          *(undefined8 *)(lVar6 + 0x128) = uVar9;
          *(long **)(lVar6 + 0x110) = local_c0;
          lVar6 = param_9[0x18];
          pcVar16 = (char *)local_c0;
          if (lVar6 != 0) {
            puVar10 = *(undefined8 **)(lVar6 + 0x20);
            uVar9 = extraout_RDX_02;
            while (puVar10 != (undefined8 *)0x0) {
              pcVar15 = (char *)*puVar10;
              uVar20 = glist_deselect(uVar20,param_2,param_3,param_4,param_5,param_6,param_7,param_8
                                      ,param_9,(long *)pcVar15,uVar9,puVar10,in_R8,in_R9);
              lVar6 = param_9[0x18];
              uVar9 = extraout_RDX_03;
              puVar10 = *(undefined8 **)(lVar6 + 0x20);
            }
            bVar1 = *(byte *)(lVar6 + 0x88);
            pcVar16 = (char *)(ulong)bVar1;
            if ((bVar1 & 0x20) != 0) {
              *(byte *)(lVar6 + 0x88) = bVar1 & 0xdf;
              in_R8 = local_b8;
              sprintf(in_R8,"l%p",*(undefined8 *)(param_9[0x18] + 0x80));
              in_stack_ffffffffffffff08 = "black";
              pcVar15 = "crs rs";
              pcVar16 = "itemconfigure";
              in_R9 = "-fill";
              uVar20 = pdgui_vmess(extraout_XMM0_Qa_15,param_2,param_3,param_4,param_5,param_6,
                                   param_7,param_8,0,"crs rs",param_9,"itemconfigure",in_R8,"-fill",
                                   0x51);
            }
          }
          plVar8 = local_d0;
          lVar6 = local_d8;
          plVar5 = (long *)param_9[6];
          if (plVar5 == (long *)0x0) {
            plVar5 = (long *)0x0;
          }
          else {
            pcVar16 = (char *)0x1;
            plVar17 = plVar5;
            pcVar15 = (char *)(long *)0xffffffff;
            do {
              plVar11 = (long *)pcVar15;
              plVar17 = (long *)plVar17[1];
              uVar14 = (int)pcVar16 - 1;
              pcVar16 = (char *)(ulong)uVar14;
              pcVar15 = (char *)(ulong)((int)plVar11 + 1);
            } while (plVar17 != (long *)0x0);
            if (uVar14 != 0) {
              do {
                plVar5 = (long *)plVar5[1];
                iVar4 = (int)plVar11;
                plVar11 = (long *)(ulong)(iVar4 - 1);
                pcVar16 = (char *)CONCAT71((int7)((ulong)pcVar16 >> 8),iVar4 == 0);
                if (plVar5 == (long *)0x0) break;
              } while (iVar4 != 0);
            }
          }
          if (param_9[0x18] != 0) {
            puVar10 = getbytes(0x10);
            lVar12 = param_9[0x18];
            pcVar16 = *(char **)(lVar12 + 0x20);
            plVar17 = (long *)pcVar16;
            if ((long *)pcVar16 == (long *)0x0) {
              pcVar16 = (char *)0x0;
            }
            else {
              do {
                if ((long *)*plVar17 == plVar5) {
                  bug(extraout_XMM0_Qa_16,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                      "glist_select",pcVar15,plVar17,pcVar16,in_R8,in_R9,
                      (char)in_stack_ffffffffffffff08);
                  lVar12 = param_9[0x18];
                  pcVar16 = *(char **)(lVar12 + 0x20);
                  break;
                }
                plVar17 = (long *)plVar17[1];
              } while (plVar17 != (long *)0x0);
            }
            puVar10[1] = pcVar16;
            *puVar10 = plVar5;
            *(undefined8 **)(lVar12 + 0x20) = puVar10;
            uVar20 = gobj_select(plVar5,(long)param_9);
          }
          canvas_displaceselection
                    (uVar20,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                     (ulong)local_dc,(ulong)local_e0,(long *)pcVar16,in_R8,in_R9);
          plVar5 = (long *)__tls_get_addr(&PTR_007159b0);
          uVar9 = *(undefined8 *)(*plVar5 + 0x128);
          *(long *)(*plVar5 + 0x128) = lVar6;
          uVar19 = binbuf_eval(extraout_XMM0_Qa_17,param_2,param_3,param_4,param_5,param_6,param_7,
                               param_8,*(uint **)(*(long *)(lVar6 + 0xc0) + 0x48),(uint *)0x0,0,0,
                               in_R8,in_R9);
          *(undefined8 *)(*plVar5 + 0x128) = uVar9;
          piVar13 = canvas_undo_set_create
                              (uVar19,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                               (long)param_9);
          puVar10 = (undefined8 *)0x9;
          canvas_undo_add(extraout_XMM0_Qa_18,param_2,param_3,param_4,param_5,param_6,param_7,
                          param_8,(long)param_9,9,"create",piVar13,in_R8,in_R9);
          plVar5 = *(long **)(*plVar5 + 0x58);
          uVar9 = extraout_RDX_04;
          uVar19 = extraout_XMM0_Qa_19;
          if ((plVar5 != (long *)0x0) && (*plVar5 == *(long *)PTR_canvas_class_00715918)) {
            uVar19 = canvas_loadbang(extraout_XMM0_Qa_19,param_2,param_3,param_4,param_5,param_6,
                                     param_7,param_8,(long)plVar5,puVar10,extraout_RDX_04,
                                     PTR_canvas_class_00715918,in_R8,in_R9);
            uVar9 = extraout_RDX_05;
          }
          plVar5 = (long *)plVar8[1];
          if (plVar5 == (long *)0x0) {
            canvas_undo_add(uVar19,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                            (long)param_9,0xd,"paste/replace",0,in_R8,in_R9);
            while (local_f0 != (long *)0x0) {
              plVar5 = (long *)local_f0[1];
              freebytes(local_f0);
              local_f0 = plVar5;
            }
            return;
          }
        } while( true );
      }
      goto LAB_0050f8a2;
    }
  }
  canvas_undo_add(uVar9,param_2,param_3,param_4,param_5,param_6,param_7,param_8,(long)param_9,0xc,
                  "paste/replace",0,in_R8,in_R9);
  uVar9 = extraout_XMM0_Qa_03;
LAB_0050f8a2:
  canvas_undo_add(uVar9,param_2,param_3,param_4,param_5,param_6,param_7,param_8,(long)param_9,0xd,
                  "paste/replace",0,in_R8,in_R9);
  return;
}


