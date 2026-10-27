// Function : glob_start_path_dialog
// Namespace: 
// Entry    : 00545540
// Prototype: undefined glob_start_path_dialog(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)
// Body     : 00545540 - 0054557e


void glob_start_path_dialog
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined1 in_stack_00000008;
  
  uVar1 = sys_gui_preferences(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  pdgui_stub_vnew(uVar1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                  (long)PTR_glob_pdobject_007156d8,"pdtk_path_dialog",
                  PTR_glob_start_path_dialog_00715a48,"ii",
                  (char *)(ulong)*(uint *)PTR_sys_usestdpath_00715ef8,
                  (ulong)*(uint *)PTR_sys_verbose_00715ce0,in_stack_00000008);
  return;
}


