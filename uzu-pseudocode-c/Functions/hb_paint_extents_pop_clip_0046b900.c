// Function : hb_paint_extents_pop_clip
// Namespace: 
// Entry    : 0046b900
// Prototype: undefined hb_paint_extents_pop_clip(undefined8 param_1, long param_2)
// Body     : 0046b900 - 0046b90d


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* hb_paint_extents_pop_clip(hb_paint_funcs_t*, void*, void*) */

void __cdecl hb_paint_extents_pop_clip(undefined8 param_1,long param_2)

{
  if (*(int *)(param_2 + 0x14) != 0) {
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + -1;
  }
  return;
}


