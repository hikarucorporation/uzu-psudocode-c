// Function : glob_audio_properties
// Namespace: 
// Entry    : 0053d5a0
// Prototype: undefined glob_audio_properties(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, undefined8 param_9, undefined8 param_10, undefined8 param_11, undefined8 * param_12, undefined8 param_13, undefined8 param_14, undefined1 param_15)
// Body     : 0053d5a0 - 0053d5d1


void glob_audio_properties
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
               undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 *param_12,
               undefined8 param_13,undefined8 param_14,undefined1 param_15)

{
  char *in_RAX;
  undefined8 extraout_RDX;
  undefined8 uVar1;
  
  uVar1 = sys_gui_audiopreferences();
  uVar1 = pdgui_stub_deleteforkey
                    (uVar1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0,param_10,
                     extraout_RDX,param_12,param_13,param_14);
  pdgui_stub_vnew(uVar1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                  (long)PTR_glob_pdobject_007156d8,"::dialog_audio::create",
                  PTR_glob_audio_properties_00715d20,"",in_RAX,param_14,param_15);
  return;
}


