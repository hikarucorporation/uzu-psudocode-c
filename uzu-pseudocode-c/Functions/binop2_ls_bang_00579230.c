// Function : binop2_ls_bang
// Namespace: 
// Entry    : 00579230
// Prototype: undefined binop2_ls_bang(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9)
// Body     : 00579230 - 00579253


void binop2_ls_bang(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                   long param_9)

{
  outlet_float((ulong)(uint)(float)((int)(float)*(undefined8 *)(param_9 + 0x30) <<
                                   ((byte)(int)(float)((ulong)*(undefined8 *)(param_9 + 0x30) >>
                                                      0x20) & 0x1f)),param_2,param_3,param_4,param_5
               ,param_6,param_7,param_8,*(long **)(param_9 + 0x18));
  return;
}


