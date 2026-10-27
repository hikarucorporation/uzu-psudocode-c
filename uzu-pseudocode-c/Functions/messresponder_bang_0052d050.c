// Function : messresponder_bang
// Namespace: 
// Entry    : 0052d050
// Prototype: undefined messresponder_bang(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9)
// Body     : 0052d050 - 0052d058


void messresponder_bang(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                       undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                       long param_9)

{
  outlet_bang(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
              *(long **)(param_9 + 8));
  return;
}


