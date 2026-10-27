// Function : canvas_free
// Namespace: 
// Entry    : 004ff6a0
// Prototype: undefined canvas_free(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, double param_5, double param_6, double param_7, undefined8 param_8, long * param_9, undefined * param_10, undefined8 param_11, long * param_12, uint * param_13, undefined4 * param_14)
// Body     : 004ff6a0 - 004ff90e


void canvas_free(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                double param_5,double param_6,double param_7,undefined8 param_8,long *param_9,
                undefined *param_10,undefined8 param_11,long *param_12,uint *param_13,
                undefined4 *param_14)

{
  int iVar1;
  int iVar2;
  long *plVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 extraout_RDX_01;
  undefined8 extraout_RDX_02;
  undefined8 extraout_RDX_03;
  undefined8 extraout_RDX_04;
  undefined8 extraout_RDX_05;
  undefined8 extraout_RDX_06;
  undefined8 extraout_RDX_07;
  undefined8 extraout_RDX_08;
  undefined8 extraout_RDX_09;
  undefined8 extraout_RDX_10;
  char *pcVar6;
  long lVar7;
  void *pvVar8;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined4 extraout_XMM0_Da_03;
  undefined4 extraout_XMM0_Db;
  undefined8 uVar9;
  undefined4 extraout_XMM0_Db_00;
  undefined8 uVar10;
  undefined4 extraout_XMM0_Db_01;
  undefined4 extraout_XMM0_Db_02;
  undefined4 extraout_XMM0_Db_03;
  char acStack_498 [128];
  undefined1 in_stack_fffffffffffffbe8;
  
  pvVar8 = (void *)param_9[0x1e];
  plVar3 = (long *)__tls_get_addr(&PTR_007159b0);
  uVar9 = CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da);
  iVar1 = *(int *)(*(long *)(*plVar3 + 0x48) + 0x38);
  if (iVar1 != 0) {
    uVar9 = ugen_stop();
    param_10 = &DAT_006552a4;
    pdgui_vmess(uVar9,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0x6541bb,"s",
                &DAT_006541c7,param_12,param_13,param_14,in_stack_fffffffffffffbe8);
    plVar3 = (long *)__tls_get_addr(&PTR_007159b0);
    *(undefined4 *)(*(long *)(*plVar3 + 0x48) + 0x38) = 0;
    *(undefined4 *)PTR_canvas_dspstate_00715d08 = 0;
    puVar4 = gensym("pd-dsp-stopped");
    uVar9 = CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_00);
    if (puVar4[1] != 0) {
      puVar4 = gensym("pd-dsp-stopped");
      uVar9 = pd_bang((long *)puVar4[1]);
    }
  }
  uVar9 = canvas_noundo(uVar9,param_2,param_3,param_4,param_5,param_6,param_7,param_8,(long)param_9)
  ;
  if (*(long **)PTR_canvas_whichfind_00715568 == param_9) {
    *(undefined8 *)PTR_canvas_whichfind_00715568 = 0;
  }
  uVar10 = glist_noselect(uVar9,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                          param_10,extraout_RDX,param_12,(char *)param_13,param_14);
  plVar3 = (long *)param_9[6];
  uVar9 = extraout_RDX_00;
  while (plVar3 != (long *)0x0) {
    uVar10 = glist_delete(uVar10,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                          plVar3,uVar9,param_12,(char *)param_13,param_14);
    uVar9 = extraout_RDX_01;
    plVar3 = (long *)param_9[6];
  }
  pcVar6 = (char *)0x0;
  plVar3 = (long *)glist_getcanvas((long)param_9);
  uVar9 = CONCAT44(extraout_XMM0_Db_01,extraout_XMM0_Da_01);
  uVar10 = extraout_RDX_02;
  if (plVar3 == param_9) {
    uVar9 = canvas_vis(0,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,pcVar6,
                       extraout_RDX_02,(undefined *)param_12,(char *)param_13,(undefined *)param_14,
                       in_stack_fffffffffffffbe8);
    uVar10 = extraout_RDX_03;
  }
  if (param_9[0x18] != 0) {
    canvas_destroy_editor
              (uVar9,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,pcVar6,uVar10,
               param_12,(char *)param_13,(undefined *)param_14);
  }
  plVar3 = *(long **)param_9[0x19];
  pcVar6 = "Pd";
  iVar2 = strcmp((char *)plVar3,"Pd");
  uVar9 = CONCAT44(extraout_XMM0_Db_02,extraout_XMM0_Da_02);
  uVar10 = extraout_RDX_04;
  if (iVar2 != 0) {
    pd_snprintf(CONCAT44(extraout_XMM0_Db_02,extraout_XMM0_Da_02),param_2,param_3,param_4,param_5,
                param_6,param_7,param_8,acStack_498 + 0x80,999,"pd-%s",plVar3,param_13,param_14,
                in_stack_fffffffffffffbe8);
    pcVar6 = (char *)gensym(acStack_498 + 0x80);
    uVar9 = pd_unbind(CONCAT44(extraout_XMM0_Db_03,extraout_XMM0_Da_03),param_2,param_3,param_4,
                      param_5,param_6,param_7,param_8,param_9,(undefined8 *)pcVar6,extraout_RDX_05,
                      plVar3,(char *)param_13,param_14);
    param_12 = plVar3;
    uVar10 = extraout_RDX_06;
  }
  if (param_9[0x1c] != 0) {
    freebytes(*(void **)(param_9[0x1c] + 0x10));
    pcVar6 = (char *)0x28;
    uVar9 = freebytes((void *)param_9[0x1c]);
    uVar10 = extraout_RDX_07;
  }
  canvas_undo_free(uVar9,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,pcVar6,
                   uVar10,(char *)param_12,param_13,param_14);
  uVar9 = 0x20;
  uVar10 = freebytes(pvVar8);
  if (iVar1 != 0) {
    canvas_start_dsp(uVar10,param_2,param_3,param_4,param_5,param_6,param_7,param_8,pvVar8,uVar9,
                     extraout_RDX_08,param_12,(char *)param_13,param_14);
  }
  freebytes((void *)param_9[0x12]);
  lVar7 = (long)(int)param_9[0x15] << 3;
  uVar9 = freebytes((void *)param_9[0x16]);
  uVar9 = gstub_cutoff(uVar9,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                       (void *)param_9[7],lVar7,extraout_RDX_09,param_12,(char *)param_13,param_14);
  pdgui_stub_deleteforkey
            (uVar9,param_2,param_3,param_4,param_5,param_6,param_7,param_8,(long)param_9,lVar7,
             extraout_RDX_10,param_12,param_13,param_14);
  if ((param_9[9] == 0) && ((*(byte *)((long)param_9 + 0xe9) & 8) == 0)) {
    plVar5 = (long *)__tls_get_addr(&PTR_007159b0);
    plVar3 = *(long **)(*plVar5 + 0x10);
    if (plVar3 == param_9) {
      plVar3 = (long *)(*plVar5 + 0x10);
LAB_004ff8f5:
      *plVar3 = param_9[0x1b];
    }
    else {
      do {
        plVar5 = (long *)plVar3[0x1b];
        if (plVar5 == param_9) {
          plVar3 = plVar3 + 0x1b;
          goto LAB_004ff8f5;
        }
        plVar3 = plVar5;
      } while (plVar5 != (long *)0x0);
    }
  }
  return;
}


