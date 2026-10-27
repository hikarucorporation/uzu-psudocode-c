// Function : binop2_la_bang
// Namespace: 
// Entry    : 00578fd0
// Prototype: undefined binop2_la_bang(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9)
// Body     : 00578fd0 - 00578ffd


void binop2_la_bang(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                   long param_9)

{
  if (((int)*(float *)(param_9 + 0x30) == 0) || ((int)*(float *)(param_9 + 0x34) == 0)) {
    outlet_float(0,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                 *(long **)(param_9 + 0x18));
    return;
  }
  outlet_float((ulong)DAT_005d9038,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
               *(long **)(param_9 + 0x18));
  return;
}


