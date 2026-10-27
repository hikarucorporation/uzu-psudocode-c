// Function : iemgui_label
// Namespace: 
// Entry    : 00574c70
// Prototype: undefined iemgui_label(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, long param_10, undefined8 * param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 00574c70 - 00574c80


void iemgui_label(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 long param_9,long param_10,undefined8 *param_11,undefined8 param_12,char *param_13,
                 undefined8 param_14)

{
  *(undefined8 **)(param_10 + 0x480) = param_11;
  iemgui_dolabel(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,
                 param_11,0xffffffff,param_13,param_14);
  return;
}


