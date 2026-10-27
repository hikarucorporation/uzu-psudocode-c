// Function : hb_syllabic_clear_var
// Namespace: 
// Entry    : 00425060
// Prototype: undefined8 hb_syllabic_clear_var(undefined8 param_1, undefined8 param_2, long param_3)
// Body     : 00425060 - 00425069


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* hb_syllabic_clear_var(hb_ot_shape_plan_t const*, hb_font_t*, hb_buffer_t*) */

undefined8 __cdecl hb_syllabic_clear_var(undefined8 param_1,undefined8 param_2,long param_3)

{
  *(byte *)(param_3 + 0xb8) = *(byte *)(param_3 + 0xb8) & 0xf7;
  return 0;
}


