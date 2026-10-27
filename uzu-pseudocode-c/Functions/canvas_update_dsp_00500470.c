// Function : canvas_update_dsp
// Namespace: 
// Entry    : 00500470
// Prototype: undefined8 canvas_update_dsp(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)
// Body     : 00500470 - 00500509


undefined8
canvas_update_dsp(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 in_RAX;
  long *plVar1;
  undefined8 *puVar2;
  undefined8 in_RCX;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined *puVar3;
  char *pcVar4;
  char *in_R8;
  undefined8 in_R9;
  undefined8 uVar5;
  undefined8 extraout_XMM0_Qa;
  undefined8 uVar6;
  
  plVar1 = (long *)__tls_get_addr(&PTR_007159b0);
  if (*(int *)(*(long *)(*plVar1 + 0x48) + 0x38) == 0) {
    return in_RAX;
  }
  uVar5 = ugen_stop();
  puVar3 = &DAT_006552a4;
  pdgui_vmess(uVar5,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0x6541bb,"s",
              &DAT_006541c7,in_RCX,in_R8,in_R9,(char)in_RAX);
  plVar1 = (long *)__tls_get_addr(&PTR_007159b0);
  *(undefined4 *)(*(long *)(*plVar1 + 0x48) + 0x38) = 0;
  *(undefined4 *)PTR_canvas_dspstate_00715d08 = 0;
  pcVar4 = "pd-dsp-stopped";
  puVar2 = gensym("pd-dsp-stopped");
  uVar5 = extraout_RDX;
  uVar6 = extraout_XMM0_Qa;
  if (puVar2[1] != 0) {
    puVar2 = gensym("pd-dsp-stopped");
    pcVar4 = (char *)puVar2[1];
    uVar6 = pd_bang((long *)pcVar4);
    uVar5 = extraout_RDX_00;
  }
  uVar5 = canvas_start_dsp(uVar6,param_2,param_3,param_4,param_5,param_6,param_7,param_8,pcVar4,
                           puVar3,uVar5,in_RCX,in_R8,in_R9);
  return uVar5;
}


