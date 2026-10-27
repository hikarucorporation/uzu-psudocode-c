// Function : slider_pos
// Namespace: 
// Entry    : 005ab0a0
// Prototype: undefined slider_pos(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, undefined8 param_10, ulong param_11, char * param_12, undefined8 param_13, undefined8 param_14)
// Body     : 005ab0a0 - 005ab0af


void slider_pos(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
               long param_9,undefined8 param_10,ulong param_11,char *param_12,undefined8 param_13,
               undefined8 param_14)

{
  iemgui_pos(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_9,
             param_10,param_11 & 0xffffffff,param_12,param_14);
  return;
}


