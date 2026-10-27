// Function : setup_masks_arabic
// Namespace: 
// Entry    : 00434920
// Prototype: undefined setup_masks_arabic(long param_1, hb_buffer_t * param_2)
// Body     : 00434920 - 00434931


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* setup_masks_arabic(hb_ot_shape_plan_t const*, hb_buffer_t*, hb_font_t*) */

void __cdecl setup_masks_arabic(long param_1,hb_buffer_t *param_2)

{
  setup_masks_arabic_plan(*(long *)(param_1 + 0x88),param_2,*(int *)(param_1 + 4));
  return;
}


