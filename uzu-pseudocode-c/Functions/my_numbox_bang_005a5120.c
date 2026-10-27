// Function : my_numbox_bang
// Namespace: 
// Entry    : 005a5120
// Prototype: undefined my_numbox_bang(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9)
// Body     : 005a5120 - 005a515d


void my_numbox_bang(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                   long param_9)

{
  long *plVar1;
  
  outlet_float((ulong)*(uint *)(param_9 + 0x4a0),param_2,param_3,param_4,param_5,param_6,param_7,
               param_8,*(long **)(param_9 + 0x18));
  if (((*(byte *)(param_9 + 0x440) & 0x80) == 0) ||
     (plVar1 = *(long **)(*(long *)(param_9 + 0x458) + 8), plVar1 == (long *)0x0)) {
    return;
  }
  pd_float(plVar1);
  return;
}


