// Function : hb_paint_extents_push_clip_rectangle
// Namespace: 
// Entry    : 0046b8e0
// Prototype: undefined hb_paint_extents_push_clip_rectangle(undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined8 param_5_00, long param_6)
// Body     : 0046b8e0 - 0046b8f0


/* WARNING: Unknown calling convention: __cdecl */
/* hb_paint_extents_push_clip_rectangle(hb_paint_funcs_t*, void*, float, float, float, float, void*)
    */

void __cdecl
hb_paint_extents_push_clip_rectangle
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
          undefined8 param_5_00,long param_6)

{
  hb_paint_extents_context_t::push_clip(CONCAT44(param_2,param_1),CONCAT44(param_4,param_3),param_6)
  ;
  return;
}


