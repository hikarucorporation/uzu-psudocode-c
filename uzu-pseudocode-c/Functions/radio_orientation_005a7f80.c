// Function : radio_orientation
// Namespace: 
// Entry    : 005a7f80
// Prototype: undefined radio_orientation(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9)
// Body     : 005a7f80 - 005a7f98


void radio_orientation(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                      undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                      long param_9)

{
  *(uint *)(param_9 + 0x4a8) = (uint)((int)(float)param_1 != 0);
  iemgui_size(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_9);
  return;
}


