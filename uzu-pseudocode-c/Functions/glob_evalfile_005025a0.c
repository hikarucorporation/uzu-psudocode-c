// Function : glob_evalfile
// Namespace: 
// Entry    : 005025a0
// Prototype: long glob_evalfile(undefined8 param_1, undefined8 param_2, double param_3, double param_4, double param_5, double param_6, double param_7, undefined8 param_8, undefined8 param_9, undefined * * param_10, undefined8 * param_11, undefined8 param_12, char * param_13, undefined8 * param_14)
// Body     : 005025a0 - 00502737


long glob_evalfile(undefined8 param_1,undefined8 param_2,double param_3,double param_4,
                  double param_5,double param_6,double param_7,undefined8 param_8,undefined8 param_9
                  ,undefined **param_10,undefined8 *param_11,undefined8 param_12,char *param_13,
                  undefined8 *param_14)

{
  int iVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 extraout_RDX_01;
  undefined8 extraout_RDX_02;
  double unaff_RBX;
  long lVar7;
  undefined8 uVar8;
  undefined8 extraout_XMM0_Qa;
  undefined8 uVar9;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  
  plVar5 = (long *)__tls_get_addr(&PTR_007159b0);
  iVar1 = *(int *)(*(long *)(*plVar5 + 0x48) + 0x38);
  if (iVar1 != 0) {
    uVar8 = ugen_stop();
    pdgui_vmess(uVar8,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0x6541bb,"s",
                &DAT_006541c7,param_12,param_13,param_14,SUB81(unaff_RBX,0));
    plVar5 = (long *)__tls_get_addr(&PTR_007159b0);
    *(undefined4 *)(*(long *)(*plVar5 + 0x48) + 0x38) = 0;
    *(undefined4 *)PTR_canvas_dspstate_00715d08 = 0;
    puVar6 = gensym("pd-dsp-stopped");
    if (puVar6[1] != 0) {
      puVar6 = gensym("pd-dsp-stopped");
      pd_bang((long *)puVar6[1]);
    }
  }
  plVar5 = (long *)__tls_get_addr(&PTR_007159b0);
  uVar8 = *(undefined8 *)(*plVar5 + 0x128);
  *(undefined8 *)(*plVar5 + 0x128) = 0;
  uVar9 = binbuf_evalfile(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                          param_10,param_11,extraout_RDX,param_12,param_13,param_14);
  lVar3 = *(long *)(*plVar5 + 0x128);
  if (*(long *)(*plVar5 + 0x128) == 0) {
    lVar7 = 0;
    iVar2 = *(int *)PTR_sys_noloadbang_00715fb0;
    uVar4 = extraout_RDX_00;
  }
  else {
    do {
      lVar7 = lVar3;
      param_11 = gensym("pop");
      param_12 = 1;
      pd_vmess(extraout_XMM0_Qa_00,param_2,param_3,param_4,param_5,param_6,param_7,param_8,lVar7,
               param_11,0x65522c,1,param_13,param_14,unaff_RBX);
      param_10 = &PTR_007159b0;
      plVar5 = (long *)__tls_get_addr();
      lVar3 = *(long *)(*plVar5 + 0x128);
      if (lVar7 == lVar3) break;
    } while (lVar3 != 0);
    iVar2 = *(int *)PTR_sys_noloadbang_00715fb0;
    uVar4 = extraout_RDX_01;
    uVar9 = extraout_XMM0_Qa_01;
  }
  if (iVar2 == 0) {
    uVar9 = pd_doloadbang(uVar9,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
    uVar4 = extraout_RDX_02;
  }
  if (iVar1 != 0) {
    canvas_start_dsp(uVar9,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_10,param_11
                     ,uVar4,param_12,param_13,param_14);
  }
  plVar5 = (long *)__tls_get_addr(&PTR_007159b0);
  *(undefined8 *)(*plVar5 + 0x128) = uVar8;
  return lVar7;
}


