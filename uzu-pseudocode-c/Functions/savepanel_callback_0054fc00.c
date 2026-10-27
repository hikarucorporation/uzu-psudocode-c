// Function : savepanel_callback
// Namespace: 
// Entry    : 0054fc00
// Prototype: undefined savepanel_callback(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9)
// Body     : 0054fc00 - 0054fc08


void savepanel_callback(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                       undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                       long param_9)

{
  outlet_symbol(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                *(long **)(param_9 + 0x18));
  return;
}


