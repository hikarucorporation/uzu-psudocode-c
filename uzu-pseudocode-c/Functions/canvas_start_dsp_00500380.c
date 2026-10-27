// Function : canvas_start_dsp
// Namespace: 
// Entry    : 00500380
// Prototype: undefined canvas_start_dsp(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, undefined8 param_9, undefined8 param_10, undefined8 param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 00500380 - 00500460


void canvas_start_dsp(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                     undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                     undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                     char *param_13,undefined8 param_14)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined1 unaff_BL;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined8 extraout_XMM0_Qa;
  undefined8 uVar6;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  
  ppuVar4 = &PTR_007159b0;
  plVar1 = (long *)__tls_get_addr();
  if (*(int *)(*(long *)(*plVar1 + 0x48) + 0x38) == 0) {
    puVar5 = &DAT_006541bb;
    puVar3 = &DAT_006552a4;
    uVar6 = pdgui_vmess(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                        0x6541bb,"s","ON",param_12,param_13,param_14,unaff_BL);
    ugen_start(uVar6,param_2,param_3,param_4,param_5,param_6,param_7,param_8,puVar5,puVar3,
               extraout_RDX_00,param_12,param_13,param_14,unaff_BL);
    plVar1 = (long *)pd_getcanvaslist();
    uVar6 = extraout_XMM0_Qa_01;
  }
  else {
    uVar6 = ugen_stop();
    ugen_start(uVar6,param_2,param_3,param_4,param_5,param_6,param_7,param_8,ppuVar4,param_10,
               extraout_RDX,param_12,param_13,param_14,unaff_BL);
    plVar1 = (long *)pd_getcanvaslist();
    uVar6 = extraout_XMM0_Qa_00;
  }
  if (plVar1 != (long *)0x0) {
    do {
      uVar6 = canvas_dodsp(uVar6,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar1,1,0,
                           param_12,param_13,param_14);
      plVar1 = (long *)plVar1[0x1b];
    } while (plVar1 != (long *)0x0);
  }
  plVar1 = (long *)__tls_get_addr(&PTR_007159b0);
  *(undefined4 *)(*(long *)(*plVar1 + 0x48) + 0x38) = 1;
  *(undefined4 *)PTR_canvas_dspstate_00715d08 = 1;
  puVar2 = gensym("pd-dsp-started");
  if (puVar2[1] == 0) {
    return;
  }
  puVar2 = gensym("pd-dsp-started");
  pd_bang((long *)puVar2[1]);
  return;
}


