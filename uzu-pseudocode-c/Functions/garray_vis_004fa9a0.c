// Function : garray_vis
// Namespace: 
// Entry    : 004fa9a0
// Prototype: undefined garray_vis(long param_1, long * param_2, undefined4 param_3)
// Body     : 004fa9a0 - 004fa9a8


void garray_vis(long param_1,long *param_2,undefined4 param_3)

{
  gobj_vis(*(long **)(param_1 + 0x10),param_2,param_3);
  return;
}


