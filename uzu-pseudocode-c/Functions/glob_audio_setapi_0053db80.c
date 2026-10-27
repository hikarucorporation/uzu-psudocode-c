// Function : glob_audio_setapi
// Namespace: 
// Entry    : 0053db80
// Prototype: char * glob_audio_setapi(float param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, undefined8 param_9, undefined8 param_10, undefined8 param_11, undefined8 * param_12, undefined8 param_13, undefined8 param_14, undefined1 param_15)
// Body     : 0053db80 - 0053dc3c


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char * glob_audio_setapi(float param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                        undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                        undefined8 param_9,undefined8 param_10,undefined8 param_11,
                        undefined8 *param_12,undefined8 param_13,undefined8 param_14,
                        undefined1 param_15)

{
  uint uVar1;
  char *in_RAX;
  char *extraout_RAX;
  char *pcVar2;
  undefined8 extraout_RDX;
  undefined8 uVar3;
  
  uVar1 = (uint)param_1;
  if (uVar1 == 0) {
    if ((int)sys_audioapiopened < 1) {
      return in_RAX;
    }
    pcVar2 = (char *)sys_close_audio();
    return pcVar2;
  }
  if (audio_nextsettings != uVar1) {
    _DAT_0071dfc4 = 0x200000001;
    _DAT_0071dfb0 = 1;
    _DAT_0071df9c = 0x200000001;
    _DAT_0071df88 = 1;
    _DAT_0071dfe0 = 0x4000000000;
    param_12 = (undefined8 *)PTR_canvas_dspstate_00715d08;
    audio_nextsettings = uVar1;
    if (*(int *)PTR_canvas_dspstate_00715d08 == 0) {
      param_12 = (undefined8 *)(ulong)sys_audioapiopened;
      if (sys_audioapiopened != 0) {
        uVar1 = sys_audioapiopened;
      }
      if (uVar1 != 5) goto LAB_0053dbfb;
    }
    sys_reopen_audio();
  }
LAB_0053dbfb:
  uVar3 = sys_gui_audiopreferences();
  uVar3 = pdgui_stub_deleteforkey
                    (uVar3,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0,param_10,
                     extraout_RDX,param_12,param_13,param_14);
  pdgui_stub_vnew(uVar3,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                  (long)PTR_glob_pdobject_007156d8,"::dialog_audio::create",
                  PTR_glob_audio_properties_00715d20,"",in_RAX,param_14,param_15);
  return extraout_RAX;
}


