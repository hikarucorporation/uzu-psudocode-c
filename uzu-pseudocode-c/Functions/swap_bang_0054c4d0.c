// Function : swap_bang
// Namespace: 
// Entry    : 0054c4d0
// Prototype: undefined swap_bang(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9)
// Body     : 0054c4d0 - 0054c4f0


void swap_bang(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
              undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
              long param_9)

{
  outlet_float((ulong)*(uint *)(param_9 + 0x38),param_2,param_3,param_4,param_5,param_6,param_7,
               param_8,*(long **)(param_9 + 0x30));
  outlet_float((ulong)*(uint *)(param_9 + 0x3c),param_2,param_3,param_4,param_5,param_6,param_7,
               param_8,*(long **)(param_9 + 0x18));
  return;
}


