// Function : glob_start_preference_dialog
// Namespace: 
// Entry    : 00545510
// Prototype: undefined glob_start_preference_dialog(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)
// Body     : 00545510 - 00545535


void glob_start_preference_dialog
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 in_RAX;
  undefined8 extraout_RDX;
  undefined8 in_R8;
  undefined8 in_R9;
  undefined8 uVar1;
  undefined1 in_stack_00000008;
  
  sys_gui_preferences(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  sys_gui_audiopreferences();
  uVar1 = sys_gui_midipreferences();
  pdgui_vmess(uVar1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0x658436,"",extraout_RDX
              ,in_RAX,in_R8,in_R9,in_stack_00000008);
  return;
}


