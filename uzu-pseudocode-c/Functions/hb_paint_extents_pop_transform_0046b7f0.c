// Function : hb_paint_extents_pop_transform
// Namespace: 
// Entry    : 0046b7f0
// Prototype: undefined hb_paint_extents_pop_transform(undefined8 param_1, long param_2)
// Body     : 0046b7f0 - 0046b7fd


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* hb_paint_extents_pop_transform(hb_paint_funcs_t*, void*, void*) */

void __cdecl hb_paint_extents_pop_transform(undefined8 param_1,long param_2)

{
  if (*(int *)(param_2 + 4) != 0) {
    *(int *)(param_2 + 4) = *(int *)(param_2 + 4) + -1;
  }
  return;
}


