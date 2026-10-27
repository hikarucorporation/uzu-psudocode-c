// Function : bang_tilde_tick
// Namespace: 
// Entry    : 00597bb0
// Prototype: undefined bang_tilde_tick(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9)
// Body     : 00597bb0 - 00597bb8


void bang_tilde_tick(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                    long param_9)

{
  outlet_bang(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
              *(long **)(param_9 + 0x18));
  return;
}


