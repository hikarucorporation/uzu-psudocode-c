// Function : pdcontrol_browse
// Namespace: 
// Entry    : 00550060
// Prototype: undefined pdcontrol_browse(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, undefined8 param_9, undefined8 * param_10, undefined8 param_11, undefined8 param_12, undefined8 param_13, undefined8 param_14, undefined1 param_15)
// Body     : 00550060 - 00550077


void pdcontrol_browse(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                     undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                     undefined8 param_9,undefined8 *param_10,undefined8 param_11,undefined8 param_12
                     ,undefined8 param_13,undefined8 param_14,undefined1 param_15)

{
  pdgui_vmess(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0x659dfb,"s",*param_10
              ,param_12,param_13,param_14,param_15);
  return;
}


