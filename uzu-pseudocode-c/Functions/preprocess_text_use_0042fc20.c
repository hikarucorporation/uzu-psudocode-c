// Function : preprocess_text_use
// Namespace: 
// Entry    : 0042fc20
// Prototype: undefined preprocess_text_use(undefined8 param_1, hb_buffer_t * param_2)
// Body     : 0042fc20 - 0042fc27


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* preprocess_text_use(hb_ot_shape_plan_t const*, hb_buffer_t*, hb_font_t*) */

void __cdecl preprocess_text_use(undefined8 param_1,hb_buffer_t *param_2)

{
  _hb_preprocess_text_vowel_constraints(param_2);
  return;
}


