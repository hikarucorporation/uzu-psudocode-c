// Function : garray_getrect
// Namespace: 
// Entry    : 004fa950
// Prototype: undefined garray_getrect(long param_1, undefined8 param_2, undefined4 * param_3, undefined4 * param_4, undefined4 * param_5, undefined4 * param_6)
// Body     : 004fa950 - 004fa958


void garray_getrect(long param_1,undefined8 param_2,undefined4 *param_3,undefined4 *param_4,
                   undefined4 *param_5,undefined4 *param_6)

{
  gobj_getrect(*(long **)(param_1 + 0x10),param_2,param_3,param_4,param_5,param_6);
  return;
}


