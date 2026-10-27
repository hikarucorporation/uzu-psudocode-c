// Function : glist_delete
// Namespace: 
// Entry    : 00515eb0
// Prototype: undefined glist_delete(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long * param_9, long * param_10, undefined8 param_11, long * param_12, char * param_13, undefined8 param_14)
// Body     : 00515eb0 - 00516206


void glist_delete(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 long *param_9,long *param_10,undefined8 param_11,long *param_12,char *param_13,
                 undefined8 param_14)

{
  int iVar1;
  long lVar2;
  undefined *puVar3;
  uint uVar4;
  uint uVar5;
  undefined8 *puVar6;
  long lVar7;
  long *plVar8;
  undefined8 uVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 extraout_RDX_01;
  undefined8 extraout_RDX_02;
  undefined8 extraout_RDX_03;
  undefined8 extraout_XMM0_Qa;
  undefined8 uVar13;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  undefined8 extraout_XMM0_Qa_02;
  undefined8 extraout_XMM0_Qa_03;
  undefined8 extraout_XMM0_Qa_04;
  undefined8 extraout_XMM0_Qa_05;
  undefined8 extraout_XMM0_Qa_06;
  undefined8 extraout_XMM0_Qa_07;
  undefined8 extraout_XMM0_Qa_08;
  undefined8 extraout_XMM0_Qa_09;
  undefined8 extraout_XMM0_Qa_10;
  char local_88 [88];
  
  puVar6 = gensym("dsp");
  lVar7 = zgetfn(param_10,(long)puVar6);
  plVar11 = param_9;
  do {
    plVar8 = plVar11;
    if ((long *)plVar8[9] == (long *)0x0) break;
    param_12 = (long *)(ulong)(*(ushort *)(plVar8 + 0x1d) & 0x901);
    plVar11 = (long *)plVar8[9];
  } while ((*(ushort *)(plVar8 + 0x1d) & 0x901) == 0x100);
  uVar4 = class_isdrawcommand(*param_10);
  puVar3 = PTR_canvas_class_00715918;
  uVar13 = extraout_XMM0_Qa;
  if (*param_10 == *(long *)PTR_canvas_class_00715918) {
    uVar13 = canvas_closebang(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,
                              param_8,(long)param_10,puVar6,extraout_RDX,param_12,param_13,param_14)
    ;
  }
  lVar2 = plVar8[0x1d];
  *(ushort *)(plVar8 + 0x1d) = (ushort)lVar2 | 0x40;
  lVar10 = param_9[0x18];
  if (lVar10 != 0) {
    param_12 = (long *)plVar8[0x18];
    if ((param_12 == (long *)0x0) || ((long *)param_12[6] != param_10)) {
      plVar11 = *(long **)(lVar10 + 0x30);
    }
    else {
      param_12[6] = 0;
      plVar11 = *(long **)(lVar10 + 0x30);
    }
    if (plVar11 == param_10) {
      *(undefined8 *)(lVar10 + 0x30) = 0;
    }
    uVar9 = glist_isselected((long)param_9,(long)param_10);
    uVar13 = extraout_XMM0_Qa_00;
    if ((int)uVar9 != 0) {
      uVar13 = glist_deselect(extraout_XMM0_Qa_00,param_2,param_3,param_4,param_5,param_6,param_7,
                              param_8,param_9,param_10,extraout_RDX_00,param_12,param_13,param_14);
    }
    if (*param_10 == *(long *)puVar3) {
      if (((*(byte *)((long)param_10 + 0xe9) & 1) == 0) ||
         (uVar5 = glist_isvisible((long)param_9), uVar5 == 0)) {
        uVar5 = glist_isvisible((long)param_9);
        uVar13 = extraout_XMM0_Qa_02;
        if (uVar5 != 0) {
          lVar10 = glist_findrtext(extraout_XMM0_Qa_02,param_2,param_3,param_4,param_5,param_6,
                                   param_7,param_8,(long)param_9,(long)param_10,extraout_RDX_01,
                                   param_12,param_13,param_14);
          lVar10 = rtext_gettag(lVar10);
          uVar13 = text_eraseborder(extraout_XMM0_Qa_03,param_2,param_3,param_4,param_5,param_6,
                                    param_7,param_8,param_10,(long)param_9,lVar10,param_12,param_13,
                                    param_14);
        }
      }
      else {
        sprintf(local_88,"graph%lx",(ulong)param_10);
        uVar13 = glist_eraseiofor(extraout_XMM0_Qa_01,param_2,param_3,param_4,param_5,param_6,
                                  param_7,param_8,(long)param_9,param_10,local_88,param_12,param_13,
                                  param_14);
      }
    }
  }
  if (uVar4 != 0) {
    param_12 = param_9;
    do {
      plVar11 = param_12;
      param_12 = (long *)plVar11[9];
      if (param_12 == (long *)0x0) break;
    } while ((*(ushort *)(plVar11 + 0x1d) & 0x901) == 0x100);
    lVar10 = canvas_makebindsym(uVar13,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                                (undefined8 *)plVar11[0x19]);
    lVar10 = template_findbyname(extraout_XMM0_Qa_04,param_2,param_3,param_4,param_5,param_6,param_7
                                 ,param_8,lVar10);
    canvas_redrawallfortemplate
              (extraout_XMM0_Qa_05,param_2,param_3,param_4,param_5,param_6,param_7,param_8,lVar10,2)
    ;
  }
  gobj_delete(param_10);
  uVar5 = glist_isvisible((long)plVar8);
  if (uVar5 != 0) {
    gobj_vis(param_10,param_9,0);
  }
  if (param_9[0x18] == 0) {
    puVar6 = (undefined8 *)0x0;
  }
  else {
    plVar11 = pd_checkobject(param_10);
    if (plVar11 == (long *)0x0) {
      puVar6 = (undefined8 *)0x0;
      plVar11 = (long *)param_9[6];
      goto joined_r0x005160dd;
    }
    puVar6 = (undefined8 *)
             glist_findrtext(extraout_XMM0_Qa_06,param_2,param_3,param_4,param_5,param_6,param_7,
                             param_8,(long)param_9,(long)plVar11,extraout_RDX_02,param_12,param_13,
                             param_14);
    if (puVar6 == (undefined8 *)0x0) {
      puVar6 = rtext_new(extraout_XMM0_Qa_07,param_2,param_3,param_4,param_5,param_6,param_7,param_8
                         ,(long)param_9,(long)plVar11,extraout_RDX_03,param_12,param_13,param_14);
      plVar11 = (long *)param_9[6];
      goto joined_r0x005160dd;
    }
  }
  plVar11 = (long *)param_9[6];
joined_r0x005160dd:
  if (plVar11 == param_10) {
    plVar12 = param_9 + 6;
  }
  else {
    do {
      plVar12 = plVar11;
      if (plVar12 == (long *)0x0) goto LAB_00516122;
      plVar11 = (long *)plVar12[1];
    } while ((long *)plVar12[1] != param_10);
    plVar12 = plVar12 + 1;
  }
  *plVar12 = param_10[1];
LAB_00516122:
  if (*param_10 == *(long *)PTR_scalar_class_00715810) {
    iVar1 = *(int *)PTR_glist_valid_007157f8;
    *(int *)PTR_glist_valid_007157f8 = iVar1 + 1;
    *(int *)(param_9 + 8) = iVar1 + 1;
    uVar13 = pd_free(param_10);
  }
  else {
    uVar13 = pd_free(param_10);
  }
  if (puVar6 != (undefined8 *)0x0) {
    uVar13 = rtext_free(puVar6);
  }
  if (lVar7 != 0) {
    canvas_update_dsp(uVar13,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
    uVar13 = extraout_XMM0_Qa_08;
  }
  if (uVar4 != 0) {
    do {
      plVar11 = param_9;
      if ((long *)plVar11[9] == (long *)0x0) break;
      param_9 = (long *)plVar11[9];
    } while ((*(ushort *)(plVar11 + 0x1d) & 0x901) == 0x100);
    lVar7 = canvas_makebindsym(uVar13,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                               (undefined8 *)plVar11[0x19]);
    lVar7 = template_findbyname(extraout_XMM0_Qa_09,param_2,param_3,param_4,param_5,param_6,param_7,
                                param_8,lVar7);
    canvas_redrawallfortemplate
              (extraout_XMM0_Qa_10,param_2,param_3,param_4,param_5,param_6,param_7,param_8,lVar7,1);
  }
  *(ushort *)(plVar8 + 0x1d) = (ushort)plVar8[0x1d] & 0xffbf | (ushort)lVar2 & 0x40;
  return;
}


