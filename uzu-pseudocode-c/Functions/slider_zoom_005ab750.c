// Function : slider_zoom
// Namespace: 
// Entry    : 005ab750
// Prototype: undefined slider_zoom(float param_1, long param_2)
// Body     : 005ab750 - 005ab768


void slider_zoom(float param_1,long param_2)

{
  iemgui_zoom(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x005ab767. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2 + 0x38))(param_2,*(undefined8 *)(param_2 + 0x30),0);
  return;
}


