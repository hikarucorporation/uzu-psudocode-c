// Function : vinlet_bang
// Namespace: 
// Entry    : 0051acc0
// Prototype: undefined vinlet_bang(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9)
// Body     : 0051acc0 - 0051acc8


void vinlet_bang(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                long param_9)

{
  outlet_bang(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
              *(long **)(param_9 + 0x18));
  return;
}


