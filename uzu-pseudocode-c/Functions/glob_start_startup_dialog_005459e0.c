// Function : glob_start_startup_dialog
// Namespace: 
// Entry    : 005459e0
// Prototype: undefined glob_start_startup_dialog(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)
// Body     : 005459e0 - 00545a2f


void glob_start_startup_dialog
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 in_stack_00000008;
  
  uVar2 = sys_gui_preferences(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  if (*(undefined8 **)PTR_sys_flags_007153e8 == (undefined8 *)0x0) {
    puVar1 = &DAT_005e2ee7;
  }
  else {
    puVar1 = (undefined *)**(undefined8 **)PTR_sys_flags_007153e8;
  }
  pdgui_stub_vnew(uVar2,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                  (long)PTR_glob_pdobject_007156d8,"pdtk_startup_dialog",
                  PTR_glob_start_path_dialog_00715a48,"is",
                  (char *)(ulong)*(uint *)PTR_sys_defeatrt_00715588,puVar1,in_stack_00000008);
  return;
}


