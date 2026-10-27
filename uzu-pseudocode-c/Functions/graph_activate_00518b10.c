// Function : graph_activate
// Namespace: 
// Entry    : 00518b10
// Prototype: undefined graph_activate(long * param_1, undefined8 param_2, undefined4 param_3)
// Body     : 00518b10 - 00518b41


void graph_activate(long *param_1,undefined8 param_2,undefined4 param_3)

{
  bool bVar1;
  undefined7 extraout_var;
  
  bVar1 = canvas_showtext((long)param_1);
  if ((int)CONCAT71(extraout_var,bVar1) == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00518b3a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(PTR_text_widgetbehavior_00715630 + 0x18))(param_1,param_2,param_3);
  return;
}


