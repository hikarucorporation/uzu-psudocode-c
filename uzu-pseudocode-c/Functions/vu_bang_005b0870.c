// Function : vu_bang
// Namespace: 
// Entry    : 005b0870
// Prototype: undefined vu_bang(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9)
// Body     : 005b0870 - 005b08b6


void vu_bang(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,long param_9
            )

{
  outlet_float((ulong)*(uint *)(param_9 + 0x49c),param_2,param_3,param_4,param_5,param_6,param_7,
               param_8,*(long **)(param_9 + 0x4b0));
  outlet_float((ulong)*(uint *)(param_9 + 0x4a0),param_2,param_3,param_4,param_5,param_6,param_7,
               param_8,*(long **)(param_9 + 0x4a8));
  *(byte *)(param_9 + 0x4b8) = *(byte *)(param_9 + 0x4b8) | 3;
  sys_queuegui(param_9,*(long *)(param_9 + 0x30),0x5b1ee0);
  return;
}


