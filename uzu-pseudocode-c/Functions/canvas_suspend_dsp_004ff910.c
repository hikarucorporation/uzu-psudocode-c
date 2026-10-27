// Function : canvas_suspend_dsp
// Namespace: 
// Entry    : 004ff910
// Prototype: int canvas_suspend_dsp(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)
// Body     : 004ff910 - 004ff9a6


int canvas_suspend_dsp(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                      undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 in_RCX;
  undefined1 unaff_BL;
  undefined8 in_R8;
  undefined8 in_R9;
  undefined8 uVar4;
  
  plVar2 = (long *)__tls_get_addr(&PTR_007159b0);
  iVar1 = *(int *)(*(long *)(*plVar2 + 0x48) + 0x38);
  if (iVar1 != 0) {
    uVar4 = ugen_stop();
    pdgui_vmess(uVar4,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0x6541bb,"s",
                &DAT_006541c7,in_RCX,in_R8,in_R9,unaff_BL);
    plVar2 = (long *)__tls_get_addr(&PTR_007159b0);
    *(undefined4 *)(*(long *)(*plVar2 + 0x48) + 0x38) = 0;
    *(undefined4 *)PTR_canvas_dspstate_00715d08 = 0;
    puVar3 = gensym("pd-dsp-stopped");
    if (puVar3[1] != 0) {
      puVar3 = gensym("pd-dsp-stopped");
      pd_bang((long *)puVar3[1]);
    }
  }
  return iVar1;
}


