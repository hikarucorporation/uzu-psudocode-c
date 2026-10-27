// Function : bicoeff_select
// Namespace: 
// Entry    : 00568060
// Prototype: undefined bicoeff_select(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, undefined8 param_9, undefined8 param_10, int param_11)
// Body     : 00568060 - 00568088


void bicoeff_select(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                   undefined8 param_9,undefined8 param_10,int param_11)

{
  char *pcVar1;
  
  pcVar1 = "%s itemconfigure frame%s -outline blue\n";
  if (param_11 == 0) {
    pcVar1 = "%s itemconfigure frame%s -outline black\n";
  }
  sys_vgui(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,pcVar1);
  return;
}


