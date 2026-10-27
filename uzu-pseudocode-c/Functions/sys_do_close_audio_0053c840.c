// Function : sys_do_close_audio
// Namespace: 
// Entry    : 0053c840
// Prototype: undefined8 sys_do_close_audio(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)
// Body     : 0053c840 - 0053c8a3


undefined8
sys_do_close_audio(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 in_RAX;
  undefined8 in_R9;
  undefined8 extraout_XMM0_Qa;
  undefined8 uVar1;
  undefined1 in_stack_00000008;
  
  if ((*(int *)PTR_sys_externalschedlib_00715868 != 0) || (sys_audioapiopened < 1)) {
    return in_RAX;
  }
  if (sys_audioapiopened == 9) {
    dummy_close_audio();
    uVar1 = extraout_XMM0_Qa;
  }
  else {
    uVar1 = post(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                 "sys_close_audio: unknown API %d");
  }
  sys_audioapiopened = 0;
  uVar1 = sched_set_using_audio(uVar1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0);
  uVar1 = pdgui_vmess(uVar1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0x65d0ef,"ri",
                      "pd_whichapi",0,in_RAX,in_R9,in_stack_00000008);
  return uVar1;
}


