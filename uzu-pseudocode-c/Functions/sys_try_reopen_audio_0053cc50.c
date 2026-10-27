// Function : sys_try_reopen_audio
// Namespace: 
// Entry    : 0053cc50
// Prototype: bool sys_try_reopen_audio(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, undefined8 param_9, undefined8 param_10, undefined8 param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 0053cc50 - 0053ccef


bool sys_try_reopen_audio
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
               undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
               char *param_13,undefined8 param_14)

{
  bool bVar1;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined1 unaff_BL;
  char *pcVar2;
  undefined8 extraout_XMM0_Qa;
  undefined8 uVar3;
  
  if ((*(int *)PTR_sys_externalschedlib_00715868 == 0) && (0 < sys_audioapiopened)) {
    if (sys_audioapiopened == 9) {
      dummy_close_audio();
      uVar3 = extraout_XMM0_Qa;
    }
    else {
      uVar3 = post(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                   "sys_close_audio: unknown API %d");
    }
    sys_audioapiopened = 0;
    uVar3 = sched_set_using_audio(uVar3,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0);
    param_12 = 0;
    param_1 = pdgui_vmess(uVar3,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0x65d0ef,
                          "ri","pd_whichapi",0,param_13,param_14,unaff_BL);
    param_11 = extraout_RDX;
  }
  uVar3 = pd_error(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0,
                   "trying to reopen audio device",param_11,param_12,param_13,param_14);
  uVar3 = sys_do_reopen_audio(uVar3,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  bVar1 = 0 < sys_audioapiopened;
  pcVar2 = 
  "audio device not responding - closing audio.\nplease try to reconnect and reselect it in the settings (or toggle DSP)"
  ;
  if (0 < sys_audioapiopened) {
    pcVar2 = "successfully reopened audio device";
  }
  pd_error(uVar3,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0,pcVar2,extraout_RDX_00,
           param_12,param_13,param_14);
  return bVar1;
}


