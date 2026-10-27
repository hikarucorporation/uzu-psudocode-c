// Function : receive_pointer
// Namespace: 
// Entry    : 0054d2b0
// Prototype: undefined receive_pointer(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9)
// Body     : 0054d2b0 - 0054d2b8


void receive_pointer(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                    long param_9)

{
  outlet_pointer(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                 *(long **)(param_9 + 0x18));
  return;
}


